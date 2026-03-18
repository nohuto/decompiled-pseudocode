/*
 * XREFs of ??_EDXGTARGETENTRY@@UEAAPEAXI@Z @ 0x1C0035320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

DXGTARGETENTRY *__fastcall DXGTARGETENTRY::`vector deleting destructor'(DXGTARGETENTRY *this, char a2)
{
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
