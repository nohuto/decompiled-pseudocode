/*
 * XREFs of ?Ceil@CExpressionValueStack@@QEAAJXZ @ 0x1801B7774
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Ceil(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rbx
  float v4; // xmm0_4
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v3 + 72) == 18 )
    {
      v4 = *(float *)v3;
      *(_DWORD *)(v3 + 72) = 18;
      *(float *)v3 = ceilf_0(v4);
      *(_BYTE *)(v3 + 76) = 1;
      return 0;
    }
    v6 = 4549;
  }
  else
  {
    v6 = 4521;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v6);
  return v2;
}
