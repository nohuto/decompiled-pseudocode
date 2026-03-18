/*
 * XREFs of UserOnGreTextReady @ 0x1C00BF790
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00BF6A8 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     SetIconMetrics @ 0x1C0082F1C (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00830F8 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0083240 (xxxSetWindowNCMetrics.c)
 *     xxxLW_LoadFonts @ 0x1C00BF850 (xxxLW_LoadFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C00BFE44 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 */

_BOOL8 UserOnGreTextReady()
{
  unsigned __int16 LogPixels; // ax
  struct _UNICODE_STRING *ProfileUserName; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  BOOL v4; // ebx
  struct _UNICODE_STRING *v5; // rsi
  BOOL v6; // edi
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  LogPixels = DrvGetLogPixels();
  UserReinitializeStockFonts(LogPixels, 0, 1);
  xxxLW_LoadFonts(0LL);
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v8);
  v4 = 0;
  v5 = ProfileUserName;
  if ( ProfileUserName )
  {
    gbGreTextReady = 1;
    v6 = xxxSetWindowNCMetrics(ProfileUserName, 0LL, 1LL, -1) != 0;
    SetMinMetrics(v5, 0LL);
    v4 = (unsigned int)SetIconMetrics(v5, 0LL) != 0 && v6;
    FreeProfileUserName(v5, v8);
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
