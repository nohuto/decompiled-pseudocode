/*
 * XREFs of ?Length@CExpressionValueStack@@QEAAJXZ @ 0x1801B86C0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Length(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  float v6; // xmm0_4
  float v7; // xmm0_4
  __m128 v8; // xmm3
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  double v12; // xmm0_8
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = 10LL * (unsigned int)(v1 - 1);
    v5 = *(_DWORD *)(v3 + 80LL * (unsigned int)(v1 - 1) + 72);
    if ( v5 == 18 )
    {
      v12 = *(float *)(v3 + 8 * v4);
      *(_DWORD *)(v3 + 8 * v4 + 72) = 18;
      v7 = COERCE_DOUBLE(*(_QWORD *)&v12 & _xmm);
    }
    else
    {
      switch ( v5 )
      {
        case '#':
          v6 = (float)(*(float *)(v3 + 8 * v4) * *(float *)(v3 + 8 * v4))
             + (float)(*(float *)(v3 + 8 * v4 + 4) * *(float *)(v3 + 8 * v4 + 4));
          break;
        case '4':
          v6 = (float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v4)))
                             * COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v4))))
                     + (float)(COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v4)) * COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v4))))
             + (float)(*(float *)(v3 + 8 * v4 + 8) * *(float *)(v3 + 8 * v4 + 8));
          break;
        case 'E':
          v8 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v4));
          v9 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
          v10 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
          v11 = (float)(v9 * v9) + (float)(v8.m128_f32[0] * v8.m128_f32[0]);
          v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
          v6 = (float)(v11 + (float)(v10 * v10)) + (float)(v8.m128_f32[0] * v8.m128_f32[0]);
          break;
        case 'G':
          v6 = (float)((float)((float)(*(float *)(v3 + 8 * v4 + 4) * *(float *)(v3 + 8 * v4 + 4))
                             + (float)(*(float *)(v3 + 8 * v4) * *(float *)(v3 + 8 * v4)))
                     + (float)(*(float *)(v3 + 8 * v4 + 8) * *(float *)(v3 + 8 * v4 + 8)))
             + (float)(*(float *)(v3 + 8 * v4 + 12) * *(float *)(v3 + 8 * v4 + 12));
          break;
        default:
          v14 = 3490;
          goto LABEL_3;
      }
      *(_DWORD *)(v3 + 8 * v4 + 72) = 18;
      v7 = sqrtf_0(v6);
    }
    *(float *)(v3 + 8 * v4) = v7;
    *(_BYTE *)(v3 + 8 * v4 + 76) = 1;
    return 0;
  }
  v14 = 3432;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v14);
  return v2;
}
