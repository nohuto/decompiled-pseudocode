/*
 * XREFs of DestroyAggregateSession @ 0x1C01C43B4
 * Callers:
 *     CreateTlgAggregateSession @ 0x1C01C4008 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C01C40AC (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1C01C42D8 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C01C43F0 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer(P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
