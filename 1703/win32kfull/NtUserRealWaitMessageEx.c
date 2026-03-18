/*
 * XREFs of NtUserRealWaitMessageEx @ 0x1C01DE6C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 */

__int64 __fastcall NtUserRealWaitMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx

  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFA200) != 0 )
  {
    UserSetLastError(1004LL);
    v8 = 0;
  }
  else
  {
    v8 = xxxSleepThread2(a1, a2, 1, 0, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
