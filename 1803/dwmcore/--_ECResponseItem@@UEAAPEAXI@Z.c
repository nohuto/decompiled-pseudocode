/*
 * XREFs of ??_ECResponseItem@@UEAAPEAXI@Z @ 0x180149CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CResponseItem *__fastcall CResponseItem::`vector deleting destructor'(CResponseItem *this, char a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
