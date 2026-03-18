/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x1C000E9A4
 * Callers:
 *     VidSchFlushContext @ 0x1C0070900 (VidSchFlushContext.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00B3034 (VidSchiCancelDelayTimerDevice.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x1C000EA00 (VidSchiDelayReadyRoutine.c)
 */

void __fastcall VidSchiCancelDelayTimerContext(char *DeferredContext)
{
  KIRQL v2; // bl

  if ( !KeCancelTimer((PKTIMER)(DeferredContext + 496)) )
    KeFlushQueuedDpcs();
  v2 = KfRaiseIrql(2u);
  VidSchiDelayReadyRoutine(0LL, DeferredContext, 0LL, 0LL);
  KeLowerIrql(v2);
}
