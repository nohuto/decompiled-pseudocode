/*
 * XREFs of ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x180065990
 * Callers:
 *     ?Partition_TelemetryAnimationScenarioUnreference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE@@@Z @ 0x18005C558 (-Partition_TelemetryAnimationScenarioUnreference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCRe.c)
 * Callees:
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180065A64 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800BAB58 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3,
        const struct _GUID *a4)
{
  __int64 v4; // rcx
  const struct _GUID *v5; // r9
  unsigned __int64 v6; // r10
  unsigned int v7; // r11d
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v8, 0LL);
  CAnimationTracking::UnrefAnimationScenario(
    (CAnimationTracking *)(v4 + 21832),
    v7,
    v6,
    v5,
    (const struct CAnimationTracking::TelFrameInfo *)v8);
}
