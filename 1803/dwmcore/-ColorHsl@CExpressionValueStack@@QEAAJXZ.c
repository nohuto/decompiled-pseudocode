/*
 * XREFs of ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801B7A50
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800C5BB0 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     fmodf_0 @ 0x1800DD3CB (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rax
  float v7; // xmm8_4
  float v8; // xmm6_4
  ColorSpaceHelpers *v9; // rcx
  __int128 v10; // xmm0
  unsigned int v12; // [rsp+20h] [rbp-58h]
  float v13[8]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v12 = 5433;
LABEL_8:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12);
    return v2;
  }
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 3);
  v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v6 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
  if ( *(_DWORD *)(v4 + 72) != 18 || *(_DWORD *)(v5 + 72) != 18 || *(_DWORD *)(v6 + 72) != 18 )
  {
    v12 = 5449;
    goto LABEL_8;
  }
  v7 = fmaxf(fminf(*(float *)v6, 1.0), 0.0);
  v8 = fmaxf(fminf(*(float *)v5, 1.0), 0.0);
  fmodf_0(*(float *)v4, 6.2831855);
  ColorSpaceHelpers::Color_RGBAfromHSLA(v9, v8, v7, 1.0, v13, &v13[1], &v13[2], &v13[3]);
  v10 = *(_OWORD *)v13;
  *(_DWORD *)(v4 + 72) = 70;
  *(_BYTE *)(v4 + 76) = 1;
  *(_OWORD *)v4 = v10;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
