/*
 * XREFs of ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C77EC
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800A9948 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x180128FEC (-SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18014673C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18009F5F0 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 */

COcclusionContext *__fastcall SAFE_DELETE<COcclusionContext>(COcclusionContext **a1, unsigned int a2)
{
  COcclusionContext *v3; // rcx
  COcclusionContext *result; // rax

  v3 = *a1;
  if ( v3 )
  {
    result = COcclusionContext::`scalar deleting destructor'(v3, a2);
    *a1 = 0LL;
  }
  return result;
}
