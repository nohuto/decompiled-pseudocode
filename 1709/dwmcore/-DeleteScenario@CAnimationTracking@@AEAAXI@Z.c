/*
 * XREFs of ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180003B10
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x18000345C (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryNotifyChannelDetach@CPartitionVerticalBlankScheduler@@UEAAXI@Z @ 0x180011270 (-TelemetryNotifyChannelDetach@CPartitionVerticalBlankScheduler@@UEAAXI@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180125EB4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1800044BC (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CAnimationTracking::DeleteScenario(CAnimationTracking *this, unsigned int a2)
{
  __int64 v3; // rdi
  CAnimationTracking::AnimationScenarioRunningStatistics *v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rax

  v3 = a2;
  v4 = *(CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8LL * a2);
  if ( v4 )
    CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v4, a2);
  v5 = *((_DWORD *)this + 6);
  if ( (unsigned int)v3 >= v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x216u);
  }
  else
  {
    v6 = v5 - 1;
    if ( (unsigned int)v3 < (unsigned int)v6 )
      *(_QWORD *)(*(_QWORD *)this + 8 * v3) = *(_QWORD *)(*(_QWORD *)this + 8 * v6);
    --*((_DWORD *)this + 6);
  }
}
