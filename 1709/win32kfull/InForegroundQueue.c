/*
 * XREFs of InForegroundQueue @ 0x1C00CB420
 * Callers:
 *     NtUserGetClipboardData @ 0x1C00C59C0 (NtUserGetClipboardData.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00CB310 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C01E3510 (NtUserCheckProcessForClipboardAccess.c)
 * Callees:
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00C9068 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     IsDebuggerAttached @ 0x1C00CBEDC (IsDebuggerAttached.c)
 */

__int64 __fastcall InForegroundQueue(struct tagTHREADINFO *a1, int a2)
{
  unsigned int v4; // r11d

  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 50)) )
    return 1LL;
  if ( gpqForeground )
  {
    if ( *((_QWORD *)a1 + 51) != gpqForeground && (*(_DWORD *)(*((_QWORD *)a1 + 50) + 12LL) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v4) = ForegroundInputOwnerMatch(a1, a2);
      return v4;
    }
    return 1LL;
  }
  return 0LL;
}
