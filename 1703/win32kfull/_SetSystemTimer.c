/*
 * XREFs of _SetSystemTimer @ 0x1C00B21F0
 * Callers:
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C00060F8 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00AFCF4 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C00B2104 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00B218C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 *     IncrementCompositedCount @ 0x1C01C2094 (IncrementCompositedCount.c)
 *     zzzStartFade @ 0x1C01C295C (zzzStartFade.c)
 *     NtUserSetSystemTimer @ 0x1C01DFDC0 (NtUserSetSystemTimer.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020E2C0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C0210360 (xxxTrackBox.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // ebx

  v7 = a2;
  v8 = a1;
  if ( !a1
    || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
  {
    return 0LL;
  }
  if ( !a5 && PsGetCurrentProcessWin32Process(a1, a2) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return InternalSetTimer(v8, v7, a3, a4, 0, a5 != 0 ? 66 : 2);
}
