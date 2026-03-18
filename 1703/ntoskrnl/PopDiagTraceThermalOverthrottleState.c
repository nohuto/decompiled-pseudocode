/*
 * XREFs of PopDiagTraceThermalOverthrottleState @ 0x1402322D0
 * Callers:
 *     PopUpdateOverThrottledCount @ 0x1406CBF70 (PopUpdateOverThrottledCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagTraceThermalOverthrottleState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, &POP_ETW_EVENT_THERMAL_ZONE_OVERTHROTTLED_UPDATE);
}
