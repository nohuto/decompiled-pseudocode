/*
 * XREFs of ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x1801B857C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18020596C (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Inverse(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // xmm1_8
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  unsigned int v11; // [rsp+20h] [rbp-29h]
  float v12[4]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-9h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+80h] [rbp+37h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v11 = 2944;
LABEL_13:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v11);
    return v2;
  }
  v2 = 0;
  v3 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v3 + 72) == 104 )
  {
    v7 = *(_QWORD *)(v3 + 16);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)v3;
    *(_QWORD *)&matrix.m[2][0] = v7;
    if ( !D2D1InvertMatrix(&matrix) )
    {
      v11 = 2970;
      goto LABEL_13;
    }
    v8 = *(_OWORD *)&matrix.m11;
    *(_DWORD *)(v3 + 72) = 104;
    v9 = *(_QWORD *)&matrix.m[2][0];
    *(_OWORD *)v3 = v8;
    *(_QWORD *)(v3 + 16) = v9;
  }
  else
  {
    if ( *(_DWORD *)(v3 + 72) != 265 )
    {
      v11 = 3009;
      goto LABEL_13;
    }
    v12[0] = 0.0;
    D2DMatrixInverse((struct D2DMatrix *)v13, v12, (const struct D2DMatrix *)v3);
    if ( v12[0] == 0.0 )
    {
      v11 = 2994;
      goto LABEL_13;
    }
    v4 = v13[1];
    *(_OWORD *)v3 = v13[0];
    *(_DWORD *)(v3 + 72) = 265;
    v5 = v13[2];
    *(_OWORD *)(v3 + 16) = v4;
    v6 = v13[3];
    *(_OWORD *)(v3 + 32) = v5;
    *(_OWORD *)(v3 + 48) = v6;
  }
  *(_BYTE *)(v3 + 76) = 1;
  return v2;
}
