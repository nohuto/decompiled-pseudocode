/*
 * XREFs of DestroyAggregateSession @ 0x140788F40
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1405AB198 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1405AB400 (CreateTlgAggregateSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140788EBC (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P);
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}
