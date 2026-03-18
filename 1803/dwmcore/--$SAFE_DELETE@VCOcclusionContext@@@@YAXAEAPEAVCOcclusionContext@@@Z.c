/*
 * XREFs of ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C68A0
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18006E594 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x18013D130 (-SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180156D98 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800A8DAC (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 */

COcclusionContext *__fastcall SAFE_DELETE<COcclusionContext>(COcclusionContext **a1)
{
  COcclusionContext *v2; // rcx
  COcclusionContext *result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = COcclusionContext::`scalar deleting destructor'(v2);
    *a1 = 0LL;
  }
  return result;
}
