/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0263B84
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0072798 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EC010 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00ED1C4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025B780 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0262BDC (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EC9E8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00ECA28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00ECAB4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025B2A8 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  struct _CLIPOBJ *v6; // r13
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct REGION *v13; // r12
  struct _RECTL *v14; // rdi
  int v15; // ebx
  struct RGNOBJ *v16; // r10
  __int64 v17; // rdi
  __int64 v18; // rbx
  struct SPRITE *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rsi
  struct _SURFOBJ *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _SURFOBJ *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  struct _SURFOBJ *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  BOOL (__stdcall *v65)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  struct SPRITE *v80; // r14
  __int64 v81; // rdi
  __int64 v82; // rbx
  __int64 v83; // rsi
  __int64 v84; // rbx
  struct _SURFOBJ *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  struct _SURFOBJ *v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  struct _SURFOBJ *v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  BOOL (__stdcall *v128)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rdx
  __int64 v140; // r8
  __int64 v141; // r9
  struct SPRITE *v142; // [rsp+50h] [rbp-B0h] BYREF
  int v143; // [rsp+58h] [rbp-A8h]
  _QWORD v144[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v145[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v146; // [rsp+80h] [rbp-80h] BYREF
  __int64 v147; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v148; // [rsp+90h] [rbp-70h]
  _BYTE v149[96]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v150[24]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v151; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _RECTL v152; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _CLIPOBJ v153; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v154; // [rsp+218h] [rbp+118h]
  __int64 v155; // [rsp+230h] [rbp+130h]
  int v156; // [rsp+238h] [rbp+138h]
  int v157; // [rsp+260h] [rbp+160h]
  __int64 v158; // [rsp+270h] [rbp+170h]

  v148 = a4;
  v155 = 0LL;
  v156 = 0;
  v6 = a4;
  v158 = 0LL;
  v154 = 0LL;
  v157 = 1;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v144);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v144);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v145);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v145);
  v146 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v150, (struct PDEVOBJ *)&v146, v8, v9);
  v13 = 0LL;
  if ( v144[0] )
  {
    if ( v145[0] )
    {
      v14 = (struct _RECTL *)((char *)a1 + 48);
      if ( bIntersect(a3, (const struct _RECTL *)a1 + 3, &v152) )
      {
        ENUMAREAS::ENUMAREAS((ENUMAREAS *)v149, a1, &v152, 0, 0LL);
        do
        {
          v15 = ENUMAREAS::bEnum((ENUMAREAS *)v149, &v142, &v151);
          v143 = v15;
          if ( v142 )
          {
            if ( !v13 )
            {
              if ( !v6
                || (v16 = (struct RGNOBJ *)((unsigned __int64)&v6[2].rclBounds.top & -(__int64)(v6 != 0LL)),
                    !v6->iDComplexity) )
              {
                RGNOBJ::vSet((RGNOBJ *)v145, v14);
                v16 = (struct RGNOBJ *)v145;
              }
              v147 = *((_QWORD *)a1 + 130);
              if ( !RGNOBJ::bMerge((RGNOBJ *)v144, v16, (struct RGNOBJ *)&v147, BYTE4(gafjRgnOp)) )
                RGNOBJ::vSet((RGNOBJ *)v144);
              v13 = (struct REGION *)v144[0];
            }
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v153, v13, (struct ERECTL *)&v151, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&v153.rclBounds) )
            {
              while ( 1 )
              {
                if ( !a5 )
                {
                  v80 = v142;
                  v81 = 0LL;
                  v82 = *((_QWORD *)v142 + 20);
                  if ( v82
                    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v142 + 20)) + 112) & 0x4000) != 0
                     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v82) + 112) < 0)
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v82) + 112) & 0x200) == 0 )
                  {
                    v81 = SURFOBJ_TO_SURFACE_NOT_NULL(v82);
                    GreLockDisplayDevice(*(_QWORD *)(v81 + 48));
                  }
                  v83 = *((_QWORD *)a1 + 5);
                  v84 = 0LL;
                  if ( v83
                    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
                     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v83) + 112) < 0)
                    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v83) + 112) & 0x200) == 0 )
                  {
                    v84 = SURFOBJ_TO_SURFACE_NOT_NULL(v83);
                    GreLockDisplayDevice(*(_QWORD *)(v84 + 48));
                  }
                  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0
                    || (v85 = (struct _SURFOBJ *)*((_QWORD *)v80 + 20), !v85->hdev) )
                  {
                    v115 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                    if ( v115->iType != 1
                      || !bAllowShareAccess(v115)
                      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v116, v117, v118)
                      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v119, v120, v121) + 280)
                      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v122, v123, v124) + 104)
                      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v125, v126, v127) + 108)
                      || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                    (__int64)KeGetCurrentThread(),
                                                    v125,
                                                    v126,
                                                    v127)
                                                + 280)
                                    + 20LL) & 0x400) == 0 )
                    {
                      v129 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                      if ( v129->iType == 1
                        && bAllowShareAccess(v129)
                        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v130, v131, v132)
                        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v133, v134, v135) + 280)
                        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v136, v137, v138) + 104)
                         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v139, v140, v141) + 108))
                        || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) == 0 )
                      {
                        goto LABEL_108;
                      }
                      v114 = *((_QWORD *)a1 + 5);
LABEL_107:
                      v128 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v114 + 24) + 1328LL);
LABEL_109:
                      OffCopyBits(
                        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v128,
                        (LONG *)&gptlZero,
                        *((_QWORD *)a1 + 5),
                        (int *)v142 + 42,
                        *((_QWORD *)v80 + 20),
                        &v153,
                        0LL,
                        &v151,
                        &v151);
                      if ( v84 )
                        GreUnlockDisplayDevice(*(_QWORD *)(v84 + 48));
                      if ( !v81 )
                      {
LABEL_116:
                        v6 = v148;
                        v14 = (struct _RECTL *)((char *)a1 + 48);
                        v15 = v143;
                        break;
                      }
                      v79 = *(_QWORD *)(v81 + 48);
                      goto LABEL_113;
                    }
                  }
                  else if ( v85->iType != 1
                         || !bAllowShareAccess(v85)
                         || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88)
                         || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 280)
                         || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v92, v93, v94) + 104)
                         && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v95, v96, v97) + 108)
                         || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v95,
                                                       v96,
                                                       v97)
                                                   + 280)
                                       + 20LL) & 0x400) == 0 )
                  {
                    v101 = (struct _SURFOBJ *)*((_QWORD *)v80 + 20);
                    if ( (v101->iType != 1
                       || !bAllowShareAccess(v101)
                       || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v102, v103, v104)
                       || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v105, v106, v107) + 280)
                       || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v108, v109, v110) + 104)
                       && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v112, v113) + 108))
                      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v80 + 20)) + 112) & 0x400) != 0 )
                    {
                      v114 = *((_QWORD *)v80 + 20);
                      goto LABEL_107;
                    }
LABEL_108:
                    v128 = EngCopyBits;
                    goto LABEL_109;
                  }
                  v128 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v98, v99, v100) + 280) + 80LL);
                  goto LABEL_109;
                }
                v17 = *((_QWORD *)a1 + 5);
                v18 = 0LL;
                if ( v17
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v17) + 112) & 0x200) == 0 )
                {
                  v18 = SURFOBJ_TO_SURFACE_NOT_NULL(v17);
                  GreLockDisplayDevice(*(_QWORD *)(v18 + 48));
                }
                v19 = v142;
                v20 = 0LL;
                v21 = *((_QWORD *)v142 + 20);
                if ( v21
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v142 + 20)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v21) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v21) + 112) & 0x200) == 0 )
                {
                  v20 = SURFOBJ_TO_SURFACE_NOT_NULL(v21);
                  GreLockDisplayDevice(*(_QWORD *)(v20 + 48));
                }
                if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v19 + 20)) + 112) & 0x400) != 0
                  || (v22 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5), !v22->hdev) )
                {
                  v52 = (struct _SURFOBJ *)*((_QWORD *)v19 + 20);
                  if ( v52->iType != 1
                    || !bAllowShareAccess(v52)
                    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55)
                    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58) + 280)
                    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 104)
                    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 108)
                    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64)
                                              + 280)
                                  + 20LL) & 0x400) == 0 )
                  {
                    v66 = (struct _SURFOBJ *)*((_QWORD *)v19 + 20);
                    if ( v66->iType == 1
                      && bAllowShareAccess(v66)
                      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69)
                      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72) + 280)
                      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75) + 104)
                       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78) + 108))
                      || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v19 + 20)) + 112) & 0x400) == 0 )
                    {
LABEL_59:
                      v65 = EngCopyBits;
                      goto LABEL_60;
                    }
                    v51 = *((_QWORD *)v19 + 20);
                    goto LABEL_58;
                  }
                }
                else if ( v22->iType != 1
                       || !bAllowShareAccess(v22)
                       || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25)
                       || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280)
                       || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 104)
                       && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 108)
                       || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34)
                                                 + 280)
                                     + 20LL) & 0x400) == 0 )
                {
                  v38 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
                  if ( v38->iType == 1
                    && bAllowShareAccess(v38)
                    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41)
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 280)
                    && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 104)
                     || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 108))
                    || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) == 0 )
                  {
                    goto LABEL_59;
                  }
                  v51 = *((_QWORD *)a1 + 5);
LABEL_58:
                  v65 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v51 + 24) + 1328LL);
                  goto LABEL_60;
                }
                v65 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 280) + 80LL);
LABEL_60:
                OffCopyBits(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v65,
                  (LONG *)v142 + 42,
                  *((_QWORD *)v19 + 20),
                  (int *)&gptlZero,
                  *((_QWORD *)a1 + 5),
                  &v153,
                  0LL,
                  &v151,
                  &v151);
                if ( v20 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
                if ( !v18 )
                  goto LABEL_114;
                v79 = *(_QWORD *)(v18 + 48);
LABEL_113:
                GreUnlockDisplayDevice(v79);
LABEL_114:
                if ( !a5 || !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v149, &v142) )
                  goto LABEL_116;
              }
            }
          }
        }
        while ( v15 );
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v149);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v150, v10, v11, v12);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v145);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v144);
}
