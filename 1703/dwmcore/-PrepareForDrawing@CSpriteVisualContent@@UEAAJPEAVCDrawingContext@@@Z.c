/*
 * XREFs of ?PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008CAD0
 * Callers:
 *     ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180039830 (-PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800BF9F0 (-PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVisualContent::PrepareForDrawing(CSpriteVisualContent *this, struct CDrawingContext *a2)
{
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 9) = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
  return 0LL;
}
