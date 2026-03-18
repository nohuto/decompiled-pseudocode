/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C004CB14
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C01239B0 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     SetMouseTrails @ 0x1C00470EC (SetMouseTrails.c)
 *     GreSetFontEnumeration @ 0x1C0049BA0 (GreSetFontEnumeration.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     ReadPointerDeviceSettings @ 0x1C004EE50 (ReadPointerDeviceSettings.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C00515BC (xxxUpdateSystemCursorsFromRegistry.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     SetIconMetrics @ 0x1C0082F1C (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00830F8 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0083240 (xxxSetWindowNCMetrics.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00BEFF4 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C00BFE44 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     RtlStringCchPrintfW @ 0x1C00DAAA4 (RtlStringCchPrintfW.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00DCF64 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     WakeRIT @ 0x1C00FDA94 (WakeRIT.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0116A5C (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0117350 (xxxUpdateSystemIconsFromRegistry.c)
 *     GetEasTimeout @ 0x1C011BADC (GetEasTimeout.c)
 *     _SetCaretBlinkTime @ 0x1C011C350 (_SetCaretBlinkTime.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C0120240 (UpdatePerUserKeyboardIndicators.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C012079C (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     GetKbdLangSwitch @ 0x1C01243F8 (GetKbdLangSwitch.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C0124CE8 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     UnlockDesktopMenu @ 0x1C01255E0 (UnlockDesktopMenu.c)
 *     xxxUserResetDisplayDevice @ 0x1C0142100 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     CheckEasPolicyChange @ 0x1C01B58F8 (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(int a1, __int64 a2)
{
  int v3; // esi
  int v4; // r15d
  int v5; // r14d
  int v6; // r13d
  __int64 v7; // rdx
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  USHORT Length; // ax
  unsigned int v14; // r14d
  _QWORD *i; // rbx
  __int64 v16; // rsi
  __int64 v17; // rsi
  unsigned int v18; // esi
  __int64 *v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 *v22; // rbx
  int v23; // ebx
  __int64 EasTimeout; // rsi
  unsigned int v25; // eax
  unsigned int j; // ebx
  unsigned int v27; // eax
  void *v28; // rax
  unsigned int v29; // ecx
  bool v30; // zf
  int *v31; // rax
  int v33; // ebx
  int v34; // eax
  int v35; // r14d
  __int64 v36; // rcx
  int v37; // [rsp+28h] [rbp-D8h]
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v39[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v40; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  int v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+6Ch] [rbp-94h]
  int v46; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+74h] [rbp-8Ch] BYREF
  int v48; // [rsp+78h] [rbp-88h] BYREF
  int v49; // [rsp+7Ch] [rbp-84h] BYREF
  int v50; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v51[24]; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A4h] [rbp-5Ch]
  __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  int v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B4h] [rbp-4Ch]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+C0h] [rbp-40h]
  int v59; // [rsp+C4h] [rbp-3Ch]
  int v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  int v62; // [rsp+D0h] [rbp-30h]
  int v63; // [rsp+D4h] [rbp-2Ch]
  int v64; // [rsp+D8h] [rbp-28h]
  int v65; // [rsp+DCh] [rbp-24h]
  int v66; // [rsp+E0h] [rbp-20h]
  int v67; // [rsp+E4h] [rbp-1Ch]
  int v68; // [rsp+E8h] [rbp-18h]
  int v69; // [rsp+ECh] [rbp-14h]
  int v70; // [rsp+F0h] [rbp-10h]
  int v71; // [rsp+F4h] [rbp-Ch]
  int v72; // [rsp+F8h] [rbp-8h]
  int v73; // [rsp+FCh] [rbp-4h]
  int v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+104h] [rbp+4h]
  int v76; // [rsp+108h] [rbp+8h]
  int v77; // [rsp+10Ch] [rbp+Ch]
  int v78; // [rsp+110h] [rbp+10h]
  int v79; // [rsp+114h] [rbp+14h]
  int v80; // [rsp+118h] [rbp+18h]
  int v81; // [rsp+11Ch] [rbp+1Ch]
  int v82; // [rsp+120h] [rbp+20h]
  int v83; // [rsp+124h] [rbp+24h]
  int v84; // [rsp+128h] [rbp+28h]
  int v85; // [rsp+12Ch] [rbp+2Ch]
  int v86; // [rsp+130h] [rbp+30h]
  int v87; // [rsp+134h] [rbp+34h]
  int v88; // [rsp+138h] [rbp+38h]
  int v89; // [rsp+13Ch] [rbp+3Ch]
  int v90; // [rsp+140h] [rbp+40h]
  int v91; // [rsp+144h] [rbp+44h]
  __int64 v92; // [rsp+148h] [rbp+48h]
  int v93; // [rsp+150h] [rbp+50h]
  int v94; // [rsp+154h] [rbp+54h]
  __int64 v95; // [rsp+158h] [rbp+58h] BYREF
  int v96; // [rsp+160h] [rbp+60h]
  int v97; // [rsp+164h] [rbp+64h]
  int v98; // [rsp+168h] [rbp+68h]
  int v99; // [rsp+16Ch] [rbp+6Ch]
  int v100; // [rsp+170h] [rbp+70h]
  int v101; // [rsp+174h] [rbp+74h]
  int v102; // [rsp+178h] [rbp+78h]
  int v103; // [rsp+17Ch] [rbp+7Ch]
  int v104; // [rsp+180h] [rbp+80h]
  int v105; // [rsp+184h] [rbp+84h]
  int v106; // [rsp+188h] [rbp+88h]
  int v107; // [rsp+18Ch] [rbp+8Ch]
  int v108; // [rsp+190h] [rbp+90h]
  int v109; // [rsp+194h] [rbp+94h]
  int v110; // [rsp+198h] [rbp+98h]
  int v111; // [rsp+19Ch] [rbp+9Ch]
  int v112; // [rsp+1A0h] [rbp+A0h]
  int v113; // [rsp+1A4h] [rbp+A4h]
  __int64 v114; // [rsp+1A8h] [rbp+A8h]
  int v115; // [rsp+1B0h] [rbp+B0h]
  int v116; // [rsp+1B4h] [rbp+B4h]
  __int64 v117; // [rsp+1B8h] [rbp+B8h]
  int v118; // [rsp+1C0h] [rbp+C0h]
  int v119; // [rsp+1C4h] [rbp+C4h]
  int v120; // [rsp+1C8h] [rbp+C8h]
  int v121; // [rsp+1CCh] [rbp+CCh]
  int v122; // [rsp+1D0h] [rbp+D0h]
  int v123; // [rsp+1D4h] [rbp+D4h]
  int v124; // [rsp+1D8h] [rbp+D8h]
  int v125; // [rsp+1DCh] [rbp+DCh]
  int v126; // [rsp+1E0h] [rbp+E0h]
  int v127; // [rsp+1E4h] [rbp+E4h]
  int v128; // [rsp+1E8h] [rbp+E8h]
  int v129; // [rsp+1ECh] [rbp+ECh]
  int v130; // [rsp+1F0h] [rbp+F0h]
  int v131; // [rsp+1F4h] [rbp+F4h]
  int v132; // [rsp+1F8h] [rbp+F8h]
  int v133; // [rsp+1FCh] [rbp+FCh]
  int v134; // [rsp+200h] [rbp+100h]
  int v135; // [rsp+204h] [rbp+104h]
  int v136; // [rsp+208h] [rbp+108h]
  int v137; // [rsp+20Ch] [rbp+10Ch]
  int v138; // [rsp+210h] [rbp+110h]
  int v139; // [rsp+214h] [rbp+114h]
  int v140; // [rsp+218h] [rbp+118h]
  int v141; // [rsp+21Ch] [rbp+11Ch]
  int v142; // [rsp+220h] [rbp+120h]
  int v143; // [rsp+224h] [rbp+124h]
  int v144; // [rsp+228h] [rbp+128h]
  int v145; // [rsp+22Ch] [rbp+12Ch]
  int v146; // [rsp+230h] [rbp+130h]
  int v147; // [rsp+234h] [rbp+134h]
  __int64 v148; // [rsp+238h] [rbp+138h]
  int v149; // [rsp+240h] [rbp+140h] BYREF
  __int64 v150; // [rsp+248h] [rbp+148h]
  int v151; // [rsp+250h] [rbp+150h]
  int *v152; // [rsp+258h] [rbp+158h]
  int v153; // [rsp+260h] [rbp+160h]
  __int64 v154; // [rsp+268h] [rbp+168h]
  int v155; // [rsp+270h] [rbp+170h]
  int *v156; // [rsp+278h] [rbp+178h]
  int v157; // [rsp+280h] [rbp+180h]
  __int64 v158; // [rsp+288h] [rbp+188h]
  int v159; // [rsp+290h] [rbp+190h]
  int *v160; // [rsp+298h] [rbp+198h]
  int v161; // [rsp+2A0h] [rbp+1A0h]
  __int64 v162; // [rsp+2A8h] [rbp+1A8h]
  int v163; // [rsp+2B0h] [rbp+1B0h]
  __int64 v164; // [rsp+2B8h] [rbp+1B8h]
  int v165; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v166; // [rsp+2C8h] [rbp+1C8h]
  int v167; // [rsp+2D0h] [rbp+1D0h]
  int *v168; // [rsp+2D8h] [rbp+1D8h]
  int v169; // [rsp+2E0h] [rbp+1E0h]
  __int64 v170; // [rsp+2E8h] [rbp+1E8h]
  int v171; // [rsp+2F0h] [rbp+1F0h]
  int *v172; // [rsp+2F8h] [rbp+1F8h]
  int v173; // [rsp+300h] [rbp+200h]
  __int64 v174; // [rsp+308h] [rbp+208h]
  int v175; // [rsp+310h] [rbp+210h]
  int *v176; // [rsp+318h] [rbp+218h]
  int v177; // [rsp+320h] [rbp+220h]
  __int64 v178; // [rsp+328h] [rbp+228h]
  int v179; // [rsp+330h] [rbp+230h]
  int *v180; // [rsp+338h] [rbp+238h]
  int v181; // [rsp+340h] [rbp+240h]
  __int64 v182; // [rsp+348h] [rbp+248h]
  int v183; // [rsp+350h] [rbp+250h]
  __int64 v184; // [rsp+358h] [rbp+258h]
  int v185; // [rsp+360h] [rbp+260h]
  __int64 v186; // [rsp+368h] [rbp+268h]
  int v187; // [rsp+370h] [rbp+270h]
  __int64 v188; // [rsp+378h] [rbp+278h]
  int v189; // [rsp+380h] [rbp+280h]
  __int64 v190; // [rsp+388h] [rbp+288h]
  int v191; // [rsp+390h] [rbp+290h]
  int *v192; // [rsp+398h] [rbp+298h]
  int v193; // [rsp+3A0h] [rbp+2A0h]
  __int64 v194; // [rsp+3A8h] [rbp+2A8h]
  int v195; // [rsp+3B0h] [rbp+2B0h]
  int *v196; // [rsp+3B8h] [rbp+2B8h]
  int v197; // [rsp+3C0h] [rbp+2C0h]
  __int64 v198; // [rsp+3C8h] [rbp+2C8h]
  int v199; // [rsp+3D0h] [rbp+2D0h]
  __int64 v200; // [rsp+3D8h] [rbp+2D8h]
  int v201; // [rsp+3E0h] [rbp+2E0h]
  __int64 v202; // [rsp+3E8h] [rbp+2E8h]
  int v203; // [rsp+3F0h] [rbp+2F0h]
  int *v204; // [rsp+3F8h] [rbp+2F8h]
  int v205; // [rsp+400h] [rbp+300h]
  __int64 v206; // [rsp+408h] [rbp+308h]
  int v207; // [rsp+410h] [rbp+310h]
  int *v208; // [rsp+418h] [rbp+318h]
  wchar_t pszDest[40]; // [rsp+420h] [rbp+320h] BYREF
  _BYTE v210[80]; // [rsp+470h] [rbp+370h] BYREF

  v49 = a1;
  v45 = 0;
  v53 = 4135;
  v43 = gulFontInformation;
  v42 = 96;
  v52 = 4;
  v54 = 112LL;
  v46 = 0;
  v48 = gdwPUDFlags & 0x100000;
  v3 = 0;
  v44 = 1;
  v47 = gdwPUDFlags & 0x10000;
  v69 = 3;
  v73 = 3;
  v93 = 13;
  v96 = 13;
  v98 = 13;
  v55 = 4;
  v56 = 17;
  v57 = 100LL;
  v58 = 4;
  v59 = 77;
  v60 = 199;
  v61 = 4;
  v62 = 4;
  v63 = 76;
  v64 = 198;
  v65 = 4;
  v66 = 4;
  v67 = 105;
  v68 = 14;
  v70 = 4;
  v71 = 109;
  v72 = 15;
  v74 = 4;
  v75 = 131;
  v76 = 18;
  v77 = 1;
  v78 = 4;
  v79 = 141;
  v80 = 624;
  v81 = 1;
  v82 = 4;
  v83 = 145;
  v84 = 625;
  v85 = 1;
  v86 = 4;
  v87 = 143;
  v88 = 626;
  v89 = 1;
  v90 = 4;
  v91 = 159;
  v92 = 628LL;
  v94 = 23;
  v95 = 106LL;
  v97 = 11;
  v99 = 15;
  v100 = 12;
  v101 = 32;
  v102 = 6;
  v128 = 17;
  v133 = 20;
  v136 = 20;
  v109 = 30;
  v141 = 50;
  v145 = 50;
  v168 = &gdtMNDropDown;
  v172 = &v48;
  v176 = &gnFastAltTabRows;
  v180 = &gnFastAltTabColumns;
  v129 = 30;
  v137 = 30;
  v113 = 96;
  v117 = 96LL;
  v131 = 133;
  v174 = 133LL;
  v103 = 500;
  v184 = gpsi + 4992LL;
  v104 = 12;
  v105 = 29;
  v106 = 97;
  v107 = 4;
  v108 = 12;
  v110 = 98;
  v111 = 4;
  v112 = 12;
  v114 = 7LL;
  v115 = 3;
  v116 = 28;
  v118 = 35;
  v119 = 111;
  v120 = 236;
  v121 = 1;
  v122 = 12;
  v123 = 127;
  v124 = 16;
  v125 = 1;
  v126 = 12;
  v127 = 129;
  v130 = 12;
  v132 = 19;
  v134 = 12;
  v135 = 135;
  v138 = 12;
  v139 = 137;
  v140 = 21;
  v142 = 12;
  v143 = 139;
  v144 = 22;
  v146 = 4;
  v147 = 169;
  v148 = 205LL;
  v165 = 4;
  v166 = 94LL;
  v167 = 400;
  v169 = 4;
  v170 = 107LL;
  v171 = 2;
  v173 = 4;
  v175 = 3;
  v177 = 4;
  v178 = 134LL;
  v179 = 7;
  v181 = 4;
  v182 = 159LL;
  v183 = 3;
  v185 = 4;
  v186 = 160LL;
  v189 = 4;
  v188 = gpsi + 4996LL;
  v193 = 4;
  v192 = &v43;
  v196 = &v46;
  v200 = gdwHungAppTimeout;
  v204 = &gdwWaitToKillTimeout;
  v208 = &v47;
  v152 = &gMouseThresh1;
  v197 = 4;
  v201 = 4;
  v4 = a1 & 1;
  v156 = &gMouseThresh2;
  v207 = 1;
  v159 = 1;
  v149 = 12;
  v5 = a1 & 4;
  v153 = 12;
  v157 = 12;
  v158 = 12LL;
  v160 = &v44;
  v199 = 5000;
  v203 = 5000;
  v164 = gfEnableHexNumpad;
  v187 = 3;
  v190 = 200LL;
  v191 = 0;
  v194 = 618LL;
  v195 = 0;
  v198 = 621LL;
  v202 = 622LL;
  v205 = 23;
  v206 = 149LL;
  v150 = 10LL;
  v151 = 6;
  v154 = 11LL;
  v155 = 10;
  v161 = 35;
  v162 = 237LL;
  v163 = 0;
  v41 = v5;
  v6 = a1 & 2;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v51);
  if ( !ProfileUserName )
    return 0LL;
  v10 = grpWinStaList;
  if ( grpWinStaList )
  {
    v11 = *(_QWORD *)(grpWinStaList + 176LL);
    if ( v11 )
      Win32FreePool(v11, v7, v9);
    v12 = Win32AllocPool(ProfileUserName->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 176LL) = v12;
    if ( v12 )
    {
      Length = ProfileUserName->Length;
      *(_WORD *)(grpWinStaList + 168LL) = 0;
      *(_WORD *)(grpWinStaList + 170LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 168LL), ProfileUserName);
    }
    v10 = 0;
    if ( v4 )
      WakeRIT(256LL);
  }
  if ( !v6 || v5 )
    goto LABEL_12;
  v45 = CheckEasPolicyChange();
  v35 = v45;
  if ( !(unsigned int)CheckDesktopPolicyChange(ProfileUserName) && !v35 )
  {
    UserSetLastError(0LL);
    FreeProfileUserName(ProfileUserName, v51);
    return 0LL;
  }
  v3 = 16;
LABEL_12:
  if ( v4 )
    gdwPolicyFlags |= 2u;
  v38 = 300;
  v14 = v3 | 8;
  if ( v41 == v10 )
    v14 = v3;
  FastGetProfileValue(ProfileUserName, 4LL, 607LL, &v38, &gnllHooksTimeout, 4, v14);
  if ( gnllHooksTimeout >= 1000 )
    gnllHooksTimeout = 1000;
  if ( v4 )
  {
    if ( gDpiAdjustedForLoggedOnUser == v10 )
    {
      FastGetProfileDwordW(ProfileUserName, 4LL, L"LogPixels", 0LL, &v42, v14);
      v40 = v10;
      v33 = DrvInitializeDxgkrnlDpiCache(&v40);
      v34 = PerformLegacyDpiUpgrade(ProfileUserName, v42);
      if ( v33 < 0 || v40 || gdmLogPixelsOfPrimary != gdmLogPixels || v34 || v42 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(v37) = 0;
        v39[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, v37, 0LL, v39, a2) >= 0 )
        {
          if ( v39[0] )
            xxxUserResetDisplayDevice();
          UserReinitializeStockFonts(*(unsigned __int16 *)(gpsi + 9974LL), 1, 0);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  LoadCPUserPreferences(ProfileUserName, v14);
  if ( !v6 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(ProfileUserName);
    if ( gbGreTextReady )
      xxxSetWindowNCMetrics(ProfileUserName, 0LL);
    SetMinMetrics(ProfileUserName);
    SetIconMetrics(ProfileUserName);
    GetKbdLangSwitch(ProfileUserName);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 9988LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        v16 = i[7];
        if ( v16 )
        {
          *(_DWORD *)(v16 + 56) &= ~0x80u;
          if ( UnlockDesktopMenu() )
            DestroyMenu(v16);
        }
        v17 = i[8];
        if ( v17 )
        {
          *(_DWORD *)(v17 + 56) &= ~0x80u;
          if ( UnlockDesktopMenu() )
            DestroyMenu(v17);
        }
      }
    }
    xxxUpdateSystemCursorsFromRegistry(ProfileUserName);
    xxxUpdateSystemIconsFromRegistry(ProfileUserName);
    v18 = 0;
    v19 = &v95;
    do
    {
      if ( (unsigned int)FastGetProfileIntFromID(
                           ProfileUserName,
                           *((unsigned int *)v19 - 2),
                           *(unsigned int *)v19,
                           *((unsigned int *)v19 + 1),
                           &v38,
                           0) )
        xxxSystemParametersInfo(*((unsigned int *)v19 - 1), v38, 0LL, 0x8000LL);
      ++v18;
      v19 += 2;
    }
    while ( v18 < 0xF );
    FastGetProfileIntsW(ProfileUserName, &v149, 4LL);
    LOBYTE(v20) = v44 != 0;
    EnableMouseAcceleration(v20);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL);
  if ( v4 )
    FastGetProfileIntFromID(ProfileUserName, 35LL, 236LL, 1LL, &gfIMEShowStatus, 0);
  v21 = 0;
  v22 = &v54;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(
                         ProfileUserName,
                         *((unsigned int *)v22 - 2),
                         *(unsigned int *)v22,
                         *((unsigned int *)v22 + 1),
                         &v38,
                         v14) )
      xxxSystemParametersInfo(*((unsigned int *)v22 - 1), v38, 0LL, 0x8000LL);
    ++v21;
    v22 += 2;
  }
  while ( v21 < 0xB );
  v23 = v14;
  if ( v45 )
    v23 = 2;
  EasTimeout = (unsigned int)GetEasTimeout();
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 99LL, EasTimeout, &v40, v23)
    && (!(_DWORD)EasTimeout || v40 < (unsigned int)EasTimeout) )
  {
    LODWORD(EasTimeout) = v40;
  }
  xxxSystemParametersInfo(15LL, (unsigned int)EasTimeout, 0LL, 0x8000LL);
  FastGetProfileIntsW(ProfileUserName, &v165, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v46 )
    *gpsi |= 0x200u;
  else
    *gpsi &= ~0x200u;
  if ( v47 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v48 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 48LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v4 )
    {
      RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v210, 40LL);
      FastWriteProfileStringW(ProfileUserName, 4LL, v210, pszDest);
    }
  }
  else if ( v48 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v38 = *(_DWORD *)(gpsi + 4980LL);
  v25 = v6;
  if ( v41 )
    v25 = v14;
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 4LL, 500LL, &v38, v25) )
    SetCaretBlinkTime(v38);
  if ( !v6 )
  {
    v41 = 0;
    FastGetProfileIntFromID(ProfileUserName, 12LL, 608LL, 10LL, &v41, 0);
    UpdateMouseSensitivity(v41);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, ProfileUserName);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(ProfileUserName, 12LL, 613LL, 0LL, &v38, 0);
    SetMouseTrails(v38);
    FastGetProfileIntW(ProfileUserName, 7LL, L"TTOnly");
    GreSetFontEnumeration(v38);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 91LL, *(unsigned int *)(gpsi + 2024LL), &gcxMouseHover, 0);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 92LL, *(unsigned int *)(gpsi + 2028LL), &gcyMouseHover, 0);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 93LL, (unsigned int)gdtMNDropDown, &gdtMouseHover, 0);
    v27 = gdtMouseHover;
    if ( (unsigned int)gdtMouseHover < 0xA )
    {
      v27 = 10;
      gdtMouseHover = 10;
    }
    if ( v27 > 0x7FFFFFFF )
      gdtMouseHover = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(ProfileUserName);
    InitScancodeMap();
    FastGetProfileDwordW(ProfileUserName, 24LL, L"Attributes", 0LL, gdwKeyboardAttributes, 0);
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(ProfileUserName);
  }
  v28 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL);
  if ( v28 )
  {
    *(_DWORD *)(gpsi + 2132LL) = 1;
    ZwClose(v28);
  }
  *(_DWORD *)(gpsi + 2132LL) |= 2u;
  GreSetFontEnumeration(4);
  GreSetFontEnumeration(32);
  if ( (v43 & 2) != 0 )
    GreSetFontEnumeration(v43 | 4);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v43 | 0x30);
  v29 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v29 )
    v29 = 1200;
  gulGamma = v29;
  v30 = (*(_BYTE *)UPDWORDPointer(8210LL) & 1) == 0;
  v31 = &dword_1C02DE060;
  if ( v30 )
    v31 = (int *)&unk_1C02E9D40;
  off_1C0320100 = v31;
  FreeProfileUserName(ProfileUserName, v51);
  if ( v49 == 2 )
    xxxUserResetDisplayDevice();
  if ( (unsigned int)FastGetProfileDwordW(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v50, 0) && v50 )
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
      v36 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v36, gdwInAtomicOperation);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v49);
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
