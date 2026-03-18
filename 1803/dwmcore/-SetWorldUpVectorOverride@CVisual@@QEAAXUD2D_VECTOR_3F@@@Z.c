/*
 * XREFs of ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801A8FC4
 * Callers:
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801A84C0 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRI.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetWorldUpVectorOverride(CVisual *this, struct D2D_VECTOR_3F *a2)
{
  char **v2; // r10
  __int64 z_low; // rcx

  v2 = (char **)((char *)this + 216);
  z_low = *(_QWORD *)&a2->x - `CVisual::SetWorldUpVectorOverride'::`2'::sc_defaultValue;
  if ( *(_QWORD *)&a2->x == `CVisual::SetWorldUpVectorOverride'::`2'::sc_defaultValue )
    z_low = LODWORD(a2->z);
  if ( z_low )
    CSparseStorage::SetData(v2, 30, 0xCu, a2);
  else
    *((_DWORD *)*v2 + 1) &= ~4u;
}
