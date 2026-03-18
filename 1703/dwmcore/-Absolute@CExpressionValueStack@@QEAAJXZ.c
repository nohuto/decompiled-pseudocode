/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x18017C680
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  unsigned int v13; // [rsp+20h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-20h]
  __int128 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+60h] [rbp+10h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = 9LL * (unsigned int)(v1 - 1);
    v5 = *(_DWORD *)(v3 + 72LL * (unsigned int)(v1 - 1) + 64);
    switch ( v5 )
    {
      case 18:
        v11 = *(float *)(v3 + 8 * v4);
        *(_DWORD *)(v3 + 8 * v4 + 64) = 18;
        *(float *)(v3 + 8 * v4) = COERCE_DOUBLE(*(_QWORD *)&v11 & _xmm);
        break;
      case 35:
        v16 = *(_QWORD *)(v3 + 8 * v4);
        *(_DWORD *)(v3 + 8 * v4 + 64) = 35;
        *(_QWORD *)(v3 + 8 * v4) = _mm_unpacklo_ps(
                                     _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                             (__m128)_mm_cvtps_pd((__m128)(unsigned int)v16),
                                                             (__m128)_xmm)),
                                     _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                             (__m128)_mm_cvtps_pd((__m128)HIDWORD(v16)),
                                                             (__m128)_xmm))).m128_u64[0];
        break;
      case 52:
        v8 = *(_DWORD *)(v3 + 8 * v4 + 8);
        *(_QWORD *)&v14 = *(_QWORD *)(v3 + 8 * v4);
        v9 = (__m128)_mm_cvtps_pd((__m128)(unsigned int)v14);
        DWORD2(v14) = v8;
        *(_DWORD *)(v3 + 8 * v4 + 64) = 52;
        v10 = _mm_cvtpd_ps((__m128d)_mm_and_ps(v9, (__m128)(unsigned __int64)_xmm));
        v9.m128_f32[0] = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v14 + 2)) & _xmm);
        DWORD2(v14) = v9.m128_i32[0];
        *(_QWORD *)(v3 + 8 * v4) = _mm_unpacklo_ps(
                                     v10,
                                     _mm_cvtpd_ps((__m128d)_mm_and_ps(
                                                             (__m128)_mm_cvtps_pd((__m128)DWORD1(v14)),
                                                             (__m128)(unsigned __int64)_xmm))).m128_u64[0];
        *(_DWORD *)(v3 + 8 * v4 + 8) = v9.m128_i32[0];
        break;
      case 69:
        v6 = 0LL;
        v14 = *(_OWORD *)(v3 + 8 * v4);
        do
        {
          *(float *)((char *)&v15 + v6) = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)&v14 + v6)) & _xmm);
          v6 += 4LL;
        }
        while ( v6 < 16 );
        v7 = v15;
        *(_DWORD *)(v3 + 8 * v4 + 64) = 69;
        *(_OWORD *)(v3 + 8 * v4) = v7;
        break;
      default:
        v13 = 767;
        goto LABEL_3;
    }
    *(_BYTE *)(v3 + 8 * v4 + 68) = 1;
    return v2;
  }
  v13 = 709;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v13);
  return v2;
}
