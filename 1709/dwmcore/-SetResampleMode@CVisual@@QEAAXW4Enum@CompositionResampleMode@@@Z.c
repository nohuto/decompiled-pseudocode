/*
 * XREFs of ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x180054B94
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x18017790C (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetResampleMode(__int64 a1, int a2)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == `CBaseExpression::SetTargetObjectHandle'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) &= ~0x2000u;
  else
    CSparseStorage::SetData((CSparseStorage *)(a1 + 208), 0x13u, 4u, &v2);
}
