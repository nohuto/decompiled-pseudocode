/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x1800A892C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x1801C91E0 (--GD2DMatrix@@QEBA-AU0@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  unsigned int *v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // xmm1_4
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  unsigned int v9; // xmm0_4
  _OWORD *v10; // rax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm0
  __int64 i; // rax
  __m128 v15; // xmm0
  unsigned int v16; // [rsp+20h] [rbp-29h]
  __m128 v17; // [rsp+30h] [rbp-19h]
  _BYTE v18[64]; // [rsp+50h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( !v1 )
  {
    v16 = 826;
    goto LABEL_10;
  }
  v3 = (unsigned int *)(*((_QWORD *)this + 3) + 72LL * (unsigned int)(v1 - 1));
  v4 = v3[16];
  if ( v4 != 35 )
  {
    switch ( v4 )
    {
      case 0x34u:
        v7 = (__m128)*v3;
        v8 = (__m128)v3[1];
        v9 = v3[2] ^ _xmm;
        v3[16] = 52;
        v17.m128_i32[2] = v9;
        *(_QWORD *)v3 = _mm_unpacklo_ps(
                          _mm_xor_ps(v7, (__m128)(unsigned int)_xmm),
                          _mm_xor_ps(v8, (__m128)(unsigned int)_xmm)).m128_u64[0];
        v3[2] = v9;
        goto LABEL_4;
      case 0x12u:
        *v3 ^= _xmm;
        v3[16] = 18;
        goto LABEL_4;
      case 0x45u:
        for ( i = 0LL; i < 4; ++i )
          v17.m128_i32[i] = v3[i] ^ _xmm;
        v15 = v17;
        v3[16] = 69;
        *(__m128 *)v3 = v15;
        goto LABEL_4;
      case 0x68u:
        v11 = (__m128)v3[4];
        v12 = (__m128)v3[5];
        v13 = _mm_xor_ps(*(__m128 *)v3, (__m128)_xmm);
        v3[16] = 104;
        *(__m128 *)v3 = v13;
        *((_QWORD *)v3 + 2) = _mm_unpacklo_ps(_mm_xor_ps(v11, (__m128)_xmm), _mm_xor_ps(v12, (__m128)_xmm)).m128_u64[0];
        v17 = v13;
        goto LABEL_4;
      case 0x109u:
        v10 = (_OWORD *)D2DMatrix::operator-(v3, v18);
        v3[16] = 265;
        *(_OWORD *)v3 = *v10;
        *((_OWORD *)v3 + 1) = v10[1];
        *((_OWORD *)v3 + 2) = v10[2];
        *((_OWORD *)v3 + 3) = v10[3];
        goto LABEL_4;
    }
    v16 = 888;
LABEL_10:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v16);
    return v2;
  }
  v5 = v3[1] ^ _xmm;
  *v3 ^= _xmm;
  v3[1] = v5;
  v3[16] = 35;
LABEL_4:
  *((_BYTE *)v3 + 68) = 1;
  return v2;
}
