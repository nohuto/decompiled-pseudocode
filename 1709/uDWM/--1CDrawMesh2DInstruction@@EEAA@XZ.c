/*
 * XREFs of ??1CDrawMesh2DInstruction@@EEAA@XZ @ 0x18006F16C
 * Callers:
 *     ??_ECDrawMesh2DInstruction@@EEAAPEAXI@Z @ 0x18006F1C0 (--_ECDrawMesh2DInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDrawMesh2DInstruction::~CDrawMesh2DInstruction(CDrawMesh2DInstruction *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CDrawMesh2DInstruction::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
