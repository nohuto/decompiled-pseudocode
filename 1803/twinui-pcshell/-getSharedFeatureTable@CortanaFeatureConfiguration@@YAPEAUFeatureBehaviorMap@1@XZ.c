/*
 * XREFs of ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x1800906D4
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180061DB4 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?IsWideAtStartupDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180089D3C (-IsWideAtStartupDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180089E5C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x1800924CC (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

struct CortanaFeatureConfiguration::FeatureBehaviorMap *__fastcall CortanaFeatureConfiguration::getSharedFeatureTable(
        CortanaFeatureConfiguration *this)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // [rsp+0h] [rbp-20h]

  if ( !byte_180438034 )
  {
    *(_QWORD *)&v21 = L"ImmersiveSearchTheme";
    *((_QWORD *)&v21 + 1) = 0x300000001LL;
    v2 = v21;
    *(_QWORD *)&v21 = L"PWILOActivityUploadEnabled";
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    xmmword_180438300 = v2;
    v3 = v21;
    *(_QWORD *)&v21 = L"SearchBoxBorderColor";
    *((_QWORD *)&v21 + 1) = 0xBBFFFFFF00000001uLL;
    xmmword_180438318 = v3;
    v4 = v21;
    *(_QWORD *)&v21 = L"SearchBoxBorderColorInDarkMode";
    qword_180438310 = 0LL;
    xmmword_180438330 = v4;
    xmmword_180438348 = v21;
    qword_180438328 = 0LL;
    xmmword_180438360 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbar";
    *(_QWORD *)&v21 = L"SearchBoxBorderThickness";
    *((_QWORD *)&v21 + 1) = 0x100000001LL;
    xmmword_180438378 = (unsigned __int64)L"SearchBoxBorderColorShouldMatchTaskbarInDarkMode";
    v5 = v21;
    *(_QWORD *)&v21 = L"SearchBoxBorderThicknessInDarkMode";
    qword_180438340 = 0LL;
    *((_QWORD *)&v21 + 1) = 1LL;
    qword_180438358 = 0LL;
    qword_180438370 = 0LL;
    qword_180438388 = 0LL;
    xmmword_180438390 = v5;
    v6 = v21;
    qword_1804383A0 = 0LL;
    *(_QWORD *)&v21 = L"SearchBoxBorderOnlyOnTop";
    xmmword_1804383A8 = v6;
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    qword_1804383B8 = 0LL;
    xmmword_1804383C0 = v21;
    qword_1804383D0 = 0LL;
    *(_QWORD *)&v21 = L"SearchBoxBorderOnlyOnTopInDarkMode";
    v7 = v21;
    *(_QWORD *)&v21 = L"SearchBoxIbeamPointerOnHover";
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    xmmword_1804383D8 = v7;
    v8 = v21;
    *(_QWORD *)&v21 = L"SearchBoxText";
    *((_QWORD *)&v21 + 1) = 2LL;
    qword_1804383E8 = 0LL;
    xmmword_1804383F0 = v8;
    v9 = v21;
    *(_QWORD *)&v21 = L"SearchBoxText_NTP";
    *((_QWORD *)&v21 + 1) = 2LL;
    xmmword_180438408 = v9;
    v10 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyBackground";
    qword_180438400 = 0LL;
    *((_QWORD *)&v21 + 1) = 0x5F00000001LL;
    xmmword_180438420 = v10;
    v11 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyBackgroundInDarkMode";
    HIDWORD(v21) = 20;
    xmmword_180438438 = v11;
    v12 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyHighlight";
    qword_180438418 = 0LL;
    *((_QWORD *)&v21 + 1) = 0x6400000001LL;
    xmmword_180438450 = v12;
    v13 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyHighlightInDarkMode";
    HIDWORD(v21) = 30;
    qword_180438430 = 0LL;
    qword_180438448 = 0LL;
    qword_180438460 = 0LL;
    xmmword_1804384C8 = v13;
    v14 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyForeground";
    qword_1804384D8 = 0LL;
    xmmword_1804384E0 = v14;
    *((_QWORD *)&v21 + 1) = 0x5200000001LL;
    qword_1804384F0 = 0LL;
    xmmword_180438468 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyForegroundInDarkMode";
    qword_180438478 = 0LL;
    HIDWORD(v21) = 60;
    v15 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyForegroundHighlight";
    *((_QWORD *)&v21 + 1) = 0x5200000001LL;
    xmmword_180438480 = v15;
    v16 = v21;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyForegroundHighlightInDarkMode";
    HIDWORD(v21) = 60;
    xmmword_180438498 = v16;
    v17 = v21;
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    qword_180438490 = 0LL;
    xmmword_1804384B0 = v17;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyTextLightInDarkMode";
    xmmword_1804384F8 = (unsigned __int64)L"SearchBoxTransparencyTextLight";
    v18 = v21;
    *((_QWORD *)&v21 + 1) = 0x100000000LL;
    qword_1804384A8 = 0LL;
    xmmword_180438510 = v18;
    *(_QWORD *)&v21 = L"SearchBoxTransparencyTextLightHighlightInDarkMode";
    xmmword_180438528 = (unsigned __int64)L"SearchBoxTransparencyTextLightHighlight";
    v19 = v21;
    *(_QWORD *)&v21 = L"WideQFDelta";
    qword_1804384C0 = 0LL;
    *((_QWORD *)&v21 + 1) = 1LL;
    xmmword_180438540 = v19;
    v20 = v21;
    *(_QWORD *)&v21 = L"WideAtStartupDelta";
    qword_180438508 = 0LL;
    qword_180438520 = 0LL;
    qword_180438538 = 0LL;
    xmmword_1804385B8 = v20;
    qword_180438550 = 0LL;
    qword_1804385C8 = 0LL;
    xmmword_1804385A0 = v21;
    qword_1804385B0 = 0LL;
    xmmword_180438558 = (unsigned __int64)L"SearchBoxUseSearchIconAtRest";
    qword_180438568 = 0LL;
    xmmword_180438570 = (unsigned __int64)L"SearchButtonUseSearchIcon";
    qword_180438580 = 0LL;
    xmmword_180438588 = (unsigned __int64)L"SearchBoxForceOff";
    byte_180438034 = 1;
    qword_180438598 = 0LL;
  }
  return (struct CortanaFeatureConfiguration::FeatureBehaviorMap *)&xmmword_180438300;
}
