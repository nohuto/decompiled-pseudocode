/*
 * XREFs of DestroyAggregateSession @ 0x1C023CD48
 * Callers:
 *     CreateTlgAggregateSession @ 0x1C023CC04 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C023D15C (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1C023D26C (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C023CAD8 (CancelTimerCallbacksAndDeleteTimer.c)
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
