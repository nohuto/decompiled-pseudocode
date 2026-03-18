/*
 * XREFs of GetAppCompatFlags2 @ 0x1C007C450
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     GetResizeBorderWidthForDpi @ 0x1C007BB64 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C007BB8C (GetWindowFrameMetricForDpi.c)
 *     xxxDWP_UpdateUIState @ 0x1C007BBB4 (xxxDWP_UpdateUIState.c)
 *     GetWindowBordersForDpi @ 0x1C007C2E0 (GetWindowBordersForDpi.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C00AC960 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00F822C (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     NtGdiTransparentBlt @ 0x1C012CEF0 (NtGdiTransparentBlt.c)
 *     zzzHideCursorNoCapture @ 0x1C01A10C0 (zzzHideCursorNoCapture.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01F2000 (xxxDDETrackWindowDying.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0216248 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxMenuBarDraw @ 0x1C02175E0 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  __int64 ThreadWin32Thread; // rax

  v1 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v1 < *(_DWORD *)(ThreadWin32Thread + 608) )
    return 0LL;
  else
    return *(unsigned int *)(ThreadWin32Thread + 624);
}
