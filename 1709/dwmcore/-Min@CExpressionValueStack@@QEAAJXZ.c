/*
 * XREFs of ?Min@CExpressionValueStack@@QEAAJXZ @ 0x180185C0C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Min(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // eax
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+40h] [rbp-10h]

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
          v14 = fminf(*(float *)(v3 + 8 * v4), *(float *)(v3 + 8 * v5));
          *(_DWORD *)(v3 + 8 * v4 + 64) = 18;
          *(float *)(v3 + 8 * v4) = v14;
          break;
        case 35:
          v12 = fminf(*(float *)(v3 + 8 * v4), *(float *)(v3 + 8 * v5));
          v13 = fminf(*(float *)(v3 + 8 * v4 + 4), *(float *)(v3 + 8 * v5 + 4));
          *(_DWORD *)(v3 + 8 * v4 + 64) = 35;
          *(float *)(v3 + 8 * v4) = v12;
          *(float *)(v3 + 8 * v4 + 4) = v13;
          break;
        case 52:
          v17 = *(_QWORD *)(v3 + 8 * v4);
          v9 = (__m128)(unsigned int)v17;
          v10 = (__m128)HIDWORD(v17);
          v19 = *(_QWORD *)(v3 + 8 * v5);
          v9.m128_f32[0] = fminf(*(float *)&v17, *(float *)&v19);
          v10.m128_f32[0] = fminf(*((float *)&v17 + 1), *((float *)&v19 + 1));
          v11 = fminf(*(float *)(v3 + 8 * v4 + 8), *(float *)(v3 + 8 * v5 + 8));
          *(_DWORD *)(v3 + 8 * v4 + 64) = 52;
          *(_QWORD *)(v3 + 8 * v4) = _mm_unpacklo_ps(v9, v10).m128_u64[0];
          *(float *)(v3 + 8 * v4 + 8) = v11;
          break;
        case 69:
          v7 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v5));
          *(_DWORD *)(v3 + 8 * v4 + 64) = 69;
          v8 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v4));
          *(_QWORD *)&v18 = __PAIR64__(
                              COERCE_UNSIGNED_INT(fminf(_mm_shuffle_ps(v8, v8, 85).m128_f32[0], _mm_shuffle_ps(
                                                                                                  v7,
                                                                                                  v7,
                                                                                                  85).m128_f32[0])),
                              COERCE_UNSIGNED_INT(fminf(v8.m128_f32[0], v7.m128_f32[0])));
          *((_QWORD *)&v18 + 1) = __PAIR64__(
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v8, v8, 255).m128_f32[0],
                                        _mm_shuffle_ps(v7, v7, 255).m128_f32[0])),
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v8, v8, 170).m128_f32[0],
                                        _mm_shuffle_ps(v7, v7, 170).m128_f32[0])));
          *(_OWORD *)(v3 + 8 * v4) = v18;
          break;
        default:
          v16 = 2535;
          goto LABEL_3;
      }
      *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
      --*((_DWORD *)this + 4);
      return v2;
    }
    v16 = 2479;
  }
  else
  {
    v16 = 2455;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v16);
  return v2;
}
