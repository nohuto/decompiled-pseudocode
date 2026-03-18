/*
 * XREFs of ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180172120
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180170B40 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180171CE8 (-InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180170EF4 (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18017122C (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDropShadow::UpdateShadowIntermediates(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // edi
  float v7; // xmm6_4
  float height; // xmm2_4
  int v9; // eax
  __int64 v10; // rax
  int BlurIntermediate; // eax
  struct D2D_SIZE_F v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( this == CDropShadow::s_pFastShadow )
    v7 = FLOAT_16_0;
  else
    v7 = *((float *)this + 24);
  if ( !*((_QWORD *)this + 18) )
  {
    height = a3->height;
    v13.width = a3->width - (float)(v7 + v7);
    v13.height = height - (float)(v7 + v7);
    v9 = CDropShadow::GenerateMaskIntermediate(this, a2, &v13);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x203u);
      return v3;
    }
  }
  if ( *((float *)this + 24) == 0.0 )
  {
    v10 = *((_QWORD *)this + 18);
LABEL_14:
    *((_QWORD *)this + 20) = v10;
    return v3;
  }
  if ( *((_QWORD *)this + 19)
    || (BlurIntermediate = CDropShadow::GenerateBlurIntermediate(this, a2, a3, v7),
        v3 = BlurIntermediate,
        BlurIntermediate >= 0) )
  {
    v10 = *((_QWORD *)this + 19);
    goto LABEL_14;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, BlurIntermediate, 0x20Du);
  return v3;
}
