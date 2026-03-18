/*
 * XREFs of ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x180050F08
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x180050604 (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetResampleMode(__int64 a1, int a2)
{
  char **v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)(a1 + 216);
  if ( a2 == `CVisual::SetVisualDesktopId'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x2000u;
  else
    CSparseStorage::SetData(v2, 19, 4u, &v3);
}
