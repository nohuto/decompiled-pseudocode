/*
 * XREFs of ?Log10@CExpressionValueStack@@QEAAJXZ @ 0x1801B9220
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     log10f_0 @ 0x1800DD3D1 (log10f_0.c)
 */

__int64 __fastcall CExpressionValueStack::Log10(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rbx
  float v3; // xmm6_4
  unsigned int v4; // edi
  unsigned int v6; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v6 = 4932;
LABEL_8:
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v6);
    return v4;
  }
  v2 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
  if ( *(_DWORD *)(v2 + 72) != 18 )
  {
    v6 = 4973;
    goto LABEL_8;
  }
  v3 = log10f_0(*(float *)v2);
  v4 = 0;
  if ( _isnan(v3) )
  {
    v6 = 4958;
    goto LABEL_8;
  }
  *(float *)v2 = v3;
  *(_DWORD *)(v2 + 72) = 18;
  *(_BYTE *)(v2 + 76) = 1;
  return v4;
}
