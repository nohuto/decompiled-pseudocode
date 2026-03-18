/*
 * XREFs of IsPWNDEligibleForGDIScaling @ 0x1C009269C
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C008D8F0 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     InitializeDPIINFO @ 0x1C0092178 (InitializeDPIINFO.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C00925F4 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     GetWindowExtendedMargin @ 0x1C00CA8F0 (GetWindowExtendedMargin.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserGetWindowRgnEx @ 0x1C00F7480 (NtUserGetWindowRgnEx.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012B1C4 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012B3D4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x1C013FC40 (NtUserEnableWindowGDIScaledDpiMessage.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01C2F48 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01E8B60 (NtUserIsWindowGDIScaledDpiMessageEnabled.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPWNDEligibleForGDIScaling(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 12LL) & 0x20000000) != 0
      && (*(_DWORD *)(a1 + 368) & 0xF) == 0;
}
