/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0EF4
 * Callers:
 *     ?InitializeFastShadow@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801A0634 (-InitializeFastShadow@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GenerateBlurIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18019FD0C (-GenerateBlurIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0014 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A01F0 (-GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 */

__int64 __fastcall CProjectedShadowCaster::UpdateShadowIntermediates(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  float height; // xmm1_4
  float v8; // xmm2_4
  int v9; // eax
  int BlurIntermediate; // eax
  int WhiteColorIntermediate; // eax
  struct D2D_SIZE_F v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 15)
    || (height = a3->height,
        v8 = *((float *)this + 23) + *((float *)this + 23),
        v13.width = a3->width - v8,
        v13.height = height - v8,
        v9 = CProjectedShadowCaster::GenerateMaskIntermediate(
               (CRenderTargetImageSource **)this,
               (struct IRenderTarget **)a2,
               &v13),
        v3 = v9,
        v9 >= 0) )
  {
    if ( *((_QWORD *)this + 16)
      || (BlurIntermediate = CProjectedShadowCaster::GenerateBlurIntermediate(this, a2, a3),
          v3 = BlurIntermediate,
          BlurIntermediate >= 0) )
    {
      if ( !*((_QWORD *)this + 17) )
      {
        WhiteColorIntermediate = CProjectedShadowCaster::GenerateWhiteColorIntermediate(this, a2, a3);
        v3 = WhiteColorIntermediate;
        if ( WhiteColorIntermediate < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WhiteColorIntermediate, 0x32Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BlurIntermediate, 0x326u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x31Cu);
  }
  return v3;
}
