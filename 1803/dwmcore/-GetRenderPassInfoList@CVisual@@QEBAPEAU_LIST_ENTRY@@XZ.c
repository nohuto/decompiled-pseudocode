/*
 * XREFs of ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180050F60
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18000ACD0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800440D0 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800D7A8C (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800D9FD4 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x18013C74C (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?ResetWindowMove@CWindowNode@@UEAA_NXZ @ 0x180158F50 (-ResetWindowMove@CWindowNode@@UEAA_NXZ.c)
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801A75EC (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801A787C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801A86BC (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CVisual::GetRenderPassInfoList(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v1 + 4) & 0x40000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0xE000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(struct _LIST_ENTRY **)(i + 4);
}
