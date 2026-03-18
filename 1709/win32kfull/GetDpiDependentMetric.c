/*
 * XREFs of GetDpiDependentMetric @ 0x1C00774BC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxCreateWindowSmIcon @ 0x1C0051CA4 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C00534E4 (xxxCreateClassSmIcon.c)
 *     InternalGetRealClientRect @ 0x1C005D230 (InternalGetRealClientRect.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C005D4BC (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     GetWindowNCMetrics @ 0x1C0076268 (GetWindowNCMetrics.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00763A4 (GetWindowNCMetricsForDpi.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetTiledRect @ 0x1C0076C18 (SetTiledRect.c)
 *     CalcSBStuff @ 0x1C0077264 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C007736C (CalcSBStuff2.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00777C0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     xxxGetMenuBarInfo @ 0x1C007C018 (xxxGetMenuBarInfo.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C007C400 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 *     ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C007E2C8 (-GetFrameControlMetrics@@YAHIHH@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0082784 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00829DC (-DrawCaptionButtons@@YAXHHH@Z.c)
 *     GetCaptionHeight @ 0x1C00930D4 (GetCaptionHeight.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00964C4 (GetWindowBordersWithDpiAwareness.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00982B4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     _AdjustWindowRectExForDpi @ 0x1C009C178 (_AdjustWindowRectExForDpi.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     _SystemParametersInfoForDpi @ 0x1C01020D0 (_SystemParametersInfoForDpi.c)
 *     FindNCHit @ 0x1C0111248 (FindNCHit.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0117350 (xxxUpdateSystemIconsFromRegistry.c)
 *     MNPositionSysMenu @ 0x1C0138480 (MNPositionSysMenu.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01B842C (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CF200 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01DAB38 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02070B4 (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020E2F0 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F6D8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0210290 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0210548 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0211F68 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0212320 (xxxCalcCaptionButton.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01A1580 (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall GetDpiDependentMetric(__int64 a1, unsigned int a2)
{
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v4; // r11
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 result; // rax

  DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a2);
  v5 = v4;
  v6 = 30LL * DpiDepSysMetCachePlateauSlot;
  result = *(unsigned int *)(gpsi + 4 * (v6 + v4) + 2268);
  if ( (_DWORD)result == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(a2);
    result = *(unsigned int *)(gpsi + 4 * (v5 + v6) + 2268);
    if ( (_DWORD)result == -1 )
      return 0LL;
  }
  return result;
}
