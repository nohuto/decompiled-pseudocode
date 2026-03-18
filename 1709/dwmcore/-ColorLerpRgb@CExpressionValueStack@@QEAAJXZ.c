/*
 * XREFs of ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x180183F1C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpRgb(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v4; // rdx
  int v5; // ecx
  float v6; // xmm0_4
  __m128 v7; // xmm5
  __m128 v8; // xmm4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  unsigned int v14; // [rsp+20h] [rbp-28h]
  float v15[6]; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v14 = 3487;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v14);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64);
  v6 = *(float *)(v4 + 72LL * (v1 - 1));
  if ( *(_DWORD *)(v4 + 72LL * (v1 - 1) + 64) != 18 || v5 != *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) )
  {
    v14 = 3514;
    goto LABEL_9;
  }
  if ( v5 != 70 )
  {
    v14 = 3545;
    goto LABEL_9;
  }
  v7 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 72LL * (v1 - 2)));
  *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64) = 70;
  v8 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 72LL * (v1 - 3)));
  *(_BYTE *)(v4 + 72LL * (v1 - 3) + 68) = 1;
  v9 = fmaxf(0.0, fminf(v6, 1.0));
  v15[0] = (float)((float)(v7.m128_f32[0] - v8.m128_f32[0]) * v9) + v8.m128_f32[0];
  v10 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
  v11 = (float)((float)(_mm_shuffle_ps(v7, v7, 85).m128_f32[0] - v10) * v9) + v10;
  v12 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
  v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
  v15[1] = v11;
  v15[2] = (float)((float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] - v12) * v9) + v12;
  v15[3] = (float)((float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] - v8.m128_f32[0]) * v9) + v8.m128_f32[0];
  *(_OWORD *)(v4 + 72LL * (v1 - 3)) = *(_OWORD *)v15;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
