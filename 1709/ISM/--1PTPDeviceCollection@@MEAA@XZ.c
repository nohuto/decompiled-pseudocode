/*
 * XREFs of ??1PTPDeviceCollection@@MEAA@XZ @ 0x18008A7C4
 * Callers:
 *     ??_GPTPDeviceCollection@@MEAAPEAXI@Z @ 0x18008A780 (--_GPTPDeviceCollection@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PTPDeviceCollection::~PTPDeviceCollection(PTPDeviceCollection *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &PTPDeviceCollection::`vftable';
  operator delete(*((void **)this + 345));
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
