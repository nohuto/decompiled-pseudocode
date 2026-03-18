/*
 * XREFs of ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800286B0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180027984 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180027FD4 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios(CTelemetryTouchLatencyAnalysis *this)
{
  char *v2; // rbx
  __int64 v3; // rsi
  CTelemetryTouchLatencyAnalysis *v4; // rcx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)this )
  {
    v5 = 0LL;
    QueryPerformanceCounter((LARGE_INTEGER *)&v5);
    v2 = (char *)this + 8;
    v3 = 10LL;
    do
    {
      if ( *((_QWORD *)v2 + 1) )
      {
        if ( (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, *((_QWORD *)v2 + 22), v5) >= 0xFA0 )
          CTelemetryTouchLatencyAnalysis::RetireScenario(
            v4,
            (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v2,
            1,
            1);
      }
      v2 += 200;
      --v3;
    }
    while ( v3 );
  }
}
