/*
 * XREFs of ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180014D30
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1IU_LUID@@_N@Z @ 0x18001473C (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180014190 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 */

LARGE_INTEGER *__fastcall CTelemetryTouchLatencyAnalysis::AllocateScenario(CTelemetryTouchLatencyAnalysis *this)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v2; // rsi
  unsigned int v3; // r8d
  unsigned __int64 *v4; // rdx
  LARGE_INTEGER *v5; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx

  v2 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 8);
  v3 = 0;
  v4 = (unsigned __int64 *)((char *)this + 88);
  while ( *((_DWORD *)v4 - 4) )
  {
    v7 = *((_QWORD *)v2 + 10);
    if ( !v7 )
      v7 = *((_QWORD *)v2 + 11);
    v8 = *v4;
    if ( !*v4 )
      v8 = v4[1];
    if ( v7 > v8 )
      v2 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 248 * v3 + 8);
    ++v3;
    v4 += 31;
    if ( v3 >= 0xA )
      goto LABEL_12;
  }
  v5 = (LARGE_INTEGER *)((char *)this + 248 * v3 + 8);
  if ( v5 )
    goto LABEL_4;
LABEL_12:
  CTelemetryTouchLatencyAnalysis::RetireScenario(this, v2, 1, 0);
  v5 = (LARGE_INTEGER *)v2;
LABEL_4:
  v5[8].LowPart = 1;
  ++*(_DWORD *)this;
  QueryPerformanceCounter(v5 + 28);
  return v5;
}
