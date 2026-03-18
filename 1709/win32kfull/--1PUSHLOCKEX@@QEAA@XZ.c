/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0006E78 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000AB4C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C000D09C (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0043BB4 (CheckPointerDeviceConfiguration.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     GreSfmOpenCompositorRef @ 0x1C008A8B8 (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C008A9C0 (GreSfmCloseCompositorRef.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B1074 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00B115C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     NtUserGetPointerDevices @ 0x1C00B1290 (NtUserGetPointerDevices.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00B4A60 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C00D6C00 (UpdatePointerDeviceSystemMetrics.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00E4100 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00E4468 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00E46A4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreHintSpriteBlt @ 0x1C00E4BB4 (GreHintSpriteBlt.c)
 *     GreForceClipRgnChange @ 0x1C00E6124 (GreForceClipRgnChange.c)
 *     GreNotifyDirtySprite @ 0x1C00E6BC0 (GreNotifyDirtySprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00E6FFC (GreUpdateSpriteClipRgn.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00E78F4 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00E7988 (GreAdjustSpriteDirtyAccum.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00FDFCC (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00FE23C (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00FE314 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00FE8A0 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0103250 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C01099D0 (GreSetRedirectionSurfaceSignaling.c)
 *     FreeFileView @ 0x1C010FC34 (FreeFileView.c)
 *     NtUserGetRawInputDeviceList @ 0x1C011D080 (NtUserGetRawInputDeviceList.c)
 *     ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C0142EB0 (--1ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     GetTelemDeviceData @ 0x1C01A79CC (GetTelemDeviceData.c)
 *     IsPTPPointerDevicePresent @ 0x1C01A7BDC (IsPTPPointerDevicePresent.c)
 *     ?ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z @ 0x1C01AB324 (-ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C01AB500 (FindRimDevBackedDeviceInfo.c)
 *     UpdateRimManagedKeyboardLeds @ 0x1C01AB990 (UpdateRimManagedKeyboardLeds.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@XZ @ 0x1C01AC1CC (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@XZ.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AD21C (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     _GetTouchValidationStatus @ 0x1C01BEAAC (_GetTouchValidationStatus.c)
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01C6F00 (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
 *     UserGetHipDeviceInfo @ 0x1C01CA6A0 (UserGetHipDeviceInfo.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C024F474 (GreAddBitmapD3DDirtyRgn.c)
 *     GreGetDxRgn @ 0x1C024FA88 (GreGetDxRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C024FF7C (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0250088 (GreHLsurfSetUpdateId.c)
 *     GreHintDxUpdate @ 0x1C02501AC (GreHintDxUpdate.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C025E544 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0261DCC (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02622DC (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0262BDC (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C026FF10 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     GreMakeFontDir @ 0x1C0293AF0 (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __fastcall PUSHLOCKEX::~PUSHLOCKEX(PUSHLOCKEX *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
