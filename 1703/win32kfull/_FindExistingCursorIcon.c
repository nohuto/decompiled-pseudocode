/*
 * XREFs of _FindExistingCursorIcon @ 0x1C00DBB50
 * Callers:
 *     NtUserFindExistingCursorIcon @ 0x1C00DB8B0 (NtUserFindExistingCursorIcon.c)
 * Callees:
 *     SearchIconCache @ 0x1C00DBBE8 (SearchIconCache.c)
 */

__int64 __fastcall FindExistingCursorIcon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v7; // bx
  __int64 result; // rax
  __int64 CurrentProcessWin32Process; // rax

  v7 = a1;
  result = 0LL;
  if ( *(_DWORD *)(a4 + 8) && (_WORD)a1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
    result = SearchIconCache(*(_QWORD *)(CurrentProcessWin32Process + 696), v7, a2, a3, a4);
    if ( !result )
      return SearchIconCache(gpcurFirst, v7, a2, a3, a4);
  }
  return result;
}
