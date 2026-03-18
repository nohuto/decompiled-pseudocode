/*
 * XREFs of _UnhookWinEvent @ 0x1C0056664
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00566B0 (NtUserUnhookWinEvent.c)
 * Callees:
 *     DestroyEventHook @ 0x1C0058090 (DestroyEventHook.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall UnhookWinEvent(__int64 a1)
{
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0
    || *(_QWORD *)(a1 + 16) != gptiCurrent )
  {
    UserSetLastError(6LL);
    return 0LL;
  }
  else
  {
    DestroyEventHook();
    return 1LL;
  }
}
