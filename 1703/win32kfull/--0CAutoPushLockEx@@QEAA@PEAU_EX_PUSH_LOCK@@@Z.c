/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C
 * Callers:
 *     GreForceClipRgnChange @ 0x1C0005328 (GreForceClipRgnChange.c)
 *     NtUserGetRawInputDeviceList @ 0x1C0006730 (NtUserGetRawInputDeviceList.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00226A8 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     NtUserGetPointerDevices @ 0x1C00231A0 (NtUserGetPointerDevices.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C002431C (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00272DC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C005B974 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C009C794 (GreAdjustSpriteDirtyAccum.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C009CF30 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     GreNotifyDirtySprite @ 0x1C009CFC4 (GreNotifyDirtySprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C009D248 (GreUpdateSpriteClipRgn.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C009EE10 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00A0800 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00A0C2C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00A132C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreSfmOpenCompositorRef @ 0x1C00BC52C (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C00BC634 (GreSfmCloseCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00BCCEC (GreSetRedirectionSurfaceSignaling.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00D457C (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00D5ABC (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C00FE9D0 (UpdatePointerDeviceSystemMetrics.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0104B68 (CheckPointerDeviceConfiguration.c)
 *     FreeFileView @ 0x1C010796C (FreeFileView.c)
 *     ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C011C2FC (--0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C011C320 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     GreHintSpriteBlt @ 0x1C013564C (GreHintSpriteBlt.c)
 *     ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C013F38C (--0ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     GetTelemDeviceData @ 0x1C019BD1C (GetTelemDeviceData.c)
 *     IsPTPPointerDevicePresent @ 0x1C019BF2C (IsPTPPointerDevicePresent.c)
 *     UserGetHipDeviceInfo @ 0x1C01A7A70 (UserGetHipDeviceInfo.c)
 *     ?ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z @ 0x1C01A7F84 (-ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C01A8160 (FindRimDevBackedDeviceInfo.c)
 *     UpdateRimManagedKeyboardLeds @ 0x1C01A8604 (UpdateRimManagedKeyboardLeds.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 *     _GetTouchValidationStatus @ 0x1C01BA7D4 (_GetTouchValidationStatus.c)
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01C4B9C (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C01CD640 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C024DA04 (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetDxRgn @ 0x1C024E018 (GreGetDxRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C024E508 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C024E614 (GreHLsurfSetUpdateId.c)
 *     GreHintDxUpdate @ 0x1C024E738 (GreHintDxUpdate.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C025E7C0 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02628B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02631B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0263810 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     GreMakeFontDir @ 0x1C0297420 (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

CAutoPushLockEx *__fastcall CAutoPushLockEx::CAutoPushLockEx(CAutoPushLockEx *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
