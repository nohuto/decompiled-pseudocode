/*
 * XREFs of ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJXZ @ 0x18017E90C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromSkew(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  unsigned int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+38h] [rbp-30h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v9 = 6234;
LABEL_8:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = 9LL * (v1 - 3);
  if ( *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64) != 18
    || *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) != 18
    || *(_DWORD *)(v4 + 72LL * (v1 - 1) + 64) != 35 )
  {
    v9 = 6251;
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(v4 + 72LL * (v1 - 1));
  D2D1MakeSkewMatrix(
    *(float *)(v4 + 72LL * (v1 - 3)) * 57.295776,
    *(float *)(v4 + 72LL * (v1 - 2)) * 57.295776,
    (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)(unsigned int)v10, (__m128)HIDWORD(v10)),
    &matrix);
  v6 = *(_OWORD *)&matrix.m11;
  *(_DWORD *)(v4 + 8 * v5 + 64) = 104;
  v7 = *(_QWORD *)&matrix.m[2][0];
  *(_OWORD *)(v4 + 8 * v5) = v6;
  *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
  *(_QWORD *)(v4 + 8 * v5 + 16) = v7;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
