/*
 * XREFs of NtGdiAlphaBlend @ 0x1C0087620
 * Callers:
 *     BltIcon @ 0x1C00447E0 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0214B68 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C007B510 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B538 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0086D84 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0089750 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0096770 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0128CE4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0128D3C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0195894 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C025134C (-bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02513F8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C026C840 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        POINTL a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v11; // rbx
  int v14; // r15d
  char v15; // di
  DC *v17; // rcx
  __int64 v18; // rax
  DC *v19; // rdx
  int v20; // esi
  DC *v21; // rcx
  int v22; // r12d
  char *v23; // rsi
  int v24; // r14d
  char *v25; // r9
  int v26; // edx
  float v27; // xmm4_4
  int left; // ecx
  int top; // r10d
  LONG right; // eax
  int bottom; // r8d
  int v32; // eax
  __int32 v33; // ecx
  __int32 v34; // edx
  __int32 v35; // eax
  __int32 v36; // r8d
  __int32 v37; // r9d
  __int32 v38; // eax
  FIX x; // r9d
  FIX v40; // r8d
  FIX y; // r10d
  FIX v42; // eax
  int v43; // r11d
  BOOL v44; // r9d
  BOOL v45; // r10d
  int v46; // eax
  __int64 v47; // r9
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  DC *v52; // rcx
  __int64 v53; // r14
  __int64 v54; // r13
  __int64 v55; // r12
  __int64 v56; // rsi
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  __int64 v61; // rax
  int v62; // ecx
  _DWORD *v63; // rcx
  __int64 v64; // r10
  int v65; // esi
  __int64 v66; // rdx
  __int64 v67; // r14
  __int64 v68; // r14
  __int64 v69; // rsi
  __int64 v70; // rsi
  int v71; // r11d
  LONG v72; // r8d
  LONG v73; // edx
  LONG v74; // r9d
  _DWORD *v75; // rax
  int v76; // ecx
  LONG v77; // r10d
  bool v78; // cc
  int v79; // r8d
  int v80; // r8d
  int v81; // edx
  __int64 v82; // rax
  HDC v83; // rcx
  char v84; // di
  HDC v85; // rdi
  _DWORD *v86; // rax
  __int64 v87; // r14
  int v88; // ecx
  __int64 v89; // rax
  XLATEOBJ *v90; // rsi
  __int64 v91; // rax
  HDC v92; // rax
  int v93; // edx
  __int64 v94; // rax
  int v95; // ecx
  int v96; // eax
  HDC v97; // rax
  struct _XLATETABLE near *v98; // r10
  unsigned int v99; // r11d
  int v100; // eax
  unsigned int v101; // eax
  __int64 v102; // r8
  unsigned int v103; // eax
  __int64 v104; // r8
  _DWORD *v105; // rdx
  int v106; // r9d
  unsigned int v107; // eax
  __int64 XlateObject; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  XLATEOBJ *v111; // r12
  int v112; // eax
  __int64 v113; // rax
  HDC v114; // rax
  int v115; // edx
  __int64 v116; // rax
  int v117; // ecx
  unsigned int v118; // r12d
  XLATEOBJ *v119; // rax
  unsigned int v120; // r11d
  struct _XLATETABLE near *v121; // r10
  int v122; // eax
  unsigned int v123; // eax
  __int64 v124; // r8
  unsigned int v125; // eax
  __int64 v126; // r8
  _DWORD *v127; // rdx
  int v128; // r9d
  unsigned int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdi
  __int64 v135; // r14
  int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // rcx
  int v139; // edi
  __int64 v140; // rcx
  int v141; // edx
  unsigned int v142; // esi
  struct _XLATETABLE near *v143; // r9
  unsigned int v144; // r11d
  __int64 v145; // r14
  int v146; // eax
  unsigned int v147; // eax
  __int64 v148; // r8
  unsigned int v149; // eax
  __int64 v150; // r8
  _DWORD *v151; // rdx
  int v152; // r10d
  unsigned int v153; // eax
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rax
  int v157; // eax
  __int64 v158; // rax
  __int64 v159; // rax
  int v160; // edx
  __int64 v161; // rax
  int v162; // ecx
  unsigned int v163; // esi
  __int64 v164; // rax
  unsigned int v165; // r11d
  struct _XLATETABLE near *v166; // r9
  int v167; // eax
  unsigned int v168; // eax
  __int64 v169; // r8
  unsigned int v170; // eax
  __int64 v171; // r8
  _DWORD *v172; // rdx
  int v173; // r10d
  unsigned int v174; // eax
  __int64 v175; // rdi
  __int64 v176; // rax
  int v177; // edi
  __int64 v178; // rdx
  __int64 v179; // rax
  struct REGION *v180; // rdx
  __int64 v181; // r13
  int v182; // eax
  _DWORD *v183; // rdi
  bool v184; // zf
  BOOL (__stdcall *v185)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned int v186; // edx
  __int64 v187; // r15
  int v188; // r8d
  LONG v189; // edi
  ULONG v190; // ecx
  SURFOBJ *v191; // rcx
  LONG v192; // r10d
  _DWORD *v193; // r9
  _DWORD *v194; // r11
  __int64 v195; // r13
  __int64 v196; // rax
  _DWORD *v197; // rdi
  LONG v198; // edx
  __int64 v199; // r8
  _DWORD *v200; // rcx
  unsigned __int64 v201; // rax
  _DWORD *v202; // r8
  unsigned __int64 v203; // rdx
  SURFOBJ *v204; // rdx
  SURFOBJ *v205; // rcx
  int inited; // eax
  __int64 v207; // r9
  DC *v208; // r8
  struct ECLIPOBJ *v209; // rdx
  struct ECLIPOBJ **v210; // rdi
  ULONG v211; // ecx
  BOOL (__stdcall *v212)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rdi
  __int64 cEntries; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rcx
  int v217; // ecx
  int v218; // r15d
  int v220; // [rsp+70h] [rbp-90h]
  int v221; // [rsp+70h] [rbp-90h]
  int v222; // [rsp+70h] [rbp-90h]
  int v223; // [rsp+70h] [rbp-90h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v225; // [rsp+74h] [rbp-8Ch]
  int v226; // [rsp+74h] [rbp-8Ch]
  int v227; // [rsp+74h] [rbp-8Ch]
  int v228; // [rsp+74h] [rbp-8Ch]
  int v229; // [rsp+78h] [rbp-88h]
  int v230; // [rsp+7Ch] [rbp-84h]
  int v231; // [rsp+7Ch] [rbp-84h]
  int v232; // [rsp+7Ch] [rbp-84h]
  int v233; // [rsp+7Ch] [rbp-84h]
  int v234; // [rsp+7Ch] [rbp-84h]
  char v235; // [rsp+80h] [rbp-80h]
  DC *v236[2]; // [rsp+88h] [rbp-78h] BYREF
  int v237[2]; // [rsp+98h] [rbp-68h] BYREF
  int v238[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v239[2]; // [rsp+A8h] [rbp-58h] BYREF
  DC *v240; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v241; // [rsp+B8h] [rbp-48h]
  POINTFIX v242; // [rsp+C0h] [rbp-40h]
  _DWORD *p_iUniq; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v244; // [rsp+D0h] [rbp-30h]
  XLATEOBJ *pxlo; // [rsp+D8h] [rbp-28h]
  __int64 v246; // [rsp+E0h] [rbp-20h]
  int v247[2]; // [rsp+E8h] [rbp-18h] BYREF
  __m128i v248; // [rsp+F0h] [rbp-10h] BYREF
  POINTL pptlSrc; // [rsp+100h] [rbp+0h] BYREF
  HDC v250; // [rsp+108h] [rbp+8h]
  int v251; // [rsp+110h] [rbp+10h]
  __int64 v252; // [rsp+118h] [rbp+18h]
  char *v253; // [rsp+120h] [rbp+20h] BYREF
  int v254; // [rsp+128h] [rbp+28h]
  int v255; // [rsp+12Ch] [rbp+2Ch]
  __int64 v256; // [rsp+130h] [rbp+30h] BYREF
  char v257; // [rsp+138h] [rbp+38h]
  int v258; // [rsp+13Ch] [rbp+3Ch]
  __int64 v259; // [rsp+140h] [rbp+40h] BYREF
  char v260; // [rsp+148h] [rbp+48h]
  int v261; // [rsp+14Ch] [rbp+4Ch]
  __int64 i; // [rsp+150h] [rbp+50h]
  __int64 v263; // [rsp+158h] [rbp+58h] BYREF
  char *v264; // [rsp+160h] [rbp+60h] BYREF
  int v265; // [rsp+168h] [rbp+68h]
  int v266; // [rsp+16Ch] [rbp+6Ch]
  int v267; // [rsp+170h] [rbp+70h] BYREF
  __int64 v268; // [rsp+174h] [rbp+74h]
  _BYTE v269[12]; // [rsp+17Ch] [rbp+7Ch]
  __int64 v270; // [rsp+188h] [rbp+88h]
  _DWORD v271[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v272; // [rsp+198h] [rbp+98h]
  __int128 v273; // [rsp+1A0h] [rbp+A0h]
  _DWORD v274[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v275; // [rsp+1B8h] [rbp+B8h]
  __int64 v276; // [rsp+1C8h] [rbp+C8h]
  __int64 v277; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v278; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v279; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v280; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v281; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v282; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD *v283; // [rsp+200h] [rbp+100h]
  __int64 v284; // [rsp+208h] [rbp+108h]
  __int64 v285; // [rsp+210h] [rbp+110h] BYREF
  __int64 v286; // [rsp+218h] [rbp+118h] BYREF
  __int64 v287; // [rsp+220h] [rbp+120h] BYREF
  struct PALETTE *v288; // [rsp+228h] [rbp+128h] BYREF
  __int64 v289; // [rsp+230h] [rbp+130h] BYREF
  __int64 v290; // [rsp+238h] [rbp+138h] BYREF
  __int64 v291; // [rsp+240h] [rbp+140h] BYREF
  struct PALETTE *v292; // [rsp+248h] [rbp+148h] BYREF
  __int64 v293; // [rsp+250h] [rbp+150h] BYREF
  __int64 v294; // [rsp+258h] [rbp+158h] BYREF
  RECTL v295; // [rsp+260h] [rbp+160h] BYREF
  __m128i v296; // [rsp+270h] [rbp+170h]
  int v297; // [rsp+280h] [rbp+180h] BYREF
  XLATEOBJ *v298; // [rsp+288h] [rbp+188h]
  __int64 v299; // [rsp+290h] [rbp+190h]
  XLATEOBJ *v300; // [rsp+298h] [rbp+198h]
  _OWORD v301[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v302; // [rsp+2C0h] [rbp+1C0h]
  __int64 v303; // [rsp+2C8h] [rbp+1C8h]
  char v304; // [rsp+2D0h] [rbp+1D0h]
  int v305; // [rsp+2D4h] [rbp+1D4h]
  __int64 v306; // [rsp+2D8h] [rbp+1D8h]
  __int64 v307; // [rsp+2E0h] [rbp+1E0h]
  int v308; // [rsp+2E8h] [rbp+1E8h]
  __int64 v309; // [rsp+2F0h] [rbp+1F0h]
  __int64 v310; // [rsp+2F8h] [rbp+1F8h]
  __int64 v311; // [rsp+300h] [rbp+200h]
  __int64 v312; // [rsp+308h] [rbp+208h]
  __int64 v313; // [rsp+310h] [rbp+210h]
  __int64 v314; // [rsp+318h] [rbp+218h]
  __int64 v315; // [rsp+320h] [rbp+220h]
  __int64 v316; // [rsp+328h] [rbp+228h]
  __int64 v317; // [rsp+338h] [rbp+238h]
  __int64 v318; // [rsp+340h] [rbp+240h]
  __int64 v319; // [rsp+348h] [rbp+248h]
  __m128i v320; // [rsp+350h] [rbp+250h] BYREF
  __int64 v321; // [rsp+360h] [rbp+260h]
  RECTL prclDest; // [rsp+370h] [rbp+270h] BYREF
  __m128i v323; // [rsp+380h] [rbp+280h] BYREF
  __int64 v324; // [rsp+390h] [rbp+290h] BYREF
  int v325; // [rsp+398h] [rbp+298h]
  int v326; // [rsp+39Ch] [rbp+29Ch]
  _BYTE v327[4]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v328; // [rsp+3A4h] [rbp+2A4h]
  int v329; // [rsp+3A8h] [rbp+2A8h]
  int v330; // [rsp+3ACh] [rbp+2ACh]
  int v331; // [rsp+3B0h] [rbp+2B0h]
  __int64 v332; // [rsp+3F0h] [rbp+2F0h]
  int v333; // [rsp+3F8h] [rbp+2F8h]
  int v334; // [rsp+420h] [rbp+320h]
  __int64 v335; // [rsp+430h] [rbp+330h]
  struct _POINTFIX v336; // [rsp+440h] [rbp+340h] BYREF
  FIX v337; // [rsp+448h] [rbp+348h]
  int v338; // [rsp+44Ch] [rbp+34Ch]
  int v339; // [rsp+450h] [rbp+350h]
  FIX v340; // [rsp+454h] [rbp+354h]
  FIX v341; // [rsp+458h] [rbp+358h]
  int v342; // [rsp+45Ch] [rbp+35Ch]
  struct _POINTL v343; // [rsp+460h] [rbp+360h] BYREF
  int v344; // [rsp+468h] [rbp+368h]
  int v345; // [rsp+46Ch] [rbp+36Ch]
  int v346; // [rsp+470h] [rbp+370h]
  int v347; // [rsp+474h] [rbp+374h]
  POINTFIX pptfx; // [rsp+478h] [rbp+378h] BYREF
  POINTFIX v349; // [rsp+480h] [rbp+380h]
  POINTFIX v350; // [rsp+488h] [rbp+388h]

  v11 = 0LL;
  v237[0] = a2;
  v14 = 1;
  v250 = a1;
  v239[0] = a7;
  v238[0] = a3;
  pptlSrc = a6;
  v247[0] = a8;
  LODWORD(pxlo) = a10;
  v230 = 0;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_459;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_459:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v15 = BYTE1(a11) & 0x7F;
  v242.x = BYTE1(a11) & 0x80;
  BYTE1(a11) &= ~0x80u;
  v236[1] = 0LL;
  v236[0] = (DC *)HmgLockEx(a1, 1LL, 0LL);
  if ( !v236[0] )
    goto LABEL_10;
  if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v236) )
  {
    v17 = v236[0];
    if ( (*((_DWORD *)v236[0] + 134) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v236[0]);
      v17 = v236[0];
    }
    if ( !v17 || (*((_DWORD *)v17 + 9) & 0x10000) != 0 )
      goto LABEL_10;
    v240 = 0LL;
    v241 = 0LL;
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HmgLockEx)(a6, 1LL, 0LL);
    v240 = (DC *)v18;
    v19 = (DC *)v18;
    if ( !v18 )
      goto LABEL_27;
    if ( HIDWORD(v241) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 48) + 32LL) & 0x8000) == 0 )
      {
LABEL_25:
        _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
LABEL_26:
        v240 = 0LL;
LABEL_27:
        v14 = 0;
        EngSetLastError(0x57u);
LABEL_28:
        LODWORD(v11) = v14;
        goto LABEL_29;
      }
      v20 = *(_DWORD *)(v18 + 2544);
      if ( v20 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v19 = v240;
        goto LABEL_25;
      }
    }
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v240) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v240 + 3);
      goto LABEL_26;
    }
    v21 = v240;
    if ( (*((_DWORD *)v240 + 134) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v240);
      v21 = v240;
    }
    if ( !v21 )
      goto LABEL_27;
    bSpDwmValidateSurface((struct XDCOBJ *)&v240, v239[0], v247[0], a9, (int)pxlo);
    bSpDwmValidateSurface((struct XDCOBJ *)v236, a2, a3, a4, a5);
    v254 = *(_DWORD *)(*((_QWORD *)v236[0] + 10) + 68LL);
    v22 = *(_DWORD *)(*((_QWORD *)v236[0] + 10) + 312LL) & 1;
    v255 = v22;
    if ( (*(_DWORD *)(*((_QWORD *)v236[0] + 10) + 352LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v253, (struct XDCOBJ *)v236, 0x204u, 0);
      v22 = v255;
      v23 = v253;
    }
    else
    {
      v23 = (char *)v236[0] + 336;
      v253 = (char *)v236[0] + 336;
    }
    v265 = *(_DWORD *)(*((_QWORD *)v240 + 10) + 68LL);
    v24 = *(_DWORD *)(*((_QWORD *)v240 + 10) + 312LL) & 1;
    v266 = v24;
    if ( (*(_DWORD *)(*((_QWORD *)v240 + 10) + 352LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v264, (struct XDCOBJ *)&v240, 0x204u, 0);
      v25 = v264;
      v22 = v255;
      v23 = v253;
      v24 = v266;
    }
    else
    {
      v25 = (char *)v240 + 336;
      v264 = (char *)v240 + 336;
    }
    v26 = *((_DWORD *)v25 + 8);
    if ( (v25[32] & 1) == 0 )
      goto LABEL_27;
    v27 = 0.0;
    if ( !v24 && (*(float *)v25 < 0.0 || *((float *)v25 + 3) < 0.0) )
      goto LABEL_27;
    left = v239[0];
    top = v247[0];
    right = v239[0] + a9;
    bottom = v247[0] + (_DWORD)pxlo;
    prclDest.left = v239[0];
    prclDest.top = v247[0];
    prclDest.right = v239[0] + a9;
    prclDest.bottom = v247[0] + (_DWORD)pxlo;
    if ( (v26 & 0x43) != 0x43 )
    {
      bCvtPts1((unsigned __int64)v25, &prclDest, 2LL);
      bottom = prclDest.bottom;
      right = prclDest.right;
      top = prclDest.top;
      left = prclDest.left;
    }
    if ( v24 )
    {
      ++left;
      ++right;
      prclDest.left = left;
      prclDest.right = right;
    }
    if ( left > right )
    {
      prclDest.left = right;
      prclDest.right = left;
    }
    if ( top > bottom )
    {
      prclDest.top = bottom;
      prclDest.bottom = top;
    }
    if ( (v23[32] & 1) != 0 && (v22 || v27 <= *(float *)v23 && v27 <= *((float *)v23 + 3)) )
    {
      v248.m128i_i64[0] = __PAIR64__(v238[0], a2);
      v248.m128i_i32[2] = a2 + a4;
      v248.m128i_i32[3] = v238[0] + a5;
      v323 = v248;
      v32 = *((_DWORD *)v23 + 8) & 0x43;
      v251 = 0;
      if ( (_BYTE)v32 != 67 )
        bCvtPts1((unsigned __int64)v23, &v323, 2LL);
      v33 = v323.m128i_i32[0];
      v34 = v323.m128i_i32[2];
      if ( v22 )
      {
        v33 = v323.m128i_i32[0] + 1;
        v34 = v323.m128i_i32[2] + 1;
        ++v323.m128i_i32[0];
        ++v323.m128i_i32[2];
      }
      if ( v33 > v34 )
      {
        v35 = v33;
        v323.m128i_i32[0] = v34;
        v33 = v34;
        v323.m128i_i32[2] = v35;
        v34 = v35;
      }
      v36 = v323.m128i_i32[1];
      v37 = v323.m128i_i32[3];
      if ( v323.m128i_i32[1] > v323.m128i_i32[3] )
      {
        v38 = v323.m128i_i32[1];
        v323.m128i_i32[1] = v323.m128i_i32[3];
        v36 = v323.m128i_i32[3];
        v323.m128i_i32[3] = v38;
        v37 = v38;
      }
    }
    else
    {
      v251 = 1;
      v344 = a2 + a4;
      v343.x = a2;
      v347 = v238[0] + a5;
      v343.y = v238[0];
      v345 = v238[0];
      v346 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v253, &v343, &v336, 3uLL);
      x = v336.x;
      v40 = v337;
      if ( (v253[32] & 1) != 0 )
      {
        if ( v336.x > v337 )
        {
          x = v336.x + 16;
          v40 = v337 + 16;
          v339 += 16;
          v336.x += 16;
          v337 += 16;
        }
        y = v336.y;
        v42 = v340;
        v43 = v338;
        if ( v336.y > v340 )
        {
          y = v336.y + 16;
          v43 = v338 + 16;
          v42 = v340 + 16;
          v336.y += 16;
          v340 += 16;
          v338 += 16;
        }
      }
      else
      {
        v42 = v340;
        v43 = v338;
        y = v336.y;
      }
      v341 = v40 + v339 - x;
      v342 = v42 + v43 - y;
      v44 = v40 > x == v40 > v341;
      v45 = v43 > y == v43 > v342;
      v46 = v44 ^ 3;
      if ( *(&v336.x + 2 * v44) <= *(&v336.x + 2 * (v44 ^ 3LL)) )
        v46 = v44;
      v47 = v46;
      v248.m128i_i32[0] = (*(&v336.x + 2 * v46) + 15) >> 4;
      v48 = v45 ^ 3;
      if ( *(&v336.y + 2 * v45) <= *(&v336.y + 2 * (v45 ^ 3LL)) )
        v48 = v45;
      v248.m128i_i32[1] = (*(&v336.y + 2 * v48) + 15) >> 4;
      v248.m128i_i32[2] = (*(&v336.x + 2 * (v47 ^ 3)) + 15) >> 4;
      v248.m128i_i32[3] = (*(&v336.y + 2 * (v48 ^ 3LL)) + 15) >> 4;
      v323 = v248;
      v37 = v248.m128i_i32[3];
      v34 = v248.m128i_i32[2];
      v36 = v248.m128i_i32[1];
      v33 = v248.m128i_i32[0];
    }
    if ( v33 == v34 || v36 == v37 )
      goto LABEL_28;
    if ( (*((_DWORD *)v236[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v236, (struct ERECTL *)&v323);
    v303 = 0LL;
    memset(v301, 0, sizeof(v301));
    v304 = 0;
    v305 = 0;
    v310 = 0LL;
    v312 = 0LL;
    v302 = 0LL;
    v308 = 0;
    v306 = 0LL;
    v307 = 0LL;
    v313 = 0LL;
    v316 = 0LL;
    v314 = 0LL;
    v315 = 0LL;
    v319 = 0LL;
    v317 = 0LL;
    v318 = 0LL;
    v309 = 0LL;
    v311 = 0LL;
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v301, (struct XDCOBJ *)v236, (struct XDCOBJ *)&v240) )
    {
      v218 = XDCOBJ::bFullScreen((XDCOBJ *)&v240);
      v14 = XDCOBJ::bFullScreen((XDCOBJ *)v236) | v218;
      goto LABEL_457;
    }
    v52 = v236[0];
    v53 = *((_QWORD *)v236[0] + 64);
    v252 = v53;
    if ( !v53 )
      goto LABEL_457;
    v54 = *(_QWORD *)(v53 + 128);
    v55 = *((_QWORD *)v236[0] + 12);
    v284 = v54;
    v56 = *((_QWORD *)v240 + 64);
    v246 = v55;
    v244 = v56;
    if ( !v56 )
      goto LABEL_457;
    if ( *(_DWORD *)(v56 + 592) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v56 + 592) )
      goto LABEL_455;
    v57 = *(_DWORD *)(v56 + 112);
    if ( (v57 & 0x800) != 0 )
    {
      v58 = UserSurfaceAccessCheck(*(_QWORD *)(v56 + 584), v49, v50, v51);
    }
    else
    {
      if ( (v57 & 0x10000000) == 0 )
      {
LABEL_91:
        if ( (*(_DWORD *)(v53 + 116) & 8) == 0 && !*(_QWORD *)(v53 + 232) || (*(_WORD *)(v53 + 102) & 0x200) == 0 )
        {
          v59 = *(_DWORD *)(v53 + 112);
          if ( (v59 & 0x800) != 0 )
          {
            v60 = UserSurfaceAccessCheck(*(_QWORD *)(v53 + 584), v49, v50, v51);
          }
          else
          {
            if ( (v59 & 0x10000000) == 0 )
            {
LABEL_99:
              v235 = HIBYTE(a11) & 1;
              if ( (a11 & 0x1000000) != 0 )
              {
                v61 = *(_QWORD *)(v56 + 128);
                if ( *(_DWORD *)(v56 + 96) != 6
                  || !v61
                  || (v62 = *(_DWORD *)(v61 + 24), (v62 & 8) == 0)
                  && ((v62 & 2) == 0
                   || (v63 = *(_DWORD **)(v61 + 120), *v63 != 16711680)
                   || v63[1] != 65280
                   || v63[2] != 255) )
                {
                  EngSetLastError(0x57u);
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((HDC *)v301);
                  goto LABEL_29;
                }
              }
              v64 = 1432LL;
              v65 = _mm_cvtsi128_si32(v323);
              v66 = 1432LL;
              v296 = v323;
              if ( (*((_BYTE *)v236[0] + 40) & 1) != 0 )
                v66 = 1440LL;
              LODWORD(p_iUniq) = *(_DWORD *)((char *)v236[0] + v66);
              v323.m128i_i32[0] = v65;
              if ( (unsigned __int64)((int)p_iUniq + (__int64)v65 + 0x80000000LL) > 0xFFFFFFFF )
                goto LABEL_454;
              if ( (unsigned __int64)((int)p_iUniq + (__int64)v323.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
                goto LABEL_454;
              v67 = *(int *)((char *)v236[0] + v66 + 4);
              if ( (unsigned __int64)(v67 + v323.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
                || (unsigned __int64)(v67 + v323.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
              {
                goto LABEL_454;
              }
              v323.m128i_i32[0] = (_DWORD)p_iUniq + v65;
              v323.m128i_i32[2] += *(_DWORD *)((char *)v236[0] + v66);
              v323.m128i_i32[1] += *(_DWORD *)((char *)v236[0] + v66 + 4);
              v323.m128i_i32[3] += *(_DWORD *)((char *)v236[0] + v66 + 4);
              if ( (*((_BYTE *)v240 + 40) & 1) != 0 )
                v64 = 1440LL;
              v68 = *(int *)((char *)v240 + v64);
              if ( (unsigned __int64)(v68 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
                || (unsigned __int64)(v68 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                || (v69 = *(int *)((char *)v240 + v64 + 4),
                    (unsigned __int64)(v69 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                || (unsigned __int64)(v69 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
              {
LABEL_454:
                EngSetLastError(0x216u);
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((HDC *)v301);
LABEL_29:
                if ( v240 )
                {
                  XDCOBJ::RestoreAttributes((XDCOBJ *)&v240);
                  _InterlockedDecrement((volatile signed __int32 *)v240 + 3);
                }
                goto LABEL_11;
              }
              v70 = v244;
              v71 = v68 + prclDest.left;
              prclDest.left += v68;
              v72 = *(_DWORD *)((char *)v240 + v64) + prclDest.right;
              prclDest.right = v72;
              v73 = *(_DWORD *)((char *)v240 + v64 + 4) + prclDest.top;
              prclDest.top = v73;
              v74 = *(_DWORD *)((char *)v240 + v64 + 4) + prclDest.bottom;
              prclDest.bottom = v74;
              v75 = *(_DWORD **)(v244 + 48);
              v283 = v75;
              if ( *(_WORD *)(v244 + 100) == 1 && v75 && (v75[8] & 0x20000) != 0 )
              {
                v76 = v75[650];
                if ( v71 >= v76 )
                {
                  v77 = v75[651];
                  if ( v73 >= v77 && v72 <= *(_DWORD *)(v244 + 56) + v76 )
                  {
                    v78 = v74 <= v77 + *(_DWORD *)(v244 + 60);
                    goto LABEL_131;
                  }
                }
              }
              else if ( v71 >= 0 && v73 >= 0 && v72 <= *(_DWORD *)(v244 + 56) )
              {
                v78 = v74 <= *(_DWORD *)(v244 + 60);
LABEL_131:
                v79 = 0;
                if ( v78 )
                  goto LABEL_133;
              }
              v79 = 1;
LABEL_133:
              if ( v244 == v252 && (v295 = prclDest, ERECTL::operator*=(&v295, &v323), !ERECTL::bEmpty((ERECTL *)&v295))
                || v79 )
              {
                EngSetLastError(0x57u);
                v14 = 0;
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((HDC *)v301);
                goto LABEL_28;
              }
              if ( BYTE2(a11) == 0xFF && !v235 && (v15 & 1) == 0 )
              {
                v80 = v238[0];
                v81 = v237[0];
                v82 = *((_QWORD *)v236[0] + 10);
                v83 = v250;
                v84 = *(_BYTE *)(v82 + 75);
                *(_BYTE *)(v82 + 75) = 3;
                v14 = GreStretchBltInternal(
                        v83,
                        v81,
                        v80,
                        a5,
                        *(HDC *)&pptlSrc,
                        v239[0],
                        v247[0],
                        a9,
                        (int)pxlo,
                        13369376,
                        -1,
                        0);
                v230 = 1;
                *(_BYTE *)(*((_QWORD *)v236[0] + 10) + 75LL) = v84;
              }
              if ( ((v230 ^ 1) & v14) == 0 )
                goto LABEL_457;
              v85 = *(HDC *)(v70 + 128);
              *(_QWORD *)v247 = 0LL;
              v86 = (_DWORD *)*((_QWORD *)v240 + 10);
              v87 = *((_QWORD *)v240 + 12);
              v229 = v86[9];
              v88 = v86[8];
              v238[0] = v86[10];
              v225 = v88;
              if ( (v85
                 || v54
                 && ((*(_DWORD *)(v54 + 24) & 0x800) == 0
                  || (v89 = *(_QWORD *)(v55 + 80)) != 0 && v89 != *(_QWORD *)(v55 + 72)))
                && (v54
                 || ((_DWORD)v85[6] & 0x800) == 0
                 || (v91 = *(_QWORD *)(v55 + 80)) != 0 && v91 != *(_QWORD *)(v55 + 72)) )
              {
                if ( !v85 || !v54 )
                {
LABEL_181:
                  XlateObject = CreateXlateObject(0LL, 0LL, v85, v54, v87, v55, v238[0], v225, v229, 0);
                  *(_QWORD *)v239 = XlateObject;
                  if ( XlateObject )
                  {
                    if ( v85 && v54 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                      EXLATEOBJ::vAddToCache((__int64)v239, v85, v54, v87, v55);
                    v220 = 1;
                  }
                  else
                  {
                    v220 = 0;
                  }
LABEL_188:
                  v90 = xloIdent;
                  goto LABEL_189;
                }
                v92 = (HDC)*((_QWORD *)v85 + 16);
                if ( v92 == v85 )
                  v93 = *((_DWORD *)v85 + 8);
                else
                  v93 = *((_DWORD *)v92 + 8);
                v94 = *(_QWORD *)(v54 + 128);
                if ( v94 == v54 )
                  v95 = *(_DWORD *)(v54 + 32);
                else
                  v95 = *(_DWORD *)(v94 + 32);
                if ( v93 != v95 )
                {
                  v96 = *((_DWORD *)v85 + 14);
                  v285 = v55;
                  v286 = v87;
                  v281 = v54;
                  v237[0] = v96;
                  v287 = ghsemPalette;
                  GreAcquireSemaphore(ghsemPalette);
                  v97 = (HDC)*((_QWORD *)v85 + 16);
                  v98 = xlateTable;
                  v99 = v237[0];
                  v250 = v97;
                  v231 = 0;
                  while ( 1 )
                  {
                    if ( v97 == v85 )
                      v100 = *((_DWORD *)v85 + 8);
                    else
                      v100 = *((_DWORD *)v97 + 8);
                    if ( *((_DWORD *)v98 + 8 * v99 + 4) == v100 )
                    {
                      v101 = XEPALOBJ::ulTime((XEPALOBJ *)&v281);
                      if ( *(_DWORD *)((char *)v98 + v102 + 20) == v101 )
                      {
                        v103 = XEPALOBJ::ulTime((XEPALOBJ *)&v285);
                        if ( *(_DWORD *)((char *)v98 + v104 + 28) == v103 )
                        {
                          v105 = *(_DWORD **)((char *)v98 + v104 + 8);
                          *(_QWORD *)v239 = v105;
                          v106 = v105[19];
                          if ( (v106 & 0x6000) == 0 )
                          {
                            if ( (v105[1] & 4) == 0 && (v106 & 0x100) == 0
                              || (v105[1] & 4) != 0
                              && v229 == v105[6]
                              && (v107 = XEPALOBJ::ulTime((XEPALOBJ *)&v286),
                                  *(_DWORD *)((char *)v98 + v104 + 24) == v107)
                              || (v106 & 0x100) != 0 && v238[0] == v105[7] && v225 == v105[8] )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)((char *)v98 + v104));
                              *((_DWORD *)v85 + 14) = v99;
                              SEMOBJ::~SEMOBJ((SEMOBJ *)&v287);
                              v220 = 1;
                              goto LABEL_188;
                            }
                          }
                        }
                      }
                    }
                    v99 = ((_BYTE)v99 + 1) & 7;
                    if ( (unsigned int)++v231 >= 8 )
                      break;
                    v97 = v250;
                  }
                  if ( ghsemPalette )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                    GreReleaseSemaphoreInternal(ghsemPalette);
                  }
                  goto LABEL_181;
                }
              }
              v90 = xloIdent;
              *(_QWORD *)v239 = xloIdent;
              v220 = 1;
LABEL_189:
              v250 = *(HDC *)v239;
              v109 = *((_QWORD *)v240 + 10);
              v232 = *(_DWORD *)(v109 + 32);
              v226 = *(_DWORD *)(v109 + 40);
              if ( !v85 )
              {
                if ( !gppalRGB )
                  goto LABEL_194;
                if ( (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                {
                  v110 = *(_QWORD *)(v87 + 80);
                  if ( !v110 || v110 == *(_QWORD *)(v87 + 72) )
                    goto LABEL_194;
                }
              }
              if ( !gppalRGB && ((_DWORD)v85[6] & 0x800) != 0 )
              {
                v113 = *(_QWORD *)(v87 + 80);
                if ( !v113 )
                {
LABEL_194:
                  v111 = v90;
                  *(_QWORD *)v237 = v90;
                  v112 = 1;
                  goto LABEL_240;
                }
                if ( v113 == *(_QWORD *)(v87 + 72) )
                {
                  v111 = v90;
                  *(_QWORD *)v237 = v90;
                  v112 = (_DWORD)gppalRGB + 1;
                  goto LABEL_240;
                }
              }
              if ( v85 )
              {
                if ( gppalRGB )
                {
                  v114 = (HDC)*((_QWORD *)v85 + 16);
                  v115 = v114 == v85 ? *((_DWORD *)v85 + 8) : *((_DWORD *)v114 + 8);
                  v116 = *((_QWORD *)gppalRGB + 16);
                  v117 = (struct PALETTE *)v116 == gppalRGB ? *((_DWORD *)gppalRGB + 8) : *(_DWORD *)(v116 + 32);
                  if ( v115 == v117 )
                  {
                    v111 = v90;
                    *(_QWORD *)v237 = v90;
                    v112 = 1;
                    goto LABEL_240;
                  }
                }
                if ( gppalRGB )
                {
                  v118 = *((_DWORD *)v85 + 14);
                  v289 = v87;
                  v290 = v87;
                  v288 = gppalRGB;
                  v291 = ghsemPalette;
                  GreAcquireSemaphore(ghsemPalette);
                  v119 = (XLATEOBJ *)*((_QWORD *)v85 + 16);
                  v120 = 0;
                  v121 = xlateTable;
                  for ( pxlo = v119; ; v119 = pxlo )
                  {
                    if ( v119 == (XLATEOBJ *)v85 )
                      v122 = *((_DWORD *)v85 + 8);
                    else
                      v122 = *(_DWORD *)&v119[1].iSrcType;
                    if ( *((_DWORD *)v121 + 8 * v118 + 4) == v122 )
                    {
                      v123 = XEPALOBJ::ulTime((XEPALOBJ *)&v288);
                      if ( *(_DWORD *)((char *)v121 + v124 + 20) == v123 )
                      {
                        v125 = XEPALOBJ::ulTime((XEPALOBJ *)&v289);
                        if ( *(_DWORD *)((char *)v121 + v126 + 28) == v125 )
                        {
                          v127 = *(_DWORD **)((char *)v121 + v126 + 8);
                          *(_QWORD *)v237 = v127;
                          v128 = v127[19];
                          if ( (v128 & 0x6000) == 0 )
                          {
                            if ( (v127[1] & 4) == 0 && (v128 & 0x100) == 0
                              || (v127[1] & 4) != 0
                              && v229 == v127[6]
                              && (v129 = XEPALOBJ::ulTime((XEPALOBJ *)&v290),
                                  *(_DWORD *)((char *)v121 + v126 + 24) == v129)
                              || (v128 & 0x100) != 0 && v226 == v127[7] && v232 == v127[8] )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)((char *)v121 + v126));
                              *((_DWORD *)v85 + 14) = v118;
                              SEMOBJ::~SEMOBJ((SEMOBJ *)&v291);
                              v111 = *(XLATEOBJ **)v237;
                              v112 = 1;
                              goto LABEL_239;
                            }
                          }
                        }
                      }
                    }
                    ++v120;
                    v118 = ((_BYTE)v118 + 1) & 7;
                    if ( v120 >= 8 )
                      break;
                  }
                  if ( ghsemPalette )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                    GreReleaseSemaphoreInternal(ghsemPalette);
                  }
                }
              }
              v130 = CreateXlateObject(0LL, 0LL, v85, gppalRGB, v87, v87, v226, v232, v229, 0);
              *(_QWORD *)v237 = v130;
              v111 = (XLATEOBJ *)v130;
              if ( v130 )
              {
                if ( v85 && gppalRGB && (*(_DWORD *)(v130 + 76) & 0x200) == 0 )
                  EXLATEOBJ::vAddToCache((__int64)v237, v85, gppalRGB, v87, v87);
                v112 = 1;
              }
              else
              {
                v112 = 0;
              }
LABEL_239:
              v90 = xloIdent;
LABEL_240:
              v221 = v112 & v220;
              pxlo = v111;
              v131 = *((_QWORD *)v240 + 10);
              v233 = *(_DWORD *)(v131 + 32);
              v227 = *(_DWORD *)(v131 + 40);
              if ( v54 )
              {
                v132 = v246;
              }
              else
              {
                if ( !gppalRGB )
                  goto LABEL_245;
                v132 = v246;
                if ( (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                {
                  v133 = *(_QWORD *)(v246 + 80);
                  if ( !v133 || v133 == *(_QWORD *)(v246 + 72) )
                    goto LABEL_245;
                }
              }
              if ( gppalRGB
                || (*(_DWORD *)(v54 + 24) & 0x800) == 0
                || (v137 = *(_QWORD *)(v132 + 80)) != 0 && v137 != *(_QWORD *)(v132 + 72) )
              {
                if ( v54 )
                {
                  if ( gppalRGB )
                  {
                    v138 = *(_QWORD *)(v54 + 128);
                    v139 = v138 == v54 ? *(_DWORD *)(v54 + 32) : *(_DWORD *)(v138 + 32);
                    v140 = *((_QWORD *)gppalRGB + 16);
                    v141 = (struct PALETTE *)v140 == gppalRGB ? *((_DWORD *)gppalRGB + 8) : *(_DWORD *)(v140 + 32);
                    if ( v139 == v141 )
                      goto LABEL_245;
                  }
                  if ( gppalRGB )
                  {
                    v142 = *(_DWORD *)(v54 + 56);
                    v293 = v132;
                    v294 = v132;
                    v292 = gppalRGB;
                    v277 = ghsemPalette;
                    GreAcquireSemaphore(ghsemPalette);
                    v143 = xlateTable;
                    v144 = 0;
                    v145 = *(_QWORD *)(v54 + 128);
                    do
                    {
                      if ( v145 == v54 )
                        v146 = *(_DWORD *)(v54 + 32);
                      else
                        v146 = *(_DWORD *)(v145 + 32);
                      if ( *((_DWORD *)v143 + 8 * v142 + 4) == v146 )
                      {
                        v147 = XEPALOBJ::ulTime((XEPALOBJ *)&v292);
                        if ( *(_DWORD *)((char *)v143 + v148 + 20) == v147 )
                        {
                          v149 = XEPALOBJ::ulTime((XEPALOBJ *)&v293);
                          if ( *(_DWORD *)((char *)v143 + v150 + 28) == v149 )
                          {
                            v151 = *(_DWORD **)((char *)v143 + v150 + 8);
                            p_iUniq = v151;
                            v152 = v151[19];
                            if ( (v152 & 0x6000) == 0 )
                            {
                              if ( (v151[1] & 4) == 0 && (v152 & 0x100) == 0
                                || (v151[1] & 4) != 0
                                && v229 == v151[6]
                                && (v153 = XEPALOBJ::ulTime((XEPALOBJ *)&v294),
                                    *(_DWORD *)((char *)v143 + v150 + 24) == v153)
                                || (v152 & 0x100) != 0 && v227 == v151[7] && v233 == v151[8] )
                              {
                                _InterlockedIncrement((volatile signed __int32 *)((char *)v143 + v150));
                                *(_DWORD *)(v54 + 56) = v142;
                                SEMOBJ::~SEMOBJ((SEMOBJ *)&v277);
                                v111 = *(XLATEOBJ **)v237;
                                v136 = 1;
                                v135 = (__int64)p_iUniq;
                                v134 = v246;
                                goto LABEL_288;
                              }
                            }
                          }
                        }
                      }
                      ++v144;
                      v142 = ((_BYTE)v142 + 1) & 7;
                    }
                    while ( v144 < 8 );
                    if ( ghsemPalette )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                      GreReleaseSemaphoreInternal(ghsemPalette);
                    }
                  }
                }
                v134 = v246;
                v154 = CreateXlateObject(0LL, 0LL, v54, gppalRGB, v246, v246, v227, v233, v229, 0);
                p_iUniq = (_DWORD *)v154;
                v135 = v154;
                if ( v154 )
                {
                  if ( v54 && gppalRGB && (*(_DWORD *)(v154 + 76) & 0x200) == 0 )
                    EXLATEOBJ::vAddToCache((__int64)&p_iUniq, v54, gppalRGB, v134, v134);
                  v136 = 1;
                }
                else
                {
                  v136 = 0;
                }
LABEL_288:
                v90 = xloIdent;
LABEL_289:
                v222 = v136 & v221;
                v155 = *((_QWORD *)v240 + 10);
                v234 = *(_DWORD *)(v155 + 32);
                v228 = *(_DWORD *)(v155 + 40);
                if ( !gppalRGB )
                {
                  if ( !v54 )
                    goto LABEL_294;
                  if ( (*(_DWORD *)(v54 + 24) & 0x800) != 0 )
                  {
                    v156 = *(_QWORD *)(v134 + 80);
                    if ( !v156 || v156 == *(_QWORD *)(v134 + 72) )
                      goto LABEL_294;
                  }
                }
                if ( !v54 && (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                {
                  v158 = *(_QWORD *)(v134 + 80);
                  if ( !v158 )
                  {
LABEL_294:
                    *(_QWORD *)v238 = v90;
                    v157 = 1;
                    goto LABEL_340;
                  }
                  if ( v158 == *(_QWORD *)(v134 + 72) )
                  {
                    *(_QWORD *)v238 = v90;
                    v157 = 1;
                    goto LABEL_340;
                  }
                }
                if ( gppalRGB )
                {
                  if ( v54 )
                  {
                    v159 = *((_QWORD *)gppalRGB + 16);
                    v160 = (struct PALETTE *)v159 == gppalRGB ? *((_DWORD *)gppalRGB + 8) : *(_DWORD *)(v159 + 32);
                    v161 = *(_QWORD *)(v54 + 128);
                    v162 = v161 == v54 ? *(_DWORD *)(v54 + 32) : *(_DWORD *)(v161 + 32);
                    if ( v160 == v162 )
                    {
                      *(_QWORD *)v238 = v90;
                      v157 = 1;
                      goto LABEL_340;
                    }
                  }
                  if ( gppalRGB && v54 )
                  {
                    v163 = *((_DWORD *)gppalRGB + 14);
                    v279 = v134;
                    v280 = v134;
                    v278 = v54;
                    v282 = ghsemPalette;
                    GreAcquireSemaphore(ghsemPalette);
                    v164 = *((_QWORD *)gppalRGB + 16);
                    v165 = 0;
                    v166 = xlateTable;
                    for ( i = v164; ; v164 = i )
                    {
                      if ( (struct PALETTE *)v164 == gppalRGB )
                        v167 = *((_DWORD *)gppalRGB + 8);
                      else
                        v167 = *(_DWORD *)(v164 + 32);
                      if ( *((_DWORD *)v166 + 8 * v163 + 4) == v167 )
                      {
                        v168 = XEPALOBJ::ulTime((XEPALOBJ *)&v278);
                        if ( *(_DWORD *)((char *)v166 + v169 + 20) == v168 )
                        {
                          v170 = XEPALOBJ::ulTime((XEPALOBJ *)&v279);
                          if ( *(_DWORD *)((char *)v166 + v171 + 28) == v170 )
                          {
                            v172 = *(_DWORD **)((char *)v166 + v171 + 8);
                            *(_QWORD *)v238 = v172;
                            v173 = v172[19];
                            if ( (v173 & 0x6000) == 0 )
                            {
                              if ( (v172[1] & 4) == 0 && (v173 & 0x100) == 0
                                || (v172[1] & 4) != 0
                                && v229 == v172[6]
                                && (v174 = XEPALOBJ::ulTime((XEPALOBJ *)&v280),
                                    *(_DWORD *)((char *)v166 + v171 + 24) == v174)
                                || (v173 & 0x100) != 0 && v228 == v172[7] && v234 == v172[8] )
                              {
                                _InterlockedIncrement((volatile signed __int32 *)((char *)v166 + v171));
                                *((_DWORD *)gppalRGB + 14) = v163;
                                SEMOBJ::~SEMOBJ((SEMOBJ *)&v282);
                                v111 = *(XLATEOBJ **)v237;
                                v157 = 1;
                                v135 = (__int64)p_iUniq;
                                v90 = *(XLATEOBJ **)v238;
                                goto LABEL_340;
                              }
                            }
                          }
                        }
                      }
                      ++v165;
                      v163 = ((_BYTE)v163 + 1) & 7;
                      if ( v165 >= 8 )
                        break;
                    }
                    if ( ghsemPalette )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                      GreReleaseSemaphoreInternal(ghsemPalette);
                    }
                  }
                }
                v175 = v246;
                v176 = CreateXlateObject(0LL, 0LL, gppalRGB, v54, v246, v246, v228, v234, v229, 0);
                *(_QWORD *)v238 = v176;
                v90 = (XLATEOBJ *)v176;
                if ( v176 )
                {
                  if ( gppalRGB && v54 && (*(_DWORD *)(v176 + 76) & 0x200) == 0 )
                    EXLATEOBJ::vAddToCache((__int64)v238, gppalRGB, v54, v175, v175);
                  v157 = 1;
                }
                else
                {
                  v157 = 0;
                }
LABEL_340:
                v177 = v157 & v222;
                v223 = v157 & v222;
                v178 = *((_QWORD *)v236[0] + 196);
                if ( v178 && (*((_DWORD *)v236[0] + 10) & 1) != 0 && (unsigned int)DC::bDpiScaledSurface(v236[0]) )
                  v179 = v178;
                else
                  v179 = *((_QWORD *)v236[0] + 194);
                if ( v179 )
                {
                  if ( !v178 || (*((_DWORD *)v236[0] + 10) & 1) == 0 || !(unsigned int)DC::bDpiScaledSurface(v236[0]) )
                    v180 = (struct REGION *)*((_QWORD *)v236[0] + 194);
                }
                else
                {
                  v180 = DC::prgnVisSnap(v236[0]);
                }
                v332 = 0LL;
                v333 = 0;
                v334 = 1;
                v335 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)v327, v180, (struct ERECTL *)&v323, 0);
                if ( v328 == v330 || v329 == v331 )
                {
                  LODWORD(v11) = 1;
                  goto LABEL_452;
                }
                v248.m128i_i64[0] = 0LL;
                v248.m128i_i8[8] = 0;
                v248.m128i_i32[3] = 0;
                v181 = *(_QWORD *)(v252 + 48);
                i = v181;
                if ( v242.x
                  && (v182 = *(_DWORD *)(*((_QWORD *)v236[0] + 10) + 312LL), (v182 & 1) != 0)
                  && (v182 & 9) != 9 )
                {
                  v183 = (_DWORD *)v244;
                  *(_DWORD *)&v269[8] = 0;
                  v268 = 0LL;
                  *(_QWORD *)v269 = 0LL;
                  v270 = 0LL;
                  v268 = *(_QWORD *)(v244 + 56);
                  v267 = *(_DWORD *)(v244 + 96);
                  *(_QWORD *)&v269[4] = **(_QWORD **)(v244 + 128);
                  SURFMEM::bCreateDIB(
                    (SURFMEM *)&v248,
                    (struct _DEVBITMAPINFO *)&v267,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    0,
                    1,
                    0,
                    0);
                  if ( !v248.m128i_i64[0] )
                    goto LABEL_401;
                  v184 = (v183[28] & 0x400) == 0;
                  v325 = v183[14];
                  v326 = v183[15];
                  v324 = 0LL;
                  v263 = 0LL;
                  v185 = v184
                       ? EngCopyBits
                       : (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v283 + 357);
                  if ( !((unsigned int (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))v185)(
                          v248.m128i_i64[0] + 24,
                          v183 + 6,
                          0LL,
                          0LL,
                          &v324,
                          &v263) )
                    goto LABEL_401;
                  v186 = *(_DWORD *)(v248.m128i_i64[0] + 96);
                  if ( v186 - 1 > 5 )
                    goto LABEL_401;
                  qword_1C02DED10[v186]();
                  v187 = v248.m128i_i64[0];
                  v177 = v223;
                  v244 = v248.m128i_i64[0];
                }
                else
                {
                  v187 = v244;
                }
                v259 = 0LL;
                v260 = 0;
                v261 = 0;
                v256 = 0LL;
                v257 = 0;
                v258 = 0;
                if ( !v251 )
                  goto LABEL_408;
                *(_QWORD *)&v273 = 0LL;
                v271[1] = v323.m128i_i32[2] - v323.m128i_i32[0];
                v272 = (unsigned int)(v323.m128i_i32[3] - v323.m128i_i32[1]);
                v271[0] = 6;
                v273 = *(unsigned __int64 *)gppalRGB;
                DIB = SURFMEM::bCreateDIB(
                        (SURFMEM *)&v259,
                        (struct _DEVBITMAPINFO *)v271,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0,
                        1,
                        0,
                        0) & v177;
                if ( DIB )
                {
                  if ( !v235 )
                  {
                    v276 = 0LL;
                    v274[1] = prclDest.right - prclDest.left;
                    v275 = (unsigned int)(prclDest.bottom - prclDest.top);
                    v274[0] = 6;
                    *((_QWORD *)&v275 + 1) = *(_QWORD *)gppalRGB;
                    DIB = SURFMEM::bCreateDIB(
                            (SURFMEM *)&v256,
                            (struct _DEVBITMAPINFO *)v274,
                            0LL,
                            0LL,
                            0,
                            0LL,
                            0LL,
                            0,
                            1,
                            0,
                            0);
                    if ( DIB )
                    {
                      v189 = prclDest.left;
                      pptlSrc.x = prclDest.left;
                      v242.x = prclDest.top;
                      pptlSrc.y = prclDest.top;
                      if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, v188) )
                      {
                        v190 = 87;
LABEL_400:
                        EngSetLastError(v190);
                        SURFMEM::~SURFMEM((SURFMEM *)&v256);
                        SURFMEM::~SURFMEM((SURFMEM *)&v259);
LABEL_401:
                        SURFMEM::~SURFMEM((SURFMEM *)&v248);
LABEL_452:
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v238);
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&p_iUniq);
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v237);
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v247);
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v239);
                        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((HDC *)v301);
                        goto LABEL_29;
                      }
                      if ( prclDest.right > prclDest.left
                        && prclDest.bottom > prclDest.top
                        && v189 <= *(_DWORD *)(v244 + 56)
                        && v242.x <= *(_DWORD *)(v244 + 60) )
                      {
                        v191 = 0LL;
                        if ( v256 )
                          v191 = (SURFOBJ *)(v256 + 24);
                        EngCopyBits(v191, (SURFOBJ *)(v244 + 24), 0LL, v111, &prclDest, &pptlSrc);
                      }
                      v192 = 0;
                      v244 = v256;
                      v193 = *(_DWORD **)(v256 + 80);
                      v194 = (_DWORD *)((char *)v193 + *(_DWORD *)(v256 + 60) * *(_DWORD *)(v256 + 88));
                      if ( v193 != v194 )
                      {
                        v195 = v256;
                        do
                        {
                          if ( v192 >= prclDest.top && v192 < prclDest.bottom )
                          {
                            v196 = *(int *)(v195 + 56);
                            v197 = v193;
                            v198 = 0;
                            v199 = 0LL;
                            v200 = &v193[v196];
                            v201 = (unsigned __int64)(4 * v196 + 3) >> 2;
                            if ( v193 > v200 )
                              v201 = 0LL;
                            if ( v201 )
                            {
                              do
                              {
                                if ( v198 >= prclDest.left && v198 < prclDest.right )
                                  *v197 |= 0xFF000000;
                                ++v198;
                                ++v197;
                                ++v199;
                              }
                              while ( v199 != v201 );
                              v195 = v256;
                            }
                          }
                          ++v192;
                          v193 = (_DWORD *)((char *)v193 + *(int *)(v195 + 88));
                        }
                        while ( v193 != v194 );
                        v244 = v195;
                        v181 = i;
                      }
                      HIBYTE(a11) |= 1u;
                      pxlo = xloIdent;
                    }
                  }
                  v202 = *(_DWORD **)(v259 + 72);
                  v203 = (unsigned __int64)*(unsigned int *)(v259 + 64) >> 2;
                  if ( v203 )
                  {
                    if ( ((unsigned __int8)v202 & 4) == 0 )
                      goto LABEL_396;
                    *v202 = 0;
                    if ( --v203 )
                    {
                      ++v202;
LABEL_396:
                      memset(v202, 0, 8 * (v203 >> 1));
                      if ( (v203 & 1) != 0 )
                        v202[v203 - 1] = 0;
                    }
                  }
                }
                if ( !DIB )
                {
                  v190 = 8;
                  goto LABEL_400;
                }
                `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                v242.x = v336.x - 16 * v296.m128i_i32[0];
                v242.y = v336.y - 16 * v296.m128i_i32[1];
                pptfx = v242;
                v242.x = v337 - 16 * v296.m128i_i32[0];
                v242.y = v338 - 16 * v296.m128i_i32[1];
                v349 = v242;
                v204 = 0LL;
                v242.x = v339 - 16 * v296.m128i_i32[0];
                v242.y = v340 - 16 * v296.m128i_i32[1];
                v350 = v242;
                if ( v244 )
                  v204 = (SURFOBJ *)(v244 + 24);
                if ( v259 )
                  v205 = (SURFOBJ *)(v259 + 24);
                else
                  v205 = 0LL;
                EngPlgBlt(v205, v204, 0LL, 0LL, pxlo, 0LL, 0LL, &pptfx, &prclDest, 0LL, 3u);
                v321 = 0LL;
                inited = EXLATEOBJ::bInitXlateObj(
                           (__int64 *)v247,
                           0LL,
                           0,
                           (__int64)gppalRGB,
                           v284,
                           0LL,
                           v246,
                           *(_DWORD *)(*((_QWORD *)v240 + 10) + 40LL),
                           *(_DWORD *)(*((_QWORD *)v240 + 10) + 32LL),
                           v229,
                           0);
                v187 = v259;
                v177 = inited;
                *(_QWORD *)&prclDest.left = 0LL;
                v250 = *(HDC *)v247;
                pxlo = xloIdent;
                prclDest.right = v323.m128i_i32[2] - v323.m128i_i32[0];
                prclDest.bottom = v323.m128i_i32[3] - v323.m128i_i32[1];
                `vector destructor iterator'(&pptfx, 8uLL, 3uLL, Scale_None);
LABEL_408:
                if ( v177 )
                {
                  v207 = v252;
                  ++*(_DWORD *)(v252 + 92);
                  v208 = v236[0];
                  v209 = (struct ECLIPOBJ *)*((_QWORD *)v240 + 6);
                  v210 = (struct ECLIPOBJ **)*((_QWORD *)v236[0] + 6);
                  if ( v210 == (struct ECLIPOBJ **)v209
                    || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v236) && v210[442] == v209 )
                  {
                    if ( (*((_DWORD *)v208 + 9) & 0xE0) != 0 )
                    {
                      v320 = v323;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)v236, v209, &v320);
                      v207 = v252;
                    }
                    v297 = a11;
                    v298 = pxlo;
                    v299 = v135;
                    v300 = v90;
                    if ( v323.m128i_i32[2] - v323.m128i_i32[0] == prclDest.right - prclDest.left
                      && v323.m128i_i32[3] - v323.m128i_i32[1] == prclDest.bottom - prclDest.top )
                    {
                      BYTE1(v297) = BYTE1(a11) & 0xFE;
                    }
                    if ( (*(_DWORD *)(v207 + 112) & 0x10000) != 0 )
                      v212 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v181 + 3272);
                    else
                      v212 = EngAlphaBlend;
                    if ( v187 )
                      v11 = v187 + 24;
                    v14 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, __m128i *, RECTL *, int *))v212)(
                            v207 + 24,
                            v11,
                            v327,
                            v250,
                            &v323,
                            &prclDest,
                            &v297);
LABEL_426:
                    SURFMEM::~SURFMEM((SURFMEM *)&v256);
                    SURFMEM::~SURFMEM((SURFMEM *)&v259);
                    SURFMEM::~SURFMEM((SURFMEM *)&v248);
                    if ( v90 )
                    {
                      cEntries = (int)v90[1].cEntries;
                      if ( (int)cEntries < 0 )
                      {
                        if ( (_DWORD)cEntries == -1 )
                          FreeThreadBufferWithTag(v90);
                      }
                      else
                      {
                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                        v111 = *(XLATEOBJ **)v237;
                        v135 = (__int64)p_iUniq;
                      }
                    }
                    if ( v135 )
                    {
                      v214 = *(int *)(v135 + 36);
                      if ( (int)v214 < 0 )
                      {
                        if ( (_DWORD)v214 == -1 )
                          FreeThreadBufferWithTag(v135);
                      }
                      else
                      {
                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v214);
                        v111 = *(XLATEOBJ **)v237;
                      }
                    }
                    if ( v111 )
                    {
                      v215 = (int)v111[1].cEntries;
                      if ( (int)v215 < 0 )
                      {
                        if ( (_DWORD)v215 == -1 )
                          FreeThreadBufferWithTag(v111);
                      }
                      else
                      {
                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v215);
                      }
                    }
                    if ( *(_QWORD *)v247 )
                    {
                      v216 = *(int *)(*(_QWORD *)v247 + 36LL);
                      if ( (int)v216 < 0 )
                      {
                        if ( (_DWORD)v216 == -1 )
                          FreeThreadBufferWithTag(*(_QWORD *)v247);
                      }
                      else
                      {
                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v216);
                      }
                    }
                    if ( *(_QWORD *)v239 )
                    {
                      v217 = *(_DWORD *)(*(_QWORD *)v239 + 36LL);
                      if ( v217 >= 0 )
                      {
                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8
                                                                                     * *(int *)(*(_QWORD *)v239 + 36LL));
                        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((HDC *)v301);
                        goto LABEL_28;
                      }
                      if ( v217 == -1 )
                      {
                        FreeThreadBufferWithTag(*(_QWORD *)v239);
                        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((HDC *)v301);
                        goto LABEL_28;
                      }
                    }
LABEL_457:
                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((HDC *)v301);
                    goto LABEL_28;
                  }
                  v211 = 87;
                }
                else
                {
                  v211 = 6;
                }
                EngSetLastError(v211);
                v14 = 0;
                goto LABEL_426;
              }
LABEL_245:
              v134 = v246;
              v135 = (__int64)v90;
              p_iUniq = &v90->iUniq;
              v136 = 1;
              goto LABEL_289;
            }
            v60 = UserScreenAccessCheck(512LL, v49, v50, v51);
          }
          if ( v60 )
            goto LABEL_99;
        }
LABEL_455:
        EngSetLastError(6u);
        v14 = 0;
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((HDC *)v301);
        goto LABEL_28;
      }
      v58 = UserScreenAccessCheck(v52, v49, v50, v51);
    }
    if ( !v58 )
      goto LABEL_455;
    goto LABEL_91;
  }
  _InterlockedDecrement((volatile signed __int32 *)v236[0] + 3);
  v236[0] = 0LL;
LABEL_10:
  EngSetLastError(6u);
LABEL_11:
  if ( v236[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v236);
    _InterlockedDecrement((volatile signed __int32 *)v236[0] + 3);
  }
  return (unsigned int)v11;
}
