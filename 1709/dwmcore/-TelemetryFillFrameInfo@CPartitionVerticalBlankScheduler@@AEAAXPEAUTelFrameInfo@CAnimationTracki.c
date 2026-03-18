/*
 * XREFs of ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x1800113E4
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x1800112C0 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x180011320 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180011380 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(
        CPartitionVerticalBlankScheduler *this,
        struct CAnimationTracking::TelFrameInfo *a2,
        struct CFrameInfo *a3)
{
  if ( !a3 )
  {
    a3 = (struct CFrameInfo *)*((_QWORD *)this + 2625);
    if ( !*(_QWORD *)a3 )
      a3 = (struct CFrameInfo *)*((_QWORD *)this + 2626);
  }
  *(_BYTE *)a2 = *((_DWORD *)a3 + 160) == 1 && !*((_BYTE *)this + 24792) && !*((_BYTE *)this + 24793);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a3;
  *((_QWORD *)a2 + 2) = 10000000 * (*((_QWORD *)this + 11) / g_qpcFrequency.QuadPart)
                      + (unsigned __int64)(10000000 * (*((_QWORD *)this + 11) % g_qpcFrequency.QuadPart))
                      / g_qpcFrequency.QuadPart;
}
