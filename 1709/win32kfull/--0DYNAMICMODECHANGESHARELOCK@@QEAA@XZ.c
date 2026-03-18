/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0008554 (GreCreateBitmapFromDxSurface.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0022AC0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0028470 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00286B8 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0041C50 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C004C00C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0080648 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreAccNotifyWindow @ 0x1C008CC7C (GreAccNotifyWindow.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0091DF0 (vCleanupUMWindowlessSprite.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 *     GreRealizeDefaultPalette @ 0x1C00DF9CC (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C00DFA88 (GreGetSystemPaletteUse.c)
 *     GreGetBitmapBits @ 0x1C00F30F0 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00F3430 (GreSetBitmapBits.c)
 *     GreGetDeviceGammaRamp @ 0x1C00F6FA8 (GreGetDeviceGammaRamp.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C01099D0 (GreSetRedirectionSurfaceSignaling.c)
 *     GreRealizePalette @ 0x1C010EC68 (GreRealizePalette.c)
 *     GreCreateDIBitmapComp @ 0x1C0114450 (GreCreateDIBitmapComp.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C011C91C (GreLddmProcessDesktopSwitch.c)
 *     NtGdiGetMonitorID @ 0x1C024C790 (NtGdiGetMonitorID.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024E138 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024E70C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024E824 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreGetDxRgn @ 0x1C024FA88 (GreGetDxRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C024FF7C (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0250088 (GreHLsurfSetUpdateId.c)
 *     GreHintDxUpdate @ 0x1C02501AC (GreHintDxUpdate.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0250D90 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02510B4 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x1C0252A20 (GreDxDwmShutdown.c)
 *     GreCreateHalftonePalette @ 0x1C0292144 (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02922B0 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02925D4 (GreSetSystemPaletteUse.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C029586C (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C0299098 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C0299128 (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
