/*
 * XREFs of ??1HIDDevice@@UEAA@XZ @ 0x18009CF94
 * Callers:
 *     ??1PTPDevice@@UEAA@XZ @ 0x18009CF24 (--1PTPDevice@@UEAA@XZ.c)
 *     ??_GHIDDevice@@UEAAPEAXI@Z @ 0x18009CF60 (--_GHIDDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HIDDevice::~HIDDevice(HIDDevice *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &HIDDevice::`vftable';
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  memset((char *)this + 60, 0, 0x40uLL);
  RIMDevice::~RIMDevice(this);
}
