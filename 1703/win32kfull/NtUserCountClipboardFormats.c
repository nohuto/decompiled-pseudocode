/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C0135000
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     CountNumClipFormatForIL @ 0x1C00AF9F8 (CountNumClipFormatForIL.c)
 */

__int64 NtUserCountClipboardFormats()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(0LL, 1LL);
  v0 = 0;
  v3 = CheckClipboardAccess();
  if ( v3 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2, v1);
    v0 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 824), v3);
  }
  UserSessionSwitchLeaveCrit(v2, v1, v4, v5);
  return v0;
}
