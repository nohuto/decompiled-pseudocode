/*
 * XREFs of ?TelemetryUnrefAnimationScenario@CIndependentRefreshRateScheduler@@UEAAXI_KPEBU_GUID@@@Z @ 0x18013E440
 * Callers:
 *     <none>
 * Callees:
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800BAB58 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18013E2B4 (-TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 */

void __fastcall CIndependentRefreshRateScheduler::TelemetryUnrefAnimationScenario(
        CIndependentRefreshRateScheduler *this,
        __int64 a2,
        __int64 a3,
        const struct _GUID *a4)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  int v7; // r11d
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  CIndependentRefreshRateScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v8, 0LL);
  CAnimationTracking::UnrefAnimationScenario(
    (CAnimationTracking *)(v4 + 21832),
    v7,
    v6,
    v5,
    (const struct CAnimationTracking::TelFrameInfo *)v8);
}
