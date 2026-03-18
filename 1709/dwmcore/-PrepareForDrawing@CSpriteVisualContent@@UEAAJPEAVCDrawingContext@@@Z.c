/*
 * XREFs of ?PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800226F0
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024D00 (-PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180070530 (-PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVisualContent::PrepareForDrawing(CSpriteVisualContent *this, struct CDrawingContext *a2)
{
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 9) = *(_QWORD *)(*((_QWORD *)this + 2) + 360LL);
  return 0LL;
}
