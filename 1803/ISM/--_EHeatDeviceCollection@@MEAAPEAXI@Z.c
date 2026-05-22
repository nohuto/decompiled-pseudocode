/*
 * XREFs of ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x180073AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x180074E14 (--1HIDDeviceCollection@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HeatDeviceCollection *__fastcall HeatDeviceCollection::`vector deleting destructor'(
        HeatDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &HeatDeviceCollection::`vftable';
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
