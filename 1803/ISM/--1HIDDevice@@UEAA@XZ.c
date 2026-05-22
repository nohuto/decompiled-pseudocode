/*
 * XREFs of ??1HIDDevice@@UEAA@XZ @ 0x180075444
 * Callers:
 *     ??_GHIDDevice@@UEAAPEAXI@Z @ 0x180075410 (--_GHIDDevice@@UEAAPEAXI@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x180075D10 (--1GazeHidDevice@@UEAA@XZ.c)
 *     _GazeDeviceCollection::CreateDevice_::_1_::dtor$1 @ 0x1800E746C (_GazeDeviceCollection--CreateDevice_--_1_--dtor$1.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
  memset_0((char *)this + 60, 0, 0x40uLL);
  RIMDevice::~RIMDevice(this);
}
