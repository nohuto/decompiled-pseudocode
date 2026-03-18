/*
 * XREFs of ?Conditional@CExpressionValueStack@@QEAAJPEAUExpressionConditionalNode@@PEA_N@Z @ 0x1801B7DA4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Conditional(
        CExpressionValueStack *this,
        struct ExpressionConditionalNode *a2,
        bool *a3)
{
  int v3; // eax
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = *((_DWORD *)this + 4);
  if ( v3 )
  {
    v7 = (unsigned int)(v3 - 1);
    v6 = 0;
    v8 = *((_QWORD *)this + 3) + 80 * v7;
    if ( *(_DWORD *)(v8 + 72) == 17 )
    {
      *a3 = *(_BYTE *)v8;
      *((_DWORD *)this + 4) = v7;
      return v6;
    }
    v10 = 8064;
  }
  else
  {
    v10 = 8045;
  }
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v10);
  return v6;
}
