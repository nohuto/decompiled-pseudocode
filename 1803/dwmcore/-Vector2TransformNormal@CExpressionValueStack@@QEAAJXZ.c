/*
 * XREFs of ?Vector2TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x1801BC270
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector2TransformNormal(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  int v7; // eax
  float v8; // xmm5_4
  __m128 v9; // xmm0
  float v10; // xmm1_4
  float v11; // xmm4_4
  unsigned int v13; // [rsp+20h] [rbp-78h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v13 = 7422;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v13);
    return v2;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = v1 - 1;
  v5 = 10LL * (v1 - 2);
  v6 = 10 * v4;
  if ( *(_DWORD *)(v3 + 8 * v5 + 72) != 35 )
  {
    v13 = 7428;
    goto LABEL_3;
  }
  v7 = *(_DWORD *)(v3 + 80 * v4 + 72);
  if ( v7 != 104 && v7 != 265 )
  {
    v13 = 7436;
    goto LABEL_3;
  }
  v8 = *(float *)(v3 + 8 * v5);
  v9 = *(__m128 *)(v3 + 8 * v6);
  if ( v7 == 104 )
  {
    v10 = (float)(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] * *(float *)(v3 + 8 * v5 + 4))
        + (float)(_mm_shuffle_ps(v9, v9, 85).m128_f32[0] * v8);
    v11 = (float)(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] * *(float *)(v3 + 8 * v5 + 4)) + (float)(v9.m128_f32[0] * v8);
  }
  else
  {
    v11 = (float)(COERCE_FLOAT(*(_OWORD *)(v3 + 8 * v6 + 16)) * *(float *)(v3 + 8 * v5 + 4))
        + (float)(v9.m128_f32[0] * v8);
    v10 = (float)(_mm_shuffle_ps(*(__m128 *)(v3 + 8 * v6 + 16), *(__m128 *)(v3 + 8 * v6 + 16), 85).m128_f32[0]
                * *(float *)(v3 + 8 * v5 + 4))
        + (float)(_mm_shuffle_ps(v9, v9, 85).m128_f32[0] * v8);
  }
  *(_DWORD *)(v3 + 8 * v5 + 72) = 35;
  *(float *)(v3 + 8 * v5) = v11;
  *(float *)(v3 + 8 * v5 + 4) = v10;
  *(_BYTE *)(v3 + 8 * v5 + 76) = 1;
  --*((_DWORD *)this + 4);
  return 0;
}
