/*
 * XREFs of ExCancelTimer @ 0x14012AFC0
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14074F788 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1400E0F34 (ExpCheckForFreedEnhancedTimer.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 */

char __fastcall ExCancelTimer(ULONG_PTR a1)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1);
}
