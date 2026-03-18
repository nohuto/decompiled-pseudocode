/*
 * XREFs of ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006B90 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x180006F8C (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007240 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x18000CE70 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180047860 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180079C9C (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18007A1B8 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180166148 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180171F60 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180172320 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180172780 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180172818 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x18017298C (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x1801ACFE0 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 * Callees:
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180080DBC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 */

struct CBitmapRealization *__fastcall CCompositionSurfaceInfo::GetRenderingRealizationNoRef(
        CCompositionSurfaceInfo *this)
{
  struct CBitmapRealization *result; // rax

  result = (struct CBitmapRealization *)*((_QWORD *)this + 15);
  if ( !result && !*((_BYTE *)this + 400) )
  {
    *((_BYTE *)this + 400) = 1;
    CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(this);
    result = (struct CBitmapRealization *)*((_QWORD *)this + 15);
    *((_BYTE *)this + 400) = 0;
  }
  return result;
}
