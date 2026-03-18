/*
 * XREFs of ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x18012CD34
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18012B94C (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18012B968 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
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
        if ( (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, *((_QWORD *)v2 + 21), v5) >= 0xFA0 )
          CTelemetryTouchLatencyAnalysis::RetireScenario(
            v4,
            (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v2,
            1,
            1);
      }
      v2 += 192;
      --v3;
    }
    while ( v3 );
  }
}
