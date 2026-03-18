/*
 * XREFs of ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x180161820
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 */

unsigned int __fastcall CDrawingContext::GetActiveLightCount(const struct CVisualTree **this)
{
  struct CVisual *CurrentVisual; // rax

  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
  return CLightStack::GetActiveLightCount((CLightStack *)(this + 84), CurrentVisual, this[816], 1);
}
