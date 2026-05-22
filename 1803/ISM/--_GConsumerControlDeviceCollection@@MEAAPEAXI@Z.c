/*
 * XREFs of ??_GConsumerControlDeviceCollection@@MEAAPEAXI@Z @ 0x1800732D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x180074E14 (--1HIDDeviceCollection@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ConsumerControlDeviceCollection *__fastcall ConsumerControlDeviceCollection::`scalar deleting destructor'(
        ConsumerControlDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &ConsumerControlDeviceCollection::`vftable';
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
