/*
 * XREFs of ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801B7BA4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpRgb(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  __m128i *v3; // r8
  const __m128i *v4; // rdx
  float *v5; // rax
  __int32 v6; // ecx
  float v7; // xmm0_4
  unsigned int v8; // ebx
  __m128 v9; // xmm5
  __m128 v10; // xmm4
  float v11; // xmm3_4
  float v12; // xmm0_4
  __int32 v13; // xmm1_4
  float v14; // xmm0_4
  unsigned int v16; // [rsp+20h] [rbp-28h]
  __m128i v17; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v16 = 3339;
LABEL_9:
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v16);
    return v8;
  }
  v3 = (__m128i *)(*((_QWORD *)this + 3) + 80LL * (v1 - 3));
  v4 = (const __m128i *)(*((_QWORD *)this + 3) + 80LL * (v1 - 2));
  v5 = (float *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
  v6 = v3[4].m128i_i32[2];
  v7 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v8 = 0, v6 != v4[4].m128i_i32[2]) )
  {
    v16 = 3365;
    goto LABEL_9;
  }
  if ( v6 != 70 )
  {
    v16 = 3396;
    goto LABEL_9;
  }
  v9 = (__m128)_mm_loadu_si128(v4);
  v3[4].m128i_i32[2] = 70;
  v10 = (__m128)_mm_loadu_si128(v3);
  v3[4].m128i_i8[12] = 1;
  v11 = fmaxf(0.0, fminf(v7, 1.0));
  *(float *)v17.m128i_i32 = (float)((float)(v9.m128_f32[0] - v10.m128_f32[0]) * v11) + v10.m128_f32[0];
  v12 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  *(float *)&v13 = (float)((float)(_mm_shuffle_ps(v9, v9, 85).m128_f32[0] - v12) * v11) + v12;
  v14 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
  v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 255).m128_f32[0];
  v17.m128i_i32[1] = v13;
  *(float *)&v17.m128i_i32[2] = (float)((float)(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] - v14) * v11) + v14;
  *(float *)&v17.m128i_i32[3] = (float)((float)(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] - v10.m128_f32[0]) * v11)
                              + v10.m128_f32[0];
  *v3 = v17;
  *((_DWORD *)this + 4) -= 2;
  return v8;
}
