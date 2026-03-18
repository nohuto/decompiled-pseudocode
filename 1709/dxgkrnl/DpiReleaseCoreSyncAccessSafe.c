/*
 * XREFs of DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0012498 (DpiFdoHandleDisplayDetectControl.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0032FF8 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00B80B0 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C00B9690 (DpiPdoDispatchPnp.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00B9E40 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00FD330 (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoSetDevicePower @ 0x1C0101AA0 (DpiPdoSetDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103C58 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0118E70 (DpiFdoCreateRelatedObjects.c)
 *     DpiPdoHandleQueryId @ 0x1C0120530 (DpiPdoHandleQueryId.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01DC6D4 (DpiFdoDestroyRelatedObjects.c)
 *     DxgkHandleMiracastEscape @ 0x1C01E27B8 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C01E32E0 (-DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C01E33A0 (-DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C01E3450 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C01E3520 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C01E35D0 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C01E3680 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C01E3750 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C01E38C0 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C01E3970 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01E3A20 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E3C08 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x1C01E4700 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C01E4870 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoRemovePdoObjects @ 0x1C01E9154 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 */

__int64 __fastcall DpiReleaseCoreSyncAccessSafe(__int64 a1, char a2)
{
  __int64 v2; // rbx
  bool v3; // zf
  __int64 v4; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
  if ( *(_BYTE *)(v2 + 481) )
    DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
  v3 = a2 == 1;
  v4 = 2LL;
  if ( !v3 )
    v4 = 1LL;
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v2 + 3728), v4);
  ExReleaseResourceLite((PERESOURCE)(v2 + 3624));
  KeLeaveCriticalRegion();
  return 0LL;
}
