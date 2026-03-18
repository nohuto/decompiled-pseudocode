/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EC010
 * Callers:
 *     <none>
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0092018 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00EC874 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00EC908 (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00EC998 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EC9E8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00ECA28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00ECAB4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBE8 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     OffBitBlt @ 0x1C011A5C8 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025E6E0 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02622DC (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0263B84 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C02653DC (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpBltFromScreen(
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
  unsigned int v11; // esi
  struct _RECTL *v12; // r12
  HDEV v16; // rdi
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  SURFACE *v20; // rax
  LONG x; // ecx
  LONG left; // edx
  int v23; // r15d
  int v24; // edx
  LONG v25; // eax
  struct _POINTL *v26; // rdx
  unsigned int v27; // r9d
  BYTE iDComplexity; // r15
  int v29; // eax
  struct _SURFOBJ *v30; // r15
  POINTL *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _CLIPOBJ *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  HDEV v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  HDEV v67; // rax
  BOOL (__stdcall *v68)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  unsigned int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int v73; // r14d
  RECTL rclBounds; // xmm6
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
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
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
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
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  BOOL (__stdcall *v123)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  LONG y; // r8d
  LONG v137; // ecx
  int v138; // ecx
  __int64 v139; // rdx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rdx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rdx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rdx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rdx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rdx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rdx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rdx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rdx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 v184; // rdx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rdx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rdx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rdx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rdx
  __int64 v197; // r8
  __int64 v198; // r9
  BOOL (__stdcall *v199)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v200; // rdx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rdx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rdx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // rdx
  __int64 v210; // r8
  __int64 v211; // r9
  BYTE v212; // [rsp+78h] [rbp-90h]
  int v214; // [rsp+88h] [rbp-80h]
  int v215; // [rsp+90h] [rbp-78h]
  struct _RECTL *v216; // [rsp+98h] [rbp-70h]
  int v217; // [rsp+A8h] [rbp-60h]
  int v218; // [rsp+ACh] [rbp-5Ch]
  HDEV hdev; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v220; // [rsp+B8h] [rbp-50h] BYREF
  HDEV v221; // [rsp+C0h] [rbp-48h]
  __int64 v222; // [rsp+C8h] [rbp-40h]
  __int64 v223; // [rsp+D0h] [rbp-38h]
  __int64 v224; // [rsp+D8h] [rbp-30h]
  __int64 v225; // [rsp+E0h] [rbp-28h]
  struct SPRITE *v226; // [rsp+E8h] [rbp-20h] BYREF
  char v227[8]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v228[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v229[96]; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v230[24]; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v231[24]; // [rsp+238h] [rbp+130h] BYREF
  struct _RECTL v232; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _RECTL v233; // [rsp+308h] [rbp+200h] BYREF
  RECTL v234; // [rsp+318h] [rbp+210h] BYREF
  RECTL v235; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v236[3]; // [rsp+338h] [rbp+230h] BYREF

  v11 = 0;
  v12 = a6;
  v224 = (__int64)a8;
  v223 = (__int64)a9;
  v222 = (__int64)a10;
  v225 = (__int64)a3;
  v216 = a6;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v234 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v234) )
      return 1LL;
    v235 = rclBounds;
    ERECTL::operator*=(&v235, a6);
    v12 = &v235;
    v216 = &v235;
  }
  hdev = a2->hdev;
  memset(v228, 0, 24);
  v16 = hdev + 18;
  v221 = hdev + 18;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v228);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v227, ghsemSprite, v17);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo((UNDOW32THREADPIDLOCKS *)v228) )
    goto LABEL_44;
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v16) )
  {
    v20 = (SURFACE *)SURFOBJ_TO_SURFACE(a1);
    if ( !SURFACE::bIncludeSprites(v20) )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v230, (struct PDEVOBJ *)&hdev, v18, v19);
      x = a7->x;
      left = v12->left;
      v23 = v12->top - a7->y;
      v232.top = a7->y;
      v24 = left - x;
      v25 = v12->right - v24;
      v232.left = x;
      v232.right = v25;
      v215 = v24;
      v232.bottom = v12->bottom - v23;
      v217 = v23;
      SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v16 + 32));
      if ( *((_QWORD *)v16 + 130) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v16, v26, v216, a4, 1);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v16 + 32));
      if ( v215 > 0 )
      {
        v27 = 3;
        if ( v23 <= 0 )
          v27 = 1;
      }
      else
      {
        v27 = 0;
        if ( v23 > 0 )
          v27 = 2;
      }
      if ( a4 )
      {
        iDComplexity = a4->iDComplexity;
        v212 = iDComplexity;
        if ( iDComplexity )
          v234 = a4->rclBounds;
      }
      else
      {
        iDComplexity = 0;
        v212 = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v229, (struct _SPRITESTATE *)v16, &v232, v27, 0LL);
      while ( 1 )
      {
        v29 = ENUMAREAS::bEnum((ENUMAREAS *)v229, &v226, &v232);
        v233.left = v215 + v232.left;
        v233.right = v215 + v232.right;
        v233.top = v217 + v232.top;
        v218 = v29;
        v233.bottom = v217 + v232.bottom;
        if ( !iDComplexity )
          break;
        v50 = a4;
        if ( bIntersect(&v233, &v234, &a4->rclBounds) )
          break;
LABEL_40:
        if ( !v218 )
        {
          if ( iDComplexity )
            v50->rclBounds = v234;
          v11 = 1;
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v229);
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v230, v51, v52, v53);
          goto LABEL_44;
        }
      }
      if ( v226 )
      {
        v30 = (struct _SURFOBJ *)*((_QWORD *)v226 + 20);
        LODWORD(v31) = (_DWORD)v226 + 168;
      }
      else
      {
        v30 = (struct _SURFOBJ *)*((_QWORD *)v16 + 5);
        v31 = &gptlZero;
      }
      v214 = (int)v31;
      v32 = 0LL;
      if ( a1
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
      {
        v32 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
        GreLockDisplayDevice(*(_QWORD *)(v32 + 48));
      }
      v33 = 0LL;
      if ( v30
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x200) == 0 )
      {
        v33 = SURFOBJ_TO_SURFACE_NOT_NULL(v30);
        GreLockDisplayDevice(*(_QWORD *)(v33 + 48));
      }
      if ( a11 == 52428 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 || !v30->hdev )
        {
          if ( a1->iType != 1 )
            goto LABEL_111;
          if ( (unsigned int)bAllowShareAccess(a1)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v84, v85, v86)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v87, v88, v89) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v90, v91, v92) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v93, v94, v95) + 280)
                          + 20LL) & 0x400) != 0 )
          {
            goto LABEL_33;
          }
          if ( a1->iType != 1
            || !(unsigned int)bAllowShareAccess(a1)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v96, v97, v98)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v99, v100, v101) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v102, v103, v104) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v105, v106, v107) + 108) )
          {
LABEL_111:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 )
            {
              v58 = a1->hdev;
              goto LABEL_54;
            }
          }
        }
        else
        {
          if ( v30->iType != 1 )
            goto LABEL_52;
          if ( (unsigned int)bAllowShareAccess(v30)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 280)
                          + 20LL) & 0x400) != 0 )
          {
LABEL_33:
            v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 280) + 80LL);
LABEL_34:
            OffCopyBits(
              (int)v49,
              (int)&gptlZero,
              (int)a1,
              v214,
              (__int64)v30,
              a4,
              (__int64)a5,
              (__int64)&v233,
              (__int64)&v232);
LABEL_35:
            if ( v33 )
              GreUnlockDisplayDevice(*(_QWORD *)(v33 + 48));
            if ( v32 )
              GreUnlockDisplayDevice(*(_QWORD *)(v32 + 48));
            iDComplexity = v212;
            v50 = a4;
            v16 = v221;
            goto LABEL_40;
          }
          if ( v30->iType != 1
            || !(unsigned int)bAllowShareAccess(v30)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79, v80) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v82, v83) + 108) )
          {
LABEL_52:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x400) != 0 )
            {
              v58 = v30->hdev;
LABEL_54:
              v49 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v58 + 166);
              goto LABEL_34;
            }
          }
        }
        v49 = EngCopyBits;
        goto LABEL_34;
      }
      if ( v224 )
      {
        LODWORD(v220) = v233.left + *(_DWORD *)v224 - v216->left;
        HIDWORD(v220) = v233.top + *(_DWORD *)(v224 + 4) - v216->top;
      }
      if ( a1->iType != 1 )
        goto LABEL_129;
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v108, v109, v110)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111, v112, v113) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v114, v115, v116) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 280)
                      + 20LL) & 1) != 0 )
      {
        v123 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122) + 280) + 72LL);
LABEL_132:
        OffBitBlt(
          (int)v123,
          (int)&gptlZero,
          (int)a1,
          v214,
          (__int64)v30,
          v225,
          a4,
          (__int64)a5,
          (__int64)&v233,
          (__int64)&v232,
          (__int64)&v220,
          v223,
          v222,
          a11);
        goto LABEL_35;
      }
      if ( a1->iType != 1
        || !(unsigned int)bAllowShareAccess(a1)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v124, v125, v126)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v127, v128, v129) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v130, v131, v132) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v133, v134, v135) + 108) )
      {
LABEL_129:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
        {
          v123 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 165);
          goto LABEL_132;
        }
      }
      v123 = EngBitBlt;
      goto LABEL_132;
    }
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v231, (struct PDEVOBJ *)&hdev, v18, v19);
  if ( *((_QWORD *)v16 + 169) )
  {
    y = a7->y;
    v137 = a7->x + v12->right - v12->left;
    v232.left = a7->x;
    v232.right = v137;
    v138 = v12->bottom - v12->top;
    v232.top = y;
    v232.bottom = y + v138;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v236, (struct _SPRITESTATE *)v16, &v232);
    if ( v236[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v16, &v232);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v16 + 169);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v236);
  }
  v59 = 0LL;
  if ( a1
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
  {
    v59 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    GreLockDisplayDevice(*(_QWORD *)(v59 + 48));
  }
  v60 = 0LL;
  if ( a2
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
  {
    v60 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
    GreLockDisplayDevice(*(_QWORD *)(v60 + 48));
  }
  if ( a11 == 52428 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) == 0 && a2->hdev )
    {
      if ( a2->iType != 1 )
        goto LABEL_69;
      if ( !(unsigned int)bAllowShareAccess(a2)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v139, v140, v141) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v142, v143, v144) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v145, v146, v147) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v145, v146, v147) + 280)
                      + 20LL) & 0x400) == 0 )
      {
        if ( a2->iType == 1
          && (unsigned int)bAllowShareAccess(a2)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v151, v152, v153) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v154, v155, v156) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v157, v158, v159) + 108)) )
        {
          goto LABEL_146;
        }
LABEL_69:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) != 0 )
        {
          v67 = a2->hdev;
LABEL_71:
          v68 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v67 + 166);
LABEL_72:
          v69 = OffCopyBits(
                  (int)v68,
                  (int)&gptlZero,
                  (int)a1,
                  (int)&gptlZero,
                  (__int64)a2,
                  a4,
                  (__int64)a5,
                  (__int64)v216,
                  (__int64)a7);
          goto LABEL_73;
        }
        goto LABEL_146;
      }
LABEL_154:
      v68 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v148, v149, v150) + 280)
                                                                                                 + 80LL);
      goto LABEL_72;
    }
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v160, v161, v162)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v163, v164, v165) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v166, v167, v168) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v169, v170, v171) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v169, v170, v171) + 280)
                      + 20LL) & 0x400) != 0 )
      {
        goto LABEL_154;
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v172, v173, v174)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v175, v176, v177) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v178, v179, v180) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v181, v182, v183) + 108)) )
      {
        goto LABEL_146;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 )
    {
      v67 = a1->hdev;
      goto LABEL_71;
    }
LABEL_146:
    v68 = EngCopyBits;
    goto LABEL_72;
  }
  if ( a1->iType != 1 )
  {
LABEL_177:
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
    {
      v199 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 165);
      goto LABEL_180;
    }
LABEL_179:
    v199 = EngBitBlt;
    goto LABEL_180;
  }
  if ( !(unsigned int)bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v184, v185, v186)
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v187, v188, v189) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v190, v191, v192) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v193, v194, v195) + 108)
    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v193, v194, v195) + 280) + 20LL) & 1) == 0 )
  {
    if ( a1->iType == 1
      && (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v200, v201, v202)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v203, v204, v205) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v206, v207, v208) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v209, v210, v211) + 108)) )
    {
      goto LABEL_179;
    }
    goto LABEL_177;
  }
  v199 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v196, v197, v198) + 280) + 72LL);
LABEL_180:
  v69 = OffBitBlt(
          (int)v199,
          (int)&gptlZero,
          (int)a1,
          (int)&gptlZero,
          (__int64)a2,
          v225,
          a4,
          (__int64)a5,
          (__int64)v216,
          (__int64)a7,
          v224,
          v223,
          v222,
          a11);
LABEL_73:
  v73 = v69;
  if ( v60 )
    GreUnlockDisplayDevice(*(_QWORD *)(v60 + 48));
  if ( v59 )
    GreUnlockDisplayDevice(*(_QWORD *)(v59 + 48));
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v231, v70, v71, v72);
  v11 = v73;
LABEL_44:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v227);
  return v11;
}
