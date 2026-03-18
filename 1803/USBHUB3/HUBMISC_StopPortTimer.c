/*
 * XREFs of HUBMISC_StopPortTimer @ 0x1C002AF40
 * Callers:
 *     HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer @ 0x1C000EF70 (HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer.c)
 *     HUBPSM20_StoppingReconnectTimerOnOvercurrentInD3Cold @ 0x1C000F160 (HUBPSM20_StoppingReconnectTimerOnOvercurrentInD3Cold.c)
 *     HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x1C000F180 (HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_StopPortTimer(__int64 a1)
{
  char v1; // al
  unsigned int v2; // ecx

  v1 = ExCancelTimer(*(_QWORD *)(a1 + 1312), 0LL);
  v2 = 3009;
  if ( v1 == 1 )
    return 3013;
  return v2;
}
