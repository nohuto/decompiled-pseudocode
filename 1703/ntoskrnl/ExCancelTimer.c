/*
 * XREFs of ExCancelTimer @ 0x14012AB50
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140711C20 (EtwpUpdatePeriodicCaptureState.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x14012B210 (ExpCheckForFreedEnhancedTimer.c)
 */

__int64 __fastcall ExCancelTimer(ULONG_PTR a1, __int64 a2)
{
  ExpCheckForFreedEnhancedTimer(a1);
  return KeCancelTimer2(a1, a2);
}
