/*
 * XREFs of ?TelemetryBeginAnimationScenario@CIndependentRefreshRateScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x18013E260
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800BA998 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18013E2B4 (-TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::TelemetryBeginAnimationScenario(
        CIndependentRefreshRateScheduler *this,
        __int64 a2,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rcx
  unsigned __int16 *v5; // r9
  unsigned int v6; // r10d
  const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *v7; // r11
  _BYTE v9[24]; // [rsp+30h] [rbp-28h] BYREF

  CIndependentRefreshRateScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v9, 0LL);
  return CAnimationTracking::BeginAnimationScenario(
           (CAnimationTracking *)(v4 + 21832),
           v6,
           v7,
           v5,
           (const struct CAnimationTracking::TelFrameInfo *)v9);
}
