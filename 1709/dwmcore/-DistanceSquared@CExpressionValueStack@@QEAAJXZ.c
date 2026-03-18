/*
 * XREFs of ?DistanceSquared@CExpressionValueStack@@QEAAJXZ @ 0x1801843BC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::DistanceSquared(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __m128 v7; // xmm5
  __m128 v8; // xmm2
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  unsigned int v15; // [rsp+20h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-20h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = 9LL * (v1 - 2);
    v5 = 9LL * (v1 - 1);
    v6 = *(_DWORD *)(v3 + 8 * v4 + 64);
    if ( v6 == *(_DWORD *)(v3 + 8 * v5 + 64) )
    {
      switch ( v6 )
      {
        case 18:
          *(float *)(v3 + 8 * v4) = (float)(*(float *)(v3 + 8 * v4) - *(float *)(v3 + 8 * v5))
                                  * (float)(*(float *)(v3 + 8 * v4) - *(float *)(v3 + 8 * v5));
          break;
        case 35:
          v13 = *(float *)(v3 + 8 * v4 + 4) - *(float *)(v3 + 8 * v5 + 4);
          *(float *)(v3 + 8 * v4) = (float)(v13 * v13)
                                  + (float)((float)(*(float *)(v3 + 8 * v4) - *(float *)(v3 + 8 * v5))
                                          * (float)(*(float *)(v3 + 8 * v4) - *(float *)(v3 + 8 * v5)));
          break;
        case 52:
          v16 = *(_QWORD *)(v3 + 8 * v4);
          *(float *)(v3 + 8 * v4) = (float)((float)((float)(*((float *)&v16 + 1)
                                                          - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v5))))
                                                  * (float)(*((float *)&v16 + 1)
                                                          - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v5)))))
                                          + (float)((float)(*(float *)&v16 - COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v5)))
                                                  * (float)(*(float *)&v16 - COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v5)))))
                                  + (float)((float)(*(float *)(v3 + 8 * v4 + 8) - *(float *)(v3 + 8 * v5 + 8))
                                          * (float)(*(float *)(v3 + 8 * v4 + 8) - *(float *)(v3 + 8 * v5 + 8)));
          break;
        case 69:
          v7 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v4));
          v8 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v5));
          v9 = v7.m128_f32[0] - v8.m128_f32[0];
          v10 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
          v11 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0] - _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
          v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
          v12 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
          v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
          *(float *)(v3 + 8 * v4) = (float)((float)((float)(v11 * v11) + (float)(v9 * v9))
                                          + (float)((float)(v10 - v12) * (float)(v10 - v12)))
                                  + (float)((float)(v7.m128_f32[0] - v8.m128_f32[0])
                                          * (float)(v7.m128_f32[0] - v8.m128_f32[0]));
          break;
        default:
          v15 = 3976;
          goto LABEL_3;
      }
      *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
      *(_DWORD *)(v3 + 8 * v4 + 64) = 18;
      --*((_DWORD *)this + 4);
      return v2;
    }
    v15 = 3916;
  }
  else
  {
    v15 = 3892;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v15);
  return v2;
}
