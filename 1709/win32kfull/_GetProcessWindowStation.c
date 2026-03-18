/*
 * XREFs of _GetProcessWindowStation @ 0x1C00D90A0
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     NtUserSetImeInfoEx @ 0x1C00D7BF0 (NtUserSetImeInfoEx.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00D7DBC (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     NtUserActivateKeyboardLayout @ 0x1C00D80E0 (NtUserActivateKeyboardLayout.c)
 *     DesktopFromDesktopWindow @ 0x1C00D882C (DesktopFromDesktopWindow.c)
 *     NtUserCloseWindowStation @ 0x1C00D8A90 (NtUserCloseWindowStation.c)
 *     NtUserOpenInputDesktop @ 0x1C00D8B30 (NtUserOpenInputDesktop.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C00D8C90 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetImeInfoEx @ 0x1C00D8DC0 (NtUserGetImeInfoEx.c)
 *     xxxDwmStopRedirection @ 0x1C00E3780 (xxxDwmStopRedirection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 648);
  return *(_QWORD *)(CurrentProcessWin32Process + 640);
}
