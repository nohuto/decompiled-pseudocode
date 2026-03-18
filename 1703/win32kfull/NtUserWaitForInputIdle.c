/*
 * XREFs of NtUserWaitForInputIdle @ 0x1C010C2A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxWaitForInputIdle @ 0x1C010C2F4 (xxxWaitForInputIdle.c)
 */

__int64 __fastcall NtUserWaitForInputIdle(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 1LL);
  v6 = xxxWaitForInputIdle(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
