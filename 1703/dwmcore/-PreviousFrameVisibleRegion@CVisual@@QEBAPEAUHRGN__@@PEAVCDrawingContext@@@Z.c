/*
 * XREFs of ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18014D138
 * Callers:
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18014D7E0 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x18008ADBC (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x1801590F0 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

struct _LIST_ENTRY **__fastcall CVisual::PreviousFrameVisibleRegion(CVisual *this, struct CDrawingContext *a2)
{
  struct _LIST_ENTRY **result; // rax
  struct _LIST_ENTRY **v3; // rbx

  result = CVisual::GetMoveRenderPassInfoRef(this, a2);
  v3 = result;
  if ( result )
  {
    CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)result);
    return (struct _LIST_ENTRY **)v3[2];
  }
  return result;
}
