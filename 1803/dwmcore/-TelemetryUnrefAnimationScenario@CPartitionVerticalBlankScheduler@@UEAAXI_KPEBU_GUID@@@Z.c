/*
 * XREFs of ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x18005A4F0
 * Callers:
 *     ?Partition_TelemetryAnimationScenarioUnreference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE@@@Z @ 0x18002DEE8 (-Partition_TelemetryAnimationScenarioUnreference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCRe.c)
 * Callees:
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18005A614 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800D0254 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        unsigned __int64 a3,
        const struct _GUID *a4)
{
  __int64 v7; // r11
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v8, 0LL);
  CAnimationTracking::UnrefAnimationScenario(
    (CAnimationTracking *)(v7 + 26184),
    a2,
    a3,
    a4,
    (const struct CAnimationTracking::TelFrameInfo *)v8);
}
