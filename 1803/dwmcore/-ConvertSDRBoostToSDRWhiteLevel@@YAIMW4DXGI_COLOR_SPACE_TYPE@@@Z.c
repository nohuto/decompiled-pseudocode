/*
 * XREFs of ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800DCF88
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x1800DD020 (-CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagR.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801655F0 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 *     ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801EA4A8 (-ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DX.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B694C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall ConvertSDRBoostToSDRWhiteLevel(float a1, enum DXGI_COLOR_SPACE_TYPE a2)
{
  float v2; // xmm3_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - 1.0)) & _xmm);
  if ( v2 < 0.0000011920929 || IsDXGIColorSpaceHDR(a2) )
    return 0LL;
  else
    return (unsigned int)(int)(float)(a1 * 80.0);
}
