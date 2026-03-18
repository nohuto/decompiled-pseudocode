/*
 * XREFs of ?Max@CExpressionValueStack@@QEAAJXZ @ 0x18001F528
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Max(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // eax
  float v7; // xmm0_4
  __m128 v9; // xmm3
  __m128 v10; // xmm4
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  float v13; // xmm0_4
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  unsigned int v16; // [rsp+20h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp+10h]
  __int64 v21; // [rsp+78h] [rbp+18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 2 )
  {
    v16 = 2548;
    goto LABEL_9;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 9LL * (v1 - 2);
  v5 = 9LL * (v1 - 1);
  v6 = *(_DWORD *)(v3 + 8 * v4 + 64);
  if ( v6 != *(_DWORD *)(v3 + 8 * v5 + 64) )
  {
    v16 = 2572;
    goto LABEL_9;
  }
  if ( v6 != 18 )
  {
    switch ( v6 )
    {
      case '#':
        v20 = *(_QWORD *)(v3 + 8 * v4);
        v14 = (__m128)(unsigned int)v20;
        v21 = *(_QWORD *)(v3 + 8 * v5);
        v15 = (__m128)HIDWORD(v20);
        v14.m128_f32[0] = fmaxf(*(float *)&v20, *(float *)&v21);
        v15.m128_f32[0] = fmaxf(*((float *)&v20 + 1), *((float *)&v21 + 1));
        *(_DWORD *)(v3 + 8 * v4 + 64) = 35;
        *(_QWORD *)(v3 + 8 * v4) = _mm_unpacklo_ps(v14, v15).m128_u64[0];
        goto LABEL_5;
      case '4':
        v17 = *(_QWORD *)(v3 + 8 * v4);
        v11 = (__m128)(unsigned int)v17;
        v12 = (__m128)HIDWORD(v17);
        v19 = *(_QWORD *)(v3 + 8 * v5);
        v11.m128_f32[0] = fmaxf(*(float *)&v17, *(float *)&v19);
        v12.m128_f32[0] = fmaxf(*((float *)&v17 + 1), *((float *)&v19 + 1));
        v13 = fmaxf(*(float *)(v3 + 8 * v4 + 8), *(float *)(v3 + 8 * v5 + 8));
        *(_DWORD *)(v3 + 8 * v4 + 64) = 52;
        *(_QWORD *)(v3 + 8 * v4) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
        *(float *)(v3 + 8 * v4 + 8) = v13;
        goto LABEL_5;
      case 'E':
        v9 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v5));
        *(_DWORD *)(v3 + 8 * v4 + 64) = 69;
        v10 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 8 * v4));
        *(_QWORD *)&v18 = __PAIR64__(
                            COERCE_UNSIGNED_INT(fmaxf(_mm_shuffle_ps(v10, v10, 85).m128_f32[0], _mm_shuffle_ps(
                                                                                                  v9,
                                                                                                  v9,
                                                                                                  85).m128_f32[0])),
                            COERCE_UNSIGNED_INT(fmaxf(v10.m128_f32[0], v9.m128_f32[0])));
        *((_QWORD *)&v18 + 1) = __PAIR64__(
                                  COERCE_UNSIGNED_INT(
                                    fmaxf(
                                      _mm_shuffle_ps(v10, v10, 255).m128_f32[0],
                                      _mm_shuffle_ps(v9, v9, 255).m128_f32[0])),
                                  COERCE_UNSIGNED_INT(
                                    fmaxf(
                                      _mm_shuffle_ps(v10, v10, 170).m128_f32[0],
                                      _mm_shuffle_ps(v9, v9, 170).m128_f32[0])));
        *(_OWORD *)(v3 + 8 * v4) = v18;
        goto LABEL_5;
    }
    v16 = 2628;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v16);
    return v2;
  }
  v7 = fmaxf(*(float *)(v3 + 8 * v4), *(float *)(v3 + 8 * v5));
  *(_DWORD *)(v3 + 8 * v4 + 64) = 18;
  *(float *)(v3 + 8 * v4) = v7;
LABEL_5:
  *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
  --*((_DWORD *)this + 4);
  return v2;
}
