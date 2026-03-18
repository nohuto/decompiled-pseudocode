/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025B780
 * Callers:
 *     <none>
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00183D8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0092018 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E9158 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00EC908 (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00EC998 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EC9E8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00ECA28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00ECAB4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBE8 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     OffBitBlt @ 0x1C011A5C8 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025B2A8 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025E6E0 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0261DCC (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0263B84 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C02653DC (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // edi
  struct _RECTL *v12; // r15
  struct _SURFOBJ *v13; // r8
  RECTL rclBounds; // xmm6
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  struct _SPRITESTATE *v18; // rsi
  int v19; // r13d
  int v20; // r14d
  int v21; // ebx
  struct _POINTL *v23; // rdx
  struct _CLIPOBJ *v24; // r9
  struct _RECTL *v25; // r8
  POINTL *v26; // r11
  struct _SURFOBJ *v27; // r13
  int v28; // eax
  struct SPRITE *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _SURFOBJ *v33; // rsi
  POINTL *v34; // rax
  __int64 v35; // rbx
  LONG v36; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v38; // rsi
  XCLIPOBJ *v39; // r14
  __int64 v40; // r10
  struct REGION *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
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
  HDEV v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  BOOL (__stdcall *v82)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
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
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  BOOL (__stdcall *v110)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  int v123; // eax
  struct _POINTL *v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  struct _CLIPOBJ *v128; // [rsp+78h] [rbp-90h] BYREF
  int v129; // [rsp+80h] [rbp-88h]
  int v130; // [rsp+84h] [rbp-84h]
  int v131; // [rsp+88h] [rbp-80h]
  struct _POINTL v132; // [rsp+8Ch] [rbp-7Ch]
  int v133; // [rsp+94h] [rbp-74h]
  struct _POINTL v134[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _RECTL v135; // [rsp+A8h] [rbp-60h] BYREF
  HDEV hdev; // [rsp+B8h] [rbp-50h] BYREF
  int v137; // [rsp+C0h] [rbp-48h]
  int v138; // [rsp+C4h] [rbp-44h]
  int v139; // [rsp+C8h] [rbp-40h]
  int v140[2]; // [rsp+D0h] [rbp-38h]
  int v141[2]; // [rsp+D8h] [rbp-30h]
  __int64 v142; // [rsp+E0h] [rbp-28h] BYREF
  struct SPRITE *v143; // [rsp+E8h] [rbp-20h] BYREF
  struct _SPRITESTATE *v144; // [rsp+F0h] [rbp-18h]
  struct _SURFOBJ *v145; // [rsp+F8h] [rbp-10h]
  struct _SURFOBJ *v146; // [rsp+100h] [rbp-8h]
  __int64 v147; // [rsp+108h] [rbp+0h] BYREF
  __int64 v148; // [rsp+110h] [rbp+8h]
  struct REGION *v149; // [rsp+118h] [rbp+10h] BYREF
  struct SPRITE *v150; // [rsp+120h] [rbp+18h] BYREF
  struct _POINTL *v151; // [rsp+128h] [rbp+20h]
  __int64 v152; // [rsp+130h] [rbp+28h]
  __int64 v153; // [rsp+138h] [rbp+30h]
  __int64 v154; // [rsp+140h] [rbp+38h]
  _BYTE v155[8]; // [rsp+148h] [rbp+40h] BYREF
  struct SPRITE *v156; // [rsp+150h] [rbp+48h] BYREF
  struct _RECTL v157; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v158[4]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v159[80]; // [rsp+188h] [rbp+80h] BYREF
  int v160; // [rsp+1D8h] [rbp+D0h]
  _BYTE v161[96]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 *v162[24]; // [rsp+248h] [rbp+140h] BYREF
  struct _RECTL v163; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v164; // [rsp+318h] [rbp+210h] BYREF
  unsigned __int128 v165; // [rsp+328h] [rbp+220h] BYREF
  struct _RECTL v166; // [rsp+338h] [rbp+230h] BYREF
  RECTL v167; // [rsp+348h] [rbp+240h] BYREF
  _QWORD v168[3]; // [rsp+358h] [rbp+250h] BYREF
  struct _RECTL v169; // [rsp+370h] [rbp+268h] BYREF

  v11 = 0;
  v12 = a6;
  v148 = (__int64)a5;
  v151 = a8;
  v153 = (__int64)a9;
  v152 = (__int64)a10;
  v154 = (__int64)a3;
  v13 = a1;
  v145 = a1;
  v128 = a4;
  v165 = 0uLL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v165 = (unsigned __int128)rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v165) )
      return 1LL;
    v167 = rclBounds;
    ERECTL::operator*=(&v167, a6);
    v12 = &v167;
  }
  hdev = v13->hdev;
  memset(v158, 0, 24);
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v158, (__int64)a2, (__int64)v13, (__int64)a4);
  v15 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v155, ghsemSprite, v15);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v158) )
    goto LABEL_131;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v162, (struct PDEVOBJ *)&hdev, v16, v17);
  v18 = (struct _SPRITESTATE *)(hdev + 18);
  v19 = v12->left - a7->x;
  v20 = v12->top - a7->y;
  v144 = (struct _SPRITESTATE *)(hdev + 18);
  v133 = v19;
  v137 = v20;
  if ( v19 <= 0 )
  {
    v21 = 0;
    if ( v20 > 0 )
      v21 = 2;
  }
  else
  {
    v21 = 3;
    if ( v20 <= 0 )
      v21 = 1;
  }
  v129 = v21;
  if ( v128 )
  {
    if ( v128->iDComplexity )
      v165 = (unsigned __int128)v128->rclBounds;
    else
      v128 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 50));
  if ( !*((_QWORD *)v18 + 130) )
    goto LABEL_23;
  v163.left = v12->left - v19;
  v163.right = v12->right - v19;
  v163.top = v12->top - v20;
  v163.bottom = v12->bottom - v20;
  if ( *((_QWORD *)v18 + 131) )
  {
    v24 = 0LL;
    v25 = &v163;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v163, &v169) )
  {
    v24 = v128;
    v25 = &v169;
LABEL_22:
    vSpUpdateLockedScreenAreas(v18, v23, v25, v24, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v18 + 128));
  v135.left = v12->left - v19;
  v135.right = v12->right - v19;
  v135.top = v12->top - v20;
  v135.bottom = v12->bottom - v20;
  v157 = v135;
  ERECTL::operator+=((unsigned int *)&v157, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v168, v18, &v157);
  if ( !v168[0] )
    goto LABEL_128;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v159, v18, v12, v21, &v157);
  if ( !v160 )
    goto LABEL_127;
  do
  {
    v139 = ENUMAREAS::bEnum((ENUMAREAS *)v159, &v143, &v135);
    v163.left = v135.left - v19;
    v163.right = v135.right - v19;
    v163.top = v135.top - v20;
    v163.bottom = v135.bottom - v20;
    do
    {
      if ( v143 )
      {
        v27 = (struct _SURFOBJ *)*((_QWORD *)v143 + 20);
        *(_QWORD *)v141 = (char *)v143 + 168;
      }
      else
      {
        v27 = v145;
        *(_QWORD *)v141 = v26;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v161, v18, &v163, v21, 0LL);
      do
      {
        v28 = ENUMAREAS::bEnum((ENUMAREAS *)v161, &v150, &v166);
        v29 = v150;
        v138 = v28;
        while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v161, &v156) )
          v29 = v156;
        v150 = v29;
        if ( v29 )
        {
          v33 = (struct _SURFOBJ *)*((_QWORD *)v29 + 20);
          v34 = (POINTL *)((char *)v29 + 168);
        }
        else
        {
          v33 = v145;
          v34 = &gptlZero;
        }
        v164.left = v133 + v166.left;
        v164.right = v133 + v166.right;
        *(_QWORD *)v140 = v34;
        v164.top = v20 + v166.top;
        v146 = v33;
        v164.bottom = v20 + v166.bottom;
        if ( v128 && !bIntersect(&v164, (const struct _RECTL *)&v165, &v128->rclBounds) )
          goto LABEL_120;
        v142 = 0LL;
        if ( v27
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x200) == 0 )
        {
          v142 = SURFOBJ_TO_SURFACE_NOT_NULL(v27);
          GreLockDisplayDevice(*(_QWORD *)(v142 + 48));
        }
        v35 = 0LL;
        if ( v33
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v33) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v33) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v33) + 112) & 0x200) == 0 )
        {
          v35 = SURFOBJ_TO_SURFACE_NOT_NULL(v33);
          GreLockDisplayDevice(*(_QWORD *)(v35 + 48));
        }
        v130 = 0;
        v131 = 0;
        v36 = *((_DWORD *)hdev + 650);
        v132.y = (int)hdev[651];
        v132.x = v36;
        if ( !v128 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32);
          if ( ThreadWin32Thread )
          {
            if ( *(_BYTE *)(ThreadWin32Thread + 328) == 1 )
            {
              v38 = *(DC ***)(ThreadWin32Thread + 312);
              v39 = (DC *)((char *)*v38 + 2200);
              v149 = XDCOBJ::prgnEffRao(v38);
              if ( (*(_DWORD *)(v40 + 32) & 0x20000) != 0 )
              {
                v134[0].x = -v132.x;
                v134[0].y = -v132.y;
                RGNOBJ::bOffset((RGNOBJ *)&v149, v134);
                v131 = 1;
              }
              v41 = XDCOBJ::prgnEffRao(v38);
              XCLIPOBJ::vSetup(v39, v41, (struct ERECTL *)&v164, 1);
              v33 = v146;
              v128 = (struct _CLIPOBJ *)v39;
              v20 = v137;
              v130 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v142, &v128) )
        {
          if ( a11 == 52428 )
          {
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x400) == 0 && v33->hdev )
            {
              if ( v33->iType != 1 )
                goto LABEL_71;
              if ( !bAllowShareAccess(v33)
                || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44)
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 280)
                || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 104)
                && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 108)
                || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 280)
                              + 20LL) & 0x400) == 0 )
              {
                if ( v33->iType != 1
                  || !bAllowShareAccess(v33)
                  || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59)
                  || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 280)
                  || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65) + 104)
                  && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 108) )
                {
LABEL_71:
                  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v33) + 112) & 0x400) != 0 )
                  {
                    v69 = v33->hdev;
                    goto LABEL_89;
                  }
                }
LABEL_90:
                v82 = EngCopyBits;
LABEL_91:
                OffCopyBits(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v82,
                  *(LONG **)v141,
                  (__int64)v27,
                  *(int **)v140,
                  (__int64)v33,
                  v128,
                  v148,
                  &v164,
                  &v166);
                goto LABEL_112;
              }
LABEL_80:
              v82 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 280) + 80LL);
              goto LABEL_91;
            }
            if ( v27->iType == 1 )
            {
              if ( bAllowShareAccess(v27)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72)
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v79, v80, v81) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v79, v80, v81) + 280)
                              + 20LL) & 0x400) != 0 )
              {
                goto LABEL_80;
              }
              if ( v27->iType == 1
                && bAllowShareAccess(v27)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84, v85)
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v92, v93, v94) + 108)) )
              {
                goto LABEL_90;
              }
            }
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x400) == 0 )
              goto LABEL_90;
            v69 = v27->hdev;
LABEL_89:
            v82 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v69 + 166);
            goto LABEL_91;
          }
          if ( v151 )
          {
            LODWORD(v147) = v164.left + v151->x - v12->left;
            HIDWORD(v147) = v164.top + v151->y - v12->top;
          }
          if ( v27->iType != 1 )
            goto LABEL_108;
          if ( bAllowShareAccess(v27)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v95, v96, v97)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v98, v99, v100) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v101, v102, v103) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106) + 280)
                          + 20LL) & 1) != 0 )
          {
            v110 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109) + 280) + 72LL);
LABEL_111:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v110,
              *(LONG **)v141,
              (__int64)v27,
              *(_DWORD **)v140,
              (__int64)v33,
              v154,
              v128,
              v148,
              &v164,
              &v166,
              (__int64)&v147,
              v153,
              (_DWORD *)v152,
              a11);
            goto LABEL_112;
          }
          if ( v27->iType != 1
            || !bAllowShareAccess(v27)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v112, v113)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122) + 108) )
          {
LABEL_108:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 1) != 0 )
            {
              v110 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v27->hdev + 165);
              goto LABEL_111;
            }
          }
          v110 = EngBitBlt;
          goto LABEL_111;
        }
LABEL_112:
        if ( v130 == 1 )
        {
          if ( v131 == 1 )
          {
            v134[0] = v132;
            RGNOBJ::bOffset((RGNOBJ *)&v149, v134);
          }
          v128 = 0LL;
        }
        if ( v35 )
          GreUnlockDisplayDevice(*(_QWORD *)(v35 + 48));
        if ( v142 )
          GreUnlockDisplayDevice(*(_QWORD *)(v142 + 48));
LABEL_120:
        if ( v128 )
          v128->rclBounds = (RECTL)v165;
      }
      while ( v138 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v161);
      v123 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v159, &v143);
      v18 = v144;
      v26 = &gptlZero;
      v21 = v129;
    }
    while ( v123 );
    if ( v143 )
      vSpRedrawArea(v144, &v135, 0);
    v19 = v133;
  }
  while ( v139 );
LABEL_127:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v159);
LABEL_128:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v168);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v18 + 128));
  if ( *((_QWORD *)v18 + 130) )
    vSpUpdateLockedScreenAreas(v18, v124, v12, v128, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v18 + 128));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v168);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v162, v125, v126, v127);
LABEL_131:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v155);
  return v11;
}
