/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0026E40 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00346E0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     GreCreatePatternBrushInternal @ 0x1C0041420 (GreCreatePatternBrushInternal.c)
 *     GreSuspendDirectDraw @ 0x1C004E0C0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C004E10C (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C004E708 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreGetDeviceCaps @ 0x1C0054280 (GreGetDeviceCaps.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005C564 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00C84B0 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00D7190 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00D73F0 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C00D820C (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C005BCF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
