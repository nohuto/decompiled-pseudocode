/*
 * XREFs of ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x1801BAC0C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     powf @ 0x1800DB79C (powf.c)
 */

__int64 __fastcall CExpressionValueStack::Pow(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ecx
  float v7; // xmm6_4
  unsigned int v9; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v9 = 4792;
LABEL_10:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v9);
    return v3;
  }
  v3 = 0;
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v5 = *((_QWORD *)this + 3) + 80LL * (v1 - 1);
  v6 = *(_DWORD *)(v4 + 72);
  if ( v6 != *(_DWORD *)(v5 + 72) )
  {
    v9 = 4815;
    goto LABEL_10;
  }
  if ( v6 != 18 )
  {
    v9 = 4849;
    goto LABEL_10;
  }
  v7 = powf(*(float *)v4, *(float *)v5);
  if ( _isnan(v7) )
  {
    v9 = 4835;
    goto LABEL_10;
  }
  *(float *)v4 = v7;
  *(_DWORD *)(v4 + 72) = 18;
  *(_BYTE *)(v4 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v3;
}
