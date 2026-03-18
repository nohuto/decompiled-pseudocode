/*
 * XREFs of PopComputeWatchdogTimeout @ 0x140167974
 * Callers:
 *     PoQueryWatchdogTime @ 0x1400B8790 (PoQueryWatchdogTime.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140166428 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopEnableIrpWatchdog @ 0x1401678D8 (PopEnableIrpWatchdog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopComputeWatchdogTimeout(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 188);
  if ( !v1 && *(_DWORD *)(a1 + 192) == 1 || v1 == 1 && *(_DWORD *)(a1 + 192) == 1 )
    return (unsigned int)PopWatchdogResumeTimeout;
  else
    return (unsigned int)PopWatchdogSleepTimeout;
}
