/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x18001F474
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r11
  __int64 v6; // r10
  int v7; // eax
  float v8; // xmm2_4
  float v9; // xmm1_4
  __m128 v11; // xmm4
  __m128 v12; // xmm5
  __m128 v13; // xmm6
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  float v16; // xmm0_4
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  unsigned int v19; // [rsp+20h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  float v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+90h] [rbp+10h]
  __int64 v26; // [rsp+98h] [rbp+18h]
  __int64 v27; // [rsp+A0h] [rbp+20h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v19 = 2668;
    goto LABEL_10;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 9LL * (v1 - 3);
  v5 = 9LL * (v1 - 2);
  v6 = 9LL * (v1 - 1);
  v7 = *(_DWORD *)(v3 + 8 * v4 + 64);
  if ( v7 != *(_DWORD *)(v3 + 8 * v5 + 64) || v7 != *(_DWORD *)(v3 + 8 * v6 + 64) )
  {
    v19 = 2694;
    goto LABEL_10;
  }
  if ( v7 != 18 )
  {
    switch ( v7 )
    {
      case '#':
        v25 = *(_QWORD *)(v3 + 8 * v4);
        v27 = *(_QWORD *)(v3 + 8 * v6);
        v17 = (__m128)(unsigned int)v25;
        v26 = *(_QWORD *)(v3 + 8 * v5);
        v18 = (__m128)HIDWORD(v25);
        *(_DWORD *)(v3 + 8 * v4 + 64) = 35;
        v17.m128_f32[0] = fminf(fmaxf(*(float *)&v25, *(float *)&v26), *(float *)&v27);
        v18.m128_f32[0] = fminf(fmaxf(*((float *)&v25 + 1), *((float *)&v26 + 1)), *((float *)&v27 + 1));
        *(_QWORD *)(v3 + 8 * v4) = _mm_unpacklo_ps(v17, v18).m128_u64[0];
        goto LABEL_6;
      case '4':
        v20 = *(_QWORD *)(v3 + 8 * v4);
        v14 = (__m128)(unsigned int)v20;
        v15 = (__m128)HIDWORD(v20);
        v21 = *(_QWORD *)(v3 + 8 * v5);
        v23 = *(_QWORD *)(v3 + 8 * v6);
        v14.m128_f32[0] = fminf(fmaxf(*(float *)&v20, *(float *)&v21), *(float *)&v23);
        v15.m128_f32[0] = fminf(fmaxf(*((float *)&v20 + 1), *((float *)&v21 + 1)), *((float *)&v23 + 1));
        v16 = fmaxf(*(float *)(v3 + 8 * v4 + 8), *(float *)(v3 + 8 * v5 + 8));
        v24 = *(float *)(v3 + 8 * v6 + 8);
        *(_DWORD *)(v3 + 8 * v4 + 64) = 52;
        *(_QWORD *)(v3 + 8 * v4) = _mm_unpacklo_ps(v14, v15).m128_u64[0];
        *(float *)(v3 + 8 * v4 + 8) = fminf(v16, v24);
        goto LABEL_6;
      case 'E':
        v11 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v5));
        v12 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v6));
        *(_DWORD *)(v3 + 8 * v4 + 64) = 69;
        v13 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v4));
        *(_QWORD *)&v22 = __PAIR64__(
                            COERCE_UNSIGNED_INT(
                              fminf(
                                fmaxf(
                                  _mm_shuffle_ps(v13, v13, 85).m128_f32[0],
                                  _mm_shuffle_ps(v11, v11, 85).m128_f32[0]),
                                _mm_shuffle_ps(v12, v12, 85).m128_f32[0])),
                            COERCE_UNSIGNED_INT(fminf(fmaxf(v13.m128_f32[0], v11.m128_f32[0]), v12.m128_f32[0])));
        *((_QWORD *)&v22 + 1) = __PAIR64__(
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      fmaxf(
                                        _mm_shuffle_ps(v13, v13, 255).m128_f32[0],
                                        _mm_shuffle_ps(v11, v11, 255).m128_f32[0]),
                                      _mm_shuffle_ps(v12, v12, 255).m128_f32[0])),
                                  COERCE_UNSIGNED_INT(
                                    fminf(
                                      fmaxf(
                                        _mm_shuffle_ps(v13, v13, 170).m128_f32[0],
                                        _mm_shuffle_ps(v11, v11, 170).m128_f32[0]),
                                      _mm_shuffle_ps(v12, v12, 170).m128_f32[0])));
        *(_OWORD *)(v3 + 8 * v4) = v22;
        goto LABEL_6;
    }
    v19 = 2757;
LABEL_10:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v19);
    return v2;
  }
  v8 = *(float *)(v3 + 8 * v6);
  v9 = fmaxf(*(float *)(v3 + 8 * v4), *(float *)(v3 + 8 * v5));
  *(_DWORD *)(v3 + 8 * v4 + 64) = 18;
  *(float *)(v3 + 8 * v4) = fminf(v9, v8);
LABEL_6:
  *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
