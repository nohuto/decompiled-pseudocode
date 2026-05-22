/*
 * XREFs of ??_ETouchDeviceCollection@@MEAAPEAXI@Z @ 0x18008AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009C794 (--1HIDDeviceCollection@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TouchDeviceCollection *__fastcall TouchDeviceCollection::`vector deleting destructor'(
        TouchDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &TouchDeviceCollection::`vftable';
  operator delete(*((void **)this + 345));
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
