// This program demonstrates the IntQeue class
#include <iostream>
#include "IntQueue.h"
#include <string>
using namespace std;

int main()
{
   string item[5] = { "Hi","Hello","Hey","Howdy","Hail"};
   IntQueue<string> iQueue(5);

   cout << "Enqueuing 5 items...\n";

   // Enqueue 5 items
   for (int k = 0; k < 5; k++)
   {      
      iQueue.enqueue(item[k]);
   }   

   // Deqeue and retrieve all items in the queue
   cout << "The values in the queue were: ";
   while (!iQueue.isEmpty())
   {
      string value;
      iQueue.dequeue(value);
      cout << value << "  ";
   }
   cout << endl;
   return 0;
}