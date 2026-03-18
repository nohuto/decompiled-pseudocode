/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001B254 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreLockDwmState @ 0x1C003CA30 (GreLockDwmState.c)
 *     GreLockVisRgnPublish @ 0x1C003CAB0 (GreLockVisRgnPublish.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003CB80 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C003CC10 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C003D3C0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C003E140 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0046DE0 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0046FB0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0047070 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004B990 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     DrvGetHDEV @ 0x1C005A5C0 (DrvGetHDEV.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C005A7C0 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     DrvEnumDisplaySettings @ 0x1C005B8A0 (DrvEnumDisplaySettings.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C005BD64 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C005E800 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0060708 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvEnableMDEV @ 0x1C0060B04 (DrvEnableMDEV.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C006755C (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0067A20 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ApplyPathsModality @ 0x1C0067D1C (ApplyPathsModality.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00680E8 (DrvNotifyModeChangeStartStop.c)
 *     GreLockDisplayDevice @ 0x1C0068620 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C00686C0 (GreLockSprite.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ldevUnloadImage @ 0x1C006DD30 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C006DE40 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C006E760 (ldevLoadInternal.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C008BEA8 (DrvCleanupAndDestroyMDEV.c)
 *     DrvDestroyMDEV @ 0x1C008C00C (DrvDestroyMDEV.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C008C7A0 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C0098100 (DrvInitializeDxgkrnlDpiCache.c)
 *     GreLockPointer @ 0x1C0098480 (GreLockPointer.c)
 *     GreLockDynamicModeChange @ 0x1C009B550 (GreLockDynamicModeChange.c)
 *     GreSfmDwmShutdown @ 0x1C009BCA0 (GreSfmDwmShutdown.c)
 *     DrvDisableMDEV @ 0x1C00A27D0 (DrvDisableMDEV.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A5B48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00A6070 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C00A6230 (HDXDrvEscape.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00A635C (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00EE574 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00EF2C8 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F5DD8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F8460 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F8848 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00F93C4 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00F9600 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00F9B70 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00F9DC0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C00FC2E0 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C00FCED0 (EngDeleteDriverObj.c)
 * Callees:
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreExclusive(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz(a1, a2, a3, a2, a3, a1);
  }
  return result;
}
