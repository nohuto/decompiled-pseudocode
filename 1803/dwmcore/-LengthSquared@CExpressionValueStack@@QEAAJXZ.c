/*
 * XREFs of ?LengthSquared@CExpressionValueStack@@QEAAJXZ @ 0x1801B8848
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LengthSquared(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // eax
  __m128 v6; // xmm3
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  unsigned int v11; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = 10LL * (unsigned int)(v1 - 1);
    v5 = *(_DWORD *)(v3 + 80LL * (unsigned int)(v1 - 1) + 72);
    switch ( v5 )
    {
      case 18:
        *(float *)(v3 + 8 * v4) = *(float *)(v3 + 8 * v4) * *(float *)(v3 + 8 * v4);
        break;
      case 35:
        *(float *)(v3 + 8 * v4) = (float)(*(float *)(v3 + 8 * v4) * *(float *)(v3 + 8 * v4))
                                + (float)(*(float *)(v3 + 8 * v4 + 4) * *(float *)(v3 + 8 * v4 + 4));
        break;
      case 52:
        *(float *)(v3 + 8 * v4) = (float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v4)))
                                                * COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v4))))
                                        + (float)(COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v4))
                                                * COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v4))))
                                + (float)(*(float *)(v3 + 8 * v4 + 8) * *(float *)(v3 + 8 * v4 + 8));
        break;
      case 69:
        v6 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v4));
        v7 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
        v8 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
        v9 = (float)(v7 * v7) + (float)(v6.m128_f32[0] * v6.m128_f32[0]);
        v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
        *(float *)(v3 + 8 * v4) = (float)(v9 + (float)(v8 * v8)) + (float)(v6.m128_f32[0] * v6.m128_f32[0]);
        break;
      case 71:
        *(float *)(v3 + 8 * v4) = (float)((float)((float)(*(float *)(v3 + 8 * v4 + 4) * *(float *)(v3 + 8 * v4 + 4))
                                                + (float)(*(float *)(v3 + 8 * v4) * *(float *)(v3 + 8 * v4)))
                                        + (float)(*(float *)(v3 + 8 * v4 + 8) * *(float *)(v3 + 8 * v4 + 8)))
                                + (float)(*(float *)(v3 + 8 * v4 + 12) * *(float *)(v3 + 8 * v4 + 12));
        break;
      default:
        v11 = 3583;
        goto LABEL_3;
    }
    *(_DWORD *)(v3 + 8 * v4 + 72) = 18;
    v2 = 0;
    *(_BYTE *)(v3 + 8 * v4 + 76) = 1;
    return v2;
  }
  v11 = 3523;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v11);
  return v2;
}
