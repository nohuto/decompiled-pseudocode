/*
 * XREFs of ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x180073D40
 * Callers:
 *     <none>
 * Callees:
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x180075D10 (--1GazeHidDevice@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GazeHidDevice *__fastcall GazeHidDevice::`vector deleting destructor'(GazeHidDevice *this, char a2)
{
  GazeHidDevice::~GazeHidDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
