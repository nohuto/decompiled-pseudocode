/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x1C0013B18
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0013A10 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C0045B7C (StorpUninititalizePerUnitPerfTelemetry.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C005F19C (StorpInititalizePerUnitPerfTelemetry.c)
 */

void __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  bool v1; // zf

  *(_QWORD *)(a1 + 1776) = 1LL;
  v1 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 1712) = 0LL;
  *(_QWORD *)(a1 + 1736) = 0LL;
  *(_QWORD *)(a1 + 1744) = 0LL;
  *(_QWORD *)(a1 + 1720) = 0LL;
  *(_QWORD *)(a1 + 1728) = 0LL;
  *(_QWORD *)(a1 + 1752) = 0LL;
  *(_QWORD *)(a1 + 1760) = 0LL;
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_DWORD *)(a1 + 1784) = 0;
  if ( v1 )
  {
    *(_DWORD *)(a1 + 1844) = 0;
  }
  else if ( (unsigned int)StorpInititalizePerUnitPerfTelemetry() )
  {
    StorpUninititalizePerUnitPerfTelemetry(a1);
    *(_DWORD *)(a1 + 1844) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1844) = 1;
  }
}
