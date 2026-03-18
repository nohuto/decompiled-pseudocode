/*
 * XREFs of ExCancelTimer @ 0x140085540
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140587E20 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407B05FC (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x140085514 (ExpCheckForFreedEnhancedTimer.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1);
}
