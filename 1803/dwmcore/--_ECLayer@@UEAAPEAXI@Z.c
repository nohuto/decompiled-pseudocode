/*
 * XREFs of ??_ECLayer@@UEAAPEAXI@Z @ 0x18015E540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CLayer *__fastcall CLayer::`vector deleting destructor'(CLayer *this, char a2)
{
  *(_QWORD *)this = &CLayer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
