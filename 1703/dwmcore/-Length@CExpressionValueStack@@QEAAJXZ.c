/*
 * XREFs of ?Length@CExpressionValueStack@@QEAAJXZ @ 0x18017DCD0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Length(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  float v6; // xmm0_4
  __m128 v7; // xmm3
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  unsigned int v13; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = 9LL * (unsigned int)(v1 - 1);
    v5 = *(_DWORD *)(v3 + 72LL * (unsigned int)(v1 - 1) + 64);
    if ( v5 != 18 )
    {
      switch ( v5 )
      {
        case '#':
          v11 = (float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v4))) * COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v4))))
              + (float)(COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v4)) * COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v4)));
          break;
        case '4':
          v11 = (float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v4)))
                              * COERCE_FLOAT(HIDWORD(*(_QWORD *)(v3 + 8 * v4))))
                      + (float)(COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v4)) * COERCE_FLOAT(*(_QWORD *)(v3 + 8 * v4))))
              + (float)(*(float *)(v3 + 8 * v4 + 8) * *(float *)(v3 + 8 * v4 + 8));
          break;
        case 'E':
          v7 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v4));
          v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
          v9 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
          v10 = (float)(v8 * v8) + (float)(v7.m128_f32[0] * v7.m128_f32[0]);
          v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
          v11 = (float)(v10 + (float)(v9 * v9)) + (float)(v7.m128_f32[0] * v7.m128_f32[0]);
          break;
        case 'G':
          v6 = sqrtf_0(
                 (float)((float)((float)(*(float *)(v3 + 8 * v4) * *(float *)(v3 + 8 * v4))
                               + (float)(*(float *)(v3 + 8 * v4 + 4) * *(float *)(v3 + 8 * v4 + 4)))
                       + (float)(*(float *)(v3 + 8 * v4 + 8) * *(float *)(v3 + 8 * v4 + 8)))
               + (float)(*(float *)(v3 + 8 * v4 + 12) * *(float *)(v3 + 8 * v4 + 12)));
          goto LABEL_16;
        default:
          v13 = 3614;
          goto LABEL_3;
      }
      *(_DWORD *)(v3 + 8 * v4 + 64) = 18;
      v6 = sqrtf_0(v11);
LABEL_17:
      *(float *)(v3 + 8 * v4) = v6;
      *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
      return v2;
    }
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v3 + 8 * v4)) & _xmm);
LABEL_16:
    *(_DWORD *)(v3 + 8 * v4 + 64) = 18;
    goto LABEL_17;
  }
  v13 = 3556;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v13);
  return v2;
}
