/*
 * XREFs of ?TelemetryRefAnimationScenario@CIndependentRefreshRateScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x18013E400
 * Callers:
 *     <none>
 * Callees:
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800BA7E8 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18013E2B4 (-TelemetryFillFrameInfo@CIndependentRefreshRateScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::TelemetryRefAnimationScenario(
        CIndependentRefreshRateScheduler *this,
        __int64 a2,
        __int64 a3,
        const struct _GUID *a4)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  unsigned int v7; // r11d
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  CIndependentRefreshRateScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v9, 0LL);
  return CAnimationTracking::RefAnimationScenario(
           (CAnimationTracking *)(v4 + 21832),
           v7,
           v6,
           v5,
           (const struct CAnimationTracking::TelFrameInfo *)v9);
}
