/*
 * XREFs of ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CDWMSwapChain@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18002E550 (-GetMultiplaneOverlayCaps@CDWMSwapChain@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180051AC0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 *     ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180052890 (-OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x180091910 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014A5BC (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801695CC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18017C81C (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18017CD64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x1801AFAEC (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801AFF98 (-ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DX.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1801B0760 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *a1 = 0LL;
  }
}
