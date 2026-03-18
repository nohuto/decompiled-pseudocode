/*
 * XREFs of ??_ECMILObject@@UEAAPEAXI@Z @ 0x18020F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CMILObject *__fastcall CMILObject::`vector deleting destructor'(CMILObject *this, char a2)
{
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
