/*
 * XREFs of NtUserEmptyClipboard @ 0x1C00C5440
 * Callers:
 *     <none>
 * Callees:
 *     xxxEmptyClipboard @ 0x1C00C55F4 (xxxEmptyClipboard.c)
 */

__int64 NtUserEmptyClipboard()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  v0 = (int)xxxEmptyClipboard(0LL);
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
