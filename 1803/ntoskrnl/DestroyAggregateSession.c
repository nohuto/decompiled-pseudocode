/*
 * XREFs of DestroyAggregateSession @ 0x1407F5708
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x14064AF18 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x14064B0EC (CreateTlgAggregateSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1407F5684 (CancelTimerCallbacksAndDeleteTimer.c)
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
