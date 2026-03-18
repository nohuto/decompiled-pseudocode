/*
 * XREFs of xxxSetSystemMenu @ 0x1C0138420
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C0138350 (NtUserSetSystemMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     LockWndMenu @ 0x1C007C744 (LockWndMenu.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     MNPositionSysMenu @ 0x1C0138480 (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi

  if ( (*(_BYTE *)(a1 + 70) & 8) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 200);
    if ( LockWndMenu(a1, (_QWORD *)(a1 + 200), a2) )
      DestroyMenu(v4);
    MNPositionSysMenu(a1, a2);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437LL, a2);
    return 0LL;
  }
}
