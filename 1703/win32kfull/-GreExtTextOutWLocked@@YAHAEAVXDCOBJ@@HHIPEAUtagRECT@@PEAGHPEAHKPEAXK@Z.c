/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70
 * Callers:
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009324C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00D7A10 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GrePolyTextOutW @ 0x1C00E0E9C (GrePolyTextOutW.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C007AE9C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C007B510 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B538 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C007BF18 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C007D7CC (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00816C4 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0081748 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C00843C8 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C008EC54 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E7B84 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C010E810 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0123100 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0123130 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02672E8 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0267440 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C029802C (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C0298090 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02999E8 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C0299DAC (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0299FC8 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall GreExtTextOutWLocked(
        struct XDCOBJ *a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        void *a10,
        unsigned int a11)
{
  unsigned int v11; // r15d
  struct tagRECT *v12; // r13
  struct XDCOBJ *v13; // r12
  unsigned int v14; // edi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r14d
  int v18; // eax
  unsigned int v20; // r9d
  __int64 v21; // rdx
  int v22; // eax
  int v23; // r8d
  struct _BRUSHOBJ *v24; // rbx
  __int64 v25; // rbx
  int v26; // ebx
  _DWORD *v27; // rcx
  struct XDCOBJ *v28; // rsi
  char v29; // al
  int v30; // r9d
  int v31; // eax
  int v32; // eax
  int left; // edi
  int v34; // r13d
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rcx
  LONG bottom; // eax
  int v42; // r10d
  int v43; // r11d
  int v44; // edi
  int v45; // r13d
  int v46; // r8d
  int v47; // edx
  struct EXFORMOBJ *v48; // rdx
  int v49; // r9d
  __int64 v50; // rcx
  LONG v51; // eax
  LONG v52; // eax
  LONG v53; // ecx
  LONG v54; // r9d
  LONG v55; // r10d
  ERECTL *v56; // r13
  DC *v57; // r8
  DC *v58; // rcx
  __int64 v59; // rax
  bool v60; // cf
  __int64 v61; // rax
  DC *v62; // rdx
  int v63; // edi
  int v64; // r8d
  __int64 v65; // rcx
  int v66; // eax
  DC *v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  DC *v72; // rdx
  int v73; // eax
  int v74; // edi
  int v75; // edx
  int v76; // ecx
  LONG v77; // r8d
  __int64 v78; // r9
  LONG v79; // r10d
  RECTL *p_rclBkGround; // rdi
  int v81; // eax
  LONG v82; // ebx
  __int64 v83; // rdx
  char v84; // r8
  DC *v85; // r9
  unsigned int v86; // eax
  char v87; // bl
  struct EXFORMOBJ *v88; // rdx
  struct XDCOBJ *v89; // r8
  int v90; // r9d
  int v91; // eax
  int v92; // r10d
  __int64 v93; // rbx
  __int64 v94; // rcx
  int v95; // eax
  int v96; // edx
  int v97; // eax
  int v98; // r11d
  DC *v99; // rdx
  __int64 v100; // r8
  struct REGION *v101; // r10
  __int64 v102; // rdx
  __int64 v103; // r9
  RECTL rclBounds; // xmm2
  __int64 v105; // r8
  __m128i v106; // xmm0
  __int64 v107; // rcx
  int v108; // r10d
  __int64 v109; // r13
  int v110; // eax
  int v111; // eax
  int v112; // edx
  __int64 v113; // rbx
  DC *v114; // rax
  unsigned int v115; // r9d
  __int64 v116; // r10
  __int64 v117; // rdi
  struct _BRUSHOBJ *v118; // r11
  int v119; // edx
  __int64 v120; // rax
  int v121; // ecx
  struct _POINTL *v122; // rdi
  struct _BRUSHOBJ *v123; // r11
  __m128i si128; // xmm1
  LONG v125; // ecx
  LONG v126; // eax
  int v127; // ebx
  int v128; // r12d
  signed int v129; // edx
  struct _SURFOBJ *v130; // r8
  unsigned __int64 v131; // r9
  int v132; // r10d
  struct EXFORMOBJ *v133; // rdx
  int v134; // r9d
  struct _BRUSHOBJ *v135; // rbx
  int v136; // eax
  LONG iUniq; // ecx
  LONG v138; // eax
  signed int flXlate; // edx
  unsigned __int64 cEntries; // r8
  struct _RECTL *v141; // rbx
  struct XDCOBJ *v142; // r8
  int v143; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  BOOL (__stdcall *v147)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rdx
  int v148; // ecx
  DC *v149; // rax
  bool v150; // zf
  int v151; // eax
  struct XDCOBJ *v152; // r8
  int v153; // eax
  int v154; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v157; // eax
  __int64 *v158; // rax
  __int64 v159; // rax
  ERECTL *v160; // rcx
  RECTL v161; // xmm6
  __int64 v162; // rcx
  struct _SURFOBJ *v163; // r8
  LONG *v164; // rbx
  LONG v165; // edx
  struct _SURFOBJ *v166; // r9
  LONG v167; // eax
  struct _BRUSHOBJ *v168; // r12
  LONG v169; // ecx
  LONG v170; // eax
  LONG v171; // ecx
  LONG v172; // eax
  __int64 v173; // rcx
  __int64 v174; // rax
  struct _XLATEOBJ *v175; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v176; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v177; // [rsp+40h] [rbp-D0h]
  unsigned int v178; // [rsp+48h] [rbp-C8h]
  unsigned int v179; // [rsp+58h] [rbp-B8h]
  __int64 v180; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v181[2]; // [rsp+98h] [rbp-78h] BYREF
  struct _BRUSHOBJ *v182; // [rsp+A0h] [rbp-70h]
  struct _BRUSHOBJ *v183; // [rsp+A8h] [rbp-68h]
  int v184; // [rsp+B0h] [rbp-60h] BYREF
  unsigned int v185; // [rsp+B4h] [rbp-5Ch]
  LONG v186; // [rsp+B8h] [rbp-58h] BYREF
  int v187; // [rsp+BCh] [rbp-54h] BYREF
  unsigned int v188; // [rsp+C0h] [rbp-50h] BYREF
  SURFACE *v189; // [rsp+C8h] [rbp-48h] BYREF
  struct _XLATEOBJ *v190; // [rsp+D0h] [rbp-40h]
  LONG top; // [rsp+D8h] [rbp-38h] BYREF
  struct _SURFOBJ *v192[2]; // [rsp+E0h] [rbp-30h] BYREF
  _DWORD *v193; // [rsp+F0h] [rbp-20h] BYREF
  int v194; // [rsp+F8h] [rbp-18h]
  int v195; // [rsp+FCh] [rbp-14h]
  int v196[2]; // [rsp+100h] [rbp-10h] BYREF
  struct _RECTL *v197; // [rsp+108h] [rbp-8h] BYREF
  int v198; // [rsp+110h] [rbp+0h]
  ERECTL *v199; // [rsp+118h] [rbp+8h]
  int v200; // [rsp+120h] [rbp+10h] BYREF
  int v201; // [rsp+124h] [rbp+14h] BYREF
  unsigned __int16 *v202; // [rsp+128h] [rbp+18h] BYREF
  void *v203; // [rsp+130h] [rbp+20h] BYREF
  int *v204; // [rsp+138h] [rbp+28h] BYREF
  struct XDCOBJ *v205; // [rsp+140h] [rbp+30h]
  _QWORD v206[2]; // [rsp+148h] [rbp+38h] BYREF
  _QWORD v207[2]; // [rsp+158h] [rbp+48h] BYREF
  __int64 v208; // [rsp+168h] [rbp+58h] BYREF
  int v209; // [rsp+170h] [rbp+60h]
  _BYTE v210[8]; // [rsp+180h] [rbp+70h] BYREF
  __int64 v211; // [rsp+188h] [rbp+78h]
  PATHOBJ v212; // [rsp+200h] [rbp+F0h] BYREF
  __int64 v213; // [rsp+208h] [rbp+F8h]
  PATHOBJ v214; // [rsp+280h] [rbp+170h] BYREF
  __int64 v215; // [rsp+288h] [rbp+178h]
  PATHOBJ ppo; // [rsp+300h] [rbp+1F0h] BYREF
  __int64 v217; // [rsp+308h] [rbp+1F8h]
  _BYTE v218[8]; // [rsp+380h] [rbp+270h] BYREF
  __int64 v219; // [rsp+388h] [rbp+278h]
  PATHOBJ v220; // [rsp+400h] [rbp+2F0h] BYREF
  __int64 v221; // [rsp+408h] [rbp+2F8h]
  PATHOBJ v222; // [rsp+480h] [rbp+370h] BYREF
  __int64 v223; // [rsp+488h] [rbp+378h]
  struct _RECTL rclBkGround; // [rsp+500h] [rbp+3F0h] BYREF
  struct _RECTL v225; // [rsp+510h] [rbp+400h] BYREF
  RECTL v226; // [rsp+520h] [rbp+410h] BYREF
  struct _CLIPOBJ v227; // [rsp+530h] [rbp+420h] BYREF
  __int64 v228; // [rsp+580h] [rbp+470h]
  int v229; // [rsp+588h] [rbp+478h]
  int v230; // [rsp+5B0h] [rbp+4A0h]
  __int64 v231; // [rsp+5C0h] [rbp+4B0h]
  struct _RECTL v232; // [rsp+5D0h] [rbp+4C0h] BYREF
  STROBJ pstro; // [rsp+5E0h] [rbp+4D0h] BYREF
  int v234; // [rsp+620h] [rbp+510h]
  __int64 v235; // [rsp+628h] [rbp+518h]
  int v236; // [rsp+638h] [rbp+528h]
  int v237; // [rsp+63Ch] [rbp+52Ch]
  int v238; // [rsp+668h] [rbp+558h]
  _BYTE v239[132]; // [rsp+66Ch] [rbp+55Ch] BYREF
  __int64 v240; // [rsp+6F0h] [rbp+5E0h]
  struct _POINTL v241; // [rsp+720h] [rbp+610h] BYREF
  LONG x; // [rsp+728h] [rbp+618h]
  LONG v243; // [rsp+72Ch] [rbp+61Ch]
  LONG right; // [rsp+730h] [rbp+620h]
  LONG v245; // [rsp+734h] [rbp+624h]
  int v246; // [rsp+738h] [rbp+628h]
  int v247; // [rsp+73Ch] [rbp+62Ch]
  struct _POINTL v248; // [rsp+748h] [rbp+638h] BYREF

  v11 = 0;
  v12 = a5;
  v13 = a1;
  v202 = a6;
  v14 = a2;
  v203 = a10;
  v205 = a1;
  v15 = 4;
  v186 = a2;
  if ( (a4 & 0x10) == 0 )
    v15 = 2;
  v16 = *(_QWORD *)a1;
  v17 = 128;
  v181[0] = v15;
  v188 = a3;
  v190 = (struct _XLATEOBJ *)a5;
  v18 = *(_DWORD *)(v16 + 176);
  v204 = a8;
  LODWORD(v199) = 0;
  v198 = 0;
  if ( (v18 & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v16 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  v196[0] = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_5:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v20 = a4 & 0xFFFFC36F;
  LODWORD(v183) = v20;
  if ( !a5 )
  {
    v20 &= 0xFFFFFFF9;
LABEL_16:
    LODWORD(v183) = v20;
    goto LABEL_17;
  }
  if ( a5->left == a5->right || a5->top == a5->bottom )
  {
    a5->right = a2;
    a5->left = a2;
    a5->bottom = a3;
    a5->top = a3;
    if ( (v20 & 6) == 2 )
    {
      v12 = 0LL;
      v190 = 0LL;
      v20 &= ~2u;
      goto LABEL_16;
    }
  }
LABEL_17:
  v21 = *(_QWORD *)v13;
  if ( *(_QWORD *)v13 && (!v20 || v12 && (v20 & 0xFFFFFFF9) == 0) )
  {
    v22 = *(_DWORD *)(v21 + 176) & 1;
    if ( !v22 || (v20 & 4) == 0 )
    {
      rclBkGround = 0LL;
      v185 = 0;
      if ( v22 )
      {
        v23 = 0;
        v182 = 0LL;
        HIDWORD(v24) = 0;
      }
      else
      {
        v25 = 1432LL;
        if ( (*(_BYTE *)(v21 + 40) & 1) != 0 )
          v25 = 1440LL;
        v24 = *(struct _BRUSHOBJ **)(v21 + v25);
        v182 = v24;
        v23 = (int)v24;
      }
      v184 = 16 * v23;
      v26 = 16 * HIDWORD(v24);
      v194 = *(_DWORD *)(*(_QWORD *)(v21 + 80) + 68LL);
      v195 = *(_DWORD *)(*(_QWORD *)(v21 + 80) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v21 + 80) + 352LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v193, v13, 0x204u, 0);
        LOBYTE(v20) = (_BYTE)v183;
        v23 = (int)v182;
        v27 = v193;
      }
      else
      {
        v27 = (_DWORD *)(v21 + 336);
        v193 = (_DWORD *)(v21 + 336);
      }
      v28 = 0LL;
      if ( v12 )
      {
        v29 = v20;
        v30 = 136;
        v31 = v29 & 2;
        v150 = v31 == 0;
        LODWORD(v197) = v31;
        v32 = v27[8];
        if ( v150 )
          v30 = 128;
        v187 = v30;
        v17 = v30;
        if ( (v32 & 2) != 0 )
        {
          left = v23 + v12->left + ((v27[6] + 8) >> 4);
          v225.left = left;
          v34 = v23 + *(_DWORD *)&v190->iSrcType + ((v27[6] + 8) >> 4);
          v225.right = v34;
          v35 = HIDWORD(v182) + v190->flXlate + ((v27[7] + 8) >> 4);
          v225.top = v35;
          v17 = v30;
          v36 = HIDWORD(v182) + v190->cEntries + ((v27[7] + 8) >> 4);
          v225.bottom = v36;
        }
        else if ( (v32 & 1) != 0 )
        {
          v200 = 0;
          bFToL(v27, &v200, 0LL);
          left = (_DWORD)v182 + ((v193[6] + v200 + 8) >> 4);
          v225.left = left;
          v201 = 0;
          bFToL(v37, &v201, v38);
          top = 0;
          v34 = (_DWORD)v182 + ((v193[6] + v201 + 8) >> 4);
          v225.right = v34;
          bFToL(v193, &top, v39);
          v225.top = HIDWORD(v182) + ((v193[7] + top + 8) >> 4);
          top = v225.top;
          LODWORD(v197) = 0;
          bFToL(v40, &v197, 0LL);
          v17 = v187;
          v35 = top;
          v36 = HIDWORD(v182) + ((v193[7] + (int)v197 + 8) >> 4);
          v225.bottom = v36;
        }
        else
        {
          bottom = v12->bottom;
          v241.x = v12->left;
          x = v241.x;
          v243 = v12->top;
          v245 = v243;
          v241.y = bottom;
          right = v12->right;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v193, &v241, (struct _POINTFIX *)&v241, 3uLL);
          v42 = v241.x + right - x;
          v43 = v241.y + v245 - v243;
          v246 = v42;
          v247 = v43;
          v44 = *(&v241.x + 2 * (x > v241.x == x > right));
          v45 = *((_DWORD *)&v241 + 2 * (x > v241.x == x > right) + 4);
          if ( v44 > v45 )
            v44 += 15;
          else
            v45 += 15;
          left = (_DWORD)v182 + (v44 >> 4);
          v34 = (_DWORD)v182 + (v45 >> 4);
          v225.right = v34;
          v225.left = left;
          v46 = *(&v241.y + 2 * (v243 > v241.y == v243 > v245));
          v47 = *((_DWORD *)&v241 + 2 * (v243 > v241.y == v243 > v245) + 5);
          if ( v46 > v47 )
            v46 += 15;
          else
            v47 += 15;
          v35 = HIDWORD(v182) + (v46 >> 4);
          v36 = HIDWORD(v182) + (v47 >> 4);
          v225.bottom = v36;
          v225.top = v35;
          if ( ((unsigned __int8)v183 & 4) != 0 )
          {
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v218);
            if ( v219 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v218, v48, &v241, v49) )
            {
              v50 = *(_QWORD *)v13;
              v232.top = 16 * (*(_DWORD *)(*(_QWORD *)v13 + 1420LL) - HIDWORD(v182));
              v232.bottom = 16 * (*(_DWORD *)(v50 + 1428) - HIDWORD(v182));
              v209 = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v208, (struct EPATHOBJ *)v218, 1u, &v232);
              if ( v208 )
              {
                v28 = v13;
                *(_QWORD *)(*(_QWORD *)v13 + 1528LL) = v208;
                if ( (unsigned int)DC::bTightenRao(*(DC **)v13) )
                  LODWORD(v183) = (unsigned int)v183 & 0xFFFFFFFB;
              }
              if ( v209 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v208);
            }
            if ( ((unsigned __int8)v183 & 4) != 0 )
            {
              LODWORD(v183) = 0;
              v17 = 0;
              a7 = 0;
            }
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v218);
            v36 = v225.bottom;
            v35 = v225.top;
            v34 = v225.right;
            left = v225.left;
          }
          else if ( (_DWORD)v197 )
          {
            v241.x += v184;
            v241.y += v26;
            x += v184;
            v17 = v17 & 0xFFFFFFF5 | 2;
            right += v184;
            v245 += v26;
            v243 += v26;
            v247 = v26 + v43;
            v246 = v184 + v42;
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 312LL) & 1) != 0 )
        {
          ++left;
          ++v34;
          v225.left = left;
          v225.right = v34;
        }
        if ( left > v34 )
        {
          v51 = left;
          v225.left = v34;
          left = v34;
          v225.right = v51;
          v34 = v51;
        }
        if ( v35 > v36 )
        {
          v52 = v35;
          v225.top = v36;
          v35 = v36;
          v225.bottom = v52;
          v36 = v52;
        }
        if ( (v17 & 0xA) != 0 )
        {
          v53 = rclBkGround.left;
          v54 = rclBkGround.right;
          if ( rclBkGround.left != rclBkGround.right )
          {
            v55 = rclBkGround.top;
            if ( rclBkGround.top != rclBkGround.bottom )
            {
              if ( left < rclBkGround.left )
                v53 = left;
              v14 = v186;
              rclBkGround.left = v53;
              if ( v35 < rclBkGround.top )
                v55 = v35;
              rclBkGround.top = v55;
              if ( v34 > rclBkGround.right )
                v54 = v34;
              rclBkGround.right = v54;
              if ( v36 > rclBkGround.bottom )
                rclBkGround.bottom = v36;
              goto LABEL_76;
            }
          }
          rclBkGround = v225;
        }
        v14 = v186;
      }
LABEL_76:
      v56 = 0LL;
      v190 = 0LL;
      v197 = 0LL;
      v180 = 0LL;
      v234 = 0;
      if ( !a7 )
      {
LABEL_153:
        v84 = (char)v183;
        p_rclBkGround = 0LL;
        goto LABEL_154;
      }
      v57 = *(DC **)v13;
      v189 = 0LL;
      v150 = (*((_DWORD *)v57 + 9) & 0x4000) == 0;
      v187 = *((_DWORD *)v57 + 44) & 1;
      if ( !v150 )
      {
        v189 = (SURFACE *)*((_QWORD *)v57 + 64);
        SURFACE::bUnMap(v189, 0LL, v57);
      }
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v180, v13, v187, v181[0]) )
        GreAcquireSemaphore(*(_QWORD *)(v180 + 528));
      if ( v189 )
        SURFACE::Map(v189, 0LL, *(_QWORD *)v13);
      if ( !v180 )
      {
LABEL_152:
        v17 = 0;
        goto LABEL_153;
      }
      v198 = *(_DWORD *)(v180 + 72) & 2;
      if ( !v198 || (v150 = (*(_DWORD *)(v180 + 488) & 0x8000) == 0, LODWORD(v199) = 1, !v150) )
        LODWORD(v199) = 0;
      v58 = *(DC **)v13;
      v59 = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
      v185 = *(_DWORD *)(*(_QWORD *)v13 + 2184LL) | *(_DWORD *)(v59 + 152) & 0x11F;
      if ( (v185 & 1) != 0 )
      {
        v60 = (*(_DWORD *)(v59 + 8) & 0x200) != 0;
        v61 = *((_QWORD *)v58 + 10);
        if ( !v60 )
        {
          *(_DWORD *)(v61 + 8) |= 0x100u;
          v62 = *(DC **)v13;
          v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 84LL) + v184;
          v181[0] = v63;
          v64 = *(_DWORD *)(*((_QWORD *)v62 + 10) + 88LL);
          goto LABEL_102;
        }
        *(_DWORD *)(v61 + 8) &= ~0x200u;
        v65 = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
        *(_DWORD *)(v65 + 8) |= 0x100u;
        v66 = v193[8];
        if ( (v66 & 2) != 0 )
        {
          v67 = *(DC **)v13;
          v181[0] = v193[6] + 16 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 76LL);
          v181[1] = v193[7] + 16 * *(_DWORD *)(*((_QWORD *)v67 + 10) + 80LL);
        }
        else if ( (v66 & 1) != 0 )
        {
          v187 = 0;
          bFToL(v65, &v187, 0LL);
          v188 = 0;
          v181[0] = v193[6] + v187;
          bFToL(v181[0], &v188, v68);
          v181[1] = v193[7] + v188;
        }
        else
        {
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)&v193,
            (struct _POINTL *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 76LL),
            (struct _POINTFIX *)v181,
            1uLL);
        }
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 84LL) = *(_QWORD *)v181;
      }
      else
      {
        v69 = (unsigned int)v193[8];
        if ( (v69 & 2) != 0 )
        {
          v63 = v184 + v193[6] + 16 * v14;
          v181[0] = v63;
          v64 = 16 * v188 + v193[7];
          goto LABEL_102;
        }
        if ( (v69 & 1) != 0 )
        {
          v186 = 0;
          bFToL(v69, &v186, 0LL);
          v63 = v184 + v186 + v193[6];
          v181[0] = v63;
          v184 = 0;
          bFToL(v70, &v184, v71);
          v64 = v184 + v193[7];
          goto LABEL_102;
        }
        v181[1] = v188;
        v181[0] = v14;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v193, (struct _POINTL *)v181, (struct _POINTFIX *)v181, 1uLL);
      }
      v63 = v184 + v181[0];
      v64 = v181[1];
      v181[0] += v184;
LABEL_102:
      v72 = *(DC **)v13;
      v181[1] = v26 + v64;
      ESTROBJ::vInit(
        (ESTROBJ *)&pstro,
        v202,
        a7,
        v13,
        (struct RFONTOBJ *)&v180,
        (struct EXFORMOBJ *)&v193,
        v204,
        v196[0],
        *((_DWORD *)v72 + 547),
        *(_DWORD *)(*((_QWORD *)v72 + 10) + 160LL),
        *(_DWORD *)(*((_QWORD *)v72 + 10) + 168LL),
        *(_DWORD *)(*((_QWORD *)v72 + 10) + 172LL),
        v63,
        v26 + v64,
        v185,
        0LL,
        v203,
        a11);
      if ( (v234 & 4) != 0 )
      {
        v73 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v248, &pstro.rclBkGround);
        v74 = v73;
        v75 = pstro.rclBkGround.right;
        v76 = pstro.rclBkGround.left;
        if ( (*(_DWORD *)(v180 + 12) & 0x10000000) != 0 )
        {
          v76 = pstro.rclBkGround.left - 1;
          v75 = pstro.rclBkGround.right + 1;
          --pstro.rclBkGround.left;
          ++pstro.rclBkGround.right;
        }
        if ( (v234 & 0x1400) != 0 )
        {
          ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v248, v73);
          v75 = pstro.rclBkGround.right;
          v76 = pstro.rclBkGround.left;
        }
        v77 = rclBkGround.left;
        v78 = (unsigned int)rclBkGround.right;
        if ( rclBkGround.left == rclBkGround.right || (v79 = rclBkGround.top, rclBkGround.top == rclBkGround.bottom) )
        {
          rclBkGround = pstro.rclBkGround;
        }
        else
        {
          if ( v76 < rclBkGround.left )
            v77 = v76;
          rclBkGround.left = v77;
          if ( pstro.rclBkGround.top < rclBkGround.top )
            v79 = pstro.rclBkGround.top;
          rclBkGround.top = v79;
          if ( v75 > rclBkGround.right )
            v78 = (unsigned int)v75;
          rclBkGround.right = v78;
          if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
            rclBkGround.bottom = pstro.rclBkGround.bottom;
        }
        if ( a9 == 2 )
        {
          if ( !v74 )
          {
            p_rclBkGround = &pstro.rclBkGround;
            v190 = (struct _XLATEOBJ *)&pstro.rclBkGround;
            goto LABEL_122;
          }
          v17 |= 0x10u;
        }
        p_rclBkGround = 0LL;
LABEL_122:
        if ( v76 >= v75 || (v81 = 0, pstro.rclBkGround.top >= pstro.rclBkGround.bottom) )
          v81 = 1;
        if ( (v17 & 8) != 0 && v225.left <= v76 && v225.right >= v75 )
        {
          v82 = v225.bottom;
          if ( v225.top <= pstro.rclBkGround.top && v225.bottom >= pstro.rclBkGround.bottom && !v81 )
          {
            p_rclBkGround = &v225;
            v17 &= ~8u;
            v190 = (struct _XLATEOBJ *)&v225;
            goto LABEL_135;
          }
        }
        else
        {
          v82 = v225.bottom;
        }
        if ( !p_rclBkGround )
        {
          if ( v81 )
          {
LABEL_140:
            if ( (v185 & 0xA0) != 0 )
            {
              if ( v238 )
              {
                v56 = (ERECTL *)v239;
                v197 = (struct _RECTL *)v239;
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v239) )
                {
                  do
                    ERECTL::operator+=(&rclBkGround);
                  while ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v83 + 16)) );
                }
              }
              else
              {
                v197 = 0LL;
                v17 |= 4u;
              }
            }
            v84 = (char)v183;
            if ( ((unsigned __int8)v183 & 4) != 0 )
            {
              if ( v225.left > rclBkGround.left
                || v225.right < rclBkGround.right
                || v225.top > rclBkGround.top
                || v82 < rclBkGround.bottom )
              {
                ERECTL::operator*=(&rclBkGround, &v225, (unsigned int)v183, v78);
              }
              else
              {
                v84 = (unsigned __int8)v183 & 0xFB;
              }
            }
LABEL_154:
            if ( (v185 & 1) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 84LL) += v236;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 88LL) += v237;
            }
            v85 = *(DC **)v13;
            if ( (*(_DWORD *)(*(_QWORD *)v13 + 176LL) & 1) != 0 )
            {
              v86 = 0;
              if ( (v84 & 4) == 0 )
                v86 = v17;
              v17 = v86;
              v87 = v86;
              XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v210, v13);
              if ( !v211 )
                goto LABEL_185;
              if ( (v87 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v210, &v225) )
                v17 = 0;
              if ( (v17 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v210, v88, &v241, v90) )
                v17 = 0;
              if ( (v17 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v210, v88, &v248, v90) )
                v17 = 0;
              if ( (v17 & 1) != 0
                && (!p_rclBkGround || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v210, p_rclBkGround)) )
              {
                if ( (v234 & 0x1400) != 0 )
                  v91 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)v210, v89);
                else
                  v91 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v210);
                if ( !v91 )
                {
LABEL_181:
                  v17 = 0;
                  goto LABEL_182;
                }
                if ( v56 && !(unsigned int)ERECTL::bEmpty(v56) )
                {
                  while ( (unsigned int)bAddRectToPath((struct EPATHOBJ *)v210, (struct _RECTL *)v56) )
                  {
                    v56 = (ERECTL *)((char *)v56 + 16);
                    if ( (unsigned int)ERECTL::bEmpty(v56) )
                      goto LABEL_182;
                  }
                  goto LABEL_181;
                }
              }
LABEL_182:
              if ( (v17 & 4) != 0
                && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v210) )
              {
                v17 = 0;
              }
LABEL_185:
              XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v210);
LABEL_404:
              if ( (v234 & 0x801) != 0 )
              {
                if ( (v234 & 1) != 0 )
                  FreeTmpBuffer(v235);
                if ( (v234 & 0x800) != 0 )
                  Win32FreePool(v240);
              }
              if ( v180 )
              {
                if ( (*(_DWORD *)(v180 + 720) & 0x81) != 0 )
                  RFONTOBJ::dtHelper((RFONTOBJ *)&v180, 1);
                v173 = *(_QWORD *)(v180 + 632);
                if ( v173 )
                {
                  Win32FreePool(v173);
                  *(_QWORD *)(v180 + 640) = 0LL;
                  *(_QWORD *)(v180 + 632) = 0LL;
                }
                EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v180 + 528));
                GreReleaseSemaphoreInternal(*(_QWORD *)(v180 + 528));
              }
              if ( v28 )
              {
                v203 = *(void **)(*(_QWORD *)v28 + 1528LL);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v203);
                v174 = *(_QWORD *)v28;
                *(_DWORD *)(v174 + 36) |= 0x10u;
                *(_QWORD *)(v174 + 1528) = 0LL;
              }
              goto LABEL_418;
            }
            if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == rclBkGround.bottom )
              goto LABEL_404;
            v92 = *((_DWORD *)v85 + 9);
            v93 = 1432LL;
            if ( (v92 & 0xE0) != 0 )
            {
              v94 = 1432LL;
              if ( (*((_BYTE *)v85 + 40) & 1) != 0 )
                v94 = 1440LL;
              *(struct _RECTL *)v192 = rclBkGround;
              v95 = *(_DWORD *)((char *)v85 + v94);
              v96 = rclBkGround.left - v95;
              LODWORD(v192[1]) = rclBkGround.right - v95;
              v97 = *(_DWORD *)((char *)v85 + v94 + 4);
              HIDWORD(v192[0]) = rclBkGround.top - v97;
              HIDWORD(v192[1]) = rclBkGround.bottom - v97;
              LODWORD(v192[0]) = v96;
              if ( (v92 & 0x20) != 0 )
                ERECTL::operator|=((char *)v85 + 1480, v192);
              if ( (*(_DWORD *)(*(_QWORD *)v13 + 36LL) & 0x80u) != 0 )
                ERECTL::operator|=(*(_QWORD *)v13 + 1512LL, v192);
            }
            if ( v198 || (v98 = 0, (v84 & 4) != 0) )
              v98 = 1;
            v99 = *(DC **)v13;
            if ( !*(_QWORD *)(*(_QWORD *)v13 + 1568LL)
              || (*((_DWORD *)v99 + 10) & 1) == 0
              || !(unsigned int)DC::bDpiScaledSurface(*(DC **)v13) )
            {
              v100 = *((_QWORD *)v99 + 194);
            }
            if ( v100 )
            {
              if ( !*((_QWORD *)v99 + 196)
                || (*((_DWORD *)v99 + 10) & 1) == 0
                || !(unsigned int)DC::bDpiScaledSurface(v99) )
              {
                v101 = (struct REGION *)*((_QWORD *)v99 + 194);
              }
            }
            else
            {
              v101 = DC::prgnVisSnap(v99);
            }
            v228 = 0LL;
            v229 = 0;
            v230 = 1;
            v231 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v227, v101, (struct ERECTL *)&rclBkGround, v98);
            rclBounds = v227.rclBounds;
            v105 = (unsigned int)_mm_cvtsi128_si32((__m128i)v227.rclBounds);
            v106 = _mm_srli_si128((__m128i)v227.rclBounds, 8);
            rclBkGround = v227.rclBounds;
            v227.rclBounds.left = v105;
            v227.rclBounds.right = _mm_cvtsi128_si32(v106);
            if ( (_DWORD)v105 == v227.rclBounds.right )
              goto LABEL_404;
            v227.rclBounds.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4));
            v227.rclBounds.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 12));
            if ( v227.rclBounds.top == v227.rclBounds.bottom )
              goto LABEL_404;
            v107 = *(_QWORD *)v13;
            v108 = *(_DWORD *)(*(_QWORD *)v13 + 36LL);
            if ( (v108 & 0xE0) != 0 )
            {
              v226 = rclBounds;
              if ( (*(_BYTE *)(v107 + 40) & 1) != 0 )
                v93 = 1440LL;
              v105 = (unsigned int)(v105 - *(_DWORD *)(v107 + v93));
              v226.left = v105;
              v102 = (unsigned int)(rclBounds.right - *(_DWORD *)(v107 + v93));
              v226.right = rclBounds.right - *(_DWORD *)(v107 + v93);
              v103 = (unsigned int)(rclBounds.top - *(_DWORD *)(v107 + v93 + 4));
              v226.top = rclBounds.top - *(_DWORD *)(v107 + v93 + 4);
              v226.bottom -= *(_DWORD *)(v107 + v93 + 4);
              if ( (v108 & 0x40) != 0 )
              {
                if ( *(_DWORD *)(v107 + 1496) == *(_DWORD *)(v107 + 1504)
                  || *(_DWORD *)(v107 + 1500) == *(_DWORD *)(v107 + 1508) )
                {
                  *(RECTL *)(v107 + 1496) = v226;
                }
                else
                {
                  if ( (int)v105 < *(_DWORD *)(v107 + 1496) )
                  {
                    *(_DWORD *)(v107 + 1496) = v105;
                    v102 = (unsigned int)v226.right;
                    v103 = (unsigned int)v226.top;
                  }
                  if ( (int)v103 < *(_DWORD *)(v107 + 1500) )
                  {
                    *(_DWORD *)(v107 + 1500) = v103;
                    v102 = (unsigned int)v226.right;
                  }
                  if ( (int)v102 > *(_DWORD *)(v107 + 1504) )
                    *(_DWORD *)(v107 + 1504) = v102;
                  if ( v226.bottom > *(_DWORD *)(v107 + 1508) )
                    *(_DWORD *)(v107 + 1508) = v226.bottom;
                }
                *(_QWORD *)v196 = *(_QWORD *)(*(_QWORD *)v13 + 1584LL);
                if ( *(_QWORD *)v196 )
                {
                  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v207);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v207);
                  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v206);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v206);
                  if ( v207[0] )
                  {
                    if ( v206[0] )
                    {
                      RGNOBJ::vSet((RGNOBJ *)v206, &v226);
                      if ( RGNOBJ::bMerge(
                             (RGNOBJ *)v207,
                             (struct RGNOBJ *)v196,
                             (struct RGNOBJ *)v206,
                             BYTE2(gafjRgnOp)) )
                      {
                        RGNOBJ::vSwap((RGNOBJ *)v196, (struct RGNOBJ *)v207);
                        *(_QWORD *)(*(_QWORD *)v13 + 1584LL) = *(_QWORD *)v196;
                      }
                    }
                  }
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v206);
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v207);
                }
              }
            }
            v109 = *(_QWORD *)(*(_QWORD *)v13 + 512LL);
            if ( !v109 )
              goto LABEL_404;
            if ( (*(_DWORD *)(v109 + 116) & 8) != 0 || *(_QWORD *)(v109 + 232) )
            {
              v107 = 512LL;
              if ( (*(_WORD *)(v109 + 102) & 0x200) != 0 )
                goto LABEL_404;
            }
            v110 = *(_DWORD *)(v109 + 112);
            if ( (v110 & 0x800) != 0 )
            {
              v111 = UserSurfaceAccessCheck(*(_QWORD *)(v109 + 584), v102, v105, v103);
            }
            else
            {
              if ( (v110 & 0x10000000) == 0 )
                goto LABEL_240;
              v111 = UserScreenAccessCheck(v107, v102, v105, v103);
            }
            if ( !v111 )
              goto LABEL_404;
LABEL_240:
            v112 = 0;
            v113 = *(_QWORD *)(v109 + 128);
            v189 = *(SURFACE **)(v109 + 48);
            v114 = *(DC **)v13;
            v115 = *(_DWORD *)(*(_QWORD *)v13 + 72LL);
            v116 = *(_QWORD *)v13 + 1888LL;
            v117 = *(_QWORD *)(*(_QWORD *)v13 + 96LL);
            v118 = (struct _BRUSHOBJ *)(*(_QWORD *)v13 + 2032LL);
            v183 = (struct _BRUSHOBJ *)v116;
            v182 = v118;
            v185 = v115;
            if ( (v115 & 0x10000000) != 0 )
            {
              v119 = (int)v199;
              *(_DWORD *)(*((_QWORD *)v114 + 10) + 8LL) |= 4u;
              --*(_DWORD *)(v116 + 132);
              v112 = v119 ^ 1;
            }
            v202 = *(unsigned __int16 **)v13;
            v120 = *((_QWORD *)v202 + 10);
            v121 = *((_DWORD *)v202 + 83);
            if ( (((unsigned __int8)v121 | *(_BYTE *)(v120 + 8)) & 0xC) != 0 )
            {
              if ( (((unsigned __int8)v121 | *(_BYTE *)(v120 + 8)) & 4) != 0 )
              {
                EBRUSHOBJ::vInitBrush(v116, v202, gpbrText, v117, v113, v109, v112);
                v118 = v182;
                v115 = v185;
              }
              if ( ((*(_BYTE *)(*(_QWORD *)v13 + 332LL) | *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 8LL)) & 8) != 0 )
                EBRUSHOBJ::vInitBrush(v118, *(_QWORD *)v13, gpbrBackground, v117, v113, v109, (v115 >> 15) & 1);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 8LL) &= 0xFFFFFFF3;
              *(_DWORD *)(*(_QWORD *)v13 + 332LL) &= 0xFFFFFFF3;
            }
            v122 = (struct _POINTL *)(*(_QWORD *)v13 + 1592LL);
            if ( (v17 & 0x1A) != 0 )
            {
              if ( (v17 & 8) == 0 || (unsigned int)ERECTL::bEmpty((ERECTL *)&v225) )
              {
                v132 = rclBkGround.bottom;
                LODWORD(v130) = rclBkGround.right;
                v131 = (unsigned int)rclBkGround.top;
                v129 = rclBkGround.left;
              }
              else
              {
                si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                v125 = v225.left;
                v126 = v225.right;
                v127 = v225.top;
                v128 = v225.bottom;
                v129 = _mm_cvtsi128_si32(si128);
                v130 = (struct _SURFOBJ *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
                v131 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
                if ( v129 > v225.left )
                  v125 = v129;
                v132 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
                rclBkGround.left = v129;
                if ( (int)v130 < v225.right )
                  v126 = (int)v130;
                v227.rclBounds.left = v125;
                rclBkGround.right = (int)v130;
                v227.rclBounds.right = v126;
                if ( (int)v131 > v225.top )
                  v127 = v131;
                rclBkGround.top = v131;
                v227.rclBounds.top = v127;
                if ( v132 < v225.bottom )
                  v128 = v132;
                rclBkGround.bottom = v132;
                v196[0] = v128;
                v227.rclBounds.bottom = v128;
                v13 = v205;
                if ( v125 < v126 && v127 < v196[0] )
                {
                  ++*(_DWORD *)(v109 + 92);
                  TextOutBitBlt(
                    (struct SURFACE *)v109,
                    (struct RFONTOBJ *)&v180,
                    v130,
                    (struct _SURFOBJ *)v131,
                    &v227,
                    v175,
                    &v227.rclBounds,
                    v176,
                    v177,
                    v123,
                    v122,
                    v179);
                  v132 = rclBkGround.bottom;
                  LODWORD(v130) = rclBkGround.right;
                  v131 = (unsigned int)rclBkGround.top;
                  v129 = rclBkGround.left;
                }
                v227.rclBounds = rclBkGround;
              }
              if ( (v17 & 0x12) != 0 )
              {
                PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                if ( v217 )
                {
                  if ( (v17 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v133, &v241, v134) )
                    v17 = 0;
                  if ( (v17 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v133, &v248, v134) )
                    v17 = 0;
                  v135 = v182;
                  if ( (v17 & 0x12) != 0
                    && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                        &ppo,
                                        v13,
                                        (struct RFONTOBJ *)&v180,
                                        (struct PDEVOBJ *)&v189,
                                        (struct SURFACE *)v109,
                                        &v227,
                                        v182,
                                        v122,
                                        (unsigned int)v177,
                                        v178) )
                  {
                    v17 = 0;
                  }
                }
                else
                {
                  v135 = v182;
                }
                PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                v132 = rclBkGround.bottom;
                LODWORD(v130) = rclBkGround.right;
                v131 = (unsigned int)rclBkGround.top;
                v129 = rclBkGround.left;
LABEL_280:
                if ( (v17 & 1) == 0 )
                {
LABEL_398:
                  if ( (v17 & 4) != 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v222);
                    if ( !v223
                      || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v222)
                      || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                          &v222,
                                          v13,
                                          (struct RFONTOBJ *)&v180,
                                          (struct PDEVOBJ *)&v189,
                                          (struct SURFACE *)v109,
                                          &v227,
                                          v183,
                                          v122,
                                          (unsigned int)v177,
                                          v178) )
                    {
                      v17 = 0;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v222);
                  }
                  goto LABEL_404;
                }
                v199 = 0LL;
                if ( v198 )
                {
                  v185 &= ~0x100u;
                  v136 = 64;
                  if ( (*(_DWORD *)(v180 + 488) & 0x8000) == 0 )
                    v136 = 32;
                  v17 |= v136;
                }
                if ( v190 && (v185 & 0x100) == 0 )
                {
                  iUniq = v190->iUniq;
                  v138 = *(_DWORD *)&v190->iSrcType;
                  if ( v129 > (signed int)v190->iUniq )
                    iUniq = v129;
                  flXlate = v190->flXlate;
                  v227.rclBounds.left = iUniq;
                  if ( (int)v130 < v138 )
                    v138 = (int)v130;
                  cEntries = v190->cEntries;
                  v227.rclBounds.right = v138;
                  if ( (int)v131 > flXlate )
                    flXlate = v131;
                  v227.rclBounds.top = flXlate;
                  if ( v132 < (int)cEntries )
                    cEntries = (unsigned int)v132;
                  v227.rclBounds.bottom = cEntries;
                  if ( iUniq < v138 && flXlate < (int)cEntries )
                  {
                    ++*(_DWORD *)(v109 + 92);
                    TextOutBitBlt(
                      (struct SURFACE *)v109,
                      (struct RFONTOBJ *)&v180,
                      (struct _SURFOBJ *)cEntries,
                      (struct _SURFOBJ *)v131,
                      &v227,
                      v175,
                      &v227.rclBounds,
                      v176,
                      v177,
                      v135,
                      v122,
                      v179);
                  }
                  v227.rclBounds = rclBkGround;
                  v190 = 0LL;
                }
                v141 = v197;
                if ( v197 && *((_DWORD *)v189 + 539) != 4 )
                {
                  v199 = (ERECTL *)v197;
                  v141 = 0LL;
                }
                if ( (v17 & 0x20) != 0 )
                {
                  if ( (v234 & 0x1400) != 0 )
                  {
                    if ( !bProxyDrvTextOut(
                            v13,
                            (struct SURFACE *)v109,
                            (struct ESTROBJ *)&pstro,
                            (struct ECLIPOBJ *)&v227,
                            0LL,
                            0LL,
                            v183,
                            v182,
                            v122,
                            (struct RFONTOBJ *)&v180,
                            (struct PDEVOBJ *)&v189,
                            *(_DWORD *)(*(_QWORD *)v13 + 72LL),
                            &rclBkGround) )
                      v17 = 0;
                  }
                  else
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v214);
                    if ( !v215
                      || ((v234 & 0x1400) == 0
                        ? (v143 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v214))
                        : (v143 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v214, v142)),
                          !v143
                       || !(unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                           &v214,
                                           v13,
                                           (struct RFONTOBJ *)&v180,
                                           (struct PDEVOBJ *)&v189,
                                           (struct SURFACE *)v109,
                                           &v227,
                                           v183,
                                           v122,
                                           (unsigned int)v177)) )
                    {
                      v17 = 0;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v214);
                  }
LABEL_381:
                  v160 = v199;
                  if ( v199 )
                  {
                    v161 = v227.rclBounds;
                    ++*(_DWORD *)(v109 + 92);
                    *(RECTL *)v192 = v161;
                    if ( !(unsigned int)ERECTL::bEmpty(v160) )
                    {
                      v163 = (struct _SURFOBJ *)HIDWORD(v192[1]);
                      v164 = (LONG *)(v162 + 4);
                      v165 = (LONG)v192[1];
                      v166 = (struct _SURFOBJ *)HIDWORD(v192[0]);
                      v167 = (LONG)v192[0];
                      v168 = v183;
                      do
                      {
                        v169 = *(v164 - 1);
                        if ( v167 > v169 )
                          v169 = v167;
                        v170 = v164[1];
                        v227.rclBounds.left = v169;
                        if ( v165 < v170 )
                          v170 = v165;
                        v227.rclBounds.right = v170;
                        if ( v169 < v170 )
                        {
                          v171 = *v164;
                          v172 = v164[2];
                          if ( (int)v166 > *v164 )
                            v171 = (int)v166;
                          v227.rclBounds.top = v171;
                          if ( (int)v163 < v172 )
                            v172 = (int)v163;
                          v227.rclBounds.bottom = v172;
                          if ( v171 < v172 )
                            TextOutBitBlt(
                              (struct SURFACE *)v109,
                              (struct RFONTOBJ *)&v180,
                              v163,
                              v166,
                              &v227,
                              v175,
                              &v227.rclBounds,
                              v176,
                              v177,
                              v168,
                              v122,
                              v179);
                        }
                        v164 += 4;
                        v150 = (unsigned int)ERECTL::bEmpty((ERECTL *)(v164 - 1)) == 0;
                        v167 = (LONG)v192[0];
                      }
                      while ( v150 );
                      v13 = v205;
                    }
                    v227.rclBounds = v161;
                  }
                  goto LABEL_398;
                }
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( ThreadWin32Thread && (v145 = *ThreadWin32Thread) != 0 )
                  v146 = *(_QWORD *)(v145 + 304);
                else
                  v146 = *(_QWORD *)(v109 + 104);
                if ( v146 )
                  SURFACE::pdcoAA((SURFACE *)v109, 0LL);
                if ( (*(_DWORD *)(v109 + 112) & 8) != 0 )
                  v147 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v109 + 48) + 2888LL);
                else
                  v147 = EngTextOut;
                *(_QWORD *)v181 = v147;
                if ( (char *)v147 == (char *)SpTextOut || (char *)v147 == (char *)BmpDevTextOut )
                {
                  if ( (*(_DWORD *)(v180 + 12) & 0x10010000) != 0 )
                    SURFACE::pdcoAA((SURFACE *)v109, v13);
                }
                else
                {
                  v148 = *(_DWORD *)(v180 + 12);
                  if ( (v148 & 0x10000) != 0 )
                  {
                    v149 = *(DC **)v13;
                    v150 = (v148 & 0x10000000) != 0
                         ? ((*((_DWORD *)v149 + 19) >> 14) & 1) == 0
                         : (*((_DWORD *)v149 + 18) & 0x1000000) == 0;
                    if ( v150 )
                    {
                      if ( v147 != EngTextOut )
                        SURFACE::pdcoAA((SURFACE *)v109, v13);
                      *(_QWORD *)v181 = SpTextOut;
                    }
                  }
                }
                if ( (v17 & 0x40) != 0 )
                {
                  if ( (v234 & 0x1400) == 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v212);
                    if ( !v213
                      || ((v234 & 0x1400) == 0
                        ? (v153 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v212))
                        : (v153 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v212, v152)),
                          !v153
                       || v212.cCurves > 1
                       && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                           &v212,
                                           v13,
                                           (struct RFONTOBJ *)&v180,
                                           (struct PDEVOBJ *)&v189,
                                           (struct SURFACE *)v109,
                                           &v227,
                                           v183,
                                           v122,
                                           (unsigned int)v177,
                                           v178)) )
                    {
                      v17 = 0;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v212);
                    goto LABEL_378;
                  }
                  v151 = bProxyDrvTextOut(
                           v13,
                           (struct SURFACE *)v109,
                           (struct ESTROBJ *)&pstro,
                           (struct ECLIPOBJ *)&v227,
                           0LL,
                           0LL,
                           v183,
                           v182,
                           v122,
                           (struct RFONTOBJ *)&v180,
                           (struct PDEVOBJ *)&v189,
                           *(_DWORD *)(*(_QWORD *)v13 + 72LL),
                           &rclBkGround);
                }
                else
                {
                  ++*(_DWORD *)(v109 + 92);
                  if ( (v17 & 4) != 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v220);
                    if ( !v221
                      || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v220)
                      || ((v234 & 0x1400) == 0
                        ? (v178 = 3341,
                           v177 = v122,
                           v176 = (struct _POINTL *)v182,
                           v175 = v190,
                           v154 = (*(__int64 (__fastcall **)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v181)(
                                    v109 + 24,
                                    &pstro,
                                    v180,
                                    &v227,
                                    v141))
                        : (v154 = bProxyDrvTextOut(
                                    v13,
                                    (struct SURFACE *)v109,
                                    (struct ESTROBJ *)&pstro,
                                    (struct ECLIPOBJ *)&v227,
                                    v141,
                                    (struct _RECTL *)v190,
                                    v183,
                                    v182,
                                    v122,
                                    (struct RFONTOBJ *)&v180,
                                    0LL,
                                    0,
                                    &rclBkGround)),
                          !v154
                       || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                           &v220,
                                           v13,
                                           (struct RFONTOBJ *)&v180,
                                           (struct PDEVOBJ *)&v189,
                                           (struct SURFACE *)v109,
                                           &v227,
                                           v183,
                                           v122,
                                           (unsigned int)v177,
                                           v178)) )
                    {
                      v17 = 0;
                    }
                    v17 &= ~4u;
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v220);
                    goto LABEL_378;
                  }
                  if ( (v234 & 0x1400) == 0 )
                  {
                    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 48LL) + 32LL) & 0x8080) == 0x80
                      && !*(_DWORD *)(v180 + 88) )
                    {
                      v202 = (unsigned __int16 *)ghsemPrintKView;
                      GreAcquireSemaphore(ghsemPrintKView);
                      for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                      {
                        if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v180 + 120) + 80LL) )
                          ++*(_DWORD *)(i + 12);
                      }
                      SEMOBJ::vUnlock((SEMOBJ *)&v202);
                    }
                    v178 = 3341;
                    v177 = v122;
                    v176 = (struct _POINTL *)v182;
                    v175 = v190;
                    if ( !(*(unsigned int (__fastcall **)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v181)(
                            v109 + 24,
                            &pstro,
                            v180,
                            &v227,
                            v141) )
                      v17 = 0;
                    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 48LL) + 32LL) & 0x8080) == 0x80
                      && !*(_DWORD *)(v180 + 88) )
                    {
                      v204 = (int *)ghsemPrintKView;
                      GreAcquireSemaphore(ghsemPrintKView);
                      for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                      {
                        if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v180 + 120) + 80LL) )
                        {
                          v157 = *(_DWORD *)(j + 12);
                          if ( v157 )
                            *(_DWORD *)(j + 12) = v157 - 1;
                        }
                      }
                      SEMOBJ::vUnlock((SEMOBJ *)&v204);
                    }
                    goto LABEL_378;
                  }
                  v151 = bProxyDrvTextOut(
                           v13,
                           (struct SURFACE *)v109,
                           (struct ESTROBJ *)&pstro,
                           (struct ECLIPOBJ *)&v227,
                           v141,
                           (struct _RECTL *)v190,
                           v183,
                           v182,
                           v122,
                           (struct RFONTOBJ *)&v180,
                           (struct PDEVOBJ *)&v189,
                           0,
                           &rclBkGround);
                }
                if ( !v151 )
                  v17 = 0;
LABEL_378:
                *(_QWORD *)(v109 + 104) = 0LL;
                v158 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v158 )
                {
                  v159 = *v158;
                  if ( v159 )
                    *(_QWORD *)(v159 + 304) = 0LL;
                }
                goto LABEL_381;
              }
            }
            else
            {
              v132 = rclBkGround.bottom;
              LODWORD(v130) = rclBkGround.right;
              v131 = (unsigned int)rclBkGround.top;
              v129 = rclBkGround.left;
            }
            v135 = v182;
            goto LABEL_280;
          }
LABEL_139:
          v17 |= 1u;
          goto LABEL_140;
        }
LABEL_135:
        if ( p_rclBkGround->left >= p_rclBkGround->right || p_rclBkGround->top >= p_rclBkGround->bottom )
          goto LABEL_140;
        goto LABEL_139;
      }
      goto LABEL_152;
    }
  }
  v17 = 0;
LABEL_418:
  LOBYTE(v11) = v17 != 0;
  return v11;
}
