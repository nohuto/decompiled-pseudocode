/*
 * XREFs of ?TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18013E2B4
 * Callers:
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 *     ?TelemetryBeginAnimationScenario@CIndependentRefreshRateScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x18013E260 (-TelemetryBeginAnimationScenario@CIndependentRefreshRateScheduler@@UEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?TelemetryRefAnimationScenario@CIndependentRefreshRateScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x18013E400 (-TelemetryRefAnimationScenario@CIndependentRefreshRateScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryUnrefAnimationScenario@CIndependentRefreshRateScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x18013E440 (-TelemetryUnrefAnimationScenario@CIndependentRefreshRateScheduler@@UEAAXI_KPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndependentRefreshRateScheduler::TelemetryFillFrameInfo(
        CIndependentRefreshRateScheduler *this,
        struct CAnimationTracking::TelFrameInfo *a2,
        struct CFrameInfo *a3)
{
  if ( !a3 )
  {
    a3 = (struct CFrameInfo *)*((_QWORD *)this + 2685);
    if ( !*(_QWORD *)a3 )
      a3 = (struct CFrameInfo *)*((_QWORD *)this + 2686);
  }
  *(_BYTE *)a2 = *((_DWORD *)a3 + 164) == 1 && !*((_BYTE *)this + 25472) && !*((_BYTE *)this + 25473);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a3;
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 18);
}
