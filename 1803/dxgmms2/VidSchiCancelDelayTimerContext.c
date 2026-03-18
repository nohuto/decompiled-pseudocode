/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x1C0012AC4
 * Callers:
 *     VidSchFlushContext @ 0x1C0079050 (VidSchFlushContext.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00BBA10 (VidSchiCancelDelayTimerDevice.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x1C0012B20 (VidSchiDelayReadyRoutine.c)
 */

void __fastcall VidSchiCancelDelayTimerContext(char *DeferredContext)
{
  KIRQL v2; // bl

  if ( !KeCancelTimer((PKTIMER)(DeferredContext + 504)) )
    KeFlushQueuedDpcs();
  v2 = KfRaiseIrql(2u);
  VidSchiDelayReadyRoutine(0LL, DeferredContext, 0LL, 0LL);
  KeLowerIrql(v2);
}
