/*
 * XREFs of PopComputeWatchdogTimeout @ 0x1400B38A4
 * Callers:
 *     PopEnableIrpWatchdog @ 0x1400B3804 (PopEnableIrpWatchdog.c)
 *     PoQueryWatchdogTime @ 0x1400F1DC0 (PoQueryWatchdogTime.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1401232F0 (PopDiagTraceIrpFinishTelemetry.c)
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
