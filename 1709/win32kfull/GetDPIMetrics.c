/*
 * XREFs of GetDPIMetrics @ 0x1C004C99C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     GetWindowNCMetrics @ 0x1C0076268 (GetWindowNCMetrics.c)
 *     xxxSetNCFonts @ 0x1C0081880 (xxxSetNCFonts.c)
 *     MNSetupAnimationDC @ 0x1C00DCA98 (MNSetupAnimationDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     ?MNCheckScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C02046BC (-MNCheckScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C02160B4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNAnimate @ 0x1C0216480 (MNAnimate.c)
 *     MNEraseBackground @ 0x1C0216AA0 (MNEraseBackground.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0218794 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetDPIMetrics(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // dx

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) == 0 )
    return Get96DpiMetrics();
  v3 = *(_WORD *)(PsGetCurrentProcessWin32Process(v2) + 284);
  if ( v3 == *(_WORD *)(gpsi + 9974LL) )
    return GetSessionDpiMetrics();
  else
    return GetDPIMETRICSForDpi(v3);
}
