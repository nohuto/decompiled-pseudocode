/*
 * XREFs of NtGdiAlphaBlend @ 0x1C0023600
 * Callers:
 *     BltIcon @ 0x1C009B384 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0215A78 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0002840 (EngPlgBlt.c)
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0022FE4 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026340 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0027FD0 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027FF8 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C009BD3C (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C012EAEC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C012EB44 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C0252E3C (-bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0252EE8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // ebx
  char v13; // di
  __int64 v14; // rdx
  DC *v15; // rcx
  __int64 v16; // rax
  DC *v17; // rdx
  int v18; // r14d
  char *v19; // rbx
  int v20; // esi
  char *v21; // rcx
  int v22; // eax
  float v23; // xmm4_4
  LONG left; // r8d
  int top; // r10d
  LONG right; // edx
  LONG bottom; // r9d
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rdx
  DC *v34; // rcx
  __int64 v35; // r12
  __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rbx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rax
  int v42; // ecx
  int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r12
  __int64 v49; // rbx
  LONG v50; // r11d
  __int64 v51; // r12
  LONG v52; // r10d
  LONG v53; // r8d
  LONG v54; // r9d
  bool v55; // zf
  _DWORD *v56; // rax
  int v57; // r9d
  int v58; // r8d
  unsigned int v59; // ebx
  int v60; // ecx
  __int64 v61; // rdi
  _DWORD *v62; // rax
  __int64 v63; // r13
  __int64 v64; // rax
  int v65; // edx
  __int64 v66; // rax
  int v67; // ecx
  unsigned int v68; // r12d
  __int64 v69; // r11
  unsigned int i; // r9d
  int v71; // eax
  __int64 XlateObject; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // edx
  __int64 v76; // rax
  int v77; // ecx
  unsigned int v78; // r12d
  __int64 v79; // r11
  unsigned int n; // r9d
  int v81; // eax
  XLATEOBJ *v82; // rax
  XLATEOBJ *v83; // r12
  int v84; // edi
  int v85; // edi
  __int64 v86; // rcx
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rax
  int v90; // ecx
  unsigned int v91; // r13d
  __int64 v92; // r11
  unsigned int j; // r9d
  int v94; // eax
  __int64 v95; // rax
  XLATEOBJ *v96; // r13
  __int64 v97; // rcx
  __int64 v98; // rax
  int v99; // edx
  __int64 v100; // rax
  int v101; // ecx
  int v102; // eax
  __int64 v103; // rax
  unsigned int v104; // r10d
  unsigned int v105; // r8d
  int v106; // eax
  __int64 v107; // rax
  XLATEOBJ *v108; // r14
  __int64 v109; // rdi
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // rax
  struct REGION *v113; // rdx
  __int64 v114; // r9
  __int64 v115; // rbx
  HDC v116; // rsi
  DC *v117; // rdx
  __int64 v118; // rdi
  BOOL (__stdcall *v119)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v120; // rdx
  __int64 cEntries; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rdi
  __int64 v126; // rdi
  int v128; // eax
  int v129; // eax
  _DWORD *v130; // rcx
  ULONG v131; // ecx
  int v132; // ebx
  int v133; // eax
  int v134; // eax
  FIX x; // r9d
  FIX v136; // r8d
  FIX y; // r10d
  FIX v138; // eax
  int v139; // r11d
  int v140; // r9d
  int v141; // r10d
  __int64 v142; // r8
  __int64 v143; // rcx
  int v144; // eax
  LONG v145; // ecx
  LONG v146; // edx
  __int64 v147; // rax
  HDC v148; // rcx
  char v149; // di
  __int64 v150; // rax
  __int64 v151; // rax
  unsigned int v152; // eax
  __int64 v153; // r8
  __int64 v154; // r10
  unsigned int v155; // eax
  __int64 v156; // r8
  __int64 v157; // r10
  _DWORD *v158; // rdx
  int v159; // ecx
  unsigned int v160; // eax
  __int64 v161; // rax
  __int64 v162; // rax
  unsigned int v163; // eax
  __int64 v164; // r8
  __int64 v165; // r10
  unsigned int v166; // eax
  __int64 v167; // r8
  __int64 v168; // r10
  _DWORD *v169; // rdx
  int v170; // ecx
  unsigned int v171; // eax
  __int64 v172; // rax
  __int64 v173; // rax
  unsigned int v174; // eax
  __int64 v175; // r8
  __int64 v176; // r10
  unsigned int v177; // eax
  __int64 v178; // r8
  __int64 v179; // r10
  XLATEOBJ *v180; // rdx
  FLONG flXlate; // ecx
  unsigned int v182; // eax
  __int64 v183; // rax
  __int64 v184; // rax
  unsigned int v185; // eax
  __int64 v186; // r9
  __int64 v187; // r11
  unsigned int v188; // eax
  __int64 v189; // r9
  __int64 v190; // r11
  XLATEOBJ *v191; // rdx
  FLONG v192; // ecx
  unsigned int v193; // eax
  _QWORD *v194; // rax
  unsigned int v196; // edx
  int v197; // r9d
  int v198; // r8d
  ULONG v199; // ecx
  SURFOBJ *v200; // rcx
  LONG v201; // r10d
  _DWORD *v202; // rcx
  _DWORD *v203; // r11
  __int64 v204; // rdi
  _DWORD *v205; // r9
  LONG v206; // r8d
  unsigned __int64 v207; // rdx
  _DWORD *v208; // rax
  unsigned __int64 v209; // rdx
  __int64 k; // rax
  _DWORD *v211; // r8
  unsigned __int64 v212; // rdx
  SURFOBJ *v213; // rdx
  SURFOBJ *v214; // rcx
  int inited; // eax
  __int64 v216; // r8
  ULONG v217; // ecx
  __int64 v218; // rcx
  int v219; // ebx
  int v221; // [rsp+70h] [rbp-90h]
  int v222; // [rsp+70h] [rbp-90h]
  int v223; // [rsp+70h] [rbp-90h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v226; // [rsp+74h] [rbp-8Ch]
  int v228; // [rsp+78h] [rbp-88h]
  int v229; // [rsp+78h] [rbp-88h]
  int v230; // [rsp+78h] [rbp-88h]
  int v231; // [rsp+78h] [rbp-88h]
  int v232; // [rsp+7Ch] [rbp-84h]
  int v233; // [rsp+7Ch] [rbp-84h]
  int v234; // [rsp+7Ch] [rbp-84h]
  int v235; // [rsp+7Ch] [rbp-84h]
  int v236; // [rsp+80h] [rbp-80h]
  __int16 v237; // [rsp+80h] [rbp-80h]
  __int16 v238; // [rsp+80h] [rbp-80h]
  __int16 v239; // [rsp+80h] [rbp-80h]
  __int16 v240; // [rsp+80h] [rbp-80h]
  LONG v241; // [rsp+80h] [rbp-80h]
  __int64 v242; // [rsp+88h] [rbp-78h]
  POINTFIX v243; // [rsp+88h] [rbp-78h]
  char v244; // [rsp+90h] [rbp-70h]
  DC *v245; // [rsp+98h] [rbp-68h] BYREF
  __int64 v246; // [rsp+A0h] [rbp-60h]
  int v247[2]; // [rsp+A8h] [rbp-58h] BYREF
  DC *v248; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v249; // [rsp+B8h] [rbp-48h]
  int v250; // [rsp+C0h] [rbp-40h] BYREF
  int v251; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v252; // [rsp+C8h] [rbp-38h]
  XLATEOBJ *v253; // [rsp+D0h] [rbp-30h] BYREF
  HDC v254; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v255; // [rsp+E0h] [rbp-20h] BYREF
  XLATEOBJ *pxlo; // [rsp+F0h] [rbp-10h]
  XLATEOBJ *v257; // [rsp+F8h] [rbp-8h] BYREF
  int v258; // [rsp+100h] [rbp+0h]
  HDC v259; // [rsp+108h] [rbp+8h]
  int v260; // [rsp+110h] [rbp+10h]
  __int64 v261; // [rsp+118h] [rbp+18h]
  HDC v262; // [rsp+120h] [rbp+20h] BYREF
  HDC v263; // [rsp+128h] [rbp+28h]
  char *v264; // [rsp+130h] [rbp+30h] BYREF
  int v265; // [rsp+138h] [rbp+38h]
  int v266; // [rsp+13Ch] [rbp+3Ch]
  __int64 v267; // [rsp+140h] [rbp+40h] BYREF
  char v268; // [rsp+148h] [rbp+48h]
  int v269; // [rsp+14Ch] [rbp+4Ch]
  __int64 v270; // [rsp+150h] [rbp+50h] BYREF
  char v271; // [rsp+158h] [rbp+58h]
  int v272; // [rsp+15Ch] [rbp+5Ch]
  POINTL pptlSrc; // [rsp+160h] [rbp+60h] BYREF
  _DWORD *v274; // [rsp+168h] [rbp+68h]
  __int64 v275; // [rsp+170h] [rbp+70h] BYREF
  char *v276; // [rsp+178h] [rbp+78h] BYREF
  int v277; // [rsp+180h] [rbp+80h]
  int v278; // [rsp+184h] [rbp+84h]
  struct PALETTE *v279; // [rsp+188h] [rbp+88h] BYREF
  __int64 v280; // [rsp+190h] [rbp+90h] BYREF
  __int64 v281; // [rsp+198h] [rbp+98h] BYREF
  __int64 v282; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v283; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v284; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v285; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 m; // [rsp+1C0h] [rbp+C0h]
  __int64 v287; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v288; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v289; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v290; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v291; // [rsp+1E8h] [rbp+E8h] BYREF
  struct PALETTE *v292; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v293; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v294; // [rsp+200h] [rbp+100h] BYREF
  __int64 v295; // [rsp+208h] [rbp+108h] BYREF
  _QWORD v296[4]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v297[4]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v298[4]; // [rsp+250h] [rbp+150h] BYREF
  RECTL v299; // [rsp+270h] [rbp+170h] BYREF
  __int128 v300; // [rsp+280h] [rbp+180h]
  int v301; // [rsp+290h] [rbp+190h] BYREF
  HDC v302; // [rsp+298h] [rbp+198h]
  XLATEOBJ *v303; // [rsp+2A0h] [rbp+1A0h]
  XLATEOBJ *v304; // [rsp+2A8h] [rbp+1A8h]
  _OWORD v305[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v306; // [rsp+2D0h] [rbp+1D0h]
  __int64 v307; // [rsp+2D8h] [rbp+1D8h]
  char v308; // [rsp+2E0h] [rbp+1E0h]
  int v309; // [rsp+2E4h] [rbp+1E4h]
  __int64 v310; // [rsp+2E8h] [rbp+1E8h]
  __int64 v311; // [rsp+2F0h] [rbp+1F0h]
  int v312; // [rsp+2F8h] [rbp+1F8h]
  __int64 v313; // [rsp+300h] [rbp+200h]
  __int64 v314; // [rsp+308h] [rbp+208h]
  __int64 v315; // [rsp+310h] [rbp+210h]
  __int64 v316; // [rsp+318h] [rbp+218h]
  __int64 v317; // [rsp+320h] [rbp+220h]
  __int64 v318; // [rsp+328h] [rbp+228h]
  __int64 v319; // [rsp+330h] [rbp+230h]
  __int64 v320; // [rsp+338h] [rbp+238h]
  __int64 v321; // [rsp+348h] [rbp+248h]
  __int64 v322; // [rsp+350h] [rbp+250h]
  __int64 v323; // [rsp+358h] [rbp+258h]
  __int64 v324; // [rsp+360h] [rbp+260h]
  __int128 v325; // [rsp+370h] [rbp+270h] BYREF
  RECTL prclDest; // [rsp+380h] [rbp+280h] BYREF
  int v327[4]; // [rsp+390h] [rbp+290h] BYREF
  __int64 v328; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v329; // [rsp+3A8h] [rbp+2A8h]
  int v330; // [rsp+3ACh] [rbp+2ACh]
  _BYTE v331[4]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v332; // [rsp+3B4h] [rbp+2B4h]
  int v333; // [rsp+3B8h] [rbp+2B8h]
  int v334; // [rsp+3BCh] [rbp+2BCh]
  int v335; // [rsp+3C0h] [rbp+2C0h]
  __int64 v336; // [rsp+400h] [rbp+300h]
  int v337; // [rsp+408h] [rbp+308h]
  int v338; // [rsp+430h] [rbp+330h]
  __int64 v339; // [rsp+440h] [rbp+340h]
  struct _POINTFIX v340; // [rsp+450h] [rbp+350h] BYREF
  FIX v341; // [rsp+458h] [rbp+358h]
  int v342; // [rsp+45Ch] [rbp+35Ch]
  int v343; // [rsp+460h] [rbp+360h]
  FIX v344; // [rsp+464h] [rbp+364h]
  FIX v345; // [rsp+468h] [rbp+368h]
  int v346; // [rsp+46Ch] [rbp+36Ch]
  struct _POINTL v347; // [rsp+470h] [rbp+370h] BYREF
  int v348; // [rsp+478h] [rbp+378h]
  int v349; // [rsp+47Ch] [rbp+37Ch]
  int v350; // [rsp+480h] [rbp+380h]
  int v351; // [rsp+484h] [rbp+384h]
  POINTFIX pptfx; // [rsp+488h] [rbp+388h] BYREF
  POINTFIX v353; // [rsp+490h] [rbp+390h]
  POINTFIX v354; // [rsp+498h] [rbp+398h]

  v12 = a4;
  v259 = a6;
  v250 = a7;
  v247[0] = a8;
  v263 = a1;
  v251 = a5;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_469;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_469:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v13 = BYTE1(a11) & 0x7F;
  v258 = BYTE1(a11) & 0x80;
  BYTE1(a11) &= ~0x80u;
  v246 = 0LL;
  v245 = (DC *)HmgLockEx(a1, 1LL, 0LL);
  if ( !v245 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_250;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v245) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v245 + 3);
    v245 = 0LL;
    goto LABEL_244;
  }
  v15 = v245;
  if ( (*((_DWORD *)v245 + 134) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v245);
LABEL_250:
    v15 = v245;
  }
  if ( v15 && (*((_DWORD *)v15 + 9) & 0x10000) == 0 )
  {
    LOBYTE(v14) = 1;
    v248 = 0LL;
    v249 = 0LL;
    v16 = HmgLockEx(v259, v14, 0LL);
    v248 = (DC *)v16;
    v17 = (DC *)v16;
    if ( !v16 )
    {
      if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
        PsGetWin32KFilterSet();
LABEL_19:
      if ( v248 )
      {
        bSpDwmValidateSurface((struct XDCOBJ *)&v248, v250, v247[0], a9, a10);
        bSpDwmValidateSurface((struct XDCOBJ *)&v245, a2, a3, v12, a5);
        v265 = *(_DWORD *)(*((_QWORD *)v245 + 10) + 68LL);
        v18 = *(_DWORD *)(*((_QWORD *)v245 + 10) + 312LL) & 1;
        v266 = v18;
        if ( (*(_DWORD *)(*((_QWORD *)v245 + 10) + 352LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v264, (struct XDCOBJ *)&v245, 0x204u, 0);
          v18 = v266;
          v19 = v264;
        }
        else
        {
          v19 = (char *)v245 + 336;
          v264 = (char *)v245 + 336;
        }
        v277 = *(_DWORD *)(*((_QWORD *)v248 + 10) + 68LL);
        v20 = *(_DWORD *)(*((_QWORD *)v248 + 10) + 312LL) & 1;
        v278 = v20;
        if ( (*(_DWORD *)(*((_QWORD *)v248 + 10) + 352LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v276, (struct XDCOBJ *)&v248, 0x204u, 0);
          v21 = v276;
          v18 = v266;
          v19 = v264;
          v20 = v278;
        }
        else
        {
          v21 = (char *)v248 + 336;
          v276 = (char *)v248 + 336;
        }
        v22 = *((_DWORD *)v21 + 8);
        if ( (v22 & 1) != 0 )
        {
          v23 = 0.0;
          if ( v20 || *(float *)v21 >= 0.0 && *((float *)v21 + 3) >= 0.0 )
          {
            left = v250;
            prclDest.left = v250;
            top = v247[0];
            right = a9 + v250;
            prclDest.top = v247[0];
            bottom = a10 + v247[0];
            prclDest.right = a9 + v250;
            prclDest.bottom = a10 + v247[0];
            if ( (v22 & 0x43) != 0x43 )
            {
              bCvtPts1((unsigned __int64)v21, &prclDest, 2LL);
              bottom = prclDest.bottom;
              right = prclDest.right;
              top = prclDest.top;
              left = prclDest.left;
            }
            if ( v20 )
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
            if ( (*((_DWORD *)v19 + 8) & 1) != 0 && (v18 || v23 <= *(float *)v19 && v23 <= *((float *)v19 + 3)) )
            {
              *(_QWORD *)&v255 = __PAIR64__(a3, a2);
              DWORD2(v255) = a2 + a4;
              HIDWORD(v255) = a3 + v251;
              *(_OWORD *)v327 = v255;
              v28 = *((_DWORD *)v19 + 8) & 0x43;
              v260 = 0;
              if ( (_BYTE)v28 != 67 )
                bCvtPts1((unsigned __int64)v19, v327, 2LL);
              v29 = v327[0];
              v30 = v327[2];
              if ( v18 )
              {
                v29 = v327[0] + 1;
                v30 = v327[2] + 1;
                ++v327[0];
                ++v327[2];
              }
              if ( v29 > v30 )
              {
                v133 = v29;
                v327[0] = v30;
                v29 = v30;
                v327[2] = v133;
                v30 = v133;
              }
              v31 = v327[1];
              v32 = v327[3];
              if ( v327[1] > v327[3] )
              {
                v134 = v327[1];
                v327[1] = v327[3];
                v31 = v327[3];
                v327[3] = v134;
                v32 = v134;
              }
            }
            else
            {
              v347.x = a2;
              v348 = a2 + a4;
              v347.y = a3;
              v349 = a3;
              v350 = a2;
              v351 = a3 + v251;
              v260 = 1;
              EXFORMOBJ::bXform((EXFORMOBJ *)&v264, &v347, &v340, 3uLL);
              x = v340.x;
              v136 = v341;
              if ( (*((_DWORD *)v264 + 8) & 1) != 0 )
              {
                if ( v340.x > v341 )
                {
                  x = v340.x + 16;
                  v136 = v341 + 16;
                  v343 += 16;
                  v340.x += 16;
                  v341 += 16;
                }
                y = v340.y;
                v138 = v344;
                v139 = v342;
                if ( v340.y > v344 )
                {
                  y = v340.y + 16;
                  v139 = v342 + 16;
                  v138 = v344 + 16;
                  v340.y += 16;
                  v344 += 16;
                  v342 += 16;
                }
              }
              else
              {
                v138 = v344;
                v139 = v342;
                y = v340.y;
              }
              v345 = v136 + v343 - x;
              v346 = v138 + v139 - y;
              v140 = (v136 > x) ^ (v136 > v345);
              v141 = (v139 > y) ^ (v139 > v346);
              v142 = v140 ^ ((*(&v340.x + 2 * (v140 ^ 1)) > *(&v340.x + 2 * (v140 ^ 1 ^ 3LL))) + 1LL);
              LODWORD(v255) = (*(&v340.x + 2 * v142) + 15) >> 4;
              v143 = v141 ^ ((*(&v340.y + 2 * (v141 ^ 1LL)) > *(&v340.y + 2 * (v141 ^ 2LL))) + 1LL);
              DWORD1(v255) = (*(&v340.y + 2 * v143) + 15) >> 4;
              DWORD2(v255) = (*(&v340.x + 2 * (v142 ^ 3)) + 15) >> 4;
              HIDWORD(v255) = (*(&v340.y + 2 * (v143 ^ 3)) + 15) >> 4;
              *(_OWORD *)v327 = v255;
              v32 = HIDWORD(v255);
              v30 = DWORD2(v255);
              v31 = DWORD1(v255);
              v29 = v255;
            }
            if ( v29 == v30 || v31 == v32 )
            {
              v59 = 1;
              goto LABEL_215;
            }
            if ( (*((_DWORD *)v245 + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)&v245, (struct ERECTL *)v327);
            v307 = 0LL;
            memset(v305, 0, sizeof(v305));
            v308 = 0;
            v309 = 0;
            v314 = 0LL;
            v316 = 0LL;
            v306 = 0LL;
            v312 = 0;
            v310 = 0LL;
            v311 = 0LL;
            v317 = 0LL;
            v320 = 0LL;
            v318 = 0LL;
            v319 = 0LL;
            v323 = 0LL;
            v321 = 0LL;
            v322 = 0LL;
            v313 = 0LL;
            v315 = 0LL;
            if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                  (DEVLOCKBLTOBJ *)v305,
                                  (struct XDCOBJ *)&v245,
                                  (struct XDCOBJ *)&v248) )
            {
              v219 = XDCOBJ::bFullScreen((XDCOBJ *)&v248);
              v59 = XDCOBJ::bFullScreen((XDCOBJ *)&v245) | v219;
              goto LABEL_214;
            }
            v34 = v245;
            v35 = *((_QWORD *)v245 + 64);
            v261 = v35;
            if ( !v35
              || (v36 = *((_QWORD *)v245 + 12),
                  v37 = *(_QWORD *)(v35 + 128),
                  v242 = v36,
                  v38 = *((_QWORD *)v248 + 64),
                  (v252 = v38) == 0) )
            {
              v59 = 1;
              goto LABEL_214;
            }
            if ( *(_DWORD *)(v38 + 592)
              && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v38 + 592) )
            {
              goto LABEL_270;
            }
            v39 = *(_DWORD *)(v38 + 112);
            if ( (v39 & 0x800) != 0 )
            {
              v144 = UserSurfaceAccessCheck(*(_QWORD *)(v38 + 584), v33);
            }
            else
            {
              if ( (v39 & 0x10000000) == 0 )
              {
LABEL_58:
                if ( ((*(_DWORD *)(v35 + 116) & 8) != 0 || *(_QWORD *)(v35 + 232))
                  && (*(_WORD *)(v35 + 102) & 0x200) != 0 )
                {
                  goto LABEL_270;
                }
                v40 = *(_DWORD *)(v35 + 112);
                if ( (v40 & 0x800) != 0 )
                {
                  v129 = UserSurfaceAccessCheck(*(_QWORD *)(v35 + 584), v33);
                }
                else
                {
                  if ( (v40 & 0x10000000) == 0 )
                  {
LABEL_62:
                    v244 = HIBYTE(a11) & 1;
                    if ( (a11 & 0x1000000) != 0 )
                    {
                      if ( *(_DWORD *)(v38 + 96) != 6
                        || (v41 = *(_QWORD *)(v38 + 128)) == 0
                        || (v42 = *(_DWORD *)(v41 + 24), (v42 & 8) == 0)
                        && ((v42 & 2) == 0
                         || (v130 = *(_DWORD **)(v41 + 120), *v130 != 16711680)
                         || v130[1] != 65280
                         || v130[2] != 255) )
                      {
                        v131 = 87;
LABEL_465:
                        EngSetLastError(v131);
                        v59 = 0;
                        goto LABEL_214;
                      }
                    }
                    v43 = _mm_cvtsi128_si32(*(__m128i *)v327);
                    v300 = *(_OWORD *)v327;
                    v44 = *((_DWORD *)v245 + 10) & 1;
                    v45 = *((int *)v245 + 2 * v44 + 358);
                    v327[0] = v43;
                    if ( (unsigned __int64)(v45 + v43 + 0x80000000LL) > 0xFFFFFFFF )
                      goto LABEL_464;
                    if ( (unsigned __int64)(v45 + v327[2] + 0x80000000LL) > 0xFFFFFFFF )
                      goto LABEL_464;
                    v46 = *((int *)v245 + 2 * v44 + 359);
                    if ( (unsigned __int64)(v46 + v327[1] + 0x80000000LL) > 0xFFFFFFFF
                      || (unsigned __int64)(v46 + v327[3] + 0x80000000LL) > 0xFFFFFFFF
                      || (v327[0] = v45 + v43,
                          v327[2] += *((_DWORD *)v245 + 2 * v44 + 358),
                          v327[1] += *((_DWORD *)v245 + 2 * v44 + 359),
                          v327[3] += *((_DWORD *)v245 + 2 * v44 + 359),
                          v47 = *((_DWORD *)v248 + 10) & 1,
                          v48 = *((int *)v248 + 2 * v47 + 358),
                          (unsigned __int64)(v48 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF)
                      || (unsigned __int64)(v48 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                      || (v49 = *((int *)v248 + 2 * v47 + 359),
                          (unsigned __int64)(v49 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                      || (unsigned __int64)(v49 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
                    {
LABEL_464:
                      v131 = 534;
                      goto LABEL_465;
                    }
                    v50 = v48 + prclDest.left;
                    v51 = v252;
                    prclDest.left = v50;
                    v52 = *((_DWORD *)v248 + 2 * v47 + 358) + prclDest.right;
                    prclDest.right = v52;
                    v53 = *((_DWORD *)v248 + 2 * v47 + 359) + prclDest.top;
                    prclDest.top = v53;
                    v54 = *((_DWORD *)v248 + 2 * v47 + 359) + prclDest.bottom;
                    prclDest.bottom = v54;
                    v55 = *(_WORD *)(v252 + 100) == 1;
                    v56 = *(_DWORD **)(v252 + 48);
                    v274 = v56;
                    if ( v55 && v56 && (v56[8] & 0x20000) != 0 )
                    {
                      v145 = v56[650];
                      if ( v50 < v145 )
                        goto LABEL_281;
                      v146 = v56[651];
                      if ( v53 < v146 || v52 > *(_DWORD *)(v252 + 56) + v145 || v54 > v146 + *(_DWORD *)(v252 + 60) )
                        goto LABEL_281;
                    }
                    else if ( v50 < 0 || v53 < 0 || v52 > *(_DWORD *)(v252 + 56) || v54 > *(_DWORD *)(v252 + 60) )
                    {
LABEL_281:
                      v57 = 1;
                      v58 = 1;
                      goto LABEL_80;
                    }
                    v57 = 1;
                    v58 = 0;
LABEL_80:
                    if ( v252 == v261
                      && (v299 = prclDest, ERECTL::operator*=(&v299, v327), !ERECTL::bEmpty((ERECTL *)&v299))
                      || v58 )
                    {
                      EngSetLastError(0x57u);
                      v59 = 0;
                      goto LABEL_214;
                    }
                    if ( v244 || BYTE2(a11) != 0xFF || (v13 & 1) != 0 )
                    {
                      v59 = 1;
                      v60 = v57;
                    }
                    else
                    {
                      v147 = *((_QWORD *)v245 + 10);
                      v148 = v263;
                      v149 = *(_BYTE *)(v147 + 75);
                      *(_BYTE *)(v147 + 75) = 3;
                      v59 = GreStretchBltInternal(v148, a2, a3, a4, v251, v259, v250, v247[0], a9, a10, 13369376, -1, 0);
                      v57 = 1;
                      v60 = 0;
                      *(_BYTE *)(*((_QWORD *)v245 + 10) + 75LL) = v149;
                    }
                    if ( (v60 & v59) == 0 )
                      goto LABEL_214;
                    v61 = *(_QWORD *)(v51 + 128);
                    v262 = 0LL;
                    v62 = (_DWORD *)*((_QWORD *)v248 + 10);
                    v63 = *((_QWORD *)v248 + 12);
                    v226 = v62[9];
                    v228 = v62[10];
                    v232 = v62[8];
                    if ( !v61 )
                    {
                      if ( !v37 )
                        goto LABEL_290;
                      if ( (*(_DWORD *)(v37 + 24) & 0x800) != 0 )
                      {
                        v150 = *(_QWORD *)(v36 + 80);
                        if ( !v150 || v150 == *(_QWORD *)(v36 + 72) )
                          goto LABEL_290;
                      }
                    }
                    if ( v37 || (*(_DWORD *)(v61 + 24) & 0x800) == 0 )
                      goto LABEL_88;
                    v151 = *(_QWORD *)(v36 + 80);
                    if ( !v151 )
                    {
LABEL_290:
                      v254 = (HDC)xloIdent;
                      v221 = v57;
                      goto LABEL_107;
                    }
                    if ( v151 == *(_QWORD *)(v36 + 72) )
                    {
                      v254 = (HDC)xloIdent;
                      v221 = v57;
                    }
                    else
                    {
LABEL_88:
                      if ( v61 && v37 )
                      {
                        v64 = *(_QWORD *)(v61 + 128);
                        if ( v64 == v61 )
                          v65 = *(_DWORD *)(v61 + 32);
                        else
                          v65 = *(_DWORD *)(v64 + 32);
                        v66 = *(_QWORD *)(v37 + 128);
                        if ( v66 == v37 )
                          v67 = *(_DWORD *)(v37 + 32);
                        else
                          v67 = *(_DWORD *)(v66 + 32);
                        if ( v65 == v67 )
                        {
                          v254 = (HDC)xloIdent;
                          v221 = v57;
                          goto LABEL_107;
                        }
                        v68 = *(_DWORD *)(v61 + 56);
                        v280 = v36;
                        v290 = v63;
                        v289 = v37;
                        v291 = ghsemPalette;
                        GreAcquireSemaphore(ghsemPalette);
                        v69 = *(_QWORD *)(v61 + 128);
                        for ( i = 0; i < 8; ++i )
                        {
                          if ( v69 == v61 )
                            v71 = *(_DWORD *)(v61 + 32);
                          else
                            v71 = *(_DWORD *)(v69 + 32);
                          if ( *((_DWORD *)&xlateTable + 8 * v68 + 4) == v71 )
                          {
                            v152 = XEPALOBJ::ulTime((XEPALOBJ *)&v289);
                            if ( *(_DWORD *)(v153 + v154 + 20) == v152 )
                            {
                              v155 = XEPALOBJ::ulTime((XEPALOBJ *)&v280);
                              if ( *(_DWORD *)(v156 + v157 + 28) == v155 )
                              {
                                v158 = *(_DWORD **)(v156 + v157 + 8);
                                v254 = (HDC)v158;
                                v159 = v158[19];
                                v237 = v159;
                                if ( (v159 & 0x6000) == 0 )
                                {
                                  if ( (v158[1] & 4) == 0 && (v159 & 0x100) == 0 )
                                    goto LABEL_310;
                                  if ( (v158[1] & 4) != 0 && v226 == v158[6] )
                                  {
                                    v160 = XEPALOBJ::ulTime((XEPALOBJ *)&v290);
                                    if ( *(_DWORD *)(v156 + v157 + 24) == v160 )
                                      goto LABEL_310;
                                    LOWORD(v159) = v237;
                                  }
                                  if ( (v159 & 0x100) != 0 && v228 == v158[7] && v232 == v158[8] )
                                  {
LABEL_310:
                                    _InterlockedIncrement((volatile signed __int32 *)(v156 + v157));
                                    *(_DWORD *)(v61 + 56) = v68;
                                    SEMOBJ::vUnlock((SEMOBJ *)&v291);
                                    v57 = 1;
                                    v221 = 1;
                                    goto LABEL_107;
                                  }
                                }
                              }
                            }
                          }
                          v68 = ((_BYTE)v68 + 1) & 7;
                        }
                        if ( ghsemPalette )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                          GreReleaseSemaphoreInternal(ghsemPalette);
                        }
                      }
                      XlateObject = CreateXlateObject(0LL, 0LL, v61, v37, v63, v36, v228, v232, v226, 0);
                      v254 = (HDC)XlateObject;
                      if ( XlateObject )
                      {
                        if ( v61 && v37 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                          EXLATEOBJ::vAddToCache((__int64)&v254, v61, v37, v63, v36);
                        v57 = 1;
                        v221 = 1;
                      }
                      else
                      {
                        v221 = 0;
                        v57 = 1;
                      }
                    }
LABEL_107:
                    v263 = v254;
                    v73 = *((_QWORD *)v248 + 10);
                    v233 = *(_DWORD *)(v73 + 32);
                    v229 = *(_DWORD *)(v73 + 40);
                    if ( (v61
                       || gppalRGB
                       && ((*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                        || (v161 = *(_QWORD *)(v63 + 80)) != 0 && v161 != *(_QWORD *)(v63 + 72)))
                      && (gppalRGB
                       || (*(_DWORD *)(v61 + 24) & 0x800) == 0
                       || (v162 = *(_QWORD *)(v63 + 80)) != 0 && v162 != *(_QWORD *)(v63 + 72)) )
                    {
                      if ( !v61 || !gppalRGB )
                      {
LABEL_124:
                        v82 = (XLATEOBJ *)CreateXlateObject(0LL, 0LL, v61, gppalRGB, v63, v63, v229, v233, v226, 0);
                        pxlo = v82;
                        v83 = v82;
                        *(_QWORD *)v247 = v82;
                        if ( v82 )
                        {
                          if ( v61 && gppalRGB && (v82[3].flXlate & 0x200) == 0 )
                            EXLATEOBJ::vAddToCache((__int64)v247, v61, gppalRGB, v63, v63);
                          v84 = 1;
                        }
                        else
                        {
                          v84 = 0;
                        }
LABEL_130:
                        v85 = v221 & v84;
                        v222 = v85;
                        v259 = (HDC)v83;
                        v86 = *((_QWORD *)v248 + 10);
                        v234 = *(_DWORD *)(v86 + 32);
                        v230 = *(_DWORD *)(v86 + 40);
                        if ( !v37
                          && (!gppalRGB
                           || (*((_DWORD *)gppalRGB + 6) & 0x800) != 0
                           && ((v172 = *(_QWORD *)(v36 + 80)) == 0 || v172 == *(_QWORD *)(v36 + 72))) )
                        {
                          v96 = xloIdent;
                          v253 = xloIdent;
                          goto LABEL_152;
                        }
                        if ( !gppalRGB && (*(_DWORD *)(v37 + 24) & 0x800) != 0 )
                        {
                          v173 = *(_QWORD *)(v36 + 80);
                          if ( !v173 || v173 == *(_QWORD *)(v36 + 72) )
                          {
                            v96 = xloIdent;
                            v253 = xloIdent;
                            v222 = v85;
                            goto LABEL_152;
                          }
                        }
                        if ( v37 && gppalRGB )
                        {
                          v87 = *(_QWORD *)(v37 + 128);
                          if ( v87 == v37 )
                            v88 = *(_DWORD *)(v37 + 32);
                          else
                            v88 = *(_DWORD *)(v87 + 32);
                          v89 = *((_QWORD *)gppalRGB + 16);
                          if ( (struct PALETTE *)v89 == gppalRGB )
                            v90 = *((_DWORD *)gppalRGB + 8);
                          else
                            v90 = *(_DWORD *)(v89 + 32);
                          if ( v88 == v90 )
                          {
                            v96 = xloIdent;
                            v253 = xloIdent;
                            v222 = v85;
                            goto LABEL_152;
                          }
                          if ( gppalRGB )
                          {
                            v91 = *(_DWORD *)(v37 + 56);
                            v288 = v36;
                            v281 = v36;
                            v279 = gppalRGB;
                            v282 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v92 = *(_QWORD *)(v37 + 128);
                            for ( j = 0; j < 8; ++j )
                            {
                              if ( v92 == v37 )
                                v94 = *(_DWORD *)(v37 + 32);
                              else
                                v94 = *(_DWORD *)(v92 + 32);
                              if ( *((_DWORD *)&xlateTable + 8 * v91 + 4) == v94 )
                              {
                                v174 = XEPALOBJ::ulTime((XEPALOBJ *)&v279);
                                if ( *(_DWORD *)(v175 + v176 + 20) == v174 )
                                {
                                  v177 = XEPALOBJ::ulTime((XEPALOBJ *)&v288);
                                  if ( *(_DWORD *)(v178 + v179 + 28) == v177 )
                                  {
                                    v180 = *(XLATEOBJ **)(v178 + v179 + 8);
                                    v253 = v180;
                                    flXlate = v180[3].flXlate;
                                    v239 = flXlate;
                                    if ( (flXlate & 0x6000) == 0 )
                                    {
                                      if ( (v180->flXlate & 4) == 0 && (flXlate & 0x100) == 0 )
                                        goto LABEL_363;
                                      if ( (v180->flXlate & 4) != 0 && v226 == v180[1].iUniq )
                                      {
                                        v182 = XEPALOBJ::ulTime((XEPALOBJ *)&v281);
                                        if ( *(_DWORD *)(v178 + v179 + 24) == v182 )
                                          goto LABEL_363;
                                        LOWORD(flXlate) = v239;
                                      }
                                      if ( (flXlate & 0x100) != 0
                                        && v230 == v180[1].flXlate
                                        && v234 == *(_DWORD *)&v180[1].iSrcType )
                                      {
LABEL_363:
                                        _InterlockedIncrement((volatile signed __int32 *)(v178 + v179));
                                        *(_DWORD *)(v37 + 56) = v91;
                                        SEMOBJ::vUnlock((SEMOBJ *)&v282);
                                        v83 = *(XLATEOBJ **)v247;
                                        v96 = v253;
                                        pxlo = *(XLATEOBJ **)v247;
                                        goto LABEL_152;
                                      }
                                    }
                                  }
                                }
                              }
                              v91 = ((_BYTE)v91 + 1) & 7;
                            }
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                          }
                        }
                        v95 = CreateXlateObject(0LL, 0LL, v37, gppalRGB, v36, v36, v230, v234, v226, 0);
                        v253 = (XLATEOBJ *)v95;
                        v96 = (XLATEOBJ *)v95;
                        if ( v95 )
                        {
                          if ( v37 && gppalRGB && (*(_DWORD *)(v95 + 76) & 0x200) == 0 )
                            EXLATEOBJ::vAddToCache((__int64)&v253, v37, gppalRGB, v36, v36);
                        }
                        else
                        {
                          v222 = 0;
                        }
LABEL_152:
                        v97 = *((_QWORD *)v248 + 10);
                        v235 = *(_DWORD *)(v97 + 32);
                        v231 = *(_DWORD *)(v97 + 40);
                        if ( (gppalRGB
                           || v37
                           && ((*(_DWORD *)(v37 + 24) & 0x800) == 0
                            || (v183 = *(_QWORD *)(v36 + 80)) != 0 && v183 != *(_QWORD *)(v36 + 72)))
                          && (v37
                           || (*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                           || (v184 = *(_QWORD *)(v36 + 80)) != 0 && v184 != *(_QWORD *)(v36 + 72)) )
                        {
                          if ( !gppalRGB || !v37 )
                          {
LABEL_169:
                            v107 = CreateXlateObject(0LL, 0LL, gppalRGB, v37, v36, v36, v231, v235, v226, 0);
                            v257 = (XLATEOBJ *)v107;
                            v108 = (XLATEOBJ *)v107;
                            if ( v107 )
                            {
                              v109 = v242;
                              if ( gppalRGB && v37 && (*(_DWORD *)(v107 + 76) & 0x200) == 0 )
                                EXLATEOBJ::vAddToCache((__int64)&v257, gppalRGB, v37, v242, v242);
                              v59 = 1;
                              v110 = 1;
                              goto LABEL_175;
                            }
                            v110 = 0;
                            v59 = 1;
LABEL_391:
                            v109 = v242;
LABEL_175:
                            v223 = v110 & v222;
                            v111 = *((_QWORD *)v245 + 196);
                            if ( v111 && (*((_DWORD *)v245 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v245) )
                              v112 = v111;
                            else
                              v112 = *((_QWORD *)v245 + 194);
                            if ( v112 )
                            {
                              if ( !v111
                                || (*((_DWORD *)v245 + 10) & 2) == 0
                                || !(unsigned int)DC::bDpiScaledSurface(v245) )
                              {
                                v113 = (struct REGION *)*((_QWORD *)v245 + 194);
                              }
                            }
                            else
                            {
                              v113 = DC::prgnVisSnap(v245);
                            }
                            v336 = 0LL;
                            v337 = 0;
                            v338 = 1;
                            v339 = 0LL;
                            XCLIPOBJ::vSetup((XCLIPOBJ *)v331, v113, (struct ERECTL *)v327, 0);
                            if ( v332 == v334 || v333 == v335 )
                              goto LABEL_224;
                            v114 = v261;
                            *(_QWORD *)&v255 = 0LL;
                            BYTE8(v255) = 0;
                            HIDWORD(v255) = 0;
                            v115 = *(_QWORD *)(v261 + 48);
                            if ( v258 )
                            {
                              v128 = *(_DWORD *)(*((_QWORD *)v245 + 10) + 312LL);
                              if ( (v128 & 1) != 0 && (v128 & 9) != 9 )
                              {
                                memset(v296, 0, sizeof(v296));
                                HIDWORD(v296[0]) = *(_DWORD *)(v252 + 56);
                                LODWORD(v296[1]) = *(_DWORD *)(v252 + 60);
                                LODWORD(v296[0]) = *(_DWORD *)(v252 + 96);
                                v194 = *(_QWORD **)(v252 + 128);
                                LODWORD(v296[3]) = 0;
                                v296[2] = *v194;
                                SURFMEM::bCreateDIB(
                                  (SURFMEM *)&v255,
                                  (struct _DEVBITMAPINFO *)v296,
                                  0LL,
                                  0LL,
                                  0,
                                  0LL,
                                  0LL,
                                  0,
                                  1,
                                  0,
                                  0);
                                if ( !(_QWORD)v255 )
                                  goto LABEL_443;
                                v328 = 0LL;
                                v275 = 0LL;
                                v55 = (*(_DWORD *)(v252 + 112) & 0x400) == 0;
                                v329 = *(_DWORD *)(v252 + 56);
                                v330 = *(_DWORD *)(v252 + 60);
                                if ( !(v55
                                     ? ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, __int64 *, __int64 *))EngCopyBits)(
                                         v255 + 24,
                                         v252 + 24,
                                         0LL,
                                         0LL,
                                         &v328,
                                         &v275)
                                     : (*((unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))v274
                                        + 357))(
                                         v255 + 24,
                                         v252 + 24,
                                         0LL,
                                         0LL,
                                         &v328,
                                         &v275)) )
                                  goto LABEL_443;
                                v196 = *(_DWORD *)(v255 + 96);
                                if ( v196 - 1 > 5 )
                                  goto LABEL_443;
                                qword_1C02D8CF0[v196]();
                                v114 = v261;
                                v252 = v255;
                              }
                            }
                            v270 = 0LL;
                            v271 = 0;
                            v272 = 0;
                            v267 = 0LL;
                            v268 = 0;
                            v269 = 0;
                            if ( !v260 )
                            {
                              v116 = v259;
                              goto LABEL_185;
                            }
                            memset(v297, 0, sizeof(v297));
                            HIDWORD(v297[0]) = v327[2] - v327[0];
                            LODWORD(v297[1]) = v327[3] - v327[1];
                            LODWORD(v297[0]) = 6;
                            LODWORD(v297[3]) = 0;
                            v297[2] = *(_QWORD *)gppalRGB;
                            v197 = SURFMEM::bCreateDIB(
                                     (SURFMEM *)&v270,
                                     (struct _DEVBITMAPINFO *)v297,
                                     0LL,
                                     0LL,
                                     0,
                                     0LL,
                                     0LL,
                                     0,
                                     1,
                                     0,
                                     0) & v223;
                            if ( v197 )
                            {
                              if ( !v244 )
                              {
                                memset(v298, 0, sizeof(v298));
                                HIDWORD(v298[0]) = prclDest.right - prclDest.left;
                                LODWORD(v298[1]) = prclDest.bottom - prclDest.top;
                                LODWORD(v298[0]) = 6;
                                LODWORD(v298[3]) = 0;
                                v298[2] = *(_QWORD *)gppalRGB;
                                DIB = SURFMEM::bCreateDIB(
                                        (SURFMEM *)&v267,
                                        (struct _DEVBITMAPINFO *)v298,
                                        0LL,
                                        0LL,
                                        0,
                                        0LL,
                                        0LL,
                                        0,
                                        1,
                                        0,
                                        0);
                                v197 = DIB;
                                if ( DIB )
                                {
                                  v258 = prclDest.left;
                                  pptlSrc.x = prclDest.left;
                                  v241 = prclDest.top;
                                  pptlSrc.y = prclDest.top;
                                  if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, v198) )
                                  {
                                    v199 = 87;
LABEL_442:
                                    EngSetLastError(v199);
                                    SURFMEM::~SURFMEM((SURFMEM *)&v267);
                                    SURFMEM::~SURFMEM((SURFMEM *)&v270);
LABEL_443:
                                    SURFMEM::~SURFMEM((SURFMEM *)&v255);
                                    v59 = 0;
LABEL_224:
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v257);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v253);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v247);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v262);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v254);
LABEL_214:
                                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((HDC *)v305);
LABEL_215:
                                    if ( v248 )
                                    {
                                      XDCOBJ::RestoreAttributes((XDCOBJ *)&v248);
                                      v251 = 0;
                                      v125 = *(_QWORD *)v248;
                                      HmgDecrementExclusiveReferenceCountEx(v248, HIDWORD(v249), &v251);
                                      if ( v251 )
                                        bDeleteDCInternalEx(v125, 0LL);
                                    }
                                    goto LABEL_218;
                                  }
                                  if ( prclDest.right > prclDest.left
                                    && prclDest.bottom > prclDest.top
                                    && v258 <= *(_DWORD *)(v252 + 56)
                                    && v241 <= *(_DWORD *)(v252 + 60) )
                                  {
                                    v200 = 0LL;
                                    if ( v267 )
                                      v200 = (SURFOBJ *)(v267 + 24);
                                    EngCopyBits(v200, (SURFOBJ *)(v252 + 24), 0LL, pxlo, &prclDest, &pptlSrc);
                                  }
                                  v201 = 0;
                                  v252 = v267;
                                  v202 = *(_DWORD **)(v267 + 80);
                                  v203 = (_DWORD *)((char *)v202 + *(_DWORD *)(v267 + 60) * *(_DWORD *)(v267 + 88));
                                  if ( v202 != v203 )
                                  {
                                    v204 = v267;
                                    do
                                    {
                                      if ( v201 >= prclDest.top && v201 < prclDest.bottom )
                                      {
                                        v205 = v202;
                                        v206 = 0;
                                        v207 = *(int *)(v204 + 56);
                                        v208 = &v202[v207];
                                        v209 = (v207 * 4) >> 2;
                                        if ( v202 > v208 )
                                          v209 = 0LL;
                                        if ( v209 )
                                        {
                                          for ( k = 0LL; k != v209; ++k )
                                          {
                                            if ( v206 >= prclDest.left && v206 < prclDest.right )
                                              *v205 |= 0xFF000000;
                                            ++v206;
                                            ++v205;
                                          }
                                          v204 = v267;
                                        }
                                      }
                                      ++v201;
                                      v202 = (_DWORD *)((char *)v202 + *(int *)(v204 + 88));
                                    }
                                    while ( v202 != v203 );
                                    v252 = v204;
                                    v109 = v242;
                                  }
                                  HIBYTE(a11) |= 1u;
                                  v197 = DIB;
                                  v259 = (HDC)xloIdent;
                                }
                              }
                              v211 = *(_DWORD **)(v270 + 72);
                              v212 = (unsigned __int64)*(unsigned int *)(v270 + 64) >> 2;
                              if ( v212 )
                              {
                                if ( ((unsigned __int8)v211 & 4) == 0 )
                                  goto LABEL_438;
                                *v211 = 0;
                                if ( --v212 )
                                {
                                  ++v211;
LABEL_438:
                                  memset(v211, 0, 8 * (v212 >> 1));
                                  v109 = v242;
                                  if ( (v212 & 1) != 0 )
                                    v211[v212 - 1] = 0;
                                }
                              }
                            }
                            if ( v197 )
                            {
                              `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                              v243.x = v340.x - 16 * v300;
                              v243.y = v340.y - 16 * DWORD1(v300);
                              pptfx = v243;
                              v243.x = v341 - 16 * v300;
                              v243.y = v342 - 16 * DWORD1(v300);
                              v353 = v243;
                              v213 = 0LL;
                              v243.x = v343 - 16 * v300;
                              v243.y = v344 - 16 * DWORD1(v300);
                              v354 = v243;
                              if ( v252 )
                                v213 = (SURFOBJ *)(v252 + 24);
                              if ( v270 )
                                v214 = (SURFOBJ *)(v270 + 24);
                              else
                                v214 = 0LL;
                              EngPlgBlt(v214, v213, 0LL, 0LL, (XLATEOBJ *)v259, 0LL, 0LL, &pptfx, &prclDest, 0LL, 3u);
                              v324 = 0LL;
                              inited = EXLATEOBJ::bInitXlateObj(
                                         (__int64 *)&v262,
                                         0LL,
                                         0,
                                         (__int64)gppalRGB,
                                         v37,
                                         0LL,
                                         v109,
                                         *(_DWORD *)(*((_QWORD *)v248 + 10) + 40LL),
                                         *(_DWORD *)(*((_QWORD *)v248 + 10) + 32LL),
                                         v226,
                                         0);
                              v116 = (HDC)xloIdent;
                              v223 = inited;
                              v263 = v262;
                              v252 = v270;
                              prclDest.right = v327[2] - v327[0];
                              prclDest.bottom = v327[3] - v327[1];
                              *(_QWORD *)&prclDest.left = 0LL;
                              `vector destructor iterator'(&pptfx, 8uLL, 3uLL, Scale_None);
                              v114 = v261;
                              v83 = pxlo;
LABEL_185:
                              if ( v223 )
                              {
                                ++*(_DWORD *)(v114 + 92);
                                v117 = v245;
                                v118 = *((_QWORD *)v245 + 6);
                                if ( v118 == *((_QWORD *)v248 + 6)
                                  || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v245)
                                  && *(_QWORD *)(v118 + 3536) == v216 )
                                {
                                  if ( (*((_DWORD *)v117 + 9) & 0xE0) != 0 )
                                  {
                                    v325 = *(_OWORD *)v327;
                                    XDCOBJ::vAccumulateTight((XDCOBJ *)&v245, v117, (struct ERECTL *)&v325);
                                    v114 = v261;
                                  }
                                  v301 = a11;
                                  v302 = v116;
                                  v303 = v96;
                                  v304 = v108;
                                  if ( v327[2] - v327[0] == prclDest.right - prclDest.left
                                    && v327[3] - v327[1] == prclDest.bottom - prclDest.top )
                                  {
                                    BYTE1(v301) = BYTE1(a11) & 0xFE;
                                  }
                                  if ( (*(_DWORD *)(v114 + 112) & 0x10000) != 0 )
                                    v119 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v115 + 3272);
                                  else
                                    v119 = EngAlphaBlend;
                                  if ( v252 )
                                    v120 = v252 + 24;
                                  else
                                    v120 = 0LL;
                                  v59 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, int *, RECTL *, int *))v119)(
                                          v114 + 24,
                                          v120,
                                          v331,
                                          v263,
                                          v327,
                                          &prclDest,
                                          &v301);
                                  goto LABEL_197;
                                }
                                v217 = 87;
                              }
                              else
                              {
                                v217 = 6;
                              }
                              EngSetLastError(v217);
                              v59 = 0;
LABEL_197:
                              SURFMEM::~SURFMEM((SURFMEM *)&v267);
                              SURFMEM::~SURFMEM((SURFMEM *)&v270);
                              SURFMEM::~SURFMEM((SURFMEM *)&v255);
                              if ( v108 )
                              {
                                cEntries = (int)v108[1].cEntries;
                                if ( (int)cEntries >= 0 )
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                                  v83 = *(XLATEOBJ **)v247;
                                  v96 = v253;
                                }
                                else if ( (_DWORD)cEntries == -1 )
                                {
                                  FreeThreadBufferWithTag(v108);
                                }
                              }
                              if ( v96 )
                              {
                                v122 = (int)v96[1].cEntries;
                                if ( (int)v122 >= 0 )
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v122);
                                  v83 = *(XLATEOBJ **)v247;
                                }
                                else if ( (_DWORD)v122 == -1 )
                                {
                                  FreeThreadBufferWithTag(v96);
                                }
                              }
                              if ( v83 )
                              {
                                v123 = (int)v83[1].cEntries;
                                if ( (int)v123 >= 0 )
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v123);
                                }
                                else if ( (_DWORD)v123 == -1 )
                                {
                                  FreeThreadBufferWithTag(v83);
                                }
                              }
                              if ( v262 )
                              {
                                v218 = *((int *)v262 + 9);
                                if ( (int)v218 < 0 )
                                {
                                  if ( (_DWORD)v218 == -1 )
                                    FreeThreadBufferWithTag(v262);
                                }
                                else
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v218);
                                }
                              }
                              if ( v254 )
                              {
                                v124 = *((int *)v254 + 9);
                                if ( (int)v124 >= 0 )
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v124);
                                }
                                else if ( (_DWORD)v124 == -1 )
                                {
                                  FreeThreadBufferWithTag(v254);
                                }
                              }
                              goto LABEL_214;
                            }
                            v199 = 8;
                            goto LABEL_442;
                          }
                          v98 = *((_QWORD *)gppalRGB + 16);
                          if ( (struct PALETTE *)v98 == gppalRGB )
                            v99 = *((_DWORD *)gppalRGB + 8);
                          else
                            v99 = *(_DWORD *)(v98 + 32);
                          v100 = *(_QWORD *)(v37 + 128);
                          if ( v100 == v37 )
                            v101 = *(_DWORD *)(v37 + 32);
                          else
                            v101 = *(_DWORD *)(v100 + 32);
                          if ( v99 != v101 )
                          {
                            v102 = *((_DWORD *)gppalRGB + 14);
                            v284 = v36;
                            v285 = v36;
                            v283 = v37;
                            v236 = v102;
                            v287 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v103 = *((_QWORD *)gppalRGB + 16);
                            v104 = 0;
                            v105 = v236;
                            for ( m = v103; ; v103 = m )
                            {
                              if ( (struct PALETTE *)v103 == gppalRGB )
                                v106 = *((_DWORD *)gppalRGB + 8);
                              else
                                v106 = *(_DWORD *)(v103 + 32);
                              if ( *((_DWORD *)&xlateTable + 8 * v105 + 4) == v106 )
                              {
                                v185 = XEPALOBJ::ulTime((XEPALOBJ *)&v283);
                                if ( *(_DWORD *)(v186 + v187 + 20) == v185 )
                                {
                                  v188 = XEPALOBJ::ulTime((XEPALOBJ *)&v284);
                                  if ( *(_DWORD *)(v189 + v190 + 28) == v188 )
                                  {
                                    v191 = *(XLATEOBJ **)(v189 + v190 + 8);
                                    v257 = v191;
                                    v192 = v191[3].flXlate;
                                    v240 = v192;
                                    if ( (v192 & 0x6000) == 0 )
                                    {
                                      if ( (v191->flXlate & 4) == 0 && (v192 & 0x100) == 0 )
                                        goto LABEL_389;
                                      if ( (v191->flXlate & 4) != 0 && v226 == v191[1].iUniq )
                                      {
                                        v193 = XEPALOBJ::ulTime((XEPALOBJ *)&v285);
                                        if ( *(_DWORD *)(v189 + v190 + 24) == v193 )
                                          goto LABEL_389;
                                        LOWORD(v192) = v240;
                                      }
                                      if ( (v192 & 0x100) != 0
                                        && v231 == v191[1].flXlate
                                        && v235 == *(_DWORD *)&v191[1].iSrcType )
                                      {
LABEL_389:
                                        _InterlockedIncrement((volatile signed __int32 *)(v189 + v190));
                                        *((_DWORD *)gppalRGB + 14) = v105;
                                        SEMOBJ::vUnlock((SEMOBJ *)&v287);
                                        v83 = *(XLATEOBJ **)v247;
                                        v59 = 1;
                                        v96 = v253;
                                        v110 = 1;
                                        v108 = v257;
                                        pxlo = *(XLATEOBJ **)v247;
                                        goto LABEL_391;
                                      }
                                    }
                                  }
                                }
                              }
                              ++v104;
                              v105 = ((_BYTE)v105 + 1) & 7;
                              if ( v104 >= 8 )
                                break;
                            }
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                            goto LABEL_169;
                          }
                        }
                        v108 = xloIdent;
                        v59 = 1;
                        v257 = xloIdent;
                        v110 = 1;
                        goto LABEL_391;
                      }
                      v74 = *(_QWORD *)(v61 + 128);
                      if ( v74 == v61 )
                        v75 = *(_DWORD *)(v61 + 32);
                      else
                        v75 = *(_DWORD *)(v74 + 32);
                      v76 = *((_QWORD *)gppalRGB + 16);
                      if ( (struct PALETTE *)v76 == gppalRGB )
                        v77 = *((_DWORD *)gppalRGB + 8);
                      else
                        v77 = *(_DWORD *)(v76 + 32);
                      if ( v75 != v77 )
                      {
                        if ( gppalRGB )
                        {
                          v78 = *(_DWORD *)(v61 + 56);
                          v293 = v63;
                          v294 = v63;
                          v292 = gppalRGB;
                          v295 = ghsemPalette;
                          GreAcquireSemaphore(ghsemPalette);
                          v79 = *(_QWORD *)(v61 + 128);
                          for ( n = 0; n < 8; ++n )
                          {
                            if ( v79 == v61 )
                              v81 = *(_DWORD *)(v61 + 32);
                            else
                              v81 = *(_DWORD *)(v79 + 32);
                            if ( *((_DWORD *)&xlateTable + 8 * v78 + 4) == v81 )
                            {
                              v163 = XEPALOBJ::ulTime((XEPALOBJ *)&v292);
                              if ( *(_DWORD *)(v164 + v165 + 20) == v163 )
                              {
                                v166 = XEPALOBJ::ulTime((XEPALOBJ *)&v293);
                                if ( *(_DWORD *)(v167 + v168 + 28) == v166 )
                                {
                                  v169 = *(_DWORD **)(v167 + v168 + 8);
                                  *(_QWORD *)v247 = v169;
                                  v170 = v169[19];
                                  v238 = v170;
                                  if ( (v170 & 0x6000) == 0 )
                                  {
                                    if ( (v169[1] & 4) == 0 && (v170 & 0x100) == 0 )
                                      goto LABEL_336;
                                    if ( (v169[1] & 4) != 0 && v226 == v169[6] )
                                    {
                                      v171 = XEPALOBJ::ulTime((XEPALOBJ *)&v294);
                                      if ( *(_DWORD *)(v167 + v168 + 24) == v171 )
                                        goto LABEL_336;
                                      LOWORD(v170) = v238;
                                    }
                                    if ( (v170 & 0x100) != 0 && v229 == v169[7] && v233 == v169[8] )
                                    {
LABEL_336:
                                      _InterlockedIncrement((volatile signed __int32 *)(v167 + v168));
                                      *(_DWORD *)(v61 + 56) = v78;
                                      SEMOBJ::vUnlock((SEMOBJ *)&v295);
                                      v83 = *(XLATEOBJ **)v247;
                                      v84 = 1;
                                      pxlo = *(XLATEOBJ **)v247;
                                      goto LABEL_130;
                                    }
                                  }
                                }
                              }
                            }
                            v78 = ((_BYTE)v78 + 1) & 7;
                          }
                          if ( ghsemPalette )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                            GreReleaseSemaphoreInternal(ghsemPalette);
                          }
                        }
                        goto LABEL_124;
                      }
                    }
                    v83 = xloIdent;
                    v84 = v57;
                    pxlo = xloIdent;
                    *(_QWORD *)v247 = xloIdent;
                    goto LABEL_130;
                  }
                  v129 = UserScreenAccessCheck(512LL, v33);
                }
                if ( v129 )
                  goto LABEL_62;
LABEL_270:
                EngSetLastError(6u);
                v59 = 0;
                goto LABEL_214;
              }
              v144 = UserScreenAccessCheck(v34, v33);
            }
            if ( !v144 )
              goto LABEL_270;
            goto LABEL_58;
          }
        }
      }
LABEL_256:
      v59 = 0;
      EngSetLastError(0x57u);
      goto LABEL_215;
    }
    if ( !HIDWORD(v249) )
      goto LABEL_16;
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 48) + 32LL) & 0x8000) != 0 )
    {
      v132 = *(_DWORD *)(v16 + 2544);
      if ( v132 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v12 = a4;
LABEL_16:
        if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v248) )
        {
          if ( (*((_DWORD *)v248 + 134) & 4) != 0 )
            DC::vMarkTransformDirty(v248);
          goto LABEL_19;
        }
        _InterlockedDecrement((volatile signed __int32 *)v248 + 3);
LABEL_255:
        v248 = 0LL;
        goto LABEL_256;
      }
      v17 = v248;
    }
    _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
    goto LABEL_255;
  }
LABEL_244:
  EngSetLastError(6u);
  v59 = 0;
LABEL_218:
  if ( v245 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v245);
    v250 = 0;
    v126 = *(_QWORD *)v245;
    HmgDecrementExclusiveReferenceCountEx(v245, HIDWORD(v246), &v250);
    if ( v250 )
      bDeleteDCInternalEx(v126, 0LL);
  }
  return v59;
}
