/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C011A150 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     SetMinMetrics @ 0x1C0009F64 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C000A9D0 (xxxSetWindowNCMetrics.c)
 *     SetIconMetrics @ 0x1C000B568 (SetIconMetrics.c)
 *     RtlStringCchPrintfW @ 0x1C00127D4 (RtlStringCchPrintfW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 *     SetMouseTrails @ 0x1C00B9CC4 (SetMouseTrails.c)
 *     GreSetFontEnumeration @ 0x1C00BB1E4 (GreSetFontEnumeration.c)
 *     _SetCaretBlinkTime @ 0x1C00BB9A0 (_SetCaretBlinkTime.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     ReadPointerDeviceSettings @ 0x1C00C0570 (ReadPointerDeviceSettings.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C00C128C (xxxUpdateSystemCursorsFromRegistry.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00C4668 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00C5C08 (xxxUpdateSystemIconsFromRegistry.c)
 *     WakeRIT @ 0x1C0109844 (WakeRIT.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010CF54 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     GetEasTimeout @ 0x1C011210C (GetEasTimeout.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C0116950 (UpdatePerUserKeyboardIndicators.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C0116B7C (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     GetKbdLangSwitch @ 0x1C011A56C (GetKbdLangSwitch.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C011AC4C (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     UnlockDesktopMenu @ 0x1C011B8B4 (UnlockDesktopMenu.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C011BF50 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     xxxUserResetDisplayDevice @ 0x1C013B580 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C013DA38 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     CheckEasPolicyChange @ 0x1C01B28E8 (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(int a1, __int64 a2)
{
  int v3; // esi
  int v4; // r15d
  int v5; // r14d
  int v6; // r13d
  struct _UNICODE_STRING *ProfileUserName; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  USHORT Length; // ax
  unsigned int v12; // r14d
  _QWORD *i; // rbx
  __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned int v16; // esi
  __int64 *v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // esi
  __int64 *v20; // rbx
  int v21; // ebx
  __int64 EasTimeout; // rsi
  unsigned int v23; // eax
  unsigned int j; // ebx
  unsigned int v25; // eax
  void *v26; // rax
  unsigned int v27; // ecx
  bool v28; // zf
  int *v29; // rax
  int v31; // ebx
  int v32; // eax
  int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[4]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v39; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v40; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int LogPixels; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+74h] [rbp-8Ch] BYREF
  int v43; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+7Ch] [rbp-84h]
  int v45; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+84h] [rbp-7Ch] BYREF
  int v47; // [rsp+88h] [rbp-78h] BYREF
  int v48; // [rsp+8Ch] [rbp-74h] BYREF
  int v49; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v50[24]; // [rsp+98h] [rbp-68h] BYREF
  int v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B4h] [rbp-4Ch]
  __int64 v53; // [rsp+B8h] [rbp-48h] BYREF
  int v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C4h] [rbp-3Ch]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  int v57; // [rsp+D0h] [rbp-30h]
  int v58; // [rsp+D4h] [rbp-2Ch]
  int v59; // [rsp+D8h] [rbp-28h]
  int v60; // [rsp+DCh] [rbp-24h]
  int v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E4h] [rbp-1Ch]
  int v63; // [rsp+E8h] [rbp-18h]
  int v64; // [rsp+ECh] [rbp-14h]
  int v65; // [rsp+F0h] [rbp-10h]
  int v66; // [rsp+F4h] [rbp-Ch]
  int v67; // [rsp+F8h] [rbp-8h]
  int v68; // [rsp+FCh] [rbp-4h]
  int v69; // [rsp+100h] [rbp+0h]
  int v70; // [rsp+104h] [rbp+4h]
  int v71; // [rsp+108h] [rbp+8h]
  int v72; // [rsp+10Ch] [rbp+Ch]
  int v73; // [rsp+110h] [rbp+10h]
  int v74; // [rsp+114h] [rbp+14h]
  int v75; // [rsp+118h] [rbp+18h]
  int v76; // [rsp+11Ch] [rbp+1Ch]
  int v77; // [rsp+120h] [rbp+20h]
  int v78; // [rsp+124h] [rbp+24h]
  int v79; // [rsp+128h] [rbp+28h]
  int v80; // [rsp+12Ch] [rbp+2Ch]
  int v81; // [rsp+130h] [rbp+30h]
  int v82; // [rsp+134h] [rbp+34h]
  int v83; // [rsp+138h] [rbp+38h]
  int v84; // [rsp+13Ch] [rbp+3Ch]
  int v85; // [rsp+140h] [rbp+40h]
  int v86; // [rsp+144h] [rbp+44h]
  int v87; // [rsp+148h] [rbp+48h]
  int v88; // [rsp+14Ch] [rbp+4Ch]
  int v89; // [rsp+150h] [rbp+50h]
  int v90; // [rsp+154h] [rbp+54h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  int v92; // [rsp+160h] [rbp+60h]
  int v93; // [rsp+164h] [rbp+64h]
  __int64 v94; // [rsp+168h] [rbp+68h] BYREF
  int v95; // [rsp+170h] [rbp+70h]
  int v96; // [rsp+174h] [rbp+74h]
  int v97; // [rsp+178h] [rbp+78h]
  int v98; // [rsp+17Ch] [rbp+7Ch]
  int v99; // [rsp+180h] [rbp+80h]
  int v100; // [rsp+184h] [rbp+84h]
  int v101; // [rsp+188h] [rbp+88h]
  int v102; // [rsp+18Ch] [rbp+8Ch]
  int v103; // [rsp+190h] [rbp+90h]
  int v104; // [rsp+194h] [rbp+94h]
  int v105; // [rsp+198h] [rbp+98h]
  int v106; // [rsp+19Ch] [rbp+9Ch]
  int v107; // [rsp+1A0h] [rbp+A0h]
  int v108; // [rsp+1A4h] [rbp+A4h]
  int v109; // [rsp+1A8h] [rbp+A8h]
  int v110; // [rsp+1ACh] [rbp+ACh]
  int v111; // [rsp+1B0h] [rbp+B0h]
  int v112; // [rsp+1B4h] [rbp+B4h]
  __int64 v113; // [rsp+1B8h] [rbp+B8h]
  int v114; // [rsp+1C0h] [rbp+C0h]
  int v115; // [rsp+1C4h] [rbp+C4h]
  __int64 v116; // [rsp+1C8h] [rbp+C8h]
  int v117; // [rsp+1D0h] [rbp+D0h]
  int v118; // [rsp+1D4h] [rbp+D4h]
  int v119; // [rsp+1D8h] [rbp+D8h]
  int v120; // [rsp+1DCh] [rbp+DCh]
  int v121; // [rsp+1E0h] [rbp+E0h]
  int v122; // [rsp+1E4h] [rbp+E4h]
  int v123; // [rsp+1E8h] [rbp+E8h]
  int v124; // [rsp+1ECh] [rbp+ECh]
  int v125; // [rsp+1F0h] [rbp+F0h]
  int v126; // [rsp+1F4h] [rbp+F4h]
  int v127; // [rsp+1F8h] [rbp+F8h]
  int v128; // [rsp+1FCh] [rbp+FCh]
  int v129; // [rsp+200h] [rbp+100h]
  int v130; // [rsp+204h] [rbp+104h]
  int v131; // [rsp+208h] [rbp+108h]
  int v132; // [rsp+20Ch] [rbp+10Ch]
  int v133; // [rsp+210h] [rbp+110h]
  int v134; // [rsp+214h] [rbp+114h]
  int v135; // [rsp+218h] [rbp+118h]
  int v136; // [rsp+21Ch] [rbp+11Ch]
  int v137; // [rsp+220h] [rbp+120h]
  int v138; // [rsp+224h] [rbp+124h]
  int v139; // [rsp+228h] [rbp+128h]
  int v140; // [rsp+22Ch] [rbp+12Ch]
  int v141; // [rsp+230h] [rbp+130h]
  int v142; // [rsp+234h] [rbp+134h]
  int v143; // [rsp+238h] [rbp+138h]
  int v144; // [rsp+23Ch] [rbp+13Ch]
  int v145; // [rsp+240h] [rbp+140h]
  int v146; // [rsp+244h] [rbp+144h]
  __int64 v147; // [rsp+248h] [rbp+148h]
  int v148; // [rsp+250h] [rbp+150h] BYREF
  __int64 v149; // [rsp+258h] [rbp+158h]
  int v150; // [rsp+260h] [rbp+160h]
  int *v151; // [rsp+268h] [rbp+168h]
  int v152; // [rsp+270h] [rbp+170h]
  __int64 v153; // [rsp+278h] [rbp+178h]
  int v154; // [rsp+280h] [rbp+180h]
  int *v155; // [rsp+288h] [rbp+188h]
  int v156; // [rsp+290h] [rbp+190h]
  __int64 v157; // [rsp+298h] [rbp+198h]
  int v158; // [rsp+2A0h] [rbp+1A0h]
  int *v159; // [rsp+2A8h] [rbp+1A8h]
  int v160; // [rsp+2B0h] [rbp+1B0h]
  __int64 v161; // [rsp+2B8h] [rbp+1B8h]
  int v162; // [rsp+2C0h] [rbp+1C0h]
  __int64 v163; // [rsp+2C8h] [rbp+1C8h]
  int v164; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v165; // [rsp+2D8h] [rbp+1D8h]
  int v166; // [rsp+2E0h] [rbp+1E0h]
  int *v167; // [rsp+2E8h] [rbp+1E8h]
  int v168; // [rsp+2F0h] [rbp+1F0h]
  __int64 v169; // [rsp+2F8h] [rbp+1F8h]
  int v170; // [rsp+300h] [rbp+200h]
  int *v171; // [rsp+308h] [rbp+208h]
  int v172; // [rsp+310h] [rbp+210h]
  __int64 v173; // [rsp+318h] [rbp+218h]
  int v174; // [rsp+320h] [rbp+220h]
  int *v175; // [rsp+328h] [rbp+228h]
  int v176; // [rsp+330h] [rbp+230h]
  __int64 v177; // [rsp+338h] [rbp+238h]
  int v178; // [rsp+340h] [rbp+240h]
  int *v179; // [rsp+348h] [rbp+248h]
  int v180; // [rsp+350h] [rbp+250h]
  __int64 v181; // [rsp+358h] [rbp+258h]
  int v182; // [rsp+360h] [rbp+260h]
  __int64 v183; // [rsp+368h] [rbp+268h]
  int v184; // [rsp+370h] [rbp+270h]
  __int64 v185; // [rsp+378h] [rbp+278h]
  int v186; // [rsp+380h] [rbp+280h]
  __int64 v187; // [rsp+388h] [rbp+288h]
  int v188; // [rsp+390h] [rbp+290h]
  __int64 v189; // [rsp+398h] [rbp+298h]
  int v190; // [rsp+3A0h] [rbp+2A0h]
  int *v191; // [rsp+3A8h] [rbp+2A8h]
  int v192; // [rsp+3B0h] [rbp+2B0h]
  __int64 v193; // [rsp+3B8h] [rbp+2B8h]
  int v194; // [rsp+3C0h] [rbp+2C0h]
  int *v195; // [rsp+3C8h] [rbp+2C8h]
  int v196; // [rsp+3D0h] [rbp+2D0h]
  __int64 v197; // [rsp+3D8h] [rbp+2D8h]
  int v198; // [rsp+3E0h] [rbp+2E0h]
  __int64 v199; // [rsp+3E8h] [rbp+2E8h]
  int v200; // [rsp+3F0h] [rbp+2F0h]
  __int64 v201; // [rsp+3F8h] [rbp+2F8h]
  int v202; // [rsp+400h] [rbp+300h]
  int *v203; // [rsp+408h] [rbp+308h]
  int v204; // [rsp+410h] [rbp+310h]
  __int64 v205; // [rsp+418h] [rbp+318h]
  int v206; // [rsp+420h] [rbp+320h]
  int *v207; // [rsp+428h] [rbp+328h]
  wchar_t pszDest[40]; // [rsp+430h] [rbp+330h] BYREF
  _BYTE v209[80]; // [rsp+480h] [rbp+380h] BYREF

  v48 = a1;
  v44 = 0;
  v52 = 4135;
  v42 = gulFontInformation;
  LogPixels = 96;
  v51 = 4;
  v53 = 112LL;
  v45 = 0;
  v47 = gdwPUDFlags & 0x100000;
  v3 = 0;
  v43 = 1;
  v46 = gdwPUDFlags & 0x10000;
  v68 = 3;
  v72 = 3;
  v92 = 13;
  v95 = 13;
  v97 = 13;
  v54 = 4;
  v55 = 17;
  v56 = 100LL;
  v57 = 4;
  v58 = 77;
  v59 = 199;
  v60 = 4;
  v61 = 4;
  v62 = 76;
  v63 = 198;
  v64 = 4;
  v65 = 4;
  v66 = 105;
  v67 = 14;
  v69 = 4;
  v70 = 109;
  v71 = 15;
  v73 = 4;
  v74 = 131;
  v75 = 18;
  v76 = 1;
  v77 = 4;
  v78 = 141;
  v79 = 624;
  v80 = 1;
  v81 = 4;
  v82 = 145;
  v83 = 625;
  v84 = 1;
  v85 = 4;
  v86 = 143;
  v87 = 626;
  v88 = 1;
  v89 = 4;
  v90 = 159;
  v91 = 628LL;
  v93 = 23;
  v94 = 106LL;
  v96 = 11;
  v98 = 15;
  v99 = 12;
  v100 = 32;
  v101 = 6;
  v127 = 17;
  v132 = 20;
  v135 = 20;
  v108 = 30;
  v140 = 50;
  v144 = 50;
  v167 = &gdtMNDropDown;
  v171 = &v47;
  v175 = &gnFastAltTabRows;
  v179 = &gnFastAltTabColumns;
  v128 = 30;
  v136 = 30;
  v112 = 96;
  v116 = 96LL;
  v130 = 133;
  v173 = 133LL;
  v102 = 500;
  v183 = gpsi + 5404LL;
  v103 = 12;
  v104 = 29;
  v105 = 97;
  v106 = 4;
  v107 = 12;
  v109 = 98;
  v110 = 4;
  v111 = 12;
  v113 = 7LL;
  v114 = 3;
  v115 = 28;
  v117 = 35;
  v118 = 111;
  v119 = 236;
  v120 = 1;
  v121 = 12;
  v122 = 127;
  v123 = 16;
  v124 = 1;
  v125 = 12;
  v126 = 129;
  v129 = 12;
  v131 = 19;
  v133 = 12;
  v134 = 135;
  v137 = 12;
  v138 = 137;
  v139 = 21;
  v141 = 12;
  v142 = 139;
  v143 = 22;
  v145 = 4;
  v146 = 169;
  v147 = 205LL;
  v164 = 4;
  v165 = 94LL;
  v166 = 400;
  v168 = 4;
  v169 = 107LL;
  v170 = 2;
  v172 = 4;
  v174 = 3;
  v176 = 4;
  v177 = 134LL;
  v178 = 7;
  v180 = 4;
  v181 = 159LL;
  v182 = 3;
  v184 = 4;
  v185 = 160LL;
  v188 = 4;
  v187 = gpsi + 5408LL;
  v192 = 4;
  v191 = &v42;
  v195 = &v45;
  v199 = gdwHungAppTimeout;
  v203 = &gdwWaitToKillTimeout;
  v207 = &v46;
  v151 = &gMouseThresh1;
  v196 = 4;
  v200 = 4;
  v4 = a1 & 1;
  v155 = &gMouseThresh2;
  v206 = 1;
  v158 = 1;
  v148 = 12;
  v5 = a1 & 4;
  v152 = 12;
  v156 = 12;
  v157 = 12LL;
  v159 = &v43;
  v198 = 5000;
  v202 = 5000;
  v163 = gfEnableHexNumpad;
  v186 = 3;
  v189 = 200LL;
  v190 = 0;
  v193 = 618LL;
  v194 = 0;
  v197 = 621LL;
  v201 = 622LL;
  v204 = 23;
  v205 = 149LL;
  v149 = 10LL;
  v150 = 6;
  v153 = 11LL;
  v154 = 10;
  v160 = 35;
  v161 = 237LL;
  v162 = 0;
  v40 = v5;
  v6 = a1 & 2;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v50);
  if ( !ProfileUserName )
    return 0LL;
  v8 = grpWinStaList;
  if ( grpWinStaList )
  {
    v9 = *(_QWORD *)(grpWinStaList + 176LL);
    if ( v9 )
      Win32FreePool(v9);
    v10 = Win32AllocPool(ProfileUserName->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 176LL) = v10;
    if ( v10 )
    {
      Length = ProfileUserName->Length;
      *(_WORD *)(grpWinStaList + 168LL) = 0;
      *(_WORD *)(grpWinStaList + 170LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 168LL), ProfileUserName);
    }
    v8 = 0;
    if ( v4 )
      WakeRIT(256LL);
  }
  if ( !v6 || v5 )
    goto LABEL_12;
  v44 = CheckEasPolicyChange();
  v33 = v44;
  if ( !(unsigned int)CheckDesktopPolicyChange(ProfileUserName) && !v33 )
  {
    UserSetLastError(0LL);
    FreeProfileUserName(ProfileUserName, v50);
    return 0LL;
  }
  v3 = 16;
LABEL_12:
  if ( v4 )
    gdwPolicyFlags |= 2u;
  v37 = 300;
  v12 = v3 | 8;
  if ( v40 == v8 )
    v12 = v3;
  FastGetProfileValue(ProfileUserName, 4LL, 607LL, &v37, &gnllHooksTimeout, 4, v12);
  if ( v4 )
  {
    if ( gDpiAdjustedForLoggedOnUser == v8 )
    {
      FastGetProfileDwordW(ProfileUserName, 4LL, L"LogPixels", 0LL, &LogPixels, v12);
      v39 = v8;
      v31 = DrvInitializeDxgkrnlDpiCache(&v39);
      v32 = PerformLegacyDpiUpgrade(ProfileUserName, LogPixels);
      if ( v31 < 0 || v39 || gdmLogPixelsOfPrimary != gdmLogPixels || v32 || LogPixels )
      {
        GreReinitializeDpiSetting();
        v38[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 0LL, 0LL, 2191, 516, 0LL, 0, 0LL, v38, a2) >= 0 )
        {
          if ( v38[0] )
            xxxUserResetDisplayDevice();
          LogPixels = (unsigned __int16)DrvGetLogPixels();
          UserReinitializeStockFonts(LogPixels, 1, 0);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  LoadCPUserPreferences(ProfileUserName, v12);
  if ( !v6 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(ProfileUserName);
    if ( gbGreTextReady )
      xxxSetWindowNCMetrics((__int64)ProfileUserName, 0LL, 1, -1);
    SetMinMetrics((__int64)ProfileUserName, 0LL);
    SetIconMetrics(ProfileUserName, 0LL);
    GetKbdLangSwitch(ProfileUserName);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 8692LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        v14 = i[7];
        if ( v14 )
        {
          *(_DWORD *)(v14 + 56) &= ~0x80u;
          if ( UnlockDesktopMenu() )
            DestroyMenu((struct tagMENU *)v14);
        }
        v15 = i[8];
        if ( v15 )
        {
          *(_DWORD *)(v15 + 56) &= ~0x80u;
          if ( UnlockDesktopMenu() )
            DestroyMenu((struct tagMENU *)v15);
        }
      }
    }
    xxxUpdateSystemCursorsFromRegistry(ProfileUserName);
    xxxUpdateSystemIconsFromRegistry(ProfileUserName);
    v16 = 0;
    v17 = &v94;
    do
    {
      if ( (unsigned int)FastGetProfileIntFromID(
                           ProfileUserName,
                           *((unsigned int *)v17 - 2),
                           *(unsigned int *)v17,
                           *((unsigned int *)v17 + 1),
                           &v37,
                           0) )
        xxxSystemParametersInfo(*((unsigned int *)v17 - 1), v37, 0LL, 0x8000LL);
      ++v16;
      v17 += 2;
    }
    while ( v16 < 0xF );
    FastGetProfileIntsW(ProfileUserName, &v148, 4LL);
    LOBYTE(v18) = v43 != 0;
    EnableMouseAcceleration(v18);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL);
  if ( v4 )
    FastGetProfileIntFromID(ProfileUserName, 35LL, 236LL, 1LL, &gfIMEShowStatus, 0);
  v19 = 0;
  v20 = &v53;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(
                         ProfileUserName,
                         *((unsigned int *)v20 - 2),
                         *(unsigned int *)v20,
                         *((unsigned int *)v20 + 1),
                         &v37,
                         v12) )
      xxxSystemParametersInfo(*((unsigned int *)v20 - 1), v37, 0LL, 0x8000LL);
    ++v19;
    v20 += 2;
  }
  while ( v19 < 0xB );
  v21 = v12;
  if ( v44 )
    v21 = 2;
  EasTimeout = (unsigned int)GetEasTimeout();
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 99LL, EasTimeout, &v39, v21)
    && (!(_DWORD)EasTimeout || v39 < (unsigned int)EasTimeout) )
  {
    LODWORD(EasTimeout) = v39;
  }
  xxxSystemParametersInfo(15LL, (unsigned int)EasTimeout, 0LL, 0x8000LL);
  FastGetProfileIntsW(ProfileUserName, &v164, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v45 )
    *gpsi |= 0x200u;
  else
    *gpsi &= ~0x200u;
  if ( v46 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v47 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 48LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v4 )
    {
      RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v209, 40LL);
      FastWriteProfileStringW(ProfileUserName, 4LL, v209, pszDest);
    }
  }
  else if ( v47 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v37 = *(_DWORD *)(gpsi + 5392LL);
  v23 = v6;
  if ( v40 )
    v23 = v12;
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 4LL, 500LL, &v37, v23) )
    SetCaretBlinkTime(v37);
  if ( !v6 )
  {
    v40 = 0;
    FastGetProfileIntFromID(ProfileUserName, 12LL, 608LL, 10LL, &v40, 0);
    UpdateMouseSensitivity(v40);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, ProfileUserName);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(ProfileUserName, 12LL, 613LL, 0LL, &v37, 0);
    SetMouseTrails(v37);
    FastGetProfileIntW(ProfileUserName, 7LL, L"TTOnly");
    GreSetFontEnumeration(v37);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 91LL, *(unsigned int *)(gpsi + 2024LL), &gcxMouseHover, 0);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 92LL, *(unsigned int *)(gpsi + 2028LL), &gcyMouseHover, 0);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 93LL, (unsigned int)gdtMNDropDown, &gdtMouseHover, 0);
    v25 = gdtMouseHover;
    if ( (unsigned int)gdtMouseHover < 0xA )
    {
      v25 = 10;
      gdtMouseHover = 10;
    }
    if ( v25 > 0x7FFFFFFF )
      gdtMouseHover = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(ProfileUserName);
    InitScancodeMap();
    FastGetProfileDwordW(ProfileUserName, 24LL, L"Attributes", 0LL, gdwKeyboardAttributes, 0);
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(ProfileUserName);
  }
  v26 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL, 0LL);
  if ( v26 )
  {
    *(_DWORD *)(gpsi + 2132LL) = 1;
    ZwClose(v26);
  }
  *(_DWORD *)(gpsi + 2132LL) |= 2u;
  GreSetFontEnumeration(4);
  GreSetFontEnumeration(32);
  if ( (v42 & 2) != 0 )
    GreSetFontEnumeration(v42 | 4);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v42 | 0x30);
  v27 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v27 )
    v27 = 1200;
  gulGamma = v27;
  v28 = (*(_BYTE *)UPDWORDPointer(8210LL) & 1) == 0;
  v29 = &dword_1C02E3E20;
  if ( v28 )
    v29 = (int *)&unk_1C02ED0D0;
  off_1C0324100 = v29;
  FreeProfileUserName(ProfileUserName, v50);
  if ( v48 == 2 )
    xxxUserResetDisplayDevice();
  if ( (unsigned int)FastGetProfileDwordW(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v49, 0) && v49 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v4 )
  {
    memset(pszDest, 0, 0x38uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, pszDest) )
    {
      if ( !*(_DWORD *)&pszDest[14] )
        RawInputManagerObject::bTouchInputAllowed = 0;
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    if ( gdwInAtomicOperation )
    {
      v34 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v34, gdwInAtomicOperation, v35, v36);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v48);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v4 )
  {
    TraceLoggingAutoRotationStateEvent();
    *gpsi |= 0x400u;
  }
  return 1LL;
}
