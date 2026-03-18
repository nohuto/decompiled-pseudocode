/*
 * XREFs of _FindExistingCursorIcon @ 0x1C0097F3C
 * Callers:
 *     NtUserFindExistingCursorIcon @ 0x1C0097CA0 (NtUserFindExistingCursorIcon.c)
 * Callees:
 *     SearchIconCache @ 0x1C0097FD8 (SearchIconCache.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0098230 (_GetCurrentLogicalCursorThread.c)
 */

__int64 __fastcall FindExistingCursorIcon(unsigned __int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 CurrentLogicalCursorThread; // rax

  result = 0LL;
  if ( *(_DWORD *)(a4 + 8) && a1 )
  {
    CurrentLogicalCursorThread = GetCurrentLogicalCursorThread();
    result = SearchIconCache(*(_QWORD *)(*(_QWORD *)(CurrentLogicalCursorThread + 400) + 704LL), a1, a2, a3, a4);
    if ( !result )
      return SearchIconCache(gpcurFirst, a1, a2, a3, a4);
  }
  return result;
}
