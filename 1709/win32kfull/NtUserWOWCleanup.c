/*
 * XREFs of NtUserWOWCleanup @ 0x1C01ED720
 * Callers:
 *     <none>
 * Callees:
 *     _WOWCleanup @ 0x1C01F9D20 (_WOWCleanup.c)
 */

__int64 __fastcall NtUserWOWCleanup(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterCrit(0LL, 1LL);
  v4 = (int)WOWCleanup(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
