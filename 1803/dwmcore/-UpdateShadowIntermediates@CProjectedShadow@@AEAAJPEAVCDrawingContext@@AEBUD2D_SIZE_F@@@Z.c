/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B6640
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CanUseRectOptimization@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B4450 (-CanUseRectOptimization@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B484C (-GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::UpdateShadowIntermediates(
        CProjectedShadow *this,
        struct IRenderTarget **a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  int TransformIntermediate; // eax

  v3 = 0;
  if ( !*((_QWORD *)this + 12)
    && !CProjectedShadow::CanUseRectOptimization((CProjectedShadowCaster **)this, (struct CDrawingContext *)a2) )
  {
    TransformIntermediate = CProjectedShadow::GenerateTransformIntermediate(this, a2, a3);
    v3 = TransformIntermediate;
    if ( TransformIntermediate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TransformIntermediate, 0x293u);
  }
  return v3;
}
