/*
 * XREFs of ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJI@Z @ 0x1801B940C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromSkew(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // edx
  char v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  float v9; // xmm1_4
  float v10; // xmm0_4
  D2D1_POINT_2F v11; // r8
  __int64 v12; // r8
  __int64 v13; // rax
  float v14; // xmm1_4
  __int64 v15; // xmm1_8
  unsigned int v17; // [rsp+20h] [rbp-48h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)this + 4);
  v6 = 0;
  if ( v4 < a2 )
  {
    v17 = 6010;
    goto LABEL_3;
  }
  if ( a2 == 2 )
  {
    v7 = *((_QWORD *)this + 3) + 80LL * (v4 - 2);
    v8 = *((_QWORD *)this + 3) + 80LL * (v4 - 1);
    if ( *(_DWORD *)(v7 + 72) != 18 || *(_DWORD *)(v8 + 72) != 18 )
      goto LABEL_14;
    v9 = *(float *)v8 * 57.295776;
    v10 = *(float *)v7 * 57.295776;
    v11 = (D2D1_POINT_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  else
  {
    if ( a2 != 3 )
      goto LABEL_14;
    v7 = *((_QWORD *)this + 3) + 80LL * (v4 - 3);
    v12 = *((_QWORD *)this + 3) + 80LL * (v4 - 2);
    v13 = *((_QWORD *)this + 3) + 80LL * (v4 - 1);
    if ( *(_DWORD *)(v7 + 72) != 18 || *(_DWORD *)(v12 + 72) != 18 || *(_DWORD *)(v13 + 72) != 35 )
      goto LABEL_14;
    v14 = *(float *)v12;
    v11 = *(D2D1_POINT_2F *)v13;
    v9 = v14 * 57.295776;
    v10 = *(float *)v7 * 57.295776;
  }
  v6 = 1;
  D2D1MakeSkewMatrix(v10, v9, v11, &matrix);
  v15 = *(_QWORD *)&matrix.m[2][0];
  *(_OWORD *)v7 = *(_OWORD *)&matrix.m11;
  *(_BYTE *)(v7 + 76) = 1;
  *(_QWORD *)(v7 + 16) = v15;
  *(_DWORD *)(v7 + 72) = 104;
LABEL_14:
  if ( v6 )
  {
    *((_DWORD *)this + 4) += 1 - a2;
    return v3;
  }
  v17 = 6072;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17);
  return v3;
}
