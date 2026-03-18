/*
 * XREFs of DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0012498 (DpiFdoHandleDisplayDetectControl.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
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
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiAcquireCoreSyncAccessSafe(__int64 a1, char a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(_QWORD *)(v5 + 64);
  if ( *(_BYTE *)(v6 + 481) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v5 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3624), 1u);
  if ( *(_DWORD *)(v6 + 236) == 6 || *(_DWORD *)(v6 + 240) == 6 || (v8 = *(unsigned int *)(v6 + 3808), (_DWORD)v8 == 3) )
  {
    v12 = -1073741810LL;
    v3 = -1073741810;
    v13 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v6 + 24);
    goto LABEL_26;
  }
  if ( *(_DWORD *)(v2 + 16) == 1953656900 )
  {
    if ( *(_DWORD *)(v2 + 20) != 5 && *(_DWORD *)(v2 + 20) != 2 )
    {
      if ( *(_DWORD *)(v2 + 20) == 6 )
      {
LABEL_10:
        if ( a2 == 1 )
          v10 = 2LL;
        else
          v10 = 1LL;
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v6 + 3728), v10);
        return v3;
      }
      goto LABEL_24;
    }
    if ( (*(_BYTE *)(v6 + 481) && *(_DWORD *)(v6 + 280) <= 1u && !*(_BYTE *)(v6 + 482)
       || (_DWORD)v8 != 1 && *(_DWORD *)(v6 + 284) == 1)
      && *(_QWORD *)(v6 + 3728) )
    {
      goto LABEL_10;
    }
    v12 = -1073741661LL;
    v3 = -1073741661;
    v13 = WdLogNewEntry5_WdWarning(v8, 1953656900LL, v9);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v6 + 24);
LABEL_26:
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
    goto LABEL_27;
  }
LABEL_24:
  v3 = -1073741637;
  v14 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v14 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v14);
LABEL_27:
  if ( *(_BYTE *)(v6 + 481) )
    DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
  ExReleaseResourceLite((PERESOURCE)(v6 + 3624));
  KeLeaveCriticalRegion();
  return v3;
}
