/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF64
 * Callers:
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@@@Z @ 0x180046C48 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x180053E58 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18006D45C (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x18014EA28 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayC.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014EC64 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x18015156C (-IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180178318 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(float *a1, float *a2)
{
  char v2; // dl
  float *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3]
    || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a1)
    && TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v4)
    || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v5)
    && (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v6) )
  {
    return 1;
  }
  return v2;
}
