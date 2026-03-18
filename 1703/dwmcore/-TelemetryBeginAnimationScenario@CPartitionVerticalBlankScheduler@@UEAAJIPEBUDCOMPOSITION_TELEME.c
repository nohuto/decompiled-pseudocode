/*
 * XREFs of ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180065A10
 * Callers:
 *     ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x18005C5D8 (-Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 * Callees:
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180065A64 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800BA998 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rcx
  const unsigned __int16 *v5; // r9
  unsigned int v6; // r10d
  const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *v7; // r11
  _BYTE v9[24]; // [rsp+30h] [rbp-28h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v9, 0LL);
  return CAnimationTracking::BeginAnimationScenario(
           (CAnimationTracking *)(v4 + 21832),
           v6,
           v7,
           v5,
           (const struct CAnimationTracking::TelFrameInfo *)v9);
}
