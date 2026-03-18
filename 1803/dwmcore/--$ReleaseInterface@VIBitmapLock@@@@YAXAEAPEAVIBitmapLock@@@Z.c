/*
 * XREFs of ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410
 * Callers:
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x180018D70 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1800214B0 (-ReleaseD3DResources@CD3DTexture@@EEAAXXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x18003FA70 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 *     ?ReleaseD3DResources@CD3DSurface@@MEAAXXZ @ 0x180043030 (-ReleaseD3DResources@CD3DSurface@@MEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180050D58 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800654E0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006589C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180079010 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ??1CBitmapLock@@UEAA@XZ @ 0x180083C14 (--1CBitmapLock@@UEAA@XZ.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x1800B61C0 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z @ 0x1800C01D4 (-SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800CA7EC (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800D74F8 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 *     ?ReleaseD3DResourcesInternal@CDWMOffScreenSwapChain@@UEAAXXZ @ 0x1800D8920 (-ReleaseD3DResourcesInternal@CDWMOffScreenSwapChain@@UEAAXXZ.c)
 *     ??1CDWMOffScreenSwapChain@@MEAA@XZ @ 0x1800D8C3C (--1CDWMOffScreenSwapChain@@MEAA@XZ.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801404D8 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ??1CConnection@@EEAA@XZ @ 0x1801435D0 (--1CConnection@@EEAA@XZ.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x1801436E4 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ??_GCCoRenderVisualProxy@@EEAAPEAXI@Z @ 0x18014AF50 (--_GCCoRenderVisualProxy@@EEAAPEAXI@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015A0E0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CBE8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18015CE10 (-ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18015EF00 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x1801608EC (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180167830 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18017A06C (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180191248 (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x180191384 (-ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z.c)
 *     ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x1801914E0 (-ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z.c)
 *     ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x180191644 (-ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z.c)
 *     ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x180191840 (-ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z.c)
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18019E56C (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 *     ?RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z @ 0x18019F4F0 (-RemoveClippedD2D1CommandListForAllContexts@CPrimitiveGroup@@UEAAXPEAVCPolygon@@@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801AF738 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801E1E90 (-CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 *     ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x1801E3A50 (-IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEA.c)
 *     ?ReleaseD2DResources@CD2DBitmap@@UEAAXXZ @ 0x1801E5C20 (-ReleaseD2DResources@CD2DBitmap@@UEAAXXZ.c)
 *     ?ReleaseD2DResources@CD2DPrimitiveProperties@@UEAAXXZ @ 0x1801E5EF0 (-ReleaseD2DResources@CD2DPrimitiveProperties@@UEAAXXZ.c)
 *     ?ReleaseD2DResources@CD2DCommandList@@UEAAXXZ @ 0x1801E6370 (-ReleaseD2DResources@CD2DCommandList@@UEAAXXZ.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1801EAF10 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?ReleaseD2DResources@CD2DInk@@UEAAXXZ @ 0x1801EC4A0 (-ReleaseD2DResources@CD2DInk@@UEAAXXZ.c)
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801F0160 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ?UseForAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAA_NPEAUIDXGIResource@@@Z @ 0x1801F2410 (-UseForAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAA_NPEAUIDXGIResource@@@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180209AE0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x18020ACD8 (-GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x18020CDB0 (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 *     ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x18020D0A4 (-IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<IBitmapLock>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
