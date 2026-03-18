/*
 * XREFs of DestroyAggregateSession @ 0x1C00BFE3C
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C00821E0 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1C00823FC (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x1C00C005C (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C00BFDB4 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P, __int64 a2, __int64 a3)
{
  void *v4; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P, a2, a3);
    v4 = (void *)P[33];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    ExFreePoolWithTag(P, 0);
  }
}
