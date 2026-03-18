/*
 * XREFs of InForegroundQueue @ 0x1C00B3ED0
 * Callers:
 *     NtUserGetClipboardData @ 0x1C00AECF0 (NtUserGetClipboardData.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00B3D90 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C01D6D70 (NtUserCheckProcessForClipboardAccess.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00B44C4 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00B4624 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall InForegroundQueue(struct tagTHREADINFO *a1, int a2)
{
  unsigned int v4; // r11d

  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 47)) )
    return 1LL;
  if ( gpqForeground )
  {
    if ( *((_QWORD *)a1 + 48) != gpqForeground && (*(_DWORD *)(*((_QWORD *)a1 + 47) + 12LL) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v4) = (unsigned int)ForegroundInputOwnerMatch(a1, a2) != 0;
      return v4;
    }
    return 1LL;
  }
  return 0LL;
}
