/*
 * XREFs of ??_ECActivatedEventArgsBase@@MEAAPEAXI@Z @ 0x180305E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsBase@@MEAA@XZ @ 0x180071948 (--1CActivatedEventArgsBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

CActivatedEventArgsBase *__fastcall CActivatedEventArgsBase::`vector deleting destructor'(
        CActivatedEventArgsBase *this,
        char a2)
{
  CActivatedEventArgsBase::~CActivatedEventArgsBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
