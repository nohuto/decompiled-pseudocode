/*
 * XREFs of ??_GInputDeliveryServer@@EEAAPEAXI@Z @ 0x18007E620
 * Callers:
 *     <none>
 * Callees:
 *     ??1InputDeliveryServer@@EEAA@XZ @ 0x18007E3F4 (--1InputDeliveryServer@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputDeliveryServer *__fastcall InputDeliveryServer::`scalar deleting destructor'(InputDeliveryServer *this, char a2)
{
  InputDeliveryServer::~InputDeliveryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
