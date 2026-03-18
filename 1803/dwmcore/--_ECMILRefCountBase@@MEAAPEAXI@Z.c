/*
 * XREFs of ??_ECMILRefCountBase@@MEAAPEAXI@Z @ 0x180204910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CMILRefCountBase *__fastcall CMILRefCountBase::`vector deleting destructor'(CMILRefCountBase *this, char a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
