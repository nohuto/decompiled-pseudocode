/*
 * XREFs of PALLOCMEM2 @ 0x1C0040604
 * Callers:
 *     newpathalloc @ 0x1C001D560 (newpathalloc.c)
 *     HmgAllocateDcAttr @ 0x1C001DBCC (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C001E0A0 (HmgFreeDcAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C001E6B8 (HmgAllocateObjectAttr.c)
 *     DrvEnumDisplayDevices @ 0x1C003EEB0 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00449B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005268C (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0058550 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0059068 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C005B8A0 (DrvEnumDisplaySettings.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     HmgFreeObjectAttr @ 0x1C00630B8 (HmgFreeObjectAttr.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00641DC (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C006586C (DrvChangeDisplaySettings.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C0065FBC (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0067044 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     LogDiagSDC @ 0x1C0067094 (LogDiagSDC.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0067684 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0069968 (ApplyPathModalityToCdsRegistryStore.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0069AC0 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C006A150 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C006ABB0 (DrvBuildDevmodeList.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C006B718 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 *     ldevLoadImage @ 0x1C006E0A0 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C006E2F0 (MakeSystemRelativePath.c)
 *     DrvGetDisplayDriverNames @ 0x1C006E430 (DrvGetDisplayDriverNames.c)
 *     ldevLoadInternal @ 0x1C006E760 (ldevLoadInternal.c)
 *     HmgCreate @ 0x1C006F330 (HmgCreate.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C0070438 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0073750 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00789F0 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C00791C8 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0079CD8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     UpdateMonitorDevices @ 0x1C007A450 (UpdateMonitorDevices.c)
 *     GreSfmCleanupPresentHistory @ 0x1C007B0EC (GreSfmCleanupPresentHistory.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C008A7EC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C008C88C (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C008E470 (-GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C0095914 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C00959F8 (-GetLanguageID@@YAGXZ.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0099D80 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C009A270 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C009E9F0 (NtGdiPolyPolyDraw.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00A09F0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A421C (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4D44 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvInitConsole @ 0x1C00A68B8 (DrvInitConsole.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00ED7C0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00EE574 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00EFAD0 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFC28 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F4B30 (NtHWCursorUpdatePointer.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F7F5C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvSetVideoParameters @ 0x1C00FA7B0 (DrvSetVideoParameters.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00FAD24 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00FB0B0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C00FB300 (NtGdiSetPrivateDeviceGammaRamp.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00FD03C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     MakeSystemDriversRelativePath @ 0x1C00FDE38 (MakeSystemDriversRelativePath.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void *__fastcall PALLOCMEM2(size_t Size, __int64 a2, int a3)
{
  void *v3; // rbx
  unsigned int v5; // edi
  void *v6; // rax

  v3 = 0LL;
  if ( (_DWORD)Size )
  {
    v5 = Size;
    v6 = (void *)Win32AllocPool((unsigned int)Size, a2);
    v3 = v6;
    if ( v6 )
    {
      if ( a3 )
        memset(v6, 0, v5);
    }
  }
  return v3;
}
