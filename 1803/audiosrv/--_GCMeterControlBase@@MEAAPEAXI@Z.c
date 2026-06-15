/*
 * XREFs of ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x1800A0480
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMeterControlBase@@MEAA@XZ @ 0x18004AAFC (--1CMeterControlBase@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::`scalar deleting destructor'(CMeterControlBase *this, char a2)
{
  CMeterControlBase::~CMeterControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
