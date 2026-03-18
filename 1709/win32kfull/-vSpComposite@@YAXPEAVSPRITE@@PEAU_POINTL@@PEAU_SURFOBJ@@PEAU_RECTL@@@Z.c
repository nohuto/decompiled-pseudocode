/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F3C8
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000AB4C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C025C9A8 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0261DCC (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02622DC (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0262BDC (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001731C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     OffAlphaBlend @ 0x1C00E9020 (OffAlphaBlend.c)
 *     OffTransparentBlt @ 0x1C00EBA30 (OffTransparentBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     OffBitBlt @ 0x1C011A5C8 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0258994 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C025B248 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C025B318 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C025E7F8 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C025EAB0 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C026087C (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C026120C (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0264508 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComposite(struct SPRITE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  __int64 v7; // rdx
  int *v8; // rcx
  struct REGION *v9; // r8
  __int64 v10; // r9
  int v11; // ecx
  struct REGION *v12; // r13
  int v13; // edx
  struct REGION *v14; // rbx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r14
  struct _SURFOBJ *v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rbx
  struct _SURFOBJ *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _SURFOBJ *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  BOOL (__stdcall *v56)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  struct _SURFOBJ *v81; // rdx
  __int64 v82; // rbx
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  BOOL (__stdcall *v99)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // rdi
  __int64 v114; // rbx
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  BOOL (__stdcall *v130)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // r9
  struct _SURFOBJ *v143; // rdx
  unsigned int v144; // eax
  struct _RECTL v145; // xmm6
  __int64 v146; // rbx
  __int64 v147; // rdi
  __int64 v148; // rbx
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // r9
  BOOL (__stdcall *v164)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rdx
  __int64 v175; // r8
  __int64 v176; // r9
  unsigned int v177; // edx
  struct _SURFOBJ *v178; // rcx
  __int64 v179; // rbx
  unsigned int v180; // [rsp+78h] [rbp-90h]
  int v181; // [rsp+78h] [rbp-90h]
  struct _POINTL v182; // [rsp+80h] [rbp-88h] BYREF
  struct _RECTL *v183; // [rsp+88h] [rbp-80h]
  struct _POINTL *v184; // [rsp+90h] [rbp-78h]
  struct REGION *v185; // [rsp+98h] [rbp-70h] BYREF
  __int64 v186; // [rsp+A0h] [rbp-68h] BYREF
  struct _CLIPOBJ *v187; // [rsp+A8h] [rbp-60h]
  __int64 v188; // [rsp+B0h] [rbp-58h]
  struct REGION *v189; // [rsp+B8h] [rbp-50h] BYREF
  int v190; // [rsp+C0h] [rbp-48h]
  __int64 v191; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v192; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v193; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int8 *v194; // [rsp+E0h] [rbp-28h] BYREF
  struct _RECTL v195; // [rsp+E8h] [rbp-20h] BYREF
  struct REGION *v196; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v197; // [rsp+100h] [rbp-8h] BYREF
  __int64 v198[4]; // [rsp+108h] [rbp+0h] BYREF
  struct _RECTL v199; // [rsp+128h] [rbp+20h] BYREF
  __int64 v200; // [rsp+138h] [rbp+30h] BYREF
  int v201; // [rsp+140h] [rbp+38h]
  int v202; // [rsp+144h] [rbp+3Ch]
  REGION *v203; // [rsp+148h] [rbp+40h] BYREF
  int v204; // [rsp+150h] [rbp+48h]
  int v205; // [rsp+154h] [rbp+4Ch]
  int v206; // [rsp+158h] [rbp+50h]
  __int64 v207; // [rsp+180h] [rbp+78h]
  __int64 v208; // [rsp+198h] [rbp+90h]
  int v209; // [rsp+1A0h] [rbp+98h]
  int v210; // [rsp+1C8h] [rbp+C0h]
  __int64 v211; // [rsp+1D8h] [rbp+D0h]
  int v212; // [rsp+1E0h] [rbp+D8h]

  v183 = a4;
  v184 = a2;
  v208 = 0LL;
  v209 = 0;
  v211 = 0LL;
  v210 = 1;
  v207 = 0LL;
  v212 = 0;
  if ( (unsigned int)bIgnoreMirrorUpdate(a1) )
    goto LABEL_196;
  v11 = *v8;
  if ( (v11 & 0x400) != 0 || (v11 & 0xC0) == 0x40 || (v11 & 0x20) == 0 || (v11 & 1) != 0 )
    goto LABEL_196;
  v187 = 0LL;
  v12 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
  v185 = 0LL;
  if ( !*((_QWORD *)a1 + 23) || !v12 )
    goto LABEL_19;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v189);
  if ( !v189
    || (v197 = *((_QWORD *)a1 + 23),
        v196 = v12,
        !RGNOBJ::bMerge((RGNOBJ *)&v189, (struct RGNOBJ *)&v197, (struct RGNOBJ *)&v196, BYTE1(gafjRgnOp))) )
  {
    v9 = v185;
LABEL_15:
    if ( v190 == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v189);
      v9 = v185;
    }
    if ( v9 )
    {
      v13 = 0;
      goto LABEL_24;
    }
LABEL_19:
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !*((_QWORD *)a1 + 23) )
        goto LABEL_27;
      if ( !v12 )
        goto LABEL_196;
    }
    v14 = (struct REGION *)*((_QWORD *)a1 + 23);
    if ( !v14 )
    {
LABEL_29:
      v15 = *(_DWORD *)a1;
      v16 = *((_DWORD *)a1 + 1);
      v17 = *((_QWORD *)a1 + 2);
      if ( (*(_DWORD *)a1 & 8) != 0 )
        v16 = 4;
      v188 = *((_QWORD *)a1 + 2);
      v18 = v16 & 0xEFFFFFFF;
      if ( (v15 & 0x100) == 0 )
        v18 = v16;
      v182.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
      v182.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
      v180 = v18;
      v19 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v17 + 40));
      v20 = (__int64 *)v188;
      v21 = *(_QWORD *)(v19 + 128);
      v22 = *((_QWORD *)a1 + 18);
      *(_QWORD *)&v195.left = 0LL;
      LODWORD(v19) = *(_DWORD *)(v188 + 116);
      v186 = 0LL;
      if ( *((_DWORD *)a1 + 38) != (_DWORD)v19
        || *((_DWORD *)a1 + 39) != *(_DWORD *)(v188 + 120)
        || (*(_DWORD *)a1 & 0x40) != 0 )
      {
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              &v186,
                              0LL,
                              0,
                              v22,
                              v21,
                              (__int64)ppalDefault,
                              (__int64)ppalDefault,
                              0,
                              0,
                              0,
                              0) )
          goto LABEL_193;
        v20 = (__int64 *)v188;
      }
      switch ( v180 )
      {
        case 2u:
          v143 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v143 && SURFREFVIEW::bMap((SURFREFVIEW *)&v195, v143) )
          {
            v199.right = v182.x + v183->right - v183->left;
            v199.bottom = v182.y + v183->bottom - v183->top;
            v199.left = v182.x;
            v199.top = v182.y;
            v193 = 0LL;
            v192 = 0LL;
            v191 = 0LL;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v193,
                                 0LL,
                                 0,
                                 v22,
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0)
              && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v192,
                                 0LL,
                                 0,
                                 v21,
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0)
              && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v191,
                                 0LL,
                                 0,
                                 (__int64)gppalRGB,
                                 v21,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0) )
            {
              LODWORD(v198[0]) = *((_DWORD *)a1 + 50);
              v198[1] = v193;
              v198[2] = v192;
              v198[3] = v191;
              v144 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
              v181 = 0;
              v194 = 0LL;
              if ( v144 == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
              {
                GreAcquireSemaphore(*(_QWORD *)(v188 + 136));
                vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v199, &v194);
                v145 = v199;
                v181 = 1;
              }
              else
              {
                v145 = v195;
              }
              v146 = *((_QWORD *)a1 + 16);
              v147 = 0LL;
              if ( v146
                && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 16)) + 112) & 0x4000) != 0
                 || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v146) + 112) < 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v146) + 112) & 0x200) == 0 )
              {
                v147 = SURFOBJ_TO_SURFACE_NOT_NULL(v146);
                GreLockDisplayDevice(*(_QWORD *)(v147 + 48));
              }
              v148 = 0LL;
              if ( a3
                && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
                 || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
              {
                v148 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
                GreLockDisplayDevice(*(_QWORD *)(v148 + 48));
              }
              if ( a3->iType == 1
                && bAllowShareAccess(a3)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v149, v150, v151)
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v152, v153, v154) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v155, v156, v157) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v158, v159, v160) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v158, v159, v160)
                                          + 280)
                              + 20LL) & 0x10000) != 0 )
              {
                v164 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v161, v162, v163) + 280) + 120LL);
              }
              else if ( a3->iType == 1
                     && bAllowShareAccess(a3)
                     && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v165, v166, v167)
                     && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v168, v169, v170) + 280)
                     && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v171, v172, v173) + 104)
                      || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v174, v175, v176) + 108))
                     || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x10000) == 0 )
              {
                v164 = EngAlphaBlend;
              }
              else
              {
                v164 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 171);
              }
              OffAlphaBlend(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64))v164,
                (LONG *)v184,
                (__int64)a3,
                (int *)a1 + 34,
                *((_QWORD *)a1 + 16),
                v187,
                v186,
                v183,
                &v199,
                (__int64)v198);
              if ( v148 )
                GreUnlockDisplayDevice(*(_QWORD *)(v148 + 48));
              if ( v147 )
                GreUnlockDisplayDevice(*(_QWORD *)(v147 + 48));
              if ( v181 )
              {
                v177 = *((_DWORD *)a1 + 51);
                v178 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                v199 = v145;
                vSpDeletePerPixelAlphaFromColorKey(v178, v177, &v199, v194);
                v179 = v188;
                EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", *(_QWORD *)(v188 + 136));
                GreReleaseSemaphoreInternal(*(_QWORD *)(v179 + 136));
              }
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v191);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v192);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v193);
          }
          goto LABEL_193;
        case 4u:
          v23 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( !v23 || !SURFREFVIEW::bMap((SURFREFVIEW *)&v195, v23) )
            goto LABEL_193;
          v24 = *((_QWORD *)a1 + 16);
          v25 = 0LL;
          if ( v24
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 16)) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x200) == 0 )
          {
            v25 = SURFOBJ_TO_SURFACE_NOT_NULL(v24);
            GreLockDisplayDevice(*(_QWORD *)(v25 + 48));
          }
          v26 = 0LL;
          if ( a3
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
          {
            v26 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
            GreLockDisplayDevice(*(_QWORD *)(v26 + 48));
          }
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 )
          {
            v27 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            if ( v27->hdev )
            {
              if ( v27->iType != 1
                || !bAllowShareAccess(v27)
                || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30)
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 280)
                || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 104)
                && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 108)
                || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 280)
                              + 20LL) & 0x400) == 0 )
              {
                v43 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                if ( (v43->iType != 1
                   || !bAllowShareAccess(v43)
                   || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46)
                   || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 280)
                   || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 104)
                   && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55) + 108))
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 16)) + 112) & 0x400) != 0 )
                {
                  v56 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)a1 + 16) + 24LL) + 1328LL);
LABEL_86:
                  OffCopyBits(
                    (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v56,
                    (LONG *)v184,
                    (__int64)a3,
                    (int *)a1 + 34,
                    *((_QWORD *)a1 + 16),
                    v187,
                    v186,
                    v183,
                    &v182);
LABEL_118:
                  if ( v26 )
                    GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
                  if ( !v25 )
                    goto LABEL_193;
                  v112 = *(_QWORD *)(v25 + 48);
                  goto LABEL_148;
                }
LABEL_85:
                v56 = EngCopyBits;
                goto LABEL_86;
              }
LABEL_76:
              v56 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 280) + 80LL);
              goto LABEL_86;
            }
          }
          if ( a3->iType == 1 )
          {
            if ( bAllowShareAccess(a3)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 280)
                            + 20LL) & 0x400) != 0 )
            {
              goto LABEL_76;
            }
            if ( a3->iType == 1
              && bAllowShareAccess(a3)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70, v71)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v73, v74) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79, v80) + 108)) )
            {
              goto LABEL_85;
            }
          }
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
          {
            v56 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a3->hdev + 166);
            goto LABEL_86;
          }
          goto LABEL_85;
        case 1u:
          v81 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( !v81 || !SURFREFVIEW::bMap((SURFREFVIEW *)&v195, v81) )
            goto LABEL_193;
          v25 = 0LL;
          v82 = *((_QWORD *)a1 + 16);
          v83 = v182.x + v183->right - v183->left;
          v200 = (__int64)v182;
          v201 = v83;
          v202 = v182.y + v183->bottom - v183->top;
          if ( v82
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v82) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v82) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v82) + 112) & 0x200) == 0 )
          {
            v25 = SURFOBJ_TO_SURFACE_NOT_NULL(v82);
            GreLockDisplayDevice(*(_QWORD *)(v25 + 48));
          }
          v26 = 0LL;
          if ( a3
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
          {
            v26 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
            GreLockDisplayDevice(*(_QWORD *)(v26 + 48));
          }
          if ( a3->iType == 1
            && bAllowShareAccess(a3)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v84, v85, v86)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v87, v88, v89) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v90, v91, v92) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95) + 280)
                          + 20LL) & 0x8000) != 0 )
          {
            v99 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v96, v97, v98) + 280) + 112LL);
          }
          else if ( a3->iType == 1
                 && bAllowShareAccess(a3)
                 && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v102)
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103, v104, v105) + 280)
                 && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v106, v107, v108) + 104)
                  || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v109, v110, v111) + 108))
                 || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x8000) == 0 )
          {
            v99 = EngTransparentBlt;
          }
          else
          {
            v99 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 170);
          }
          OffTransparentBlt(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, int, int))v99,
            (LONG *)v184,
            (__int64)a3,
            (int *)a1 + 34,
            *((_QWORD *)a1 + 16),
            v187,
            v186,
            v183,
            &v200,
            *((_DWORD *)a1 + 51),
            0);
          goto LABEL_118;
        case 0x1000000u:
          vSpDrawCursor(a1, v184, a3, v183, &v182);
          goto LABEL_193;
      }
      v113 = *v20;
      v114 = 0LL;
      if ( a3
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
      {
        v114 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
        GreLockDisplayDevice(*(_QWORD *)(v114 + 48));
      }
      if ( a3->iType == 1 )
      {
        if ( bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v115, v116, v117)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v118, v119, v120) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v121, v122, v123) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v124, v125, v126) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v124, v125, v126) + 280)
                        + 20LL) & 1) != 0 )
        {
          v130 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v127, v128, v129) + 280) + 72LL);
          goto LABEL_146;
        }
        if ( a3->iType == 1
          && bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v131, v132, v133)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v134, v135, v136) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v137, v138, v139) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v140, v141, v142) + 108)) )
        {
          goto LABEL_145;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) == 0 )
LABEL_145:
        v130 = EngBitBlt;
      else
        v130 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 165);
LABEL_146:
      OffBitBlt(
        (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v130,
        (LONG *)v184,
        (__int64)a3,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v183,
        0LL,
        0LL,
        v113 + 1552,
        &gptlZero,
        23130);
      if ( v114 )
      {
        v112 = *(_QWORD *)(v114 + 48);
LABEL_148:
        GreUnlockDisplayDevice(v112);
      }
LABEL_193:
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v185);
      if ( v12 )
        vSpAddAndCompactDirtyRegion(a1, v12);
      SURFREFVIEW::bUnMap((SURFREFVIEW *)&v195);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v186);
      goto LABEL_196;
    }
    v13 = bConcurrent(*((struct _SPRITESTATE **)a1 + 2), v7, (__int64)v9, v10);
    v9 = v14;
LABEL_24:
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v203, v13, v9, (struct ERECTL *)a4, 0);
    if ( SHIDWORD(v203) >= v205 || (v187 = (struct _CLIPOBJ *)&v203, v204 >= v206) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v185);
LABEL_27:
      if ( v12 )
        vSpAddAndCompactDirtyRegion(a1, v12);
      goto LABEL_196;
    }
    goto LABEL_29;
  }
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v189) != 1 )
  {
    v9 = v189;
    v185 = v189;
    goto LABEL_15;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v189);
  vSpAddAndCompactDirtyRegion(a1, v12);
  if ( v190 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v189);
LABEL_196:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(&v203);
}
