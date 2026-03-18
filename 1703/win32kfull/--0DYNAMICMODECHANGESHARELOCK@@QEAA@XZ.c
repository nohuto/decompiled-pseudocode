/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0003F2C (GreCreateBitmapFromDxSurface.c)
 *     GreSetBitmapBits @ 0x1C0023DA0 (GreSetBitmapBits.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00245D0 (vCleanupUMWindowlessSprite.c)
 *     GreGetBitmapBits @ 0x1C0026F44 (GreGetBitmapBits.c)
 *     GreAccNotifyWindow @ 0x1C0027280 (GreAccNotifyWindow.c)
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0071290 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C007B9B0 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C007BDF0 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C007DFC0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C009F2D0 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C00BAE44 (GreLddmProcessDesktopSwitch.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00BCCEC (GreSetRedirectionSurfaceSignaling.c)
 *     GreGetDeviceGammaRamp @ 0x1C00E765C (GreGetDeviceGammaRamp.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00E8F78 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     xxxRemoteDisconnect @ 0x1C00FE0C0 (xxxRemoteDisconnect.c)
 *     GreRealizePalette @ 0x1C0108418 (GreRealizePalette.c)
 *     GreCreateDIBitmapComp @ 0x1C010AD08 (GreCreateDIBitmapComp.c)
 *     GreRealizeDefaultPalette @ 0x1C0112954 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C011551C (GreGetSystemPaletteUse.c)
 *     NtGdiGetMonitorID @ 0x1C024AE80 (NtGdiGetMonitorID.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C024C6A8 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CC78 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024CD98 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreGetDxRgn @ 0x1C024E018 (GreGetDxRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C024E508 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C024E614 (GreHLsurfSetUpdateId.c)
 *     GreHintDxUpdate @ 0x1C024E738 (GreHintDxUpdate.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C024F2F0 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C024F60C (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x1C0250FA0 (GreDxDwmShutdown.c)
 *     GreCreateHalftonePalette @ 0x1C0295A94 (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C0295C00 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C0295F24 (GreSetSystemPaletteUse.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02991C8 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C029C8F0 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C029C980 (GreSetBitmapDimension.c)
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
