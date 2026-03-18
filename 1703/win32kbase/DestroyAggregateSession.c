/*
 * XREFs of DestroyAggregateSession @ 0x1C01BD354
 * Callers:
 *     TlgUnregisterAggregateProvider @ 0x1C01BD280 (TlgUnregisterAggregateProvider.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C01BD5F0 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C01BD38C (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  if ( P )
  {
    if ( P[52] )
      CancelTimerCallbacksAndDeleteTimer(P);
    ExFreePoolWithTag(P, 0);
  }
}
