/*
 * XREFs of GreReleaseHmgrSemaphore @ 0x1C0037AD0
 * Callers:
 *     HmgFreeDcAttr @ 0x1C002BCB0 (HmgFreeDcAttr.c)
 *     HmgAllocateDcAttr @ 0x1C002C1D4 (HmgAllocateDcAttr.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C002CBB4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     HmgDecProcessHandleCount @ 0x1C002F18C (HmgDecProcessHandleCount.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgNextOwned @ 0x1C0032D20 (HmgNextOwned.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003F540 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0042464 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C0058B38 (HmgFreeObjectAttr.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0059040 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C005997C (HmgAllocateObjectAttr.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     GreMarkDCUnreadable @ 0x1C006362C (GreMarkDCUnreadable.c)
 *     HmgIncProcessHandleCount @ 0x1C0076CF8 (HmgIncProcessHandleCount.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0077B90 (pProcessDfbSurfacesInternal.c)
 *     GreIncQuotaCount @ 0x1C007F0C0 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x1C007F0F0 (GreDecQuotaCount.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00817F0 (HmgShareUnlockRemoveObject.c)
 *     HmgAlloc @ 0x1C0095E80 (HmgAlloc.c)
 *     HmgFree @ 0x1C0096D40 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00A00A4 (HmgNextGarbageCollectible.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     GreGetBrushColor @ 0x1C00E8260 (GreGetBrushColor.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00EC4A8 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00F7538 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F7638 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C00FB770 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C00FB910 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

__int64 __fastcall GreReleaseHmgrSemaphore(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(a1, &LockRelease);
  }
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    return PsLeavePriorityRegion(v1);
  }
  return result;
}
