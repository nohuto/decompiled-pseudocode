/*
 * XREFs of ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x180046940
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::GetDeviceBounds(CHwDisplayRenderTarget *this, struct MilRectF *a2)
{
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((float *)a2 + 2) = (float)*((int *)this - 52);
  *((float *)a2 + 3) = (float)*((int *)this - 51);
}
