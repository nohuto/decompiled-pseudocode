/*
 * XREFs of ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x1801841F0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Distance(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  __m128 v8; // xmm5
  __m128 v9; // xmm2
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  unsigned int v20; // [rsp+20h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-20h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 9LL * (v1 - 2);
    v6 = 9LL * (v1 - 1);
    v7 = *(_DWORD *)(v4 + 8 * v5 + 64);
    if ( v7 != *(_DWORD *)(v4 + 8 * v6 + 64) )
    {
      v20 = 3793;
      goto LABEL_3;
    }
    switch ( v7 )
    {
      case 18:
        v18 = *(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6);
        *(_DWORD *)(v4 + 8 * v5 + 64) = 18;
        *(float *)(v4 + 8 * v5) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18) & _xmm);
        goto LABEL_17;
      case 35:
        v17 = *(float *)(v4 + 8 * v5 + 4) - *(float *)(v4 + 8 * v6 + 4);
        v15 = *(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6);
        v16 = v17 * v17;
        break;
      case 52:
        v21 = *(_QWORD *)(v4 + 8 * v5);
        v15 = *(float *)(v4 + 8 * v5 + 8) - *(float *)(v4 + 8 * v6 + 8);
        v16 = (float)((float)(*((float *)&v21 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6))))
                    * (float)(*((float *)&v21 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6)))))
            + (float)((float)(*(float *)&v21 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6)))
                    * (float)(*(float *)&v21 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6))));
        break;
      case 69:
        v8 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v5));
        v9 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v6));
        v10 = v8.m128_f32[0] - v9.m128_f32[0];
        v11 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0] - _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
        v12 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
        v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
        v13 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
        v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
        v14 = (float)((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)((float)(v12 - v13) * (float)(v12 - v13)))
            + (float)((float)(v8.m128_f32[0] - v9.m128_f32[0]) * (float)(v8.m128_f32[0] - v9.m128_f32[0]));
        goto LABEL_12;
      default:
        v20 = 3853;
        goto LABEL_3;
    }
    v14 = v16 + (float)(v15 * v15);
LABEL_12:
    *(_DWORD *)(v4 + 8 * v5 + 64) = 18;
    *(float *)(v4 + 8 * v5) = sqrtf_0(v14);
LABEL_17:
    *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
    --*((_DWORD *)this + 4);
    return v2;
  }
  v20 = 3769;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v20);
  return v2;
}
