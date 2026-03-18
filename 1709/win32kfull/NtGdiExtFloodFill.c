/*
 * XREFs of NtGdiExtFloodFill @ 0x1C01294D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001731C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C001B914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BE58 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002C5DC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEA8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEE8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00EA21C (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00F6A14 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C0129B38 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C0129C24 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C012A020 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C012A1A8 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C012A4A4 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C012A5A0 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     EngPaint @ 0x1C012CA90 (EngPaint.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C012CCD4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C012D7A8 (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C0293658 (-bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  int v8; // r14d
  char v9; // r8
  DC *v10; // r9
  DC *v11; // rax
  __int64 v12; // rdx
  int v13; // ebx
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v21; // rdx
  ULONG v22; // r12d
  int v23; // ecx
  __int64 v24; // r8
  char *v25; // r13
  int v26; // ecx
  __int64 v27; // rcx
  void *v28; // r11
  struct _RECTL v29; // xmm6
  __int64 v30; // rcx
  int v31; // edi
  int v32; // edx
  LONG y; // ebx
  LONG x; // r10d
  __int64 v35; // rax
  unsigned __int8 *v36; // rsi
  int v37; // ecx
  unsigned int v38; // eax
  int v39; // r10d
  int v40; // r12d
  int v41; // r13d
  unsigned int v42; // ebx
  int v43; // r12d
  LONG v44; // r13d
  __int64 v45; // rsi
  BRUSHOBJ *v46; // rdi
  MIX v47; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v49; // rdx
  POINTL *v50; // r9
  __int64 v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdx
  DCVISRGNSHARELOCK *v56; // rcx
  int v57; // eax
  bool v58; // zf
  int v59; // eax
  LONG left; // r10d
  LONG top; // r11d
  BOOL v62; // esi
  int v63; // r8d
  int v64; // r9d
  int v65; // r8d
  int v66; // eax
  SURFOBJ *v67; // rcx
  int v68; // r8d
  struct ECLIPOBJ *v69; // rdx
  int v70; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v71; // [rsp+70h] [rbp-98h] BYREF
  DC *v72[2]; // [rsp+78h] [rbp-90h] BYREF
  int v73[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _POINTL v74; // [rsp+90h] [rbp-78h] BYREF
  int v75; // [rsp+98h] [rbp-70h] BYREF
  struct REGION *v76[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-58h]
  struct REGION *v78; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-48h] BYREF
  int v80; // [rsp+C8h] [rbp-40h]
  int v81; // [rsp+CCh] [rbp-3Ch]
  struct REGION *v82[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v83; // [rsp+E0h] [rbp-28h] BYREF
  char v84; // [rsp+E8h] [rbp-20h]
  int v85; // [rsp+ECh] [rbp-1Ch]
  _BYTE v86[4]; // [rsp+F0h] [rbp-18h] BYREF
  int v87; // [rsp+F4h] [rbp-14h]
  __int64 v88; // [rsp+F8h] [rbp-10h]
  __int64 v89; // [rsp+110h] [rbp+8h]
  _QWORD v90[4]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v91[4]; // [rsp+138h] [rbp+30h] BYREF
  int v92; // [rsp+13Ch] [rbp+34h]
  __int64 v93; // [rsp+140h] [rbp+38h]
  __int64 v94; // [rsp+158h] [rbp+50h]
  int v95; // [rsp+160h] [rbp+58h] BYREF
  struct _RECTL v96; // [rsp+164h] [rbp+5Ch]
  ULONG v97; // [rsp+174h] [rbp+6Ch]
  int v98; // [rsp+178h] [rbp+70h]
  unsigned __int8 *v99; // [rsp+180h] [rbp+78h]
  int v100; // [rsp+188h] [rbp+80h]
  BRUSHOBJ *pbo; // [rsp+190h] [rbp+88h]
  _BYTE v102[16]; // [rsp+198h] [rbp+90h] BYREF
  BRUSHOBJ v103; // [rsp+1A8h] [rbp+A0h] BYREF
  int v104; // [rsp+1C0h] [rbp+B8h]
  int v105; // [rsp+1C4h] [rbp+BCh]
  __int64 v106; // [rsp+1C8h] [rbp+C0h]
  __int64 v107; // [rsp+1D0h] [rbp+C8h]
  __int64 v108; // [rsp+200h] [rbp+F8h]
  __int128 v109; // [rsp+208h] [rbp+100h]
  int v110; // [rsp+228h] [rbp+120h]
  _BYTE v111[32]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v112; // [rsp+258h] [rbp+150h]
  __int64 v113; // [rsp+260h] [rbp+158h]
  struct _RECTL v114; // [rsp+288h] [rbp+180h] BYREF
  __int64 v115; // [rsp+298h] [rbp+190h] BYREF
  int v116; // [rsp+2A0h] [rbp+198h]
  int v117; // [rsp+2A4h] [rbp+19Ch]
  CLIPOBJ pco; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v119; // [rsp+2F8h] [rbp+1F0h]
  int v120; // [rsp+300h] [rbp+1F8h]
  int v121; // [rsp+328h] [rbp+220h]
  __int64 v122; // [rsp+338h] [rbp+230h]

  v75 = a4;
  DCOBJ::DCOBJ((DCOBJ *)v72, a1);
  v8 = 0;
  if ( !v72[0] || (*((_DWORD *)v72[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v10 = v72[0];
  }
  else
  {
    if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v72) )
    {
      DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v70);
      v11 = v72[0];
      v12 = *((_QWORD *)v72[0] + 10);
      v13 = *(_DWORD *)(v12 + 8);
      if ( (v13 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v72[0], *(_QWORD *)(v12 + 16));
        v11 = v72[0];
      }
      if ( (v13 & 0x2000) != 0 )
      {
        GreDCSelectPen(v11, *(_QWORD *)(*((_QWORD *)v11 + 10) + 24LL));
        v11 = v72[0];
      }
      v14 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v11 + 64);
      if ( v14 && *((_WORD *)v14 + 50) == 3 )
      {
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v76, (struct XDCOBJ *)v72);
        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v70);
        *(_QWORD *)v73 = ghsemSprite;
        GreAcquireSemaphore(ghsemSprite);
        GreAcquireHmgrSemaphore();
        bConvertDfbDcToDib((struct XDCOBJ *)v72);
        GreReleaseHmgrSemaphore();
        SEMOBJ::vUnlock((SEMOBJ *)v73);
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v56);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v76);
      }
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
      v112 = 0LL;
      v113 = 0LL;
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v111, (struct XDCOBJ *)v72, 0);
      v15 = *((_QWORD *)v72[0] + 64);
      v71.x = a2;
      v71.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v102, (struct XDCOBJ *)v72, 516);
      if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v102, &v71, 1LL) )
        goto LABEL_62;
      v16 = *(_QWORD *)(v15 + 48);
      v17 = *(_QWORD *)(v15 + 128);
      v18 = *((_QWORD *)v72[0] + 12);
      if ( (*(_DWORD *)(*((_QWORD *)v72[0] + 6) + 32LL) & 0x80u) != 0
        || (unsigned int)DC::bIsCMYKColor(v72[0])
        || (*(_DWORD *)(v19 + 112) & 2) != 0 )
      {
        EngSetLastError(0x57u);
        v42 = 0;
        goto LABEL_57;
      }
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v17, v18, a4, 1LL);
      v21 = v72[0];
      v22 = NearestIndexFromColorref;
      v23 = *((_DWORD *)v72[0] + 28);
      if ( (v23 & 4) != 0 || (LODWORD(v77) = 0, (v23 & 1) != 0) )
        LODWORD(v77) = 2;
      v24 = *((_QWORD *)v72[0] + 10);
      v25 = (char *)v72[0] + 1600;
      pbo = (BRUSHOBJ *)((char *)v72[0] + 1600);
      v26 = *(_DWORD *)(v24 + 8);
      if ( (v26 & 1) != 0 || (*((_DWORD *)v72[0] + 83) & 1) != 0 )
      {
        *(_DWORD *)(v24 + 8) = v26 & 0xFFFFFFFE;
        *((_DWORD *)v72[0] + 83) &= ~1u;
        EBRUSHOBJ::vInitBrush((char *)v21 + 1600, v72[0], *((_QWORD *)v72[0] + 18), v18, v17, v15, 1);
        v21 = v72[0];
      }
      if ( (*((_DWORD *)v25 + 32) & 0x100) != 0 )
      {
        v42 = 1;
        goto LABEL_57;
      }
      if ( (v111[24] & 1) == 0 )
      {
        v42 = XDCOBJ::bFullScreen((XDCOBJ *)v72);
        goto LABEL_57;
      }
      v27 = *((_DWORD *)v21 + 10) & 1LL;
      v71.x += *((_DWORD *)v21 + 2 * v27 + 358);
      v71.y += *((_DWORD *)v21 + 2 * v27 + 359);
      v78 = XDCOBJ::prgnEffRao(v72);
      if ( RGNOBJ::bInside((RGNOBJ *)&v78, &v71) != 2 )
      {
LABEL_62:
        v42 = 0;
        goto LABEL_57;
      }
      memset(v90, 0, sizeof(v90));
      v83 = 0LL;
      v84 = 0;
      v85 = 0;
      *(_QWORD *)v73 = *(_QWORD *)(v15 + 48);
      PDEVOBJ::vSync((PDEVOBJ *)v73, (struct _SURFOBJ *)(v15 + 24), 0LL, 0);
      v28 = 0LL;
      LODWORD(v76[0]) = 0;
      v29 = *(struct _RECTL *)((char *)v78 + 88);
      v114 = v29;
      if ( !*(_WORD *)(v15 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v78) != 3 )
      {
        v30 = *(_QWORD *)(v15 + 80);
        v31 = *(_DWORD *)(v15 + 88);
        v32 = *(_DWORD *)(v15 + 96);
        y = v71.y;
        x = v71.x;
        goto LABEL_25;
      }
      LODWORD(v90[0]) = *(_DWORD *)(v15 + 96);
      v73[0] = v90[0];
      HIDWORD(v90[0]) = v114.right - v114.left;
      LODWORD(v90[1]) = v114.bottom - v114.top;
      v57 = 1;
      LODWORD(v90[3]) = 1;
      v90[2] = v28;
      if ( (*(_DWORD *)(v15 + 112) & 0x40000) != 0 )
        v57 = 262145;
      LODWORD(v90[3]) = v57;
      SURFMEM::bCreateDIB(
        (SURFMEM *)&v83,
        (struct _DEVBITMAPINFO *)v90,
        0LL,
        0LL,
        (unsigned int)v28,
        v28,
        (unsigned __int64)v28,
        (_DWORD)v28,
        1,
        (_DWORD)v28,
        (_DWORD)v28);
      if ( !v83 )
      {
        EngSetLastError(8u);
        goto LABEL_108;
      }
      v58 = (*(_DWORD *)(v15 + 112) & 0x400) == 0;
      v115 = 0LL;
      v116 = HIDWORD(v90[0]);
      v117 = v90[1];
      if ( v58 )
        v59 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))EngCopyBits)(
                v83 + 24,
                v15 + 24,
                0LL,
                xloIdent,
                &v115,
                &v114);
      else
        v59 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))(v16 + 2856))(
                v83 + 24,
                v15 + 24,
                0LL,
                xloIdent,
                &v115,
                &v114);
      left = v114.left;
      top = v114.top;
      v62 = v59;
      v63 = -v114.left;
      v64 = -v114.top;
      v74.x = -v114.left;
      v74.y = -v114.top;
      if ( !v59 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v78) != 3 )
      {
        v114.right += v63;
        v114.left = v63 + left;
        v114.bottom += v64;
        v114.top = v64 + top;
LABEL_101:
        if ( v62 )
        {
          x = v63 + v71.x;
          v29 = v114;
          v32 = v73[0];
          y = v64 + v71.y;
          v71.x += v63;
          v74.y = -v64;
          v71.y += v64;
          v74.x = -v63;
          v31 = *(_DWORD *)(v83 + 88);
          v30 = *(_QWORD *)(v83 + 80);
          LODWORD(v76[0]) = 1;
LABEL_25:
          v100 = -1;
          v77 = v30;
          v95 = v32;
          v96 = v29;
          v97 = v22;
          v35 = *(_QWORD *)(v15 + 128);
          v36 = (unsigned __int8 *)(v30 + y * v31);
          v98 = a5;
          v99 = v36;
          if ( v35 )
          {
            v37 = *(_DWORD *)(v35 + 24);
            if ( (v37 & 0xC) != 0 )
            {
              v100 = 0xFFFFFF;
            }
            else if ( (v37 & 2) != 0 )
            {
              v100 = **(_DWORD **)(v35 + 120) | *(_DWORD *)(*(_QWORD *)(v35 + 120) + 4LL) | *(_DWORD *)(*(_QWORD *)(v35 + 120) + 8LL);
            }
          }
          v38 = FLOODBM::iColorGet((FLOODBM *)&v95, x);
          if ( !a5 && v38 == v22 || v38 != v22 && a5 == 1 )
            goto LABEL_108;
          FLOODBM::vFindExtent((FLOODBM *)&v95, v39, &v75, v73);
          v40 = v73[0];
          v41 = v75;
          STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v91, 0x1B8u, 1u, y, v75, v73[0]);
          v42 = 0;
          if ( !v94 )
          {
            EngSetLastError(8u);
            goto LABEL_55;
          }
          STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v86, 0xF8u, 0, v71.y, v41, v40);
          if ( !v89 )
          {
            EngSetLastError(8u);
            goto LABEL_54;
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v82, 0x1348u);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v82);
          if ( v82[0] )
          {
            v42 = 1;
            v43 = v114.bottom - 1;
            v44 = v114.top;
            if ( v71.y >= v114.bottom - 1 )
            {
              v87 -= *(_DWORD *)(v88 + 8);
              v88 = *(_QWORD *)(v88 + 16);
            }
            else
            {
              v42 = FLOODBM::bExtendScanline(
                      (FLOODBM *)&v95,
                      (struct STACKOBJ *)v86,
                      (struct STACKOBJ *)v91,
                      v71.y + 1,
                      v36,
                      &v36[v31]) & 1;
            }
            if ( !v42 )
            {
LABEL_119:
              EngSetLastError(8u);
              goto LABEL_53;
            }
            v45 = v77;
            do
            {
              while ( 1 )
              {
                while ( v87 )
                {
                  if ( !RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v82, (struct STACKOBJ *)v86) )
                    goto LABEL_118;
                  if ( *(_DWORD *)v88 >= v43 )
                  {
                    v87 -= *(_DWORD *)(v88 + 8);
                    v88 = *(_QWORD *)(v88 + 16);
                  }
                  else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                             (FLOODBM *)&v95,
                                             (struct STACKOBJ *)v86,
                                             (struct STACKOBJ *)v91,
                                             *(_DWORD *)v88 + 1,
                                             (unsigned __int8 *)(v45 + v31 * *(_DWORD *)v88),
                                             (unsigned __int8 *)(v45 + v31 * *(_DWORD *)v88 + v31)) )
                  {
LABEL_118:
                    v42 = 0;
                    goto LABEL_119;
                  }
                }
                if ( !v92 )
                  goto LABEL_46;
                v42 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v82, (struct STACKOBJ *)v91);
                if ( *(_DWORD *)v93 > v44 )
                  break;
                v92 -= *(_DWORD *)(v93 + 8);
                v93 = *(_QWORD *)(v93 + 16);
              }
            }
            while ( (unsigned int)FLOODBM::bExtendScanline(
                                    (FLOODBM *)&v95,
                                    (struct STACKOBJ *)v91,
                                    (struct STACKOBJ *)v86,
                                    *(_DWORD *)v93 - 1,
                                    (unsigned __int8 *)(v45 + v31 * *(_DWORD *)v93),
                                    (unsigned __int8 *)(v45 + v31 * *(_DWORD *)v93 - v31)) );
            v42 = 0;
LABEL_46:
            if ( !v42 )
              goto LABEL_119;
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v82) != 1 )
            {
              if ( LODWORD(v76[0])
                && (!RGNOBJ::bOffset((RGNOBJ *)v82, &v74)
                 || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v114, &v74, v68)) )
              {
                goto LABEL_117;
              }
              v46 = pbo;
              v47 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)pbo,
                      *(_BYTE *)(*((_QWORD *)v72[0] + 10) + 72LL),
                      *(_BYTE *)(*((_QWORD *)v72[0] + 10) + 73LL));
              ++*(_DWORD *)(v15 + 92);
              v119 = 0LL;
              mix = v47;
              v120 = 0;
              v121 = 1;
              v122 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v82[0], (struct ERECTL *)&v114, 0);
              v50 = (POINTL *)v72[0];
              if ( (*((_DWORD *)v72[0] + 9) & 0xE0) != 0 )
              {
                XDCOBJ::vAccumulate((XDCOBJ *)v72, v49, (__m128i *)&v114);
                XDCOBJ::vAccumulateTight((XDCOBJ *)v72, v69, (__m128i *)&v114);
                v50 = (POINTL *)v72[0];
              }
              v42 = EngPaint((SURFOBJ *)(v15 + 24), &pco, v46, v50 + 199, mix);
            }
            if ( !v42 )
              goto LABEL_119;
            goto LABEL_53;
          }
          EngSetLastError(8u);
LABEL_117:
          v42 = 0;
LABEL_53:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v82);
LABEL_54:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v86);
LABEL_55:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v91);
LABEL_56:
          SURFMEM::~SURFMEM((SURFMEM *)&v83);
LABEL_57:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v111);
          v10 = v72[0];
          goto LABEL_58;
        }
LABEL_108:
        v42 = 0;
        goto LABEL_56;
      }
      v62 = 0;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v79);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v79);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v76);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v76);
      if ( !v79
        || !v76[0]
        || (RGNOBJ::vSet((RGNOBJ *)&v79, &v114),
            !RGNOBJ::bMerge((RGNOBJ *)v76, (struct RGNOBJ *)&v79, (struct RGNOBJ *)&v78, BYTE4(gafjRgnOp))) )
      {
LABEL_98:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v76);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v79);
        v64 = v74.y;
        v63 = v74.x;
        goto LABEL_101;
      }
      if ( !RGNOBJ::bOffset((RGNOBJ *)v76, &v74) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v114, &v74, v65) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v76);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v79);
        goto LABEL_108;
      }
      v119 = 0LL;
      v120 = 0;
      v121 = 1;
      v122 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v76[0], (struct ERECTL *)&v114, 0);
      v105 = -1;
      v103.flColorType = v77;
      v109 = 0LL;
      v108 = 0LL;
      v103.pvRbrush = 0LL;
      v106 = 0LL;
      v107 = 0LL;
      v110 = 0;
      if ( a5 )
      {
        v103.iSolidColor = (v22 & 1) == 0;
        if ( gbMultiMonMismatchColor )
        {
          v66 = ulIndexToRGB(v17, v18, (v22 & 1) == 0);
          goto LABEL_94;
        }
      }
      else
      {
        v103.iSolidColor = v22;
        if ( gbMultiMonMismatchColor )
        {
          v66 = v75;
LABEL_94:
          v105 = v66;
          v104 = v66;
        }
      }
      v67 = 0LL;
      if ( v83 )
        v67 = (SURFOBJ *)(v83 + 24);
      v62 = EngPaint(v67, &pco, &v103, 0LL, 0xD0Du);
      EBRUSHOBJ::vDelete((EBRUSHOBJ *)&v103);
      goto LABEL_98;
    }
    if ( (v9 & 0xE0) != 0 )
    {
      v52 = *((_QWORD *)v10 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v52 + 40));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v52 + 40), 11LL);
      v53 = *(_QWORD *)(v52 + 2568);
      if ( v53 )
        v54 = *(_QWORD *)(v53 + 56);
      else
        v54 = *((_QWORD *)v72[0] + 66);
      v55 = *(_QWORD *)(v52 + 40);
      *(_QWORD *)v73 = v54;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v55);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v52 + 40));
      v81 = v73[1];
      v79 = 0LL;
      v80 = v54;
      XDCOBJ::vAccumulate((XDCOBJ *)v72, (struct ERECTL *)&v79);
      v10 = v72[0];
    }
    v8 = 1;
  }
  v42 = v8;
LABEL_58:
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v72);
  return v42;
}
