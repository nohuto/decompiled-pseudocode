/*
 * XREFs of ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801A7114
 * Callers:
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18006B130 (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddToVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1801776E4 (-AddToVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801A75EC (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801A787C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CVisual::AddToVisibleRegion(CVisual *this, float *a2, const struct CDrawingContext *a3)
{
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  struct CDrawingContext *v6; // r11
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct CMoveRenderPassInfo *v11; // [rsp+58h] [rbp+20h] BYREF

  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a3);
  v11 = MoveRenderPassInfoRef;
  if ( !MoveRenderPassInfoRef )
  {
    v7 = CVisual::CreateMoveRenderPassInfoForContext(this, v6, &v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1154u);
      return v8;
    }
    MoveRenderPassInfoRef = v11;
  }
  v9 = CMoveRenderPassInfo::AddToVisibleRegion((__int64)MoveRenderPassInfoRef, a2);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1157u);
  return v8;
}
