/*
 * XREFs of ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18017709C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IntersectRenderedWindowNodes@CDrawingContext@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003B1AC (-IntersectRenderedWindowNodes@CDrawingContext@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18014E01C (-ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180177108 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CVisual::ExcludeFromVisibleRegion(CVisual *a1, __int64 a2, const struct CDrawingContext *a3)
{
  double v3; // xmm2_8
  unsigned int v4; // ebx
  CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  float *v6; // r11
  signed int v7; // eax

  v4 = 0;
  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(a1, a3);
  if ( MoveRenderPassInfoRef )
  {
    v7 = CMoveRenderPassInfo::ExcludeFromVisibleRegion(MoveRenderPassInfoRef, v6, v3);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x101Eu);
  }
  return v4;
}
