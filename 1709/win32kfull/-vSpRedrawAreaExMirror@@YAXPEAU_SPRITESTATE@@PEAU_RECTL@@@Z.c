/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02622DC
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EC010 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EC9E8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00ECA28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00ECAB4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0114930 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0258994 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025B190 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C025B248 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025B2A8 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C025E544 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C025E7F8 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F3C8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0264B08 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  struct _SURFOBJ *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
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
  __int64 v40; // rax
  struct _SURFOBJ *v41; // rcx
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
  BOOL (__stdcall *v54)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _SURFOBJ *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // r12d
  struct _SURFOBJ *Composite; // rsi
  __int64 v70; // rdi
  struct SPRITE *v71; // r15
  __int64 v72; // rbx
  __int64 v73; // rbx
  struct _SURFOBJ *v74; // rcx
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
  struct _SURFOBJ *v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  BOOL (__stdcall *v103)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
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
  struct SPRITE *v128; // [rsp+50h] [rbp-B0h] BYREF
  ULONG StartingIndex; // [rsp+58h] [rbp-A8h] BYREF
  struct _POINTL v130; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v131[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v132[96]; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v133; // [rsp+D0h] [rbp-30h] BYREF
  struct _CLIPOBJ v134; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v135; // [rsp+118h] [rbp+18h]
  __int64 v136; // [rsp+130h] [rbp+30h]
  int v137; // [rsp+138h] [rbp+38h]
  int v138; // [rsp+160h] [rbp+60h]
  __int64 v139; // [rsp+170h] [rbp+70h]
  int v140; // [rsp+178h] [rbp+78h]

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 32LL) & 0x400) == 0 )
  {
    v136 = 0LL;
    v137 = 0;
    v139 = 0LL;
    v135 = 0LL;
    v138 = 1;
    v140 = 0;
    v6 = bConcurrent(a1, (__int64)a2, a3, a4);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v134, v6, *((struct REGION **)a1 + 88), (struct ERECTL *)a2, 0);
    if ( ERECTL::bEmpty((ERECTL *)&v134.rclBounds) )
    {
LABEL_52:
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v132, a1, a2, 0, 0LL);
      while ( 1 )
      {
        v68 = ENUMAREAS::bEnum((ENUMAREAS *)v132, &v128, &v133);
        if ( v128 )
        {
          if ( !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v132, &v128) )
            break;
        }
LABEL_109:
        if ( !v68 )
        {
LABEL_110:
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v132);
          ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v134);
          return;
        }
      }
      Composite = psoSpGetComposite(a1, &v133, &StartingIndex);
      if ( !Composite )
        goto LABEL_110;
      v70 = 0LL;
      v71 = v128;
      v130.x = -v133.left;
      v72 = *((_QWORD *)v128 + 20);
      v130.y = -v133.top;
      if ( v72
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v72) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v72) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v72) + 112) & 0x200) == 0 )
      {
        v70 = SURFOBJ_TO_SURFACE_NOT_NULL(v72);
        GreLockDisplayDevice(*(_QWORD *)(v70 + 48));
      }
      v73 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x200) == 0 )
      {
        v73 = SURFOBJ_TO_SURFACE_NOT_NULL(Composite);
        GreLockDisplayDevice(*(_QWORD *)(v73 + 48));
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) == 0 )
      {
        v74 = (struct _SURFOBJ *)*((_QWORD *)v71 + 20);
        if ( v74->hdev )
        {
          if ( v74->iType != 1
            || !bAllowShareAccess(v74)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79, v80) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v82, v83) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v84, v85, v86) + 108)
            || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v84, v85, v86) + 280)
                          + 20LL) & 0x400) == 0 )
          {
            v90 = (struct _SURFOBJ *)*((_QWORD *)v71 + 20);
            if ( (v90->iType != 1
               || !bAllowShareAccess(v90)
               || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v91, v92, v93)
               || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96) + 280)
               || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v97, v98, v99) + 104)
               && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v102) + 108))
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v71 + 20)) + 112) & 0x400) != 0 )
            {
              v103 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)v71 + 20) + 24LL) + 1328LL);
LABEL_99:
              OffCopyBits(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v103,
                (LONG *)&v130,
                (__int64)Composite,
                (int *)v128 + 42,
                *((_QWORD *)v71 + 20),
                0LL,
                0LL,
                &v133,
                &v133);
              if ( v73 )
                GreUnlockDisplayDevice(*(_QWORD *)(v73 + 48));
              if ( v70 )
                GreUnlockDisplayDevice(*(_QWORD *)(v70 + 48));
              do
              {
                if ( (*(_DWORD *)v128 & 0x100) == 0 )
                  vSpComposite(v128, &v130, Composite, &v133);
              }
              while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v132, &v128) );
              vSpWriteToExMirror(a1, &v130, Composite, &v133);
              if ( StartingIndex == -1 )
              {
                vSpDeleteSurface(Composite);
              }
              else
              {
                CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v131, (struct _SPRITESTATE *)((char *)a1 + 696));
                RtlClearBits((PRTL_BITMAP)a1 + 42, StartingIndex, 1u);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v131);
              }
              goto LABEL_109;
            }
LABEL_98:
            v103 = EngCopyBits;
            goto LABEL_99;
          }
LABEL_89:
          v103 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v87, v88, v89) + 280) + 80LL);
          goto LABEL_99;
        }
      }
      if ( Composite->iType == 1 )
      {
        if ( bAllowShareAccess(Composite)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v110, v111, v112) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v113, v114, v115) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v113, v114, v115) + 280)
                        + 20LL) & 0x400) != 0 )
        {
          goto LABEL_89;
        }
        if ( Composite->iType == 1
          && bAllowShareAccess(Composite)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v116, v117, v118)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v119, v120, v121) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v122, v123, v124) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v125, v126, v127) + 108)) )
        {
          goto LABEL_98;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) != 0 )
      {
        v103 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)Composite->hdev + 166);
        goto LABEL_99;
      }
      goto LABEL_98;
    }
    v7 = *((_QWORD *)a1 + 5);
    v8 = 0LL;
    if ( v7
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v7) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v7) + 112) & 0x200) == 0 )
    {
      v8 = SURFOBJ_TO_SURFACE_NOT_NULL(v7);
      GreLockDisplayDevice(*(_QWORD *)(v8 + 48));
    }
    v9 = *((_QWORD *)a1 + 169);
    v10 = 0LL;
    if ( v9
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x200) == 0 )
    {
      v10 = SURFOBJ_TO_SURFACE_NOT_NULL(v9);
      GreLockDisplayDevice(*(_QWORD *)(v10 + 48));
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x400) != 0
      || (v11 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5), !v11->hdev) )
    {
      v41 = (struct _SURFOBJ *)*((_QWORD *)a1 + 169);
      if ( v41->iType != 1
        || !bAllowShareAccess(v41)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 280) + 20LL) & 0x400) == 0 )
      {
        v55 = (struct _SURFOBJ *)*((_QWORD *)a1 + 169);
        if ( (v55->iType != 1
           || !bAllowShareAccess(v55)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58)
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67) + 108))
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 169)) + 112) & 0x400) != 0 )
        {
          v40 = *((_QWORD *)a1 + 169);
          goto LABEL_46;
        }
LABEL_47:
        v54 = EngCopyBits;
        goto LABEL_48;
      }
    }
    else if ( v11->iType != 1
           || !bAllowShareAccess(v11)
           || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14)
           || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17) + 280)
           || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 104)
           && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 108)
           || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 280)
                         + 20LL) & 0x400) == 0 )
    {
      v27 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
      if ( (v27->iType != 1
         || !bAllowShareAccess(v27)
         || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30)
         || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 280)
         || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 104)
         && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 108))
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 5)) + 112) & 0x400) != 0 )
      {
        v40 = *((_QWORD *)a1 + 5);
LABEL_46:
        v54 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v40 + 24) + 1328LL);
        goto LABEL_48;
      }
      goto LABEL_47;
    }
    v54 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 280)
                                                                                               + 80LL);
LABEL_48:
    OffCopyBits(
      (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v54,
      (LONG *)&gptlZero,
      *((_QWORD *)a1 + 169),
      (int *)&gptlZero,
      *((_QWORD *)a1 + 5),
      &v134,
      0LL,
      (_DWORD *)a1 + 12,
      &gptlZero);
    if ( v10 )
      GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
    if ( v8 )
      GreUnlockDisplayDevice(*(_QWORD *)(v8 + 48));
    goto LABEL_52;
  }
}
