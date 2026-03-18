/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x180052608
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorRgb(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx
  __int64 v3; // rdi
  unsigned int v4; // ebx
  float v5; // xmm0_4
  unsigned int v7; // [rsp+20h] [rbp-28h]
  float v8[6]; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 4 )
  {
    v7 = 5348;
LABEL_10:
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v7);
    return v4;
  }
  v2 = *((_QWORD *)this + 3);
  v3 = v2 + 80LL * (v1 - 4);
  if ( *(_DWORD *)(v3 + 72) != 18
    || *(_DWORD *)(v2 + 80LL * (v1 - 3) + 72) != 18
    || *(_DWORD *)(v2 + 80LL * (v1 - 2) + 72) != 18
    || (v4 = 0, *(_DWORD *)(v2 + 80LL * (v1 - 1) + 72) != 18) )
  {
    v7 = 5366;
    goto LABEL_10;
  }
  v8[0] = fmaxf(fminf(*(float *)(v2 + 80LL * (v1 - 3)), 255.0), 0.0) / 255.0;
  v5 = fminf(*(float *)(v2 + 80LL * (v1 - 2)), 255.0);
  v8[2] = fmaxf(fminf(*(float *)(v2 + 80LL * (v1 - 1)), 255.0), 0.0) / 255.0;
  *(_DWORD *)(v3 + 72) = 70;
  *(_BYTE *)(v3 + 76) = 1;
  v8[1] = fmaxf(v5, 0.0) / 255.0;
  v8[3] = fmaxf(fminf(*(float *)v3, 255.0), 0.0) / 255.0;
  *(_OWORD *)v3 = *(_OWORD *)v8;
  *((_DWORD *)this + 4) -= 3;
  return v4;
}
