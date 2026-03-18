/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A1BC8
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A143C (-GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CProjectedShadowReceiver::UpdateShadowIntermediates(
        CRenderTargetImageSource **this,
        struct IRenderTarget **a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  int MaskIntermediate; // eax

  v3 = 0;
  if ( !this[13] )
  {
    MaskIntermediate = CProjectedShadowReceiver::GenerateMaskIntermediate(this, a2, a3);
    v3 = MaskIntermediate;
    if ( MaskIntermediate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MaskIntermediate, 0x187u);
  }
  return v3;
}
