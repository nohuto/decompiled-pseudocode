/*
 * XREFs of PALLOCMEM2 @ 0x1C003F7F8
 * Callers:
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C0001FB0 (NtGdiSetPrivateDeviceGammaRamp.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0002190 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     newpathalloc @ 0x1C0023B80 (newpathalloc.c)
 *     HmgFreeDcAttr @ 0x1C002BCB0 (HmgFreeDcAttr.c)
 *     HmgAllocateDcAttr @ 0x1C002C1D4 (HmgAllocateDcAttr.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0039AE4 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C003B9A0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvEnumDisplayDevices @ 0x1C0041380 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0044268 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C00563A0 (DrvChangeDisplaySettings.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C0056AE0 (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0057A4C (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     LogDiagSDC @ 0x1C0057B04 (LogDiagSDC.c)
 *     HmgFreeObjectAttr @ 0x1C0058B38 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C005997C (HmgAllocateObjectAttr.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C005AB24 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C005AFA0 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C005D518 (ApplyPathModalityToCdsRegistryStore.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C005D670 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C005DCFC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C005E770 (DrvBuildDevmodeList.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C005F630 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadImage @ 0x1C005FB00 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C005FD50 (MakeSystemRelativePath.c)
 *     DrvGetDisplayDriverNames @ 0x1C005FE90 (DrvGetDisplayDriverNames.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C00605BC (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0060FF8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     UpdateMonitorDevices @ 0x1C0061520 (UpdateMonitorDevices.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0061848 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0061B40 (DrvEnumDisplaySettings.c)
 *     ?Allocate@QDC_AUTO_BUFFERS@@QEAAJXZ @ 0x1C00623DC (-Allocate@QDC_AUTO_BUFFERS@@QEAAJXZ.c)
 *     ldevLoadInternal @ 0x1C0062730 (ldevLoadInternal.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0066AC4 (GreSfmCleanupPresentHistory.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C00685C4 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C00686A8 (-GetLanguageID@@YAGXZ.c)
 *     HmgCreate @ 0x1C0075A30 (HmgCreate.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C0076DBC (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C007B4BC (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0083428 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C0088820 (-GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0090740 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0091580 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C00962E0 (NtGdiPolyPolyDraw.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C009B248 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C009B5F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvInitConsole @ 0x1C009C8CC (DrvInitConsole.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00A25FC (DrvSetDisplayConfigValidateParams.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00E80E0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00E936C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00EBBCC (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBC80 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBD24 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F1DF0 (NtHWCursorUpdatePointer.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IIPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F6F68 (-DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_I.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00F9150 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvSetVideoParameters @ 0x1C00FA574 (DrvSetVideoParameters.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00FAAF0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00FCBCC (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     MakeSystemDriversRelativePath @ 0x1C00FDB10 (MakeSystemDriversRelativePath.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     memset @ 0x1C00A2500 (memset.c)
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
