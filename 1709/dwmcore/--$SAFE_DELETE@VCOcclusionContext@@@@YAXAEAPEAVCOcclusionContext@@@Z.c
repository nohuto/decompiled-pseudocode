/*
 * XREFs of ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800BEA04
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18004083C (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x18011A128 (-SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180132860 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005CCCC (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
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
