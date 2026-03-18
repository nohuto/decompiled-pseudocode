/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x1C0002174
 * Callers:
 *     VidSchFlushContext @ 0x1C004FDC0 (VidSchFlushContext.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00AA728 (VidSchiCancelDelayTimerDevice.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x1C00021D0 (VidSchiDelayReadyRoutine.c)
 */

void __fastcall VidSchiCancelDelayTimerContext(char *DeferredContext)
{
  KIRQL v2; // bl

  if ( !KeCancelTimer((PKTIMER)(DeferredContext + 520)) )
    KeFlushQueuedDpcs();
  v2 = KfRaiseIrql(2u);
  VidSchiDelayReadyRoutine(0LL, DeferredContext, 0LL, 0LL);
  KeLowerIrql(v2);
}
