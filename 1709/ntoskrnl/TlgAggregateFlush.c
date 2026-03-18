/*
 * XREFs of TlgAggregateFlush @ 0x140294764
 * Callers:
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 * Callees:
 *     FlushTimerCallbackKernelMode @ 0x140131E80 (FlushTimerCallbackKernelMode.c)
 *     LookUpTableFlushComplete @ 0x1404F06DC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateFlush(__int64 a1, __int64 a2)
{
  _BYTE *CallbackContext; // rcx
  _QWORD *v3; // r8
  __int64 v4; // rdx

  if ( (ETWENABLECALLBACK *)stru_1403549F0.EnableCallback == RegisteredProviderEtwCallback )
  {
    CallbackContext = stru_1403549F0.CallbackContext;
    v3 = stru_1403549F0.CallbackContext;
    if ( KeGetCurrentIrql() >= 2u
      || (CallbackContext = stru_1403549F0.CallbackContext, (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0) )
    {
      v4 = *((_QWORD *)stru_1403549F0.CallbackContext + 33);
      CallbackContext[372] = 1;
      FlushTimerCallbackKernelMode(v3[45], v4);
    }
    else
    {
      LookUpTableFlushComplete(stru_1403549F0.CallbackContext, a2, stru_1403549F0.CallbackContext);
    }
  }
}
