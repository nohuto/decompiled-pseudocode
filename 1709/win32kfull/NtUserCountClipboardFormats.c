/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C0139D80
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 *     CountNumClipFormatForIL @ 0x1C00C67E0 (CountNumClipFormatForIL.c)
 */

__int64 NtUserCountClipboardFormats()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(0LL, 1LL);
  v4 = 0;
  v7 = CheckClipboardAccess(v1, v0, v2, v3);
  if ( v7 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v4 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 832), v7);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
