/*
 * XREFs of ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x180083EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMuteControlBase@@MEAA@XZ @ 0x180083E28 (--1CMuteControlBase@@MEAA@XZ.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::`scalar deleting destructor'(CMuteControlBase *this, char a2)
{
  CMuteControlBase::~CMuteControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
