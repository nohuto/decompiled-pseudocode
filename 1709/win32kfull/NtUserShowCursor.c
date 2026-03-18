/*
 * XREFs of NtUserShowCursor @ 0x1C011E7F0
 * Callers:
 *     <none>
 * Callees:
 *     zzzShowCursor @ 0x1C011E824 (zzzShowCursor.c)
 */

__int64 __fastcall NtUserShowCursor(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  v2 = zzzShowCursor(a1);
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
