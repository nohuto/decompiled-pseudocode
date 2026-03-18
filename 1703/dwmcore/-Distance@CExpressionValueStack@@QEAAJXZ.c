/*
 * XREFs of ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x18017D4D4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Distance(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // r14d
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
  float v15; // xmm0_4
  unsigned int v17; // [rsp+20h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+70h] [rbp+20h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = 9LL * (v1 - 2);
    v6 = 9LL * (v1 - 1);
    v7 = *(_DWORD *)(v4 + 8 * v5 + 64);
    if ( v7 == *(_DWORD *)(v4 + 8 * v6 + 64) )
    {
      if ( v7 == 18 )
      {
        v15 = *(float *)(v4 + 8 * v5) - *(float *)(v4 + 8 * v6);
        *(_DWORD *)(v4 + 8 * v5 + 64) = 18;
        *(float *)(v4 + 8 * v5) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm);
      }
      else
      {
        switch ( v7 )
        {
          case '#':
            v20 = *(_QWORD *)(v4 + 8 * v5);
            v14 = (float)((float)(*((float *)&v20 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6))))
                        * (float)(*((float *)&v20 + 1) - COERCE_FLOAT(HIDWORD(*(_QWORD *)(v4 + 8 * v6)))))
                + (float)((float)(*(float *)&v20 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6)))
                        * (float)(*(float *)&v20 - COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6))));
            break;
          case '4':
            v18 = *(_QWORD *)(v4 + 8 * v5);
            v19 = *(_QWORD *)(v4 + 8 * v6);
            v14 = (float)((float)((float)(*((float *)&v18 + 1) - *((float *)&v19 + 1))
                                * (float)(*((float *)&v18 + 1) - *((float *)&v19 + 1)))
                        + (float)((float)(*(float *)&v18 - *(float *)&v19) * (float)(*(float *)&v18 - *(float *)&v19)))
                + (float)((float)(*(float *)(v4 + 8 * v5 + 8) - *(float *)(v4 + 8 * v6 + 8))
                        * (float)(*(float *)(v4 + 8 * v5 + 8) - *(float *)(v4 + 8 * v6 + 8)));
            break;
          case 'E':
            v8 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v5));
            v9 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 8 * v6));
            v10 = v8.m128_f32[0] - v9.m128_f32[0];
            v11 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0] - _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
            v12 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
            v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
            v13 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
            v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
            v14 = (float)((float)((float)(v11 * v11) + (float)(v10 * v10))
                        + (float)((float)(v12 - v13) * (float)(v12 - v13)))
                + (float)((float)(v8.m128_f32[0] - v9.m128_f32[0]) * (float)(v8.m128_f32[0] - v9.m128_f32[0]));
            break;
          default:
            v17 = 3827;
            goto LABEL_3;
        }
        *(_DWORD *)(v4 + 8 * v5 + 64) = 18;
        *(float *)(v4 + 8 * v5) = sqrtf_0(v14);
      }
      *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
      --*((_DWORD *)this + 4);
      return v2;
    }
    v17 = 3767;
  }
  else
  {
    v17 = 3743;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v17);
  return v2;
}
