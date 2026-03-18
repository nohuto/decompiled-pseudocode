/*
 * XREFs of NtGdiTransparentBlt @ 0x1C012CEF0
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C0251B40 (DxgkEngBltViaGDI.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0002840 (EngPlgBlt.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C001B860 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001C7A8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A2C (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0102874 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C012D7A8 (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ @ 0x1C012E5E8 (-bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C012EAEC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C012EB44 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0252EE8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
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
        unsigned int a11)
{
  unsigned int v14; // r12d
  __int64 v15; // rdx
  struct SURFACE *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r13
  int v20; // r8d
  int v21; // ebx
  int v22; // r8d
  __int64 v23; // rdi
  bool v24; // cc
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rbx
  __int64 v28; // rsi
  struct REGION *v29; // rax
  struct ECLIPOBJ *v30; // rdx
  POINTFIX v31; // r9
  int inited; // eax
  struct SURFACE *v33; // rdi
  unsigned int v34; // eax
  FIX x; // edi
  FIX v37; // r8d
  FIX y; // r9d
  FIX v39; // eax
  int v40; // r10d
  int v41; // edi
  int v42; // r9d
  __int64 v43; // r8
  __int64 v44; // rcx
  LONG v45; // ecx
  LONG v46; // edx
  int v47; // eax
  _QWORD *v48; // rax
  bool v49; // zf
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v51; // edx
  __int64 v52; // rdi
  unsigned int v53; // edx
  int *v54; // rdi
  unsigned int v55; // edx
  __int64 k; // rcx
  _BYTE *v57; // r8
  _BYTE *j; // r10
  _BYTE *v59; // rdx
  unsigned __int64 v60; // rcx
  _BYTE *v61; // rdx
  unsigned int v62; // edx
  _WORD *v63; // rdi
  __int64 i; // rcx
  size_t v65; // r8
  int v66; // edx
  SURFOBJ *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  int v70; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  POINTFIX v72; // [rsp+68h] [rbp-98h] BYREF
  DC *v73[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v74; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v75[2]; // [rsp+90h] [rbp-70h] BYREF
  HDC v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-58h] BYREF
  char v78; // [rsp+B0h] [rbp-50h]
  int v79; // [rsp+B4h] [rbp-4Ch]
  _QWORD v80[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct SURFACE *v81; // [rsp+C8h] [rbp-38h]
  _QWORD v82[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v83[4]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v84[16]; // [rsp+110h] [rbp+10h] BYREF
  HDC v85[22]; // [rsp+120h] [rbp+20h] BYREF
  RECTL prcl; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v87; // [rsp+1E0h] [rbp+E0h] BYREF
  RECTL v88; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v89[4]; // [rsp+200h] [rbp+100h] BYREF
  RECTL v90; // [rsp+204h] [rbp+104h] BYREF
  __int64 v91; // [rsp+250h] [rbp+150h]
  int v92; // [rsp+258h] [rbp+158h]
  int v93; // [rsp+280h] [rbp+180h]
  __int64 v94; // [rsp+290h] [rbp+190h]
  struct _POINTFIX v95; // [rsp+2A0h] [rbp+1A0h] BYREF
  FIX v96; // [rsp+2A8h] [rbp+1A8h]
  int v97; // [rsp+2ACh] [rbp+1ACh]
  int v98; // [rsp+2B0h] [rbp+1B0h]
  FIX v99; // [rsp+2B4h] [rbp+1B4h]
  FIX v100; // [rsp+2B8h] [rbp+1B8h]
  int v101; // [rsp+2BCh] [rbp+1BCh]
  __int128 v102; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v103; // [rsp+2D0h] [rbp+1D0h]
  int v104; // [rsp+2D4h] [rbp+1D4h]
  POINTFIX pptfx; // [rsp+2E0h] [rbp+1E0h] BYREF
  POINTFIX v106; // [rsp+2E8h] [rbp+1E8h]
  POINTFIX v107; // [rsp+2F0h] [rbp+1F0h]

  v76 = a6;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v73, a1);
  DCOBJ::DCOBJ((DCOBJ *)v75, v76);
  if ( !v73[0]
    || (*((_DWORD *)v73[0] + 9) & 0x10000) != 0
    || !v75[0]
    || (bSpDwmValidateSurface((struct XDCOBJ *)v75, a7, a8, a9, a10),
        bSpDwmValidateSurface((struct XDCOBJ *)v73, a2, a3, a4, a5),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v80, (struct XDCOBJ *)v73, 516),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v84, (struct XDCOBJ *)v75, 516),
        (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v84)) )
  {
    EngSetLastError(0x57u);
    v14 = 0;
    goto LABEL_44;
  }
  prcl.right = a9 + a7;
  prcl.top = a8;
  prcl.left = a7;
  prcl.bottom = a10 + a8;
  EXFORMOBJ::bXform((EXFORMOBJ *)v84, (struct _POINTL *)&prcl);
  ERECTL::vOrder((ERECTL *)&prcl);
  `vector constructor iterator'(&v95, 8uLL, 4uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
  v72.x = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v80);
  v14 = 1;
  if ( v72.x )
  {
    *(_QWORD *)&v102 = __PAIR64__(a3, a2);
    DWORD2(v102) = a4 + a2;
    v104 = a5 + a3;
    HIDWORD(v102) = a3;
    v103 = a2;
    EXFORMOBJ::bXform((EXFORMOBJ *)v80, (struct _POINTL *)&v102, &v95, 3uLL);
    x = v95.x;
    v37 = v96;
    if ( (*(_DWORD *)(v80[0] + 32LL) & 1) != 0 )
    {
      if ( v95.x > v96 )
      {
        x = v95.x + 16;
        v37 = v96 + 16;
        v98 += 16;
        v95.x += 16;
        v96 += 16;
      }
      y = v95.y;
      v39 = v99;
      v40 = v97;
      if ( v95.y > v99 )
      {
        y = v95.y + 16;
        v40 = v97 + 16;
        v39 = v99 + 16;
        v95.y += 16;
        v99 += 16;
        v97 += 16;
      }
    }
    else
    {
      v39 = v99;
      v40 = v97;
      y = v95.y;
    }
    v100 = v37 + v98 - x;
    v101 = v39 + v40 - y;
    v41 = (v37 > x) ^ (v37 > v100);
    v42 = (v40 > y) ^ (v40 > v101);
    v43 = v41 ^ ((*(&v95.x + 2 * (v41 ^ 1)) > *(&v95.x + 2 * (v41 ^ 1 ^ 3LL))) + 1LL);
    LODWORD(v74) = (*(&v95.x + 2 * v43) + 15) >> 4;
    v44 = v42 ^ ((*(&v95.y + 2 * (v42 ^ 1LL)) > *(&v95.y + 2 * (v42 ^ 2LL))) + 1LL);
    DWORD1(v74) = (*(&v95.y + 2 * v44) + 15) >> 4;
    DWORD2(v74) = (*(&v95.x + 2 * (v43 ^ 3)) + 15) >> 4;
    HIDWORD(v74) = (*(&v95.y + 2 * (v44 ^ 3)) + 15) >> 4;
    v87 = v74;
  }
  else
  {
    *(_QWORD *)&v74 = __PAIR64__(a3, a2);
    DWORD2(v74) = a4 + a2;
    HIDWORD(v74) = a5 + a3;
    v87 = v74;
    EXFORMOBJ::bXform((EXFORMOBJ *)v80, (struct _POINTL *)&v87);
    ERECTL::vOrder((ERECTL *)&v87);
  }
  if ( !ERECTL::bEmpty((ERECTL *)&v87) )
  {
    if ( (*((_DWORD *)v73[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v73, (struct ERECTL *)&v87);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v85);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v85, (struct XDCOBJ *)v73, (struct XDCOBJ *)v75) )
    {
      v70 = XDCOBJ::bFullScreen((XDCOBJ *)v75);
      v14 = XDCOBJ::bFullScreen((XDCOBJ *)v73) | v70;
      goto LABEL_42;
    }
    v16 = (struct SURFACE *)*((_QWORD *)v73[0] + 64);
    v81 = v16;
    if ( !v16 )
      goto LABEL_42;
    v17 = *((_QWORD *)v16 + 16);
    v18 = *((_QWORD *)v73[0] + 12);
    v19 = *(_QWORD *)(v75[0] + 512LL);
    if ( !v19 )
      goto LABEL_42;
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v75[0] + 512LL), v15)
      || !(unsigned int)DestSurfaceAccessCheck(v16) )
    {
      EngSetLastError(6u);
      goto LABEL_121;
    }
    v21 = 0;
    v102 = v87;
    if ( !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&v87,
                          (struct _POINTL *)v73[0] + (*((_DWORD *)v73[0] + 10) & 1LL) + 179,
                          v20)
      || !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&prcl,
                          (struct _POINTL *)(v75[0] + 1432LL + 8 * (*(_DWORD *)(v75[0] + 40LL) & 1LL)),
                          v22) )
    {
      v21 = 1;
    }
    v23 = *(_QWORD *)(v19 + 48);
    if ( *(_WORD *)(v19 + 100) == 1 && v23 && (*(_DWORD *)(v23 + 32) & 0x20000) != 0 )
    {
      v45 = *(_DWORD *)(v23 + 2600);
      if ( prcl.left < v45 )
        goto LABEL_64;
      v46 = *(_DWORD *)(v23 + 2604);
      if ( prcl.top < v46 || prcl.right > *(_DWORD *)(v19 + 56) + v45 )
        goto LABEL_64;
      v24 = prcl.bottom <= v46 + *(_DWORD *)(v19 + 60);
    }
    else
    {
      if ( prcl.left < 0 || prcl.top < 0 || prcl.right > *(_DWORD *)(v19 + 56) )
        goto LABEL_64;
      v24 = prcl.bottom <= *(_DWORD *)(v19 + 60);
    }
    if ( v24 )
    {
      v25 = 0;
LABEL_28:
      v26 = v25 | v21;
      if ( (struct SURFACE *)v19 == v16 )
      {
        v88 = prcl;
        ERECTL::operator*=(&v88, &v87);
        if ( !ERECTL::bEmpty((ERECTL *)&v88) )
          v26 = 1;
      }
      if ( v26 )
      {
        EngSetLastError(0x57u);
        v14 = 0;
      }
      else
      {
        v27 = *(_QWORD *)(v19 + 128);
        v28 = *(_QWORD *)(v75[0] + 96LL);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v27, v28, a11, 1LL);
        v29 = XDCOBJ::prgnEffRao(v73);
        v93 = 1;
        v91 = 0LL;
        v92 = 0;
        v94 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v89, v29, (struct ERECTL *)&v87, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v90) )
        {
          if ( (*((_DWORD *)v73[0] + 9) & 0xE0) != 0 )
          {
            v88 = v90;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v73, v30, (__m128i *)&v88);
          }
          *(_QWORD *)&v74 = 0LL;
          BYTE8(v74) = 0;
          HIDWORD(v74) = 0;
          if ( (GetAppCompatFlags2(0x400u) & 0x8000000) != 0 )
          {
            v47 = *(_DWORD *)(*((_QWORD *)v73[0] + 10) + 312LL);
            if ( (v47 & 1) != 0 && (v47 & 9) != 9 )
            {
              memset(v82, 0, sizeof(v82));
              HIDWORD(v82[0]) = *(_DWORD *)(v19 + 56);
              LODWORD(v82[1]) = *(_DWORD *)(v19 + 60);
              LODWORD(v82[0]) = *(_DWORD *)(v19 + 96);
              v48 = *(_QWORD **)(v19 + 128);
              LODWORD(v82[3]) = 0;
              if ( v48 )
                v82[2] = *v48;
              else
                v82[2] = 0LL;
              SURFMEM::bCreateDIB((SURFMEM *)&v74, (struct _DEVBITMAPINFO *)v82, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( !(_QWORD)v74
                || ((v49 = (*(_DWORD *)(v19 + 112) & 0x400) == 0,
                     *(_QWORD *)&v88.right = *(_QWORD *)(v19 + 56),
                     *(_QWORD *)&v88.left = 0LL,
                     v76 = 0LL,
                     v49)
                  ? (v50 = EngCopyBits)
                  : (v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v23 + 2856)),
                    !((unsigned int (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, RECTL *, HDC *))v50)(
                       v74 + 24,
                       v19 + 24,
                       0LL,
                       0LL,
                       &v88,
                       &v76)
                 || (v51 = *(_DWORD *)(v74 + 96), (unsigned int)(v51 - 1) > 5)) )
              {
LABEL_114:
                SURFMEM::~SURFMEM((SURFMEM *)&v74);
LABEL_121:
                v14 = 0;
                goto LABEL_42;
              }
              qword_1C02D8CF0[v51]();
              v19 = v74;
            }
          }
          v77 = 0LL;
          v78 = 0;
          v79 = 0;
          if ( !v72.x )
            goto LABEL_35;
          memset(v83, 0, sizeof(v83));
          HIDWORD(v83[0]) = DWORD2(v87) - v87;
          LODWORD(v83[1]) = HIDWORD(v87) - DWORD1(v87);
          LODWORD(v83[0]) = *(_DWORD *)(v19 + 96);
          LODWORD(v83[3]) = *(_DWORD *)(v19 + 112) & 0x40000;
          v83[2] = 0LL;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v77, (struct _DEVBITMAPINFO *)v83, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            v52 = v77;
            v53 = *(_DWORD *)(v77 + 64);
            switch ( *(_DWORD *)(v19 + 96) )
            {
              case 1:
                v65 = *(unsigned int *)(v77 + 64);
                if ( NearestIndexFromColorref )
                  v66 = 255;
                else
                  v66 = 0;
                break;
              case 2:
                v65 = *(unsigned int *)(v77 + 64);
                v66 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
                break;
              case 3:
                v65 = *(unsigned int *)(v77 + 64);
                v66 = NearestIndexFromColorref;
                break;
              default:
                switch ( *(_DWORD *)(v19 + 96) )
                {
                  case 4:
                    v62 = v53 >> 1;
                    v63 = *(_WORD **)(v77 + 72);
                    if ( v62 )
                    {
                      for ( i = v62; i; --i )
                        *v63++ = NearestIndexFromColorref;
                    }
                    break;
                  case 5:
                    v57 = *(_BYTE **)(v77 + 80);
                    for ( j = &v57[*(_DWORD *)(v77 + 60) * *(_DWORD *)(v77 + 88)]; v57 != j; v57 += *(int *)(v52 + 88) )
                    {
                      v59 = v57;
                      v60 = (unsigned __int64)&v57[3 * *(_DWORD *)(v52 + 56) - 2];
                      if ( (unsigned __int64)v57 < v60 )
                      {
                        do
                        {
                          *v59 = NearestIndexFromColorref;
                          v61 = v59 + 1;
                          *v61++ = BYTE1(NearestIndexFromColorref);
                          *v61 = BYTE2(NearestIndexFromColorref);
                          v59 = v61 + 1;
                        }
                        while ( (unsigned __int64)v59 < v60 );
                        v52 = v77;
                      }
                    }
                    break;
                  case 6:
                    v54 = *(int **)(v77 + 72);
                    v55 = v53 >> 2;
                    if ( v55 )
                    {
                      for ( k = v55; k; --k )
                        *v54++ = NearestIndexFromColorref;
                    }
                    break;
                }
                goto LABEL_109;
            }
            memset(*(void **)(v77 + 72), v66, v65);
LABEL_109:
            `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
            v72.x = v95.x - 16 * v102;
            v72.y = v95.y - 16 * DWORD1(v102);
            pptfx = v72;
            v72.x = v96 - 16 * v102;
            v72.y = v97 - 16 * DWORD1(v102);
            v106 = v72;
            v72.x = v98 - 16 * v102;
            v72.y = v99 - 16 * DWORD1(v102);
            v107 = v72;
            if ( v77 )
              v67 = (SURFOBJ *)(v77 + 24);
            else
              v67 = 0LL;
            EngPlgBlt(v67, (SURFOBJ *)(v19 + 24), 0LL, 0LL, xloIdent, 0LL, 0LL, &pptfx, &prcl, 0LL, 3u);
            v19 = v77;
            prcl.right = DWORD2(v87) - v87;
            prcl.bottom = HIDWORD(v87) - DWORD1(v87);
            *(_QWORD *)&prcl.left = 0LL;
            `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))Scale_None);
LABEL_35:
            v31 = 0LL;
            v72 = 0LL;
            if ( *(_QWORD *)(v75[0] + 512LL) == *((_QWORD *)v73[0] + 64)
              || (inited = EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v72,
                             0LL,
                             0,
                             v27,
                             v17,
                             v28,
                             v18,
                             *(_DWORD *)(*((_QWORD *)v73[0] + 10) + 40LL),
                             *(_DWORD *)(*((_QWORD *)v73[0] + 10) + 32LL),
                             -1,
                             0),
                  v31 = v72,
                  inited) )
            {
              v33 = v81;
              ++*((_DWORD *)v81 + 23);
              if ( *((_QWORD *)v73[0] + 6) == *(_QWORD *)(v75[0] + 48LL)
                || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v73) && *(_QWORD *)(v68 + 3536) == v69 )
              {
                if ( (*((_DWORD *)v33 + 28) & 0x8000) != 0 )
                  v34 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, POINTFIX, __int128 *, RECTL *, int, _DWORD))(*((_QWORD *)v33 + 6) + 3296LL))(
                          (__int64)v33 + 24,
                          (v19 + 24) & -(__int64)(v19 != 0),
                          v89,
                          v31,
                          &v87,
                          &prcl,
                          NearestIndexFromColorref,
                          0);
                else
                  v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))EngTransparentBlt)(
                          (char *)v33 + 24,
                          (v19 + 24) & -(__int64)(v19 != 0),
                          v89,
                          v31,
                          &v87,
                          &prcl,
                          NearestIndexFromColorref,
                          0);
                v14 = v34;
              }
              else
              {
                EngSetLastError(0x57u);
                v14 = 0;
              }
            }
            else
            {
              EngSetLastError(6u);
              v14 = 0;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v72);
            SURFMEM::~SURFMEM((SURFMEM *)&v77);
            SURFMEM::~SURFMEM((SURFMEM *)&v74);
            goto LABEL_42;
          }
          EngSetLastError(8u);
          SURFMEM::~SURFMEM((SURFMEM *)&v77);
          goto LABEL_114;
        }
      }
LABEL_42:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v85);
      goto LABEL_43;
    }
LABEL_64:
    v25 = 1;
    goto LABEL_28;
  }
LABEL_43:
  `vector destructor iterator'(&v95, 8uLL, 4uLL, (void (*)(void *))Scale_None);
LABEL_44:
  if ( v75[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v75);
  if ( v73[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v73);
  return v14;
}
