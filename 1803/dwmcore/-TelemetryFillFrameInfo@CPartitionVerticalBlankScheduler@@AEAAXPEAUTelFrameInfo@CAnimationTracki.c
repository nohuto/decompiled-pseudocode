/*
 * XREFs of ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18005A614
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x18005A4F0 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x18005A550 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x18005A5B0 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(
        CPartitionVerticalBlankScheduler *this,
        struct CAnimationTracking::TelFrameInfo *a2,
        struct CFrameInfo *a3)
{
  char v3; // al

  if ( !a3 )
  {
    a3 = (struct CFrameInfo *)*((_QWORD *)this + 3230);
    if ( !*(_QWORD *)a3 )
      a3 = (struct CFrameInfo *)*((_QWORD *)this + 3231);
  }
  v3 = 1;
  if ( *((_DWORD *)a3 + 118) != 1 || *((_BYTE *)this + 30568) || *((_BYTE *)this + 30569) )
    v3 = 0;
  *(_BYTE *)a2 = v3;
  *((_QWORD *)a2 + 1) = *(_QWORD *)a3;
  *((_QWORD *)a2 + 2) = 10000000 * (*((_QWORD *)a3 + 183) / g_qpcFrequency.QuadPart)
                      + (unsigned __int64)(10000000 * (*((_QWORD *)a3 + 183) % g_qpcFrequency.QuadPart))
                      / g_qpcFrequency.QuadPart;
}
