/*
 * XREFs of ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801A8F84
 * Callers:
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801A84C0 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRI.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetWorldRenderingScaleOverride(CVisual *this, float a2)
{
  char **v2; // rcx
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( LODWORD(a2) == `CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~8u;
  else
    CSparseStorage::SetData(v2, 29, 4u, &v3);
}
