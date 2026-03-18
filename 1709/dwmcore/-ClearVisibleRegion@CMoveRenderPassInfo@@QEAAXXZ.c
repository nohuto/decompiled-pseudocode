/*
 * XREFs of ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180135D38
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015C90 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180050310 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800509B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800B0A10 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18011A048 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x18011A73C (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?ResetWindowMove@CWindowNode@@UEAA_NXZ @ 0x180136A10 (-ResetWindowMove@CWindowNode@@UEAA_NXZ.c)
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
