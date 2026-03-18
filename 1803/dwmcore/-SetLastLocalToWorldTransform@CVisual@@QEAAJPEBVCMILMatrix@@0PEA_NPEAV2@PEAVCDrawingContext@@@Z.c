/*
 * XREFs of ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x1801A8D98
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006B178 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180162A00 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z @ 0x180177CAC (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z.c)
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801A75EC (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801A787C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CVisual::SetLastLocalToWorldTransform(
        CVisual *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        bool *a4,
        struct CMILMatrix *a5,
        struct CDrawingContext *a6)
{
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  CVisual *v10; // r11
  int v11; // eax
  unsigned int v12; // ebx
  int LocalToWorldTransform; // eax
  struct CMoveRenderPassInfo *v15; // [rsp+30h] [rbp-18h] BYREF

  MoveRenderPassInfoRef = (struct CMoveRenderPassInfo *)CVisual::GetMoveRenderPassInfoRef(this, a6);
  v15 = MoveRenderPassInfoRef;
  if ( !MoveRenderPassInfoRef )
  {
    v11 = CVisual::CreateMoveRenderPassInfoForContext(v10, a6, &v15);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1197u);
      return v12;
    }
    MoveRenderPassInfoRef = v15;
  }
  LocalToWorldTransform = CMoveRenderPassInfo::SetLastLocalToWorldTransform(MoveRenderPassInfoRef, a2, a3, a5, a4);
  v12 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LocalToWorldTransform, 0x119Eu);
  return v12;
}
