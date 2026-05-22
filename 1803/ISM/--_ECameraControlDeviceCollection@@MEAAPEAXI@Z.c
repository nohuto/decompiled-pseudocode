/*
 * XREFs of ??_ECameraControlDeviceCollection@@MEAAPEAXI@Z @ 0x1800743F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x180074E14 (--1HIDDeviceCollection@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CameraControlDeviceCollection *__fastcall CameraControlDeviceCollection::`vector deleting destructor'(
        CameraControlDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &CameraControlDeviceCollection::`vftable';
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
