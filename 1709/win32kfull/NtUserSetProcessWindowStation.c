/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1C00F4E20
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C00F4E60 (xxxSetProcessWindowStation.c)
 */

_BOOL8 __fastcall NtUserSetProcessWindowStation(HANDLE SourceHandle)
{
  _BOOL8 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  v2 = (int)xxxSetProcessWindowStation(SourceHandle) >= 0;
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
