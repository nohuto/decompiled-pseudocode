/*
 * XREFs of UserSetWindowNCMetrics @ 0x1C013DB4C
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0009CFC (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     xxxSetWindowNCMetrics @ 0x1C000A9D0 (xxxSetWindowNCMetrics.c)
 */

__int64 UserSetWindowNCMetrics()
{
  __int64 ProfileUserName; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  ProfileUserName = CreateProfileUserName(v7);
  v5 = ProfileUserName;
  if ( ProfileUserName )
  {
    xxxSetWindowNCMetrics(ProfileUserName, 0LL, 1, -1);
    FreeProfileUserName(v5, v7);
  }
  return UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
}
