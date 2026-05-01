/*
 * XREFs of ??_ECActivatedEventArgsWithViewIdBase@@MEAAPEAXI@Z @ 0x18018E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsWithViewIdBase@@MEAA@XZ @ 0x18018E824 (--1CActivatedEventArgsWithViewIdBase@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CActivatedEventArgsWithViewIdBase *__fastcall CActivatedEventArgsWithViewIdBase::`vector deleting destructor'(
        CActivatedEventArgsWithViewIdBase *this,
        char a2)
{
  CActivatedEventArgsWithViewIdBase::~CActivatedEventArgsWithViewIdBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
