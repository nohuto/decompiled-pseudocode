/*
 * XREFs of ??_ECActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAAPEAXI@Z @ 0x180305EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ @ 0x180071E80 (--1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

CActivatedEventArgsWithPrelaunchAndViewIdBase *__fastcall CActivatedEventArgsWithPrelaunchAndViewIdBase::`vector deleting destructor'(
        CActivatedEventArgsWithPrelaunchAndViewIdBase *this,
        char a2)
{
  CActivatedEventArgsWithPrelaunchAndViewIdBase::~CActivatedEventArgsWithPrelaunchAndViewIdBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
