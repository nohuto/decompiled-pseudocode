/*
 * XREFs of ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180070F84
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180071090 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUMilPoint2F@@@Z @ 0x18005AD38 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CLinearGradientBrush::InferVisualToTextureTransform(__int64 a1, float *a2, __int64 a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  unsigned __int64 v5; // xmm1_8
  D2D1_MATRIX_3X2_F *v6; // r9
  unsigned int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-19h] BYREF
  __int128 v10; // [rsp+40h] [rbp-9h]
  __int128 v11; // [rsp+50h] [rbp+7h]
  __int128 v12; // [rsp+60h] [rbp+17h]
  __int16 v13; // [rsp+70h] [rbp+27h]
  __int128 v14; // [rsp+80h] [rbp+37h] BYREF

  v3 = FLOAT_1_0;
  v4 = 1.0 / *(float *)(a3 + 8);
  if ( *(_BYTE *)(a1 + 105) == 1 )
    v3 = 1.0 - v4;
  else
    v4 = 0.0;
  *(_QWORD *)&v14 = LODWORD(v4);
  *((_QWORD *)&v14 + 1) = LODWORD(v3) | 0x3F80000000000000LL;
  v9 = _xmm;
  v10 = _xmm;
  v13 = 32085;
  v11 = _xmm;
  v12 = _xmm;
  CMILMatrix::InferAffineMatrix((__int64)&v9, (float *)&v14, a2);
  *(_QWORD *)&v14 = v9;
  *((_QWORD *)&v14 + 1) = v10;
  v5 = _mm_unpacklo_ps((__m128)(unsigned int)v12, (__m128)DWORD1(v12)).m128_u64[0];
  *(_OWORD *)&v6->m11 = v14;
  *(_QWORD *)&v6->m[2][0] = v5;
  v7 = 0;
  if ( !D2D1InvertMatrix(v6) )
  {
    v7 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, -2003304441, 0xE5u);
  }
  return v7;
}
