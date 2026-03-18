/*
 * XREFs of NtUserWaitAvailableMessageEx @ 0x1C01E15C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 */

__int64 __fastcall NtUserWaitAvailableMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 1LL);
  v4 = (int)xxxSleepThread2(a1, a2, 1, 1, 0LL);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
