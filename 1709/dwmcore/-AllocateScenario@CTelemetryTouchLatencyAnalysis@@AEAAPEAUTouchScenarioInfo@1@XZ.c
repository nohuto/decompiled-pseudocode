/*
 * XREFs of ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x18012A944
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x18012AF54 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18012B968 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 */

LARGE_INTEGER *__fastcall CTelemetryTouchLatencyAnalysis::AllocateScenario(CTelemetryTouchLatencyAnalysis *this)
{
  LARGE_INTEGER *v2; // rsi
  __int64 v3; // r8
  unsigned __int64 *v4; // rdx
  LARGE_INTEGER v5; // rax
  unsigned __int64 v6; // rcx
  LARGE_INTEGER *v7; // rbx

  v2 = (LARGE_INTEGER *)((char *)this + 8);
  v3 = 0LL;
  v4 = (unsigned __int64 *)((char *)this + 64);
  while ( *((_DWORD *)v4 - 5) )
  {
    v5 = v2[7];
    if ( !v5.QuadPart )
      v5 = v2[8];
    v6 = *v4;
    if ( !*v4 )
      v6 = v4[1];
    if ( v5.QuadPart > v6 )
      v2 = (LARGE_INTEGER *)((char *)this + 192 * v3 + 8);
    v3 = (unsigned int)(v3 + 1);
    v4 += 24;
    if ( (unsigned int)v3 >= 0xA )
      goto LABEL_12;
  }
  v7 = (LARGE_INTEGER *)((char *)this + 192 * v3 + 8);
  if ( v7 )
    goto LABEL_13;
LABEL_12:
  CTelemetryTouchLatencyAnalysis::RetireScenario(
    this,
    (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v2,
    1,
    0);
  v7 = v2;
LABEL_13:
  v7[4].HighPart = 1;
  ++*(_DWORD *)this;
  QueryPerformanceCounter(v7 + 21);
  return v7;
}
