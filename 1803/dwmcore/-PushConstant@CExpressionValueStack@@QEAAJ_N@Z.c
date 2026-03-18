/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x1801BAFF4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053960 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x180052CD4 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx

  v4 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v4,
      0x1E1u);
  }
  else
  {
    v6 = *((_QWORD *)this + 3) + 80LL * (unsigned int)(*((_DWORD *)this + 4))++;
    *(_DWORD *)(v6 + 72) = 17;
    *(_BYTE *)v6 = a2;
    *(_BYTE *)(v6 + 76) = 1;
  }
  return v5;
}
