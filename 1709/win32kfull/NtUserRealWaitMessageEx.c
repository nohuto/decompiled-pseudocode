/*
 * XREFs of NtUserRealWaitMessageEx @ 0x1C01EA7E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 */

__int64 __fastcall NtUserRealWaitMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx

  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFA200) != 0 )
  {
    UserSetLastError(1004LL, v4);
    v7 = 0;
  }
  else
  {
    v7 = xxxSleepThread2(a1, a2, 1, 0, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
