/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x1801B7390
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Absolute(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rax
  __int128 v7; // xmm0
  int v8; // eax
  __m128 v9; // xmm0
  __m128 v10; // xmm4
  double v11; // xmm0_8
  float v12; // xmm2_4
  double v13; // xmm0_8
  double v14; // xmm0_8
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+40h] [rbp-10h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v2 = 0;
    v4 = 10LL * (unsigned int)(v1 - 1);
    v5 = *(_DWORD *)(v3 + 80LL * (unsigned int)(v1 - 1) + 72);
    switch ( v5 )
    {
      case 18:
        v14 = *(float *)(v3 + 8 * v4);
        *(_DWORD *)(v3 + 8 * v4 + 72) = 18;
        *(float *)(v3 + 8 * v4) = COERCE_DOUBLE(*(_QWORD *)&v14 & _xmm);
        break;
      case 35:
        v11 = *(float *)(v3 + 8 * v4);
        *(_DWORD *)(v3 + 8 * v4 + 72) = 35;
        v12 = COERCE_DOUBLE(*(_QWORD *)&v11 & _xmm);
        v13 = *(float *)(v3 + 8 * v4 + 4);
        *(float *)(v3 + 8 * v4) = v12;
        *(float *)(v3 + 8 * v4 + 4) = COERCE_DOUBLE(*(_QWORD *)&v13 & _xmm);
        break;
      case 52:
        v8 = *(_DWORD *)(v3 + 8 * v4 + 8);
        *(_QWORD *)&v17 = *(_QWORD *)(v3 + 8 * v4);
        v9 = (__m128)_mm_cvtps_pd((__m128)(unsigned int)v17);
        DWORD2(v17) = v8;
        *(_DWORD *)(v3 + 8 * v4 + 72) = 52;
        v10 = _mm_cvtpd_ps((__m128d)_mm_and_ps(v9, (__m128)(unsigned __int64)_xmm));
        v9.m128_f32[0] = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v17 + 2)) & _xmm);
        DWORD2(v17) = v9.m128_i32[0];
        *(_QWORD *)(v3 + 8 * v4) = _mm_unpacklo_ps(
                                     v10,
                                     _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                             (__m128)_mm_cvtps_pd((__m128)DWORD1(v17)),
                                                             (__m128)(unsigned __int64)_xmm))).m128_u64[0];
        *(_DWORD *)(v3 + 8 * v4 + 8) = v9.m128_i32[0];
        break;
      case 69:
        v6 = 0LL;
        v17 = *(_OWORD *)(v3 + 8 * v4);
        do
        {
          *(float *)((char *)&v18 + v6) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v17 + v6)) & _xmm);
          v6 += 4LL;
        }
        while ( v6 < 16 );
        v7 = v18;
        *(_DWORD *)(v3 + 8 * v4 + 72) = 69;
        *(_OWORD *)(v3 + 8 * v4) = v7;
        break;
      default:
        v16 = 776;
        goto LABEL_3;
    }
    *(_BYTE *)(v3 + 8 * v4 + 76) = 1;
    return v2;
  }
  v16 = 718;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v16);
  return v2;
}
