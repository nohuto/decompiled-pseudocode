/*
 * XREFs of ?Matrix3x2FromRotation@CExpressionValueStack@@QEAAJI@Z @ 0x1801B92C8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromRotation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // edx
  char v6; // r15
  __int64 v7; // rdi
  D2D1_POINT_2F v8; // rdx
  __int64 v9; // rax
  __int64 v10; // xmm1_8
  unsigned int v12; // [rsp+20h] [rbp-48h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)this + 4);
  v6 = 0;
  if ( v4 < a2 )
  {
    v12 = 6106;
    goto LABEL_3;
  }
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
      goto LABEL_12;
    v7 = *((_QWORD *)this + 3) + 80LL * (v4 - 2);
    v9 = *((_QWORD *)this + 3) + 80LL * (v4 - 1);
    if ( *(_DWORD *)(v7 + 72) != 18 || *(_DWORD *)(v9 + 72) != 35 )
      goto LABEL_12;
    v8 = *(D2D1_POINT_2F *)v9;
    goto LABEL_11;
  }
  v7 = *((_QWORD *)this + 3) + 80LL * (v4 - 1);
  if ( *(_DWORD *)(v7 + 72) == 18 )
  {
    v8 = (D2D1_POINT_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
LABEL_11:
    v6 = 1;
    D2D1MakeRotateMatrix(*(float *)v7 * 57.295776, v8, &matrix);
    v10 = *(_QWORD *)&matrix.m[2][0];
    *(_OWORD *)v7 = *(_OWORD *)&matrix.m11;
    *(_BYTE *)(v7 + 76) = 1;
    *(_QWORD *)(v7 + 16) = v10;
    *(_DWORD *)(v7 + 72) = 104;
  }
LABEL_12:
  if ( v6 )
  {
    *((_DWORD *)this + 4) += 1 - a2;
    return v3;
  }
  v12 = 6148;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v12);
  return v3;
}
