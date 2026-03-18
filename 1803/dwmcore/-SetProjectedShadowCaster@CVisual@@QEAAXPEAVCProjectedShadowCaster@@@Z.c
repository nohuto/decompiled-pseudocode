/*
 * XREFs of ?SetProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1801A0E64
 * Callers:
 *     ?ProcessSetVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETVISUAL@@@Z @ 0x1801A093C (-ProcessSetVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCAS.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetProjectedShadowCaster(CVisual *this, struct CProjectedShadowCaster *a2)
{
  char **v2; // rcx
  struct CProjectedShadowCaster *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct CProjectedShadowCaster *)`CVisual::SetProjectedShadowCaster'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~2u;
  else
    CSparseStorage::SetData(v2, 31, 8u, &v3);
}
