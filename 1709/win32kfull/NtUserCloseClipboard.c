/*
 * XREFs of NtUserCloseClipboard @ 0x1C00C6060
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C00C60A0 (xxxCloseClipboard.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  v0 = (int)xxxCloseClipboard(0LL);
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
