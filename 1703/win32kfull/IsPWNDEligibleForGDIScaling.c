/*
 * XREFs of IsPWNDEligibleForGDIScaling @ 0x1C0060BC4
 * Callers:
 *     InitializeDPIINFO @ 0x1C0025848 (InitializeDPIINFO.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0025C08 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     UpdateWindowMonitor @ 0x1C005F450 (UpdateWindowMonitor.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     NtUserGetWindowRgnEx @ 0x1C0062B60 (NtUserGetWindowRgnEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C009E7C4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01BF624 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x1C01D7E90 (NtUserEnableWindowGDIScaledDpiMessage.c)
 *     NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01DC980 (NtUserIsWindowGDIScaledDpiMessageEnabled.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPWNDEligibleForGDIScaling(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) + 12LL) & 0x20000000) != 0
      && *(_DWORD *)(a1 + 368) == 16;
}
