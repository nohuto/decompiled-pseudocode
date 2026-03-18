/*
 * XREFs of floorf_0 @ 0x1800D536C
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180006ED0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     RoundIntermediateSize @ 0x18001C068 (RoundIntermediateSize.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043D40 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18006C390 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18006F3D0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?Compute@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x18008FE80 (-Compute@-$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18014DF10 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEAA_NPEBUtagRECT@@00@Z @ 0x18015172C (-IsIntelWorkaroundNeeded@COverlayContext@@AEAA_NPEBUtagRECT@@00@Z.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801726D8 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Floor@CExpressionValueStack@@QEAAJXZ @ 0x18017DA74 (-Floor@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Round@CExpressionValueStack@@QEAAJXZ @ 0x18017F49C (-Round@CExpressionValueStack@@QEAAJXZ.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x180184624 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x1801993E0 (-IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEA.c)
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18019B25C (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV-$TMilRect_@MUMilR.c)
 *     ?Compute@?$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8280 (-Compute@-$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@.c)
 *     ?Compute@?$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B8320 (-Compute@-$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x1801C020C (--$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enu.c)
 *     ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x1801C0BCC (-CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMod.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
