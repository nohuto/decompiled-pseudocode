/*
 * XREFs of DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8
 * Callers:
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003AAB0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C003B0E8 (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C003BA24 (DxgkQueryConnectionChanges.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00418E0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchPnp @ 0x1C009E8D0 (DpiPdoDispatchPnp.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C009FB10 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0109360 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0109590 (DpiPdoHandleOpmIoctls.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01F2788 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C01F8334 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C01F8580 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01FC280 (DxgkPowerOnOffMonitor.c)
 *     DxgkHandleMiracastEscape @ 0x1C0200168 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0200E60 (-DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0200F30 (-DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C0201000 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C02010F0 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C02011C0 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C0201290 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C0201370 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C0201500 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C02015D0 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimmingDirect@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C02016E4 (-DpiBrightnessNotifyMonitorDimmingDirect@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0201C7C (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x1C0202A00 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C0202B70 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoHandleQueryId @ 0x1C020CC00 (DpiPdoHandleQueryId.c)
 *     DpiPdoRemovePdoObjects @ 0x1C020DA08 (DpiPdoRemovePdoObjects.c)
 *     DpiPdoSetDevicePower @ 0x1C020DAF8 (DpiPdoSetDevicePower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 */

__int64 __fastcall DpiReleaseCoreSyncAccessSafe(__int64 a1, char a2)
{
  char v2; // r8
  int v3; // edx
  __int64 v4; // rbx

  v2 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
  if ( *(_BYTE *)(v4 + 481) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  LOBYTE(v3) = v2 == 1;
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3728), (unsigned int)(v3 + 1));
  ExReleaseResourceLite((PERESOURCE)(v4 + 3624));
  KeLeaveCriticalRegion();
  return 0LL;
}
