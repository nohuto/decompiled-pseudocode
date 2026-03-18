/*
 * XREFs of ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x180161300
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015F810 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180160C7C (-InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowIntermediates@1@@Z @ 0x18015FC9C (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowInte.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18015FFB4 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 */

__int64 __fastcall CDropShadow::UpdateShadowIntermediates(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDropShadow::ShadowIntermediates *a4)
{
  unsigned int v4; // edi
  float v9; // xmm6_4
  float height; // xmm2_4
  signed int v11; // eax
  __int64 v12; // rax
  signed int BlurIntermediate; // eax
  struct D2D_SIZE_F v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( this == CDropShadow::s_pFastShadow )
    v9 = FLOAT_16_0;
  else
    v9 = *((float *)this + 40);
  if ( !*((_QWORD *)a4 + 1) )
  {
    height = a3->height;
    v15.width = a3->width - (float)(v9 + v9);
    v15.height = height - (float)(v9 + v9);
    v11 = CDropShadow::GenerateMaskIntermediate(this, a2, &v15, a4);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x256u);
      return v4;
    }
  }
  if ( *((float *)this + 40) == 0.0 )
  {
    v12 = *((_QWORD *)a4 + 1);
LABEL_14:
    *((_QWORD *)a4 + 3) = v12;
    return v4;
  }
  if ( *((_QWORD *)a4 + 2)
    || (BlurIntermediate = CDropShadow::GenerateBlurIntermediate(this, a2, a3, v9, a4),
        v4 = BlurIntermediate,
        BlurIntermediate >= 0) )
  {
    v12 = *((_QWORD *)a4 + 2);
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BlurIntermediate, 0x260u);
  return v4;
}
