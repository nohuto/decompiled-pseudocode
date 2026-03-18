/*
 * XREFs of NtUserCloseClipboard @ 0x1C00AF340
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C00AF380 (xxxCloseClipboard.c)
 */

__int64 NtUserCloseClipboard()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 1LL);
  v0 = (int)xxxCloseClipboard(0LL);
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
