/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C001C99C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00D4A70 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GrePolyTextOutW @ 0x1C00E3088 (GrePolyTextOutW.c)
 * Callees:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C000D300 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C001260C (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0018388 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00183D8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0024838 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0024B08 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0027FD0 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00289C8 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C0034B80 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C012C170 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C012C1A0 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C01404AC (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02660C4 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C026621C (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02946FC (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C0294760 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296098 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C029645C (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296678 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
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
        ERECTL *a10,
        unsigned int a11)
{
  unsigned int v11; // r15d
  struct tagRECT *v12; // r13
  struct XDCOBJ *v13; // r12
  unsigned int v14; // r14d
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v19; // r9d
  __int64 v20; // rdx
  int v21; // eax
  int v22; // r8d
  struct _BRUSHOBJ *v23; // rbx
  int v24; // ebx
  unsigned int *v25; // rcx
  struct XDCOBJ *v26; // rsi
  int v27; // edx
  unsigned int v28; // eax
  int left; // edi
  int v30; // r13d
  int v31; // r9d
  int v32; // r8d
  signed int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rcx
  LONG bottom; // eax
  int v39; // r10d
  int v40; // r11d
  int v41; // ecx
  int v42; // edi
  int v43; // r13d
  int v44; // ecx
  int v45; // r9d
  int v46; // r8d
  struct EXFORMOBJ *v47; // rdx
  int v48; // r9d
  __int64 v49; // rcx
  LONG v50; // eax
  LONG v51; // eax
  LONG v52; // eax
  LONG v53; // ecx
  LONG v54; // r10d
  unsigned __int64 v55; // rdx
  struct _XLATEOBJ *v56; // rdi
  ERECTL *v57; // r13
  struct DC *v58; // r8
  __int64 v59; // rcx
  int v60; // eax
  unsigned int v61; // edi
  DC *v62; // rdx
  unsigned int v63; // edi
  unsigned int v64; // r8d
  __int64 v65; // rcx
  unsigned int v66; // eax
  DC *v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  DC *v72; // rdx
  int v73; // eax
  int v74; // edi
  int v75; // r8d
  int v76; // ecx
  LONG v77; // eax
  LONG v78; // r9d
  LONG v79; // r10d
  RECTL *p_rclBkGround; // r9
  int v81; // eax
  LONG v82; // edi
  unsigned int *v83; // rbx
  LONG v84; // r8d
  LONG v85; // eax
  LONG v86; // eax
  DC *v87; // r9
  unsigned int v88; // eax
  char v89; // bl
  struct EXFORMOBJ *v90; // rdx
  struct XDCOBJ *v91; // r8
  int v92; // r9d
  int v93; // eax
  unsigned __int64 v94; // r8
  int v95; // edx
  __int64 v96; // rcx
  int v97; // eax
  int v98; // r8d
  int v99; // eax
  int v100; // r9d
  DC *v101; // rdx
  __int64 v102; // r8
  struct REGION *v103; // r10
  RECTL rclBounds; // xmm2
  __m128i v105; // xmm0
  __int64 v106; // rcx
  int v107; // r10d
  __int64 v108; // rax
  int v109; // r9d
  int v110; // r10d
  __int64 v111; // r13
  int v112; // eax
  int v113; // eax
  unsigned __int64 v114; // r9
  __int64 v115; // rbx
  DC *v116; // rax
  __int64 iUniq; // rcx
  __int64 v118; // r10
  __int64 v119; // rdi
  struct _BRUSHOBJ *v120; // r11
  __int64 v121; // rax
  __int64 v122; // rax
  struct _POINTL *v123; // rdi
  int v124; // eax
  __m128i si128; // xmm1
  int v126; // r9d
  __m128i v127; // xmm0
  int v128; // r9d
  __m128i v129; // xmm0
  __m128i v130; // xmm1
  int v131; // r9d
  int *v132; // rbx
  __int64 v133; // rax
  int v134; // ecx
  int v135; // eax
  BOOL (__stdcall *v136)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  struct EXFORMOBJ *v137; // rdx
  int v138; // r9d
  __int64 flXlate; // rdx
  int v140; // eax
  unsigned __int64 cEntries; // r8
  int v142; // eax
  struct _BRUSHOBJ *v143; // rax
  struct _RECTL *v144; // rbx
  struct XDCOBJ *v145; // r8
  int v146; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  BOOL (__stdcall *v150)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rdx
  int v151; // ecx
  DC *v152; // rax
  bool v153; // zf
  __int64 v154; // rax
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  struct XDCOBJ *v160; // r8
  int v161; // eax
  int v162; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v165; // eax
  struct _KTHREAD *v166; // rbx
  __int64 *v167; // rax
  __int64 v168; // rax
  ERECTL *v169; // rcx
  RECTL v170; // xmm6
  __int64 v171; // rcx
  LONG *v172; // rbx
  struct _SURFOBJ *v173; // r9
  LONG v174; // eax
  struct _BRUSHOBJ *v175; // r12
  LONG v176; // ecx
  LONG v177; // eax
  LONG v178; // ecx
  LONG v179; // eax
  __int64 v180; // rcx
  __int64 v181; // rax
  struct _XLATEOBJ *p_rclBounds; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v183; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v184; // [rsp+40h] [rbp-D0h]
  unsigned int v185; // [rsp+48h] [rbp-C8h]
  unsigned int v186; // [rsp+58h] [rbp-B8h]
  __int64 v187; // [rsp+90h] [rbp-80h] BYREF
  struct _BRUSHOBJ *v188; // [rsp+98h] [rbp-78h]
  unsigned int v189[2]; // [rsp+A0h] [rbp-70h] BYREF
  struct _BRUSHOBJ *v190; // [rsp+A8h] [rbp-68h]
  int top; // [rsp+B0h] [rbp-60h] BYREF
  unsigned int v192; // [rsp+B4h] [rbp-5Ch] BYREF
  unsigned int v193; // [rsp+B8h] [rbp-58h] BYREF
  unsigned int v194; // [rsp+BCh] [rbp-54h] BYREF
  unsigned int v195; // [rsp+C0h] [rbp-50h] BYREF
  unsigned int v196; // [rsp+C4h] [rbp-4Ch] BYREF
  unsigned int v197; // [rsp+C8h] [rbp-48h] BYREF
  struct tagRECT *v198; // [rsp+D0h] [rbp-40h] BYREF
  struct _XLATEOBJ *v199; // [rsp+D8h] [rbp-38h]
  unsigned int *v200; // [rsp+E0h] [rbp-30h] BYREF
  int v201; // [rsp+E8h] [rbp-28h]
  int v202; // [rsp+ECh] [rbp-24h]
  struct _SURFOBJ *v203[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 (__fastcall *v204)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // [rsp+100h] [rbp-10h]
  struct _RECTL *v205; // [rsp+108h] [rbp-8h] BYREF
  int v206[2]; // [rsp+110h] [rbp+0h] BYREF
  int v207; // [rsp+118h] [rbp+8h] BYREF
  int v208; // [rsp+11Ch] [rbp+Ch] BYREF
  unsigned __int16 *CurrentThread; // [rsp+120h] [rbp+10h] BYREF
  int *v210; // [rsp+128h] [rbp+18h] BYREF
  ERECTL *v211; // [rsp+130h] [rbp+20h]
  _QWORD v212[2]; // [rsp+138h] [rbp+28h] BYREF
  _QWORD v213[2]; // [rsp+148h] [rbp+38h] BYREF
  __int64 v214; // [rsp+158h] [rbp+48h] BYREF
  int v215; // [rsp+160h] [rbp+50h]
  __int64 v216; // [rsp+168h] [rbp+58h] BYREF
  __int64 v217; // [rsp+170h] [rbp+60h] BYREF
  struct XDCOBJ *v218; // [rsp+178h] [rbp+68h]
  char v219[8]; // [rsp+180h] [rbp+70h] BYREF
  __int64 v220; // [rsp+188h] [rbp+78h]
  PATHOBJ v221; // [rsp+200h] [rbp+F0h] BYREF
  __int64 v222; // [rsp+208h] [rbp+F8h]
  PATHOBJ v223; // [rsp+280h] [rbp+170h] BYREF
  __int64 v224; // [rsp+288h] [rbp+178h]
  PATHOBJ ppo; // [rsp+300h] [rbp+1F0h] BYREF
  __int64 v226; // [rsp+308h] [rbp+1F8h]
  char v227[8]; // [rsp+380h] [rbp+270h] BYREF
  __int64 v228; // [rsp+388h] [rbp+278h]
  PATHOBJ v229; // [rsp+400h] [rbp+2F0h] BYREF
  __int64 v230; // [rsp+408h] [rbp+2F8h]
  PATHOBJ v231; // [rsp+480h] [rbp+370h] BYREF
  __int64 v232; // [rsp+488h] [rbp+378h]
  struct _RECTL rclBkGround; // [rsp+500h] [rbp+3F0h] BYREF
  struct _RECTL v234; // [rsp+510h] [rbp+400h] BYREF
  RECTL v235; // [rsp+520h] [rbp+410h] BYREF
  struct _CLIPOBJ v236; // [rsp+530h] [rbp+420h] BYREF
  __int64 v237; // [rsp+580h] [rbp+470h]
  int v238; // [rsp+588h] [rbp+478h]
  int v239; // [rsp+5B0h] [rbp+4A0h]
  __int64 v240; // [rsp+5C0h] [rbp+4B0h]
  struct _RECTL v241; // [rsp+5D0h] [rbp+4C0h] BYREF
  STROBJ pstro; // [rsp+5E0h] [rbp+4D0h] BYREF
  int v243; // [rsp+620h] [rbp+510h]
  __int64 v244; // [rsp+628h] [rbp+518h]
  int v245; // [rsp+638h] [rbp+528h]
  int v246; // [rsp+63Ch] [rbp+52Ch]
  int v247; // [rsp+668h] [rbp+558h]
  _BYTE v248[132]; // [rsp+66Ch] [rbp+55Ch] BYREF
  __int64 v249; // [rsp+6F0h] [rbp+5E0h]
  struct _POINTL v250; // [rsp+720h] [rbp+610h] BYREF
  LONG x; // [rsp+728h] [rbp+618h]
  LONG v252; // [rsp+72Ch] [rbp+61Ch]
  LONG right; // [rsp+730h] [rbp+620h]
  LONG v254; // [rsp+734h] [rbp+624h]
  int v255; // [rsp+738h] [rbp+628h]
  int v256; // [rsp+73Ch] [rbp+62Ch]
  struct _POINTL v257; // [rsp+740h] [rbp+630h] BYREF
  int v258[10]; // [rsp+760h] [rbp+650h] BYREF

  v11 = 0;
  v12 = a5;
  v13 = a1;
  CurrentThread = a6;
  v14 = 128;
  v211 = a10;
  v15 = 4;
  v218 = a1;
  if ( (a4 & 0x10) == 0 )
    v15 = 2;
  v197 = a3;
  v16 = *(_QWORD *)a1;
  v189[0] = v15;
  v196 = a2;
  v198 = a5;
  v17 = *(_DWORD *)(v16 + 176);
  v210 = a8;
  LODWORD(v204) = 0;
  if ( (v17 & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v16 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  v206[0] = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_5:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v19 = a4 & 0xFFFFC36F;
  LODWORD(v190) = v19;
  if ( !a5 )
  {
    v19 &= 0xFFFFFFF9;
LABEL_16:
    LODWORD(v190) = v19;
    goto LABEL_17;
  }
  if ( a5->left == a5->right || a5->top == a5->bottom )
  {
    a5->right = a2;
    a5->left = a2;
    a5->bottom = a3;
    a5->top = a3;
    if ( (v19 & 6) == 2 )
    {
      v12 = 0LL;
      v198 = 0LL;
      v19 &= ~2u;
      goto LABEL_16;
    }
  }
LABEL_17:
  v20 = *(_QWORD *)v13;
  if ( *(_QWORD *)v13 && (!v19 || v12 && (v19 & 0xFFFFFFF9) == 0) )
  {
    v21 = *(_DWORD *)(v20 + 176) & 1;
    if ( !v21 || (v19 & 4) == 0 )
    {
      rclBkGround = 0LL;
      v194 = 0;
      if ( v21 )
      {
        v22 = 0;
        v188 = 0LL;
        HIDWORD(v23) = 0;
      }
      else
      {
        v23 = *(struct _BRUSHOBJ **)(v20 + 8LL * (*(_DWORD *)(v20 + 40) & 1) + 1432);
        v188 = v23;
        v22 = (int)v23;
      }
      v192 = 16 * v22;
      v24 = 16 * HIDWORD(v23);
      v201 = *(_DWORD *)(*(_QWORD *)(v20 + 80) + 68LL);
      v202 = *(_DWORD *)(*(_QWORD *)(v20 + 80) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v20 + 80) + 352LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v200, v13, 0x204u, 0);
        LOBYTE(v19) = (_BYTE)v190;
        v22 = (int)v188;
        v25 = v200;
      }
      else
      {
        v25 = (unsigned int *)(v20 + 336);
        v200 = (unsigned int *)(v20 + 336);
      }
      v26 = 0LL;
      if ( v12 )
      {
        v27 = 136;
        top = v19 & 2;
        v28 = v25[8];
        if ( (v19 & 2) == 0 )
          v27 = 128;
        v193 = v27;
        v14 = v27;
        if ( (v28 & 2) != 0 )
        {
          left = v22 + v12->left + ((int)(v25[6] + 8) >> 4);
          v234.left = left;
          v30 = v22 + v198->right + ((int)(v25[6] + 8) >> 4);
          v234.right = v30;
          v31 = HIDWORD(v188) + v198->top + ((int)(v25[7] + 8) >> 4);
          v234.top = v31;
          v14 = v27;
          v32 = HIDWORD(v188) + v198->bottom + ((int)(v25[7] + 8) >> 4);
          v234.bottom = v32;
        }
        else if ( (v28 & 1) != 0 )
        {
          v195 = 0;
          bFToL(v25, &v195, 0LL);
          v33 = v195 + 8 + v200[6];
          v207 = 0;
          left = (_DWORD)v188 + (v33 >> 4);
          v234.left = left;
          bFToL(v34, &v207, v35);
          v208 = 0;
          v30 = (_DWORD)v188 + ((int)(v207 + 8 + v200[6]) >> 4);
          v234.right = v30;
          bFToL(v200, &v208, v36);
          v234.top = HIDWORD(v188) + ((int)(v200[7] + v208 + 8) >> 4);
          top = v234.top;
          LODWORD(v205) = 0;
          bFToL(v37, &v205, 0LL);
          v14 = v193;
          v31 = top;
          v32 = HIDWORD(v188) + ((int)((_DWORD)v205 + 8 + v200[7]) >> 4);
          v234.bottom = v32;
        }
        else
        {
          bottom = v12->bottom;
          v250.x = v12->left;
          x = v250.x;
          v252 = v12->top;
          v254 = v252;
          v250.y = bottom;
          right = v12->right;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v200, &v250, (struct _POINTFIX *)&v250, 3uLL);
          v39 = v250.x + right - x;
          v40 = v250.y + v254 - v252;
          v255 = v39;
          v256 = v40;
          v41 = (x > v250.x) ^ (x <= right);
          v42 = *(&v250.x + 2 * v41);
          v43 = *((_DWORD *)&v250 + 2 * v41 + 4);
          if ( v42 > v43 )
            v42 += 15;
          else
            v43 += 15;
          left = (_DWORD)v188 + (v42 >> 4);
          v30 = (_DWORD)v188 + (v43 >> 4);
          v234.right = v30;
          v234.left = left;
          v44 = (v252 <= v254) ^ (v252 > v250.y);
          v45 = *(&v250.y + 2 * v44);
          v46 = *((_DWORD *)&v250 + 2 * v44 + 5);
          if ( v45 > v46 )
            v45 += 15;
          else
            v46 += 15;
          v31 = HIDWORD(v188) + (v45 >> 4);
          v32 = HIDWORD(v188) + (v46 >> 4);
          v234.bottom = v32;
          v234.top = v31;
          if ( ((unsigned __int8)v190 & 4) != 0 )
          {
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v227);
            if ( v228 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v227, v47, &v250, v48) )
            {
              v49 = *(_QWORD *)v13;
              v241.top = 16 * (*(_DWORD *)(*(_QWORD *)v13 + 1420LL) - HIDWORD(v188));
              v241.bottom = 16 * (*(_DWORD *)(v49 + 1428) - HIDWORD(v188));
              v215 = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v214, (struct EPATHOBJ *)v227, 1u, &v241);
              if ( v214 )
              {
                v26 = v13;
                *(_QWORD *)(*(_QWORD *)v13 + 1528LL) = v214;
                if ( (unsigned int)DC::bTightenRao(*(DC **)v13) )
                  LODWORD(v190) = (unsigned int)v190 & 0xFFFFFFFB;
              }
              if ( v215 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v214);
            }
            if ( ((unsigned __int8)v190 & 4) != 0 )
            {
              LODWORD(v190) = 0;
              v14 = 0;
              a7 = 0;
            }
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v227);
            v32 = v234.bottom;
            v31 = v234.top;
            v30 = v234.right;
            left = v234.left;
          }
          else if ( top )
          {
            v250.x += v192;
            v250.y += v24;
            x += v192;
            v14 = v14 & 0xFFFFFFF5 | 2;
            right += v192;
            v254 += v24;
            v252 += v24;
            v256 = v24 + v40;
            v255 = v192 + v39;
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 312LL) & 1) != 0 )
        {
          ++left;
          ++v30;
          v234.left = left;
          v234.right = v30;
        }
        if ( left > v30 )
        {
          v50 = left;
          v234.left = v30;
          left = v30;
          v234.right = v50;
          v30 = v50;
        }
        if ( v31 > v32 )
        {
          v51 = v31;
          v234.top = v32;
          v31 = v32;
          v234.bottom = v51;
          v32 = v51;
        }
        if ( (v14 & 0xA) != 0 )
        {
          v52 = rclBkGround.left;
          v53 = rclBkGround.right;
          if ( rclBkGround.left != rclBkGround.right )
          {
            v54 = rclBkGround.top;
            v55 = (unsigned int)rclBkGround.bottom;
            if ( rclBkGround.top != rclBkGround.bottom )
            {
              if ( left < rclBkGround.left )
                v52 = left;
              rclBkGround.left = v52;
              if ( v31 < rclBkGround.top )
                v54 = v31;
              rclBkGround.top = v54;
              if ( v30 > rclBkGround.right )
                v53 = v30;
              rclBkGround.right = v53;
              if ( v32 > rclBkGround.bottom )
              {
                v55 = (unsigned int)v32;
                rclBkGround.bottom = v32;
              }
LABEL_74:
              v56 = 0LL;
              v199 = 0LL;
              v57 = 0LL;
              v205 = 0LL;
              v187 = 0LL;
              v243 = 0;
              v195 = 1;
              if ( !a7 )
                goto LABEL_164;
              v58 = *(struct DC **)v13;
              v153 = (*(_DWORD *)(*(_QWORD *)v13 + 36LL) & 0x4000) == 0;
              top = *(_DWORD *)(*(_QWORD *)v13 + 176LL) & 1;
              if ( !v153 )
              {
                v56 = (struct _XLATEOBJ *)*((_QWORD *)v58 + 64);
                SURFACE::bUnMap((SURFACE *)v56, 0LL, v58);
              }
              if ( RFONTOBJ::bInit((RFONTOBJ *)&v187, v13, top, v189[0]) )
                GreAcquireSemaphore(*(_QWORD *)(v187 + 528));
              if ( v56 )
                SURFACE::Map(v56, 0LL, *(_QWORD *)v13);
              if ( !v187 )
              {
                v55 = (unsigned int)rclBkGround.bottom;
                v14 = 0;
                v195 = 1;
                v56 = 0LL;
LABEL_164:
                if ( (v194 & 1) != 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 84LL) += v245;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 88LL) += v246;
                  v55 = (unsigned int)rclBkGround.bottom;
                }
                v87 = *(DC **)v13;
                if ( (*(_DWORD *)(*(_QWORD *)v13 + 176LL) & 1) != 0 )
                {
                  v88 = 0;
                  if ( ((unsigned __int8)v190 & 4) == 0 )
                    v88 = v14;
                  v14 = v88;
                  v89 = v88;
                  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v219, v13);
                  if ( !v220 )
                    goto LABEL_195;
                  if ( (v89 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v219, &v234) )
                    v14 = 0;
                  if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v219, v90, &v250, v92) )
                    v14 = 0;
                  if ( (v14 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v219, v90, &v257, v92) )
                    v14 = 0;
                  if ( (v14 & 1) != 0
                    && (!v56 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v219, (struct _RECTL *)v56)) )
                  {
                    if ( (v243 & 0x1400) != 0 )
                      v93 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)v219, v91);
                    else
                      v93 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v219);
                    if ( !v93 )
                    {
LABEL_191:
                      v14 = 0;
                      goto LABEL_192;
                    }
                    if ( v57 && !ERECTL::bEmpty(v57) )
                    {
                      while ( (unsigned int)bAddRectToPath((struct EPATHOBJ *)v219, (struct _RECTL *)v57) )
                      {
                        v57 = (ERECTL *)((char *)v57 + 16);
                        if ( ERECTL::bEmpty(v57) )
                          goto LABEL_192;
                      }
                      goto LABEL_191;
                    }
                  }
LABEL_192:
                  if ( (v14 & 4) != 0
                    && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v219) )
                  {
                    v14 = 0;
                  }
LABEL_195:
                  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v219);
LABEL_422:
                  if ( (v243 & 0x801) != 0 )
                  {
                    if ( (v243 & 1) != 0 )
                      FreeTmpBuffer(v244);
                    if ( (v243 & 0x800) != 0 )
                      Win32FreePool(v249, v55, v94);
                  }
                  if ( v187 )
                  {
                    if ( (*(_DWORD *)(v187 + 720) & 0x81) != 0 )
                      RFONTOBJ::dtHelper((RFONTOBJ *)&v187, 1);
                    v180 = *(_QWORD *)(v187 + 632);
                    if ( v180 )
                    {
                      Win32FreePool(v180, v55, v94);
                      *(_QWORD *)(v187 + 640) = 0LL;
                      *(_QWORD *)(v187 + 632) = 0LL;
                    }
                    EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v187 + 528));
                    GreReleaseSemaphoreInternal(*(_QWORD *)(v187 + 528));
                  }
                  if ( v26 )
                  {
                    v216 = *(_QWORD *)(*(_QWORD *)v26 + 1528LL);
                    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v216);
                    v181 = *(_QWORD *)v26;
                    *(_DWORD *)(v181 + 36) |= 0x10u;
                    *(_QWORD *)(v181 + 1528) = 0LL;
                  }
                  goto LABEL_436;
                }
                v94 = (unsigned int)rclBkGround.left;
                if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == (_DWORD)v55 )
                  goto LABEL_422;
                v95 = *((_DWORD *)v87 + 9);
                if ( (v95 & 0xE0) != 0 )
                {
                  v96 = *((_DWORD *)v87 + 10) & 1;
                  *(struct _RECTL *)v203 = rclBkGround;
                  v97 = *((_DWORD *)v87 + 2 * v96 + 358);
                  v98 = rclBkGround.left - v97;
                  LODWORD(v203[1]) = rclBkGround.right - v97;
                  v99 = *((_DWORD *)v87 + 2 * v96 + 359);
                  HIDWORD(v203[0]) = rclBkGround.top - v99;
                  HIDWORD(v203[1]) = rclBkGround.bottom - v99;
                  LODWORD(v203[0]) = v98;
                  if ( (v95 & 0x20) != 0 )
                    ERECTL::operator|=((_DWORD *)v87 + 370, v203);
                  if ( (*(_DWORD *)(*(_QWORD *)v13 + 36LL) & 0x80u) != 0 )
                    ERECTL::operator|=((_DWORD *)(*(_QWORD *)v13 + 1512LL), v203);
                }
                if ( (_DWORD)v204 || (v100 = 0, ((unsigned __int8)v190 & 4) != 0) )
                  v100 = 1;
                v101 = *(DC **)v13;
                if ( !*(_QWORD *)(*(_QWORD *)v13 + 1568LL)
                  || (*((_DWORD *)v101 + 10) & 2) == 0
                  || !(unsigned int)DC::bDpiScaledSurface(*(DC **)v13) )
                {
                  v102 = *((_QWORD *)v101 + 194);
                }
                if ( v102 )
                {
                  if ( !*((_QWORD *)v101 + 196)
                    || (*((_DWORD *)v101 + 10) & 2) == 0
                    || !(unsigned int)DC::bDpiScaledSurface(v101) )
                  {
                    v103 = (struct REGION *)*((_QWORD *)v101 + 194);
                  }
                }
                else if ( !*((_QWORD *)v101 + 195)
                       || (*((_DWORD *)v101 + 10) & 2) == 0
                       || !(unsigned int)DC::bDpiScaledSurface(v101) )
                {
                  v103 = (struct REGION *)*((_QWORD *)v101 + 193);
                }
                v237 = 0LL;
                v238 = 0;
                v239 = 1;
                v240 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&v236, v103, (struct ERECTL *)&rclBkGround, v100);
                rclBounds = v236.rclBounds;
                v94 = (unsigned int)_mm_cvtsi128_si32((__m128i)v236.rclBounds);
                v105 = _mm_srli_si128((__m128i)v236.rclBounds, 8);
                rclBkGround = v236.rclBounds;
                v236.rclBounds.left = v94;
                v236.rclBounds.right = _mm_cvtsi128_si32(v105);
                if ( (_DWORD)v94 == v236.rclBounds.right )
                  goto LABEL_422;
                v236.rclBounds.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4));
                v236.rclBounds.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 12));
                if ( v236.rclBounds.top == v236.rclBounds.bottom )
                  goto LABEL_422;
                v106 = *(_QWORD *)v13;
                v107 = *(_DWORD *)(*(_QWORD *)v13 + 36LL);
                if ( (v107 & 0xE0) != 0 )
                {
                  v235 = rclBounds;
                  v108 = *(_DWORD *)(v106 + 40) & 1;
                  v94 = (unsigned int)(v94 - *(_DWORD *)(v106 + 8 * v108 + 1432));
                  v235.left = v94;
                  v55 = (unsigned int)(rclBounds.right - *(_DWORD *)(v106 + 8 * v108 + 1432));
                  v235.right = rclBounds.right - *(_DWORD *)(v106 + 8 * v108 + 1432);
                  v109 = rclBounds.top - *(_DWORD *)(v106 + 8 * v108 + 1436);
                  v235.top = v109;
                  v235.bottom = rclBounds.bottom - *(_DWORD *)(v106 + 8 * v108 + 1436);
                  if ( (v107 & 0x40) != 0 )
                  {
                    v110 = *(_DWORD *)(v106 + 1496);
                    if ( v110 == *(_DWORD *)(v106 + 1504) || *(_DWORD *)(v106 + 1500) == *(_DWORD *)(v106 + 1508) )
                    {
                      *(RECTL *)(v106 + 1496) = v235;
                    }
                    else
                    {
                      if ( (int)v94 < v110 )
                      {
                        *(_DWORD *)(v106 + 1496) = v94;
                        v55 = (unsigned int)v235.right;
                        v109 = v235.top;
                      }
                      if ( v109 < *(_DWORD *)(v106 + 1500) )
                      {
                        *(_DWORD *)(v106 + 1500) = v109;
                        v55 = (unsigned int)v235.right;
                      }
                      if ( (int)v55 > *(_DWORD *)(v106 + 1504) )
                        *(_DWORD *)(v106 + 1504) = v55;
                      if ( v235.bottom > *(_DWORD *)(v106 + 1508) )
                        *(_DWORD *)(v106 + 1508) = v235.bottom;
                    }
                    *(_QWORD *)v206 = *(_QWORD *)(*(_QWORD *)v13 + 1584LL);
                    if ( *(_QWORD *)v206 )
                    {
                      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v213);
                      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v213);
                      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v212);
                      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v212);
                      if ( v213[0] )
                      {
                        if ( v212[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v212, &v235);
                          if ( RGNOBJ::bMerge(
                                 (RGNOBJ *)v213,
                                 (struct RGNOBJ *)v206,
                                 (struct RGNOBJ *)v212,
                                 BYTE2(gafjRgnOp)) )
                          {
                            RGNOBJ::vSwap((RGNOBJ *)v206, (struct RGNOBJ *)v213);
                            *(_QWORD *)(*(_QWORD *)v13 + 1584LL) = *(_QWORD *)v206;
                          }
                        }
                      }
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v212);
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v213);
                    }
                  }
                }
                v111 = *(_QWORD *)(*(_QWORD *)v13 + 512LL);
                if ( !v111 )
                  goto LABEL_422;
                if ( (*(_DWORD *)(v111 + 116) & 8) != 0 || *(_QWORD *)(v111 + 232) )
                {
                  v106 = 512LL;
                  if ( (*(_WORD *)(v111 + 102) & 0x200) != 0 )
                    goto LABEL_422;
                }
                v112 = *(_DWORD *)(v111 + 112);
                if ( (v112 & 0x800) != 0 )
                {
                  v113 = UserSurfaceAccessCheck(*(_QWORD *)(v111 + 584), v55);
                }
                else
                {
                  if ( (v112 & 0x10000000) == 0 )
                    goto LABEL_249;
                  v113 = UserScreenAccessCheck(v106, v55);
                }
                if ( !v113 )
                  goto LABEL_422;
LABEL_249:
                v114 = 0LL;
                v115 = *(_QWORD *)(v111 + 128);
                v198 = *(struct tagRECT **)(v111 + 48);
                v116 = *(DC **)v13;
                iUniq = *(unsigned int *)(*(_QWORD *)v13 + 72LL);
                v118 = *(_QWORD *)v13 + 1888LL;
                v119 = *(_QWORD *)(*(_QWORD *)v13 + 96LL);
                v120 = (struct _BRUSHOBJ *)(*(_QWORD *)v13 + 2032LL);
                v188 = (struct _BRUSHOBJ *)v118;
                v190 = v120;
                v193 = iUniq;
                if ( (iUniq & 0x10000000) != 0 )
                {
                  v114 = v195;
                  *(_DWORD *)(*((_QWORD *)v116 + 10) + 8LL) |= 4u;
                  --*(_DWORD *)(v118 + 132);
                }
                v55 = *(_QWORD *)v13;
                v121 = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
                v94 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v13 + 332LL) | *(_DWORD *)(v121 + 8));
                if ( ((*(_BYTE *)(*(_QWORD *)v13 + 332LL) | *(_BYTE *)(v121 + 8)) & 0xC) != 0 )
                {
                  if ( ((*(_BYTE *)(*(_QWORD *)v13 + 332LL) | *(_BYTE *)(v121 + 8)) & 4) != 0 )
                  {
                    EBRUSHOBJ::vInitBrush(v118, v55, gpbrText, v119, v115, v111, v114);
                    v120 = v190;
                  }
                  v55 = *(_QWORD *)v13;
                  v122 = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
                  v94 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v13 + 332LL) | *(_DWORD *)(v122 + 8));
                  if ( ((*(_BYTE *)(*(_QWORD *)v13 + 332LL) | *(_BYTE *)(v122 + 8)) & 8) != 0 )
                    EBRUSHOBJ::vInitBrush(v120, v55, gpbrBackground, v119, v115, v111, (v193 >> 15) & 1);
                  iUniq = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
                  *(_DWORD *)(iUniq + 8) &= 0xFFFFFFF3;
                  *(_DWORD *)(*(_QWORD *)v13 + 332LL) &= 0xFFFFFFF3;
                }
                v123 = (struct _POINTL *)(*(_QWORD *)v13 + 1592LL);
                if ( (v14 & 0x1A) != 0 )
                {
                  if ( (v14 & 8) != 0 )
                  {
                    v55 = (unsigned int)v234.left;
                    v94 = (unsigned int)v234.right;
                    if ( v234.left != v234.right )
                    {
                      iUniq = (unsigned int)v234.top;
                      v124 = v234.bottom;
                      if ( v234.top != v234.bottom )
                      {
                        si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                        v126 = _mm_cvtsi128_si32(si128);
                        v127 = _mm_srli_si128(si128, 8);
                        rclBkGround.left = v126;
                        if ( v126 > v234.left )
                          v55 = (unsigned int)v126;
                        v128 = _mm_cvtsi128_si32(v127);
                        v236.rclBounds.left = v55;
                        v129 = _mm_srli_si128(si128, 4);
                        rclBkGround.right = v128;
                        v130 = _mm_srli_si128(si128, 12);
                        if ( v128 < v234.right )
                          v94 = (unsigned int)v128;
                        v131 = _mm_cvtsi128_si32(v129);
                        v236.rclBounds.right = v94;
                        rclBkGround.top = v131;
                        if ( v131 > v234.top )
                          iUniq = (unsigned int)v131;
                        v114 = (unsigned int)_mm_cvtsi128_si32(v130);
                        v236.rclBounds.top = iUniq;
                        rclBkGround.bottom = v114;
                        if ( (int)v114 < v234.bottom )
                          v124 = v114;
                        v236.rclBounds.bottom = v124;
                        if ( (int)v55 < (int)v94 && (int)iUniq < v124 )
                        {
                          ++*(_DWORD *)(v111 + 92);
                          v132 = v258;
                          v133 = *(_QWORD *)(v111 + 48);
                          top = 0;
                          v192 = 0;
                          v194 = 0;
                          v134 = *(_DWORD *)(v133 + 32) & 0x8080;
                          v210 = v258;
                          if ( v134 == 32896 && v187 )
                          {
                            v135 = UMPDReleaseRFONTSem((struct RFONTOBJ *)&v187, 0LL, &v192, &v194, &v210);
                            v132 = v210;
                            top = v135;
                          }
                          if ( (*(_DWORD *)(v111 + 112) & 1) != 0 )
                            v136 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v111 + 48) + 2848LL);
                          else
                            v136 = EngBitBlt;
                          v185 = (unsigned int)v123;
                          v184 = (struct _POINTL *)v190;
                          v183 = 0LL;
                          p_rclBounds = (struct _XLATEOBJ *)&v236.rclBounds;
                          ((void (__fastcall *)(__int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD))v136)(
                            v111 + 24,
                            0LL,
                            0LL,
                            &v236,
                            0LL);
                          if ( top )
                          {
                            UMPDAcquireRFONTSem((struct RFONTOBJ *)&v187, 0LL, v192, v194, v132);
                            if ( v132 )
                            {
                              if ( v132 != v258 )
                                Win32FreePool(v132, v55, v94);
                            }
                          }
                        }
                        v236.rclBounds = rclBkGround;
                      }
                    }
                  }
                  if ( (v14 & 0x12) != 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                    if ( v226 )
                    {
                      if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v137, &v250, v138) )
                        v14 = 0;
                      if ( (v14 & 0x10) != 0
                        && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v137, &v257, v138) )
                      {
                        v14 = 0;
                      }
                      if ( (v14 & 0x12) != 0
                        && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                            &ppo,
                                            v13,
                                            (struct RFONTOBJ *)&v187,
                                            (struct PDEVOBJ *)&v198,
                                            (struct SURFACE *)v111,
                                            &v236,
                                            v190,
                                            v123,
                                            (unsigned int)v184,
                                            v185) )
                      {
                        v14 = 0;
                      }
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                  }
                }
                if ( (v14 & 1) == 0 )
                  goto LABEL_416;
                v211 = 0LL;
                if ( (_DWORD)v204 )
                {
                  iUniq = 32LL;
                  flXlate = 4294967039LL;
                  v140 = 64;
                  if ( (*(_DWORD *)(v187 + 488) & 0x8000) == 0 )
                    v140 = 32;
                  v14 |= v140;
                }
                else
                {
                  flXlate = v193;
                }
                cEntries = (unsigned __int64)v199;
                if ( v199 && (flXlate & 0x100) == 0 )
                {
                  iUniq = v199->iUniq;
                  v142 = *(_DWORD *)&v199->iSrcType;
                  if ( rclBkGround.left > (int)iUniq )
                    iUniq = (unsigned int)rclBkGround.left;
                  flXlate = v199->flXlate;
                  if ( rclBkGround.right < v142 )
                    v142 = rclBkGround.right;
                  cEntries = v199->cEntries;
                  if ( rclBkGround.top > (int)flXlate )
                    flXlate = (unsigned int)rclBkGround.top;
                  v236.rclBounds.left = iUniq;
                  if ( rclBkGround.bottom < (int)cEntries )
                    cEntries = (unsigned int)rclBkGround.bottom;
                  v236.rclBounds.bottom = cEntries;
                  v236.rclBounds.right = v142;
                  v236.rclBounds.top = flXlate;
                  if ( (int)iUniq < v142 && (int)flXlate < (int)cEntries )
                  {
                    v143 = v190;
                    ++*(_DWORD *)(v111 + 92);
                    TextOutBitBlt(
                      (struct SURFACE *)v111,
                      (struct RFONTOBJ *)&v187,
                      (struct _SURFOBJ *)cEntries,
                      (struct _SURFOBJ *)v114,
                      &v236,
                      p_rclBounds,
                      &v236.rclBounds,
                      v183,
                      v184,
                      v143,
                      v123,
                      v186);
                  }
                  v236.rclBounds = rclBkGround;
                  v199 = 0LL;
                }
                v144 = v205;
                if ( v205 && v198[134].bottom != 4 )
                {
                  v211 = (ERECTL *)v205;
                  v144 = 0LL;
                }
                if ( (v14 & 0x20) != 0 )
                {
                  if ( (v243 & 0x1400) != 0 )
                  {
                    if ( !(unsigned int)bProxyDrvTextOut(
                                          v13,
                                          (struct SURFACE *)v111,
                                          (struct ESTROBJ *)&pstro,
                                          &v236,
                                          0LL,
                                          0LL,
                                          v188,
                                          v190,
                                          v123,
                                          (struct RFONTOBJ *)&v187,
                                          (struct PDEVOBJ *)&v198,
                                          *(_DWORD *)(*(_QWORD *)v13 + 72LL),
                                          &rclBkGround) )
                      v14 = 0;
                  }
                  else
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v223);
                    if ( !v224
                      || ((v243 & 0x1400) == 0
                        ? (v146 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v223))
                        : (v146 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v223, v145)),
                          !v146
                       || !(unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                           &v223,
                                           v13,
                                           (struct RFONTOBJ *)&v187,
                                           (struct PDEVOBJ *)&v198,
                                           (struct SURFACE *)v111,
                                           &v236,
                                           v188,
                                           v123,
                                           (unsigned int)v184)) )
                    {
                      v14 = 0;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v223);
                  }
LABEL_399:
                  v169 = v211;
                  if ( v211 )
                  {
                    v170 = v236.rclBounds;
                    ++*(_DWORD *)(v111 + 92);
                    *(RECTL *)v203 = v170;
                    if ( !ERECTL::bEmpty(v169) )
                    {
                      v94 = HIDWORD(v203[1]);
                      v172 = (LONG *)(v171 + 4);
                      LODWORD(v55) = v203[1];
                      v173 = (struct _SURFOBJ *)HIDWORD(v203[0]);
                      v174 = (LONG)v203[0];
                      v175 = v188;
                      do
                      {
                        v176 = *(v172 - 1);
                        if ( v174 > v176 )
                          v176 = v174;
                        v177 = v172[1];
                        v236.rclBounds.left = v176;
                        if ( (int)v55 < v177 )
                          v177 = v55;
                        v236.rclBounds.right = v177;
                        if ( v176 < v177 )
                        {
                          v178 = *v172;
                          v179 = v172[2];
                          if ( (int)v173 > *v172 )
                            v178 = (int)v173;
                          v236.rclBounds.top = v178;
                          if ( (int)v94 < v179 )
                            v179 = v94;
                          v236.rclBounds.bottom = v179;
                          if ( v178 < v179 )
                            TextOutBitBlt(
                              (struct SURFACE *)v111,
                              (struct RFONTOBJ *)&v187,
                              (struct _SURFOBJ *)v94,
                              v173,
                              &v236,
                              p_rclBounds,
                              &v236.rclBounds,
                              v183,
                              v184,
                              v175,
                              v123,
                              v186);
                        }
                        v172 += 4;
                        v153 = !ERECTL::bEmpty((ERECTL *)(v172 - 1));
                        v174 = (LONG)v203[0];
                      }
                      while ( v153 );
                      v13 = v218;
                    }
                    v236.rclBounds = v170;
                  }
LABEL_416:
                  if ( (v14 & 4) != 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v231);
                    if ( !v232
                      || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v231)
                      || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                          &v231,
                                          v13,
                                          (struct RFONTOBJ *)&v187,
                                          (struct PDEVOBJ *)&v198,
                                          (struct SURFACE *)v111,
                                          &v236,
                                          v188,
                                          v123,
                                          (unsigned int)v184,
                                          v185) )
                    {
                      v14 = 0;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v231);
                  }
                  goto LABEL_422;
                }
                CurrentThread = (unsigned __int16 *)KeGetCurrentThread();
                if ( !(unsigned int)IsThreadCrossSessionAttached(iUniq, flXlate, cEntries, v114)
                  && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
                  && (v148 = *ThreadWin32Thread) != 0 )
                {
                  v149 = *(_QWORD *)(v148 + 304);
                }
                else
                {
                  v149 = *(_QWORD *)(v111 + 104);
                }
                if ( v149 )
                  SURFACE::pdcoAA((SURFACE *)v111, 0LL);
                if ( (*(_DWORD *)(v111 + 112) & 8) != 0 )
                  v150 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v111 + 48) + 2888LL);
                else
                  v150 = EngTextOut;
                v204 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v150;
                if ( (char *)v150 == (char *)SpTextOut || (char *)v150 == (char *)BmpDevTextOut )
                {
                  if ( (*(_DWORD *)(v187 + 12) & 0x10010000) != 0 )
                  {
                    *(_QWORD *)(v111 + 104) = v13;
                    v154 = W32GetThreadWin32Thread(KeGetCurrentThread());
                    if ( v154 )
                      *(_QWORD *)(v154 + 304) = v13;
                  }
                }
                else
                {
                  v151 = *(_DWORD *)(v187 + 12);
                  if ( (v151 & 0x10000) != 0 )
                  {
                    v152 = *(DC **)v13;
                    v153 = (v151 & 0x10000000) != 0
                         ? (*((_DWORD *)v152 + 19) & 0x4000) == 0
                         : (*((_DWORD *)v152 + 18) & 0x1000000) == 0;
                    if ( v153 )
                    {
                      if ( v150 != EngTextOut )
                        SURFACE::pdcoAA((SURFACE *)v111, v13);
                      v204 = SpTextOut;
                    }
                  }
                }
                if ( (v14 & 0x40) != 0 )
                {
                  if ( (v243 & 0x1400) == 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v221);
                    if ( !v222
                      || ((v243 & 0x1400) == 0
                        ? (v161 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v221))
                        : (v161 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v221, v160)),
                          !v161
                       || v221.cCurves > 1
                       && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                           &v221,
                                           v13,
                                           (struct RFONTOBJ *)&v187,
                                           (struct PDEVOBJ *)&v198,
                                           (struct SURFACE *)v111,
                                           &v236,
                                           v188,
                                           v123,
                                           (unsigned int)v184,
                                           v185)) )
                    {
                      v14 = 0;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v221);
                    goto LABEL_395;
                  }
                  v155 = bProxyDrvTextOut(
                           v13,
                           (struct SURFACE *)v111,
                           (struct ESTROBJ *)&pstro,
                           &v236,
                           0LL,
                           0LL,
                           v188,
                           v190,
                           v123,
                           (struct RFONTOBJ *)&v187,
                           (struct PDEVOBJ *)&v198,
                           *(_DWORD *)(*(_QWORD *)v13 + 72LL),
                           &rclBkGround);
                }
                else
                {
                  ++*(_DWORD *)(v111 + 92);
                  if ( (v14 & 4) != 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v229);
                    if ( !v230
                      || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v229)
                      || ((v243 & 0x1400) == 0
                        ? (v185 = 3341,
                           v184 = v123,
                           v183 = (struct _POINTL *)v190,
                           p_rclBounds = v199,
                           v162 = ((__int64 (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v204)(
                                    v111 + 24,
                                    &pstro,
                                    v187,
                                    &v236,
                                    v144))
                        : (v162 = bProxyDrvTextOut(
                                    v13,
                                    (struct SURFACE *)v111,
                                    (struct ESTROBJ *)&pstro,
                                    &v236,
                                    v144,
                                    (struct _RECTL *)v199,
                                    v188,
                                    v190,
                                    v123,
                                    (struct RFONTOBJ *)&v187,
                                    0LL,
                                    0,
                                    &rclBkGround)),
                          !v162
                       || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                           &v229,
                                           v13,
                                           (struct RFONTOBJ *)&v187,
                                           (struct PDEVOBJ *)&v198,
                                           (struct SURFACE *)v111,
                                           &v236,
                                           v188,
                                           v123,
                                           (unsigned int)v184,
                                           v185)) )
                    {
                      v14 = 0;
                    }
                    v14 &= ~4u;
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v229);
                    goto LABEL_395;
                  }
                  if ( (v243 & 0x1400) == 0 )
                  {
                    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 48LL) + 32LL) & 0x8080) == 0x80
                      && !*(_DWORD *)(v187 + 88) )
                    {
                      CurrentThread = (unsigned __int16 *)ghsemPrintKView;
                      GreAcquireSemaphore(ghsemPrintKView);
                      for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                      {
                        if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v187 + 120) + 80LL) )
                          ++*(_DWORD *)(i + 12);
                      }
                      SEMOBJ::vUnlock((SEMOBJ *)&CurrentThread);
                    }
                    v185 = 3341;
                    v184 = v123;
                    v183 = (struct _POINTL *)v190;
                    p_rclBounds = v199;
                    if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v204)(
                            v111 + 24,
                            &pstro,
                            v187,
                            &v236,
                            v144) )
                      v14 = 0;
                    v157 = *(_QWORD *)(*(_QWORD *)v13 + 48LL);
                    if ( (*(_DWORD *)(v157 + 32) & 0x8080) == 0x80 && !*(_DWORD *)(v187 + 88) )
                    {
                      v217 = ghsemPrintKView;
                      GreAcquireSemaphore(ghsemPrintKView);
                      for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                      {
                        if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v187 + 120) + 80LL) )
                        {
                          v165 = *(_DWORD *)(j + 12);
                          if ( v165 )
                            *(_DWORD *)(j + 12) = v165 - 1;
                        }
                      }
                      SEMOBJ::vUnlock((SEMOBJ *)&v217);
                    }
                    goto LABEL_395;
                  }
                  v155 = bProxyDrvTextOut(
                           v13,
                           (struct SURFACE *)v111,
                           (struct ESTROBJ *)&pstro,
                           &v236,
                           v144,
                           (struct _RECTL *)v199,
                           v188,
                           v190,
                           v123,
                           (struct RFONTOBJ *)&v187,
                           (struct PDEVOBJ *)&v198,
                           0,
                           &rclBkGround);
                }
                if ( !v155 )
                  v14 = 0;
LABEL_395:
                *(_QWORD *)(v111 + 104) = 0LL;
                v166 = KeGetCurrentThread();
                if ( !(unsigned int)IsThreadCrossSessionAttached(v157, v156, v158, v159) )
                {
                  v167 = (__int64 *)PsGetThreadWin32Thread(v166);
                  if ( v167 )
                  {
                    v168 = *v167;
                    if ( v168 )
                      *(_QWORD *)(v168 + 304) = 0LL;
                  }
                }
                goto LABEL_399;
              }
              LODWORD(v204) = *(_DWORD *)(v187 + 72) & 2;
              if ( !(_DWORD)v204 || (v153 = (*(_DWORD *)(v187 + 488) & 0x8000) == 0, v195 = 0, !v153) )
                v195 = 1;
              v59 = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
              v194 = *(_DWORD *)(*(_QWORD *)v13 + 2184LL) | *(_DWORD *)(v59 + 152) & 0x11F;
              if ( (v194 & 1) != 0 )
              {
                v60 = *(_DWORD *)(v59 + 8);
                if ( (v60 & 0x200) == 0 )
                {
                  v61 = v192;
                  *(_DWORD *)(v59 + 8) = v60 | 0x100;
                  v62 = *(DC **)v13;
                  v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 84LL) + v61;
                  v189[0] = v63;
                  v64 = *(_DWORD *)(*((_QWORD *)v62 + 10) + 88LL);
                  goto LABEL_100;
                }
                *(_DWORD *)(v59 + 8) = v60 & 0xFFFFFDFF;
                v65 = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
                *(_DWORD *)(v65 + 8) |= 0x100u;
                v66 = v200[8];
                if ( (v66 & 2) != 0 )
                {
                  v67 = *(DC **)v13;
                  v189[0] = v200[6] + 16 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 76LL);
                  v189[1] = v200[7] + 16 * *(_DWORD *)(*((_QWORD *)v67 + 10) + 80LL);
                }
                else if ( (v66 & 1) != 0 )
                {
                  v193 = 0;
                  bFToL(v65, &v193, 0LL);
                  v197 = 0;
                  v189[0] = v200[6] + v193;
                  bFToL(v189[0], &v197, v68);
                  v189[1] = v200[7] + v197;
                }
                else
                {
                  EXFORMOBJ::bXform(
                    (EXFORMOBJ *)&v200,
                    (struct _POINTL *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 76LL),
                    (struct _POINTFIX *)v189,
                    1uLL);
                }
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 84LL) = *(_QWORD *)v189;
              }
              else
              {
                v69 = v200[8];
                if ( (v69 & 2) != 0 )
                {
                  v63 = v192 + 16 * v196 + v200[6];
                  v189[0] = v63;
                  v64 = 16 * v197 + v200[7];
                  goto LABEL_100;
                }
                if ( (v69 & 1) != 0 )
                {
                  top = 0;
                  bFToL(v69, &top, 0LL);
                  v196 = 0;
                  v63 = top + v192 + v200[6];
                  v189[0] = v63;
                  bFToL(v70, &v196, v71);
                  v64 = v196 + v200[7];
                  goto LABEL_100;
                }
                v189[0] = v196;
                v189[1] = v197;
                EXFORMOBJ::bXform((EXFORMOBJ *)&v200, (struct _POINTL *)v189, (struct _POINTFIX *)v189, 1uLL);
              }
              v63 = v192 + v189[0];
              v64 = v189[1];
              v189[0] += v192;
LABEL_100:
              v72 = *(DC **)v13;
              v189[1] = v24 + v64;
              ESTROBJ::vInit(
                (ESTROBJ *)&pstro,
                CurrentThread,
                a7,
                v13,
                (struct RFONTOBJ *)&v187,
                &v200,
                (__m128i *)v210,
                v206[0],
                *((_DWORD *)v72 + 547),
                *(_DWORD *)(*((_QWORD *)v72 + 10) + 160LL),
                *(_DWORD *)(*((_QWORD *)v72 + 10) + 168LL),
                *(_DWORD *)(*((_QWORD *)v72 + 10) + 172LL),
                v63,
                v24 + v64,
                v194,
                0LL,
                v211,
                a11);
              if ( (v243 & 4) == 0 )
              {
                v55 = (unsigned int)rclBkGround.bottom;
                v14 = 0;
LABEL_162:
                v56 = v199;
                goto LABEL_164;
              }
              v73 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v257, &pstro.rclBkGround);
              v74 = v73;
              v75 = pstro.rclBkGround.right;
              v76 = pstro.rclBkGround.left;
              if ( (*(_DWORD *)(v187 + 12) & 0x10000000) != 0 )
              {
                v76 = pstro.rclBkGround.left - 1;
                v75 = pstro.rclBkGround.right + 1;
                --pstro.rclBkGround.left;
                ++pstro.rclBkGround.right;
              }
              if ( (v243 & 0x1400) != 0 )
              {
                ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v257, v73);
                v75 = pstro.rclBkGround.right;
                v76 = pstro.rclBkGround.left;
              }
              v77 = rclBkGround.left;
              v78 = rclBkGround.right;
              if ( rclBkGround.left == rclBkGround.right
                || (v79 = rclBkGround.top, v55 = (unsigned int)rclBkGround.bottom, rclBkGround.top == rclBkGround.bottom) )
              {
                rclBkGround = pstro.rclBkGround;
                v55 = (unsigned int)pstro.rclBkGround.bottom;
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
                  v78 = v75;
                rclBkGround.right = v78;
                if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
                {
                  v55 = (unsigned int)pstro.rclBkGround.bottom;
                  rclBkGround.bottom = pstro.rclBkGround.bottom;
                }
              }
              if ( a9 == 2 )
              {
                if ( !v74 )
                {
                  p_rclBkGround = &pstro.rclBkGround;
                  v199 = (struct _XLATEOBJ *)&pstro.rclBkGround;
                  goto LABEL_120;
                }
                v14 |= 0x10u;
              }
              p_rclBkGround = 0LL;
LABEL_120:
              if ( v76 >= v75 || (v81 = 0, pstro.rclBkGround.top >= pstro.rclBkGround.bottom) )
                v81 = 1;
              v82 = v234.bottom;
              if ( (v14 & 8) == 0
                || v234.left > v76
                || v234.right < v75
                || v234.top > pstro.rclBkGround.top
                || v234.bottom < pstro.rclBkGround.bottom
                || v81 )
              {
                if ( !p_rclBkGround )
                {
                  if ( v81 )
                  {
LABEL_137:
                    if ( (v194 & 0xA0) != 0 )
                    {
                      if ( v247 )
                      {
                        v57 = (ERECTL *)v248;
                        v205 = (struct _RECTL *)v248;
                        v83 = (unsigned int *)v248;
                        if ( !ERECTL::bEmpty((ERECTL *)v248) )
                        {
                          do
                          {
                            ERECTL::operator+=((unsigned int *)&rclBkGround, v83);
                            v83 += 4;
                          }
                          while ( !ERECTL::bEmpty((ERECTL *)v83) );
                          v55 = (unsigned int)rclBkGround.bottom;
                        }
                      }
                      else
                      {
                        v205 = 0LL;
                        v14 |= 4u;
                      }
                    }
                    if ( ((unsigned __int8)v190 & 4) != 0 )
                    {
                      if ( v234.left <= rclBkGround.left
                        && v234.right >= rclBkGround.right
                        && v234.top <= rclBkGround.top
                        && v82 >= (int)v55 )
                      {
                        v56 = v199;
                        LODWORD(v190) = -5;
                        goto LABEL_164;
                      }
                      v84 = rclBkGround.left;
                      v85 = rclBkGround.top;
                      if ( v234.left > rclBkGround.left )
                        v84 = v234.left;
                      rclBkGround.left = v84;
                      if ( v234.top > rclBkGround.top )
                        v85 = v234.top;
                      rclBkGround.top = v85;
                      v86 = rclBkGround.right;
                      if ( v234.right < rclBkGround.right )
                        v86 = v234.right;
                      rclBkGround.right = v86;
                      if ( v82 < (int)v55 )
                        v55 = (unsigned int)v82;
                      rclBkGround.bottom = v55;
                      if ( v86 < v84 )
                      {
                        v56 = v199;
                        rclBkGround.left = v86;
                        goto LABEL_164;
                      }
                      if ( (int)v55 < rclBkGround.top )
                      {
                        v56 = v199;
                        rclBkGround.top = v55;
                        goto LABEL_164;
                      }
                    }
                    goto LABEL_162;
                  }
LABEL_136:
                  v14 |= 1u;
                  goto LABEL_137;
                }
              }
              else
              {
                p_rclBkGround = &v234;
                v14 &= ~8u;
                v199 = (struct _XLATEOBJ *)&v234;
              }
              if ( p_rclBkGround->left >= p_rclBkGround->right || p_rclBkGround->top >= p_rclBkGround->bottom )
                goto LABEL_137;
              goto LABEL_136;
            }
          }
          rclBkGround = v234;
        }
      }
      v55 = (unsigned int)rclBkGround.bottom;
      goto LABEL_74;
    }
  }
  v14 = 0;
LABEL_436:
  LOBYTE(v11) = v14 != 0;
  return v11;
}
