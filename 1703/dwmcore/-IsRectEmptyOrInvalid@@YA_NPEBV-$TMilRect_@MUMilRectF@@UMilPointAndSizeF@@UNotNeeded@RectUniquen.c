/*
 * XREFs of ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D99C
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180006A80 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 *     ?GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV4@2PEAH@Z @ 0x18007D874 (-GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV-$TMilRect_@MUMi.c)
 *     ?AdjustRelativeRectangle@@YAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV1@@Z @ 0x18007D8D4 (-AdjustRelativeRectangle@@YAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800A87D0 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x1800A95F0 (-DrawRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CF90C (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?DrawHolographicViewerContent@CDrawingContext@@QEAAJPEAVCHolographicViewerContent@@@Z @ 0x18014B6E8 (-DrawHolographicViewerContent@CDrawingContext@@QEAAJPEAVCHolographicViewerContent@@@Z.c)
 *     ?Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5190 (-Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsRectEmptyOrInvalid(float *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
