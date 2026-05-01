/*
 * XREFs of ??_ECActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAAPEAXI@Z @ 0x1801CDBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ @ 0x1801CDB50 (--1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
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
