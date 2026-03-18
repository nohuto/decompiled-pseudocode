/*
 * XREFs of ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x180183DD4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800BAE30 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     fmodf_0 @ 0x1800C5D68 (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rbp
  float v6; // xmm8_4
  float v7; // xmm6_4
  ColorSpaceHelpers *v8; // rcx
  __int128 v9; // xmm0
  unsigned int v11; // [rsp+20h] [rbp-58h]
  float v12[8]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v11 = 5706;
LABEL_8:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, v11);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = 9LL * (v1 - 3);
  if ( *(_DWORD *)(v4 + 72LL * (v1 - 3) + 64) != 18
    || *(_DWORD *)(v4 + 72LL * (v1 - 2) + 64) != 18
    || *(_DWORD *)(v4 + 72LL * (v1 - 1) + 64) != 18 )
  {
    v11 = 5723;
    goto LABEL_8;
  }
  v6 = fmaxf(fminf(*(float *)(v4 + 72LL * (v1 - 1)), 1.0), 0.0);
  v7 = fmaxf(fminf(*(float *)(v4 + 72LL * (v1 - 2)), 1.0), 0.0);
  fmodf_0(*(float *)(v4 + 72LL * (v1 - 3)), 6.2831855);
  ColorSpaceHelpers::Color_RGBAfromHSLA(v8, v7, v6, 1.0, v12, &v12[1], &v12[2], &v12[3]);
  v9 = *(_OWORD *)v12;
  *(_DWORD *)(v4 + 8 * v5 + 64) = 70;
  *(_BYTE *)(v4 + 8 * v5 + 68) = 1;
  *(_OWORD *)(v4 + 8 * v5) = v9;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
