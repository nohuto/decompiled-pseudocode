/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x1C0017540
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0017438 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C0046B44 (StorpUninititalizePerUnitPerfTelemetry.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C0062D80 (StorpInititalizePerUnitPerfTelemetry.c)
 */

void __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  bool v1; // zf

  *(_QWORD *)(a1 + 1808) = 1LL;
  v1 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 1744) = 0LL;
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_QWORD *)(a1 + 1752) = 0LL;
  *(_QWORD *)(a1 + 1760) = 0LL;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_DWORD *)(a1 + 1816) = 0;
  if ( v1 )
  {
    *(_DWORD *)(a1 + 1876) = 0;
  }
  else if ( (unsigned int)StorpInititalizePerUnitPerfTelemetry() )
  {
    StorpUninititalizePerUnitPerfTelemetry(a1);
    *(_DWORD *)(a1 + 1876) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1876) = 1;
  }
}
