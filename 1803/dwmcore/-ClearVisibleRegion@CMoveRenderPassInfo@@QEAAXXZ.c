/*
 * XREFs of ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180158600
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18000ACD0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800440D0 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800D7A8C (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x18013C74C (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?ResetWindowMove@CWindowNode@@UEAA_NXZ @ 0x180158F50 (-ResetWindowMove@CWindowNode@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMoveRenderPassInfo::ClearVisibleRegion(CMoveRenderPassInfo *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    DeleteObject(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
