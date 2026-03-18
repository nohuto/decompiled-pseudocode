/*
 * XREFs of xxxSetSystemMenu @ 0x1C0133650
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C0133580 (NtUserSetSystemMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 *     LockWndMenu @ 0x1C00C315C (LockWndMenu.c)
 *     MNPositionSysMenu @ 0x1C01336B0 (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, __int64 a2)
{
  struct tagMENU *v4; // rsi

  if ( (*(_BYTE *)(a1 + 70) & 8) != 0 )
  {
    v4 = *(struct tagMENU **)(a1 + 200);
    if ( LockWndMenu(a1, (_QWORD *)(a1 + 200), a2) )
      DestroyMenu(v4);
    MNPositionSysMenu(a1, a2);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437LL);
    return 0LL;
  }
}
