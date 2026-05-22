/*
 * XREFs of ??1GazeHidDevice@@UEAA@XZ @ 0x180075D10
 * Callers:
 *     ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x180073D40 (--_EGazeHidDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1GazeHidParser@@QEAA@XZ @ 0x1800AE5DC (--1GazeHidParser@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall GazeHidDevice::~GazeHidDevice(GazeHidDevice *this)
{
  void *v2; // rcx
  void **v3; // rdi

  *(_QWORD *)this = &GazeHidDevice::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (void **)*((_QWORD *)this + 28);
  if ( v3 )
  {
    if ( *v3 )
      operator delete(*v3);
    operator delete(v3);
  }
  GazeHidParser::~GazeHidParser((GazeHidDevice *)((char *)this + 128));
  HIDDevice::~HIDDevice(this);
}
