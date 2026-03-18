/*
 * XREFs of ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18005242C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800C59C0 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800C5BB0 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpHsl(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  __m128i *v3; // rbx
  const __m128i *v4; // rdx
  float *v5; // rax
  ColorSpaceHelpers *v6; // rcx
  float v7; // xmm7_4
  unsigned int v8; // edi
  __m128 v9; // xmm0
  __m128 v10; // xmm6
  ColorSpaceHelpers *v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  ColorSpaceHelpers *v15; // rcx
  __m128i v16; // xmm0
  unsigned int v18; // [rsp+20h] [rbp-60h]
  float *v19; // [rsp+40h] [rbp-40h] BYREF
  float v20; // [rsp+48h] [rbp-38h] BYREF
  float v21; // [rsp+4Ch] [rbp-34h] BYREF
  __m128i v22; // [rsp+50h] [rbp-30h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v18 = 3227;
LABEL_10:
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v18);
    return v8;
  }
  v3 = (__m128i *)(*((_QWORD *)this + 3) + 80LL * (v1 - 3));
  v4 = (const __m128i *)(*((_QWORD *)this + 3) + 80LL * (v1 - 2));
  v5 = (float *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
  v6 = (ColorSpaceHelpers *)v3[4].m128i_u32[2];
  v7 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v8 = 0, (_DWORD)v6 != v4[4].m128i_i32[2]) )
  {
    v18 = 3253;
    goto LABEL_10;
  }
  if ( (_DWORD)v6 != 70 )
  {
    v18 = 3305;
    goto LABEL_10;
  }
  v9 = (__m128)_mm_loadu_si128(v3);
  v10 = (__m128)_mm_loadu_si128(v4);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v6,
    _mm_shuffle_ps(v9, v9, 85).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 170).m128_f32[0],
    _mm_shuffle_ps(v9, v9, 255).m128_f32[0],
    COERCE_FLOAT(&v19),
    (float *)&v19 + 1,
    &v20,
    &v21,
    v19);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v11,
    _mm_shuffle_ps(v10, v10, 85).m128_f32[0],
    _mm_shuffle_ps(v10, v10, 170).m128_f32[0],
    _mm_shuffle_ps(v10, v10, 255).m128_f32[0],
    COERCE_FLOAT(&v22),
    (float *)&v22.m128i_i32[1],
    (float *)&v22.m128i_i32[2],
    (float *)&v22.m128i_i32[3],
    v19);
  v12 = *(float *)&v22.m128i_i32[1] - *((float *)&v19 + 1);
  v13 = *(float *)&v22.m128i_i32[2] - v20;
  v14 = *(float *)&v22.m128i_i32[3] - v21;
  v22 = 0uLL;
  v9.m128_f32[0] = fmaxf(0.0, fminf(v7, 1.0));
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v15,
    (float)(v12 * v9.m128_f32[0]) + *((float *)&v19 + 1),
    (float)(v13 * v9.m128_f32[0]) + v20,
    (float)(v14 * v9.m128_f32[0]) + v21,
    COERCE_FLOAT(&v22),
    (float *)&v22.m128i_i32[1],
    (float *)&v22.m128i_i32[2],
    (float *)&v22.m128i_i32[3],
    v19);
  v16 = v22;
  v3[4].m128i_i32[2] = 70;
  v3[4].m128i_i8[12] = 1;
  *v3 = v16;
  *((_DWORD *)this + 4) -= 2;
  return v8;
}
