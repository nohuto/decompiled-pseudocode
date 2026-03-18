/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1C00E2970
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C00E29B0 (xxxSetProcessWindowStation.c)
 */

_BOOL8 __fastcall NtUserSetProcessWindowStation(HANDLE SourceHandle)
{
  _BOOL8 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 1LL);
  v2 = (int)xxxSetProcessWindowStation(SourceHandle) >= 0;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
