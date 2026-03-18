/*
 * XREFs of UserOnGreTextReady @ 0x1C000A0E0
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0009CFC (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     SetMinMetrics @ 0x1C0009F64 (SetMinMetrics.c)
 *     xxxLW_LoadFonts @ 0x1C000A1A0 (xxxLW_LoadFonts.c)
 *     xxxSetWindowNCMetrics @ 0x1C000A9D0 (xxxSetWindowNCMetrics.c)
 *     SetIconMetrics @ 0x1C000B568 (SetIconMetrics.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C013DA38 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C019532C (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 UserOnGreTextReady()
{
  unsigned int v0; // edi
  unsigned __int16 LogPixels; // ax
  __int64 ProfileUserName; // rax
  EnterLeaveCrit *v3; // rcx
  __int64 v4; // rsi
  int v5; // eax
  BOOL v6; // edi
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  EnterCrit(0LL, 1LL);
  LogPixels = DrvGetLogPixels();
  UserReinitializeStockFonts(LogPixels, 0, 1);
  xxxLW_LoadFonts(0LL);
  ProfileUserName = CreateProfileUserName(v8);
  v4 = ProfileUserName;
  if ( ProfileUserName )
  {
    v5 = xxxSetWindowNCMetrics(ProfileUserName, 0LL, 1LL, 0xFFFFFFFFLL);
    gbGreTextReady = 1;
    v6 = v5 == 0;
    SetMinMetrics(v4, 0LL);
    if ( !(unsigned int)SetIconMetrics(v4, 0LL) )
      v6 = 1;
    FreeProfileUserName(v4, v8);
    v0 = !v6;
  }
  EnterLeaveCrit::~EnterLeaveCrit(v3);
  return v0;
}
