/*
 * XREFs of TlgAggregateFlush @ 0x1402699F8
 * Callers:
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 * Callees:
 *     FlushTimerCallbackKernelMode @ 0x14003C860 (FlushTimerCallbackKernelMode.c)
 */

void __fastcall TlgAggregateFlush(__int64 a1, __int64 a2)
{
  _BYTE *CallbackContext; // rcx
  _QWORD *v3; // r8

  if ( (ETWENABLECALLBACK *)stru_14033C3C0.EnableCallback == RegisteredProviderEtwCallback )
  {
    CallbackContext = stru_14033C3C0.CallbackContext;
    v3 = stru_14033C3C0.CallbackContext;
    if ( KeGetCurrentIrql() >= 2u
      || (CallbackContext = stru_14033C3C0.CallbackContext, (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0) )
    {
      CallbackContext[428] = 1;
      FlushTimerCallbackKernelMode(v3[52], (__int64)(v3 + 33));
    }
    else
    {
      LookUpTableFlushComplete(stru_14033C3C0.CallbackContext, a2, stru_14033C3C0.CallbackContext);
    }
  }
}
