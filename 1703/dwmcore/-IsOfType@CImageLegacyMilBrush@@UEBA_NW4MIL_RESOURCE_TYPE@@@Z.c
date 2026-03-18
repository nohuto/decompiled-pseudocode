/*
 * XREFs of ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA70
 * Callers:
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18009BB30 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x18009BC50 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1800A2898 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 *     ?RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z @ 0x1800A5ED0 (-RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CImageLegacyMilBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 75) & 0xFFFFFFFA) == 0 && a2 != 76;
}
