/*
 * XREFs of DestroyAggregateSession @ 0x1C00ADB5C
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C0076A1C (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x1C00ADD68 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C00ADAD8 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P, __int64 a2, __int64 a3)
{
  if ( P )
  {
    if ( P[52] )
      CancelTimerCallbacksAndDeleteTimer((__int64)P, a2, a3);
    ExFreePoolWithTag(P, 0);
  }
}
