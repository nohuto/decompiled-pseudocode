/*
 * XREFs of ?ScreenOnStudyStopCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0030860
 * Callers:
 *     <none>
 * Callees:
 *     LogMonitorOnOffTelemetry @ 0x1C022D43C (LogMonitorOnOffTelemetry.c)
 */

__int64 __fastcall ScreenOnStudyStopCallback(struct DXGADAPTER *a1, void *a2, __int64 a3)
{
  LOBYTE(a3) = 4;
  return LogMonitorOnOffTelemetry(a2, a1, a3);
}
