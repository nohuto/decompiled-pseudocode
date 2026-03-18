/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180135568
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B370 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18002B0D0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x18003390C (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct CExpressionValue *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2A3u);
  else
    CExpressionValue::CopyFrom(
      (CExpressionValue *)(*((_QWORD *)this + 3) + 72LL * (unsigned int)(*((_DWORD *)this + 4))++),
      a2);
  return v5;
}
