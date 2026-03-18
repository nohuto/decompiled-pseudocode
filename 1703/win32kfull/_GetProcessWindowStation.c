/*
 * XREFs of _GetProcessWindowStation @ 0x1C0010D60
 * Callers:
 *     NtUserActivateKeyboardLayout @ 0x1C000FDD0 (NtUserActivateKeyboardLayout.c)
 *     DesktopFromDesktopWindow @ 0x1C00104FC (DesktopFromDesktopWindow.c)
 *     NtUserCloseWindowStation @ 0x1C0010730 (NtUserCloseWindowStation.c)
 *     NtUserOpenInputDesktop @ 0x1C00107D0 (NtUserOpenInputDesktop.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C0010930 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetImeInfoEx @ 0x1C0010A50 (NtUserGetImeInfoEx.c)
 *     NtUserGetProcessWindowStation @ 0x1C0010D20 (NtUserGetProcessWindowStation.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00144F0 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     zzzDwmStartRedirection @ 0x1C0016490 (zzzDwmStartRedirection.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxDwmStopRedirection @ 0x1C00A15E0 (xxxDwmStopRedirection.c)
 *     NtUserSetImeInfoEx @ 0x1C0117890 (NtUserSetImeInfoEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 640);
  return *(_QWORD *)(CurrentProcessWin32Process + 632);
}
