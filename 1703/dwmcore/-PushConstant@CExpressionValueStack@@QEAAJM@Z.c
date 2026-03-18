/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180135484
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180181770 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x18003390C (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, float a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx

  v3 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1D6u);
  }
  else
  {
    ++*((_DWORD *)this + 4);
    v5 = *((_QWORD *)this + 3);
    v6 = 9LL * (unsigned int)(*((_DWORD *)this + 4) - 1);
    *(float *)(v5 + 8 * v6) = a2;
    *(_DWORD *)(v5 + 8 * v6 + 64) = 18;
    *(_BYTE *)(v5 + 8 * v6 + 68) = 1;
  }
  return v4;
}
