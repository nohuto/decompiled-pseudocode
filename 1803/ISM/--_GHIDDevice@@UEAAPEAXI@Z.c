/*
 * XREFs of ??_GHIDDevice@@UEAAPEAXI@Z @ 0x180075410
 * Callers:
 *     <none>
 * Callees:
 *     ??1HIDDevice@@UEAA@XZ @ 0x180075444 (--1HIDDevice@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HIDDevice *__fastcall HIDDevice::`scalar deleting destructor'(HIDDevice *this, char a2)
{
  HIDDevice::~HIDDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
