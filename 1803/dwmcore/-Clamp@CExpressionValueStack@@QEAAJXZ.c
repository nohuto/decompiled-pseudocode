/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x1801B77EC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // ebx
  __m128 v8; // xmm4
  __m128 v9; // xmm5
  __m128 v10; // xmm6
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  unsigned int v19; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-20h]
  float v24; // [rsp+58h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v19 = 2584;
LABEL_17:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v19);
    return v7;
  }
  v2 = *((_QWORD *)this + 3);
  v3 = 10LL * (v1 - 3);
  v4 = 10LL * (v1 - 2);
  v5 = *(_DWORD *)(v2 + 80LL * (v1 - 3) + 72);
  v6 = 10LL * (v1 - 1);
  if ( v5 != *(_DWORD *)(v2 + 8 * v4 + 72) || (v7 = 0, v5 != *(_DWORD *)(v2 + 8 * v6 + 72)) )
  {
    v19 = 2609;
    goto LABEL_17;
  }
  switch ( v5 )
  {
    case 18:
      v16 = *(float *)(v2 + 8 * v6);
      v17 = fmaxf(*(float *)(v2 + 8 * v3), *(float *)(v2 + 8 * v4));
      *(_DWORD *)(v2 + 8 * v3 + 72) = 18;
      v15 = fminf(v17, v16);
      goto LABEL_14;
    case 35:
      v14 = fminf(fmaxf(*(float *)(v2 + 8 * v3 + 4), *(float *)(v2 + 8 * v4 + 4)), *(float *)(v2 + 8 * v6 + 4));
      v15 = fminf(fmaxf(*(float *)(v2 + 8 * v3), *(float *)(v2 + 8 * v4)), *(float *)(v2 + 8 * v6));
      *(_DWORD *)(v2 + 8 * v3 + 72) = 35;
      *(float *)(v2 + 8 * v3 + 4) = v14;
LABEL_14:
      *(float *)(v2 + 8 * v3) = v15;
      break;
    case 52:
      v20 = *(_QWORD *)(v2 + 8 * v3);
      v11 = (__m128)(unsigned int)v20;
      v12 = (__m128)HIDWORD(v20);
      v21 = *(_QWORD *)(v2 + 8 * v4);
      v23 = *(_QWORD *)(v2 + 8 * v6);
      v11.m128_f32[0] = fminf(fmaxf(*(float *)&v20, *(float *)&v21), *(float *)&v23);
      v12.m128_f32[0] = fminf(fmaxf(*((float *)&v20 + 1), *((float *)&v21 + 1)), *((float *)&v23 + 1));
      v13 = fmaxf(*(float *)(v2 + 8 * v3 + 8), *(float *)(v2 + 8 * v4 + 8));
      v24 = *(float *)(v2 + 8 * v6 + 8);
      *(_DWORD *)(v2 + 8 * v3 + 72) = 52;
      *(_QWORD *)(v2 + 8 * v3) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
      *(float *)(v2 + 8 * v3 + 8) = fminf(v13, v24);
      break;
    case 69:
      v8 = (__m128)_mm_loadu_si128((const __m128i *)(v2 + 8 * v4));
      v9 = (__m128)_mm_loadu_si128((const __m128i *)(v2 + 8 * v6));
      *(_DWORD *)(v2 + 8 * v3 + 72) = 69;
      v10 = (__m128)_mm_loadu_si128((const __m128i *)(v2 + 8 * v3));
      *(_QWORD *)&v22 = __PAIR64__(
                          COERCE_UNSIGNED_INT(
                            fminf(
                              fmaxf(_mm_shuffle_ps(v10, v10, 85).m128_f32[0], _mm_shuffle_ps(v8, v8, 85).m128_f32[0]),
                              _mm_shuffle_ps(v9, v9, 85).m128_f32[0])),
                          COERCE_UNSIGNED_INT(fminf(fmaxf(v10.m128_f32[0], v8.m128_f32[0]), v9.m128_f32[0])));
      *((_QWORD *)&v22 + 1) = __PAIR64__(
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v10, v10, 255).m128_f32[0],
                                      _mm_shuffle_ps(v8, v8, 255).m128_f32[0]),
                                    _mm_shuffle_ps(v9, v9, 255).m128_f32[0])),
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v10, v10, 170).m128_f32[0],
                                      _mm_shuffle_ps(v8, v8, 170).m128_f32[0]),
                                    _mm_shuffle_ps(v9, v9, 170).m128_f32[0])));
      *(_OWORD *)(v2 + 8 * v3) = v22;
      break;
    default:
      v19 = 2672;
      goto LABEL_17;
  }
  *(_BYTE *)(v2 + 8 * v3 + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v7;
}
