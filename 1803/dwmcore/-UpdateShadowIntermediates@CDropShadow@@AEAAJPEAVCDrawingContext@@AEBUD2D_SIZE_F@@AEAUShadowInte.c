/*
 * XREFs of ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18018AC70
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180189050 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18018A5BC (-InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowIntermediates@1@@Z @ 0x180189550 (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowInte.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x180189860 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 */

__int64 __fastcall CDropShadow::UpdateShadowIntermediates(
        CDropShadow *this,
        struct IRenderTarget **a2,
        const struct D2D_SIZE_F *a3,
        struct CDropShadow::ShadowIntermediates *a4)
{
  unsigned int v4; // edi
  float v9; // xmm6_4
  float height; // xmm1_4
  int v11; // eax
  __int64 v12; // rax
  int BlurIntermediate; // eax
  struct D2D_SIZE_F v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( this == CDropShadow::s_pFastShadow )
    v9 = FLOAT_16_0;
  else
    v9 = *((float *)this + 38);
  if ( !*(_QWORD *)a4 )
  {
    height = a3->height;
    v15.width = a3->width - (float)(v9 + v9);
    v15.height = height - (float)(v9 + v9);
    v11 = CDropShadow::GenerateMaskIntermediate(this, a2, &v15, a4);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1D9u);
      return v4;
    }
  }
  if ( *((float *)this + 38) == 0.0 )
  {
    v12 = *(_QWORD *)a4;
LABEL_14:
    *((_QWORD *)a4 + 2) = v12;
    return v4;
  }
  if ( *((_QWORD *)a4 + 1)
    || (BlurIntermediate = CDropShadow::GenerateBlurIntermediate(this, (struct CDrawingContext *)a2, a3, v9, a4),
        v4 = BlurIntermediate,
        BlurIntermediate >= 0) )
  {
    v12 = *((_QWORD *)a4 + 1);
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BlurIntermediate, 0x1E3u);
  return v4;
}
