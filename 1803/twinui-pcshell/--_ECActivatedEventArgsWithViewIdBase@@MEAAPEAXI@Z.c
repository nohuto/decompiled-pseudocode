/*
 * XREFs of ??_ECActivatedEventArgsWithViewIdBase@@MEAAPEAXI@Z @ 0x180305ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsWithViewIdBase@@MEAA@XZ @ 0x180071D30 (--1CActivatedEventArgsWithViewIdBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
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
