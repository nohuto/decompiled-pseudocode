/*
 * XREFs of _SetSystemTimer @ 0x1C0086E20
 * Callers:
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C000B60C (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0084470 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0084FA4 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00861CC (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     zzzStartFade @ 0x1C013DD98 (zzzStartFade.c)
 *     IncrementCompositedCount @ 0x1C01C5274 (IncrementCompositedCount.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     NtUserSetSystemTimer @ 0x1C01EBF40 (NtUserSetSystemTimer.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020FAD0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C0211A90 (xxxTrackBox.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v8; // ebx
  __int64 v9; // rdx

  v8 = a1;
  if ( !a1
    || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
  {
    return 0LL;
  }
  if ( !a5 && PsGetCurrentProcessWin32Process(a1) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) )
  {
    UserSetLastError(5LL, v9);
    return 0LL;
  }
  return InternalSetTimer(v8, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
}
