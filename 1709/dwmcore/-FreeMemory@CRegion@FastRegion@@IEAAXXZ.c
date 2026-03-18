/*
 * XREFs of ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026030 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180028288 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x18002B16C (--1CBitmapRealization@@MEAA@XZ.c)
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18002F090 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ?AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F1A0 (-AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800345F0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180034960 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x18003B044 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005CFC0 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18006129C (--1COcclusionContext@@QEAA@XZ.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x18008742C (--1CSecondarySysmemBitmap@@MEAA@XZ.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180088A20 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180088BB0 (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180088C68 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180088DEC (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ??1CRegion@@QEAA@XZ @ 0x180089058 (--1CRegion@@QEAA@XZ.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180089060 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180089218 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800897D8 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180089974 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x1800922CC (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D974 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18009E128 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18009E1B8 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009E26C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x18013FA20 (--1COverlayContext@@MEAA@XZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180140340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180141714 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180142220 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180143E60 (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x180144314 (-RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180144C4C (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ??_GCGenericInk@@UEAAPEAXI@Z @ 0x180146B00 (--_GCGenericInk@@UEAAPEAXI@Z.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x18014F9D4 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015CD60 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x1801ADE10 (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1801ADE64 (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1801ADEB8 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x1801B270C (--1CSwapChainBase@@MEAA@XZ.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801B2F94 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1801B9960 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1801BDF1C (--1CHolographicInteropTexture@@MEAA@XZ.c)
 *     ??1RenderBuffer@CHolographicInteropTexture@@QEAA@XZ @ 0x1801BE300 (--1RenderBuffer@CHolographicInteropTexture@@QEAA@XZ.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BEA28 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ??_GCRegionWrapper@@UEAAPEAXI@Z @ 0x1801C89F0 (--_GCRegionWrapper@@UEAAPEAXI@Z.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D1F3C (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall FastRegion::CRegion::FreeMemory(void **this)
{
  _DWORD *v1; // rdi

  v1 = this + 1;
  if ( this + 1 != *this )
  {
    WPF::ProcessHeapImpl::Free(*this);
    *this = v1;
    *v1 = 0;
  }
}
