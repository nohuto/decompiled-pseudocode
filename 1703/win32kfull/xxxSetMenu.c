/*
 * XREFs of xxxSetMenu @ 0x1C01344BC
 * Callers:
 *     NtUserSetMenu @ 0x1C01343A0 (NtUserSetMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     LockWndMenu @ 0x1C00C315C (LockWndMenu.c)
 */

__int64 __fastcall xxxSetMenu(struct tagWND *a1, __int64 a2, int a3)
{
  if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
  {
    UserSetLastError(1436LL);
    return 0LL;
  }
  else
  {
    LockWndMenu((__int64)a1, (_QWORD *)a1 + 26, a2);
    if ( (*((_BYTE *)a1 + 71) & 0x20) == 0 )
    {
      if ( a3 )
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
    }
    return 1LL;
  }
}
