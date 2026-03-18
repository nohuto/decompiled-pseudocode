/*
 * XREFs of McTemplateU0xq @ 0x18014F948
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006B90 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1IU_LUID@@_N@Z @ 0x18001473C (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180014878 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x180014CAC (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18005A9B0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180079C9C (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18007A1B8 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18007A658 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?ExposeVisual@CoRenderHost@@QEAAJIPEAVCVisual@@_N@Z @ 0x180148550 (-ExposeVisual@CoRenderHost@@QEAAJIPEAVCVisual@@_N@Z.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015B1E0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     ?AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUtagRECT@@1_N@Z @ 0x180163AF4 (-AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUtagRECT@@1_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801FE024 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-38h]
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  int *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v8 = 0;
  v7 = 8;
  v9 = &v13;
  v11 = 0;
  v10 = 4;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, a2, 3u, &v5);
}
