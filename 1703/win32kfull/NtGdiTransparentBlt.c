/*
 * XREFs of NtGdiTransparentBlt @ 0x1C0126860
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C0250100 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071CC8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0093064 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00954C4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00F23E8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C01272AC (-bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ @ 0x1C01288E4 (-bRotationOrMirroring@EXFORMOBJ@@QEAAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0128CE4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0128D3C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02513F8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C026C840 (EngPlgBlt.c)
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
  int v11; // r12d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  HDC v18; // rdi
  __int64 v19; // r14
  __int64 v20; // r15
  HDC v21; // r13
  int v22; // r8d
  int v23; // esi
  int v24; // r8d
  __int64 v25; // rdi
  bool v26; // cc
  int v27; // eax
  int v28; // esi
  __int64 v29; // rbx
  __int64 v30; // rsi
  struct REGION *v31; // rax
  struct ECLIPOBJ *v32; // rdx
  POINTFIX v33; // r9
  int inited; // eax
  HDC v35; // rdi
  int v36; // eax
  unsigned int v37; // edi
  FIX x; // r8d
  FIX v40; // edi
  FIX y; // r9d
  FIX v42; // eax
  int v43; // r10d
  BOOL v44; // r8d
  BOOL v45; // r9d
  int v46; // eax
  __int64 v47; // r8
  int v48; // eax
  LONG v49; // ecx
  LONG v50; // edx
  _QWORD *v51; // rax
  bool v52; // zf
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v54; // edx
  HDC v55; // r9
  unsigned int v56; // edx
  int *v57; // rdi
  unsigned int v58; // edx
  __int64 k; // rcx
  _BYTE *v60; // r8
  _BYTE *j; // r11
  _BYTE *v62; // rdx
  unsigned __int64 v63; // rcx
  _BYTE *v64; // rdx
  unsigned int v65; // edx
  _WORD *v66; // rdi
  __int64 i; // rcx
  size_t v68; // r8
  int v69; // edx
  SURFOBJ *v70; // rcx
  ULONG v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // r8
  ULONG v74; // ecx
  int v75; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  int v77[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v78; // [rsp+70h] [rbp-90h] BYREF
  DC *v79[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v80[2]; // [rsp+90h] [rbp-70h] BYREF
  HDC v81; // [rsp+A0h] [rbp-60h]
  HDC v82; // [rsp+A8h] [rbp-58h] BYREF
  char v83; // [rsp+B0h] [rbp-50h]
  int v84; // [rsp+B4h] [rbp-4Ch]
  __int64 v85; // [rsp+B8h] [rbp-48h] BYREF
  int v86; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v87; // [rsp+C4h] [rbp-3Ch]
  _BYTE v88[20]; // [rsp+CCh] [rbp-34h] BYREF
  _QWORD v89[2]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v90[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v91; // [rsp+F8h] [rbp-8h]
  int v92; // [rsp+108h] [rbp+8h]
  int v93; // [rsp+10Ch] [rbp+Ch]
  _BYTE v94[16]; // [rsp+110h] [rbp+10h] BYREF
  HDC v95[22]; // [rsp+120h] [rbp+20h] BYREF
  RECTL prcl; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v97; // [rsp+1E0h] [rbp+E0h] BYREF
  RECTL v98; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v99[4]; // [rsp+200h] [rbp+100h] BYREF
  RECTL v100; // [rsp+204h] [rbp+104h] BYREF
  __int64 v101; // [rsp+250h] [rbp+150h]
  int v102; // [rsp+258h] [rbp+158h]
  int v103; // [rsp+280h] [rbp+180h]
  __int64 v104; // [rsp+290h] [rbp+190h]
  struct _POINTFIX v105; // [rsp+2A0h] [rbp+1A0h] BYREF
  FIX v106; // [rsp+2A8h] [rbp+1A8h]
  int v107; // [rsp+2ACh] [rbp+1ACh]
  int v108; // [rsp+2B0h] [rbp+1B0h]
  FIX v109; // [rsp+2B4h] [rbp+1B4h]
  FIX v110; // [rsp+2B8h] [rbp+1B8h]
  int v111; // [rsp+2BCh] [rbp+1BCh]
  __int128 v112; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v113; // [rsp+2D0h] [rbp+1D0h]
  int v114; // [rsp+2D4h] [rbp+1D4h]
  POINTFIX pptfx; // [rsp+2E0h] [rbp+1E0h] BYREF
  POINTFIX v116; // [rsp+2E8h] [rbp+1E8h]
  POINTFIX v117; // [rsp+2F0h] [rbp+1F0h]

  v11 = 0;
  v81 = a6;
  v77[0] = a8;
  if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v79, a1);
    DCOBJ::DCOBJ((DCOBJ *)v80, v81);
    if ( !v79[0]
      || (*((_DWORD *)v79[0] + 9) & 0x10000) != 0
      || !v80[0]
      || (bSpDwmValidateSurface((struct XDCOBJ *)v80, a7, v77[0], a9, a10),
          bSpDwmValidateSurface((struct XDCOBJ *)v79, a2, a3, a4, a5),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v89, (struct XDCOBJ *)v79, 516),
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v94, (struct XDCOBJ *)v80, 516),
          (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v94)) )
    {
      EngSetLastError(0x57u);
      goto LABEL_43;
    }
    prcl.left = a7;
    prcl.right = a9 + a7;
    prcl.top = v77[0];
    prcl.bottom = v77[0] + a10;
    EXFORMOBJ::bXform((EXFORMOBJ *)v94, (struct _POINTL *)&prcl);
    ERECTL::vOrder((ERECTL *)&prcl);
    `vector constructor iterator'(&v105, 8uLL, 4uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
    v77[0] = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v89);
    if ( v77[0] )
    {
      *(_QWORD *)&v112 = __PAIR64__(a3, a2);
      DWORD2(v112) = a4 + a2;
      v114 = a5 + a3;
      HIDWORD(v112) = a3;
      v113 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)v89, (struct _POINTL *)&v112, &v105, 3uLL);
      x = v105.x;
      v40 = v106;
      if ( (*(_BYTE *)(v89[0] + 32LL) & 1) != 0 )
      {
        if ( v105.x > v106 )
        {
          x = v105.x + 16;
          v40 = v106 + 16;
          v108 += 16;
          v105.x += 16;
          v106 += 16;
        }
        y = v105.y;
        v42 = v109;
        v43 = v107;
        if ( v105.y > v109 )
        {
          y = v105.y + 16;
          v43 = v107 + 16;
          v42 = v109 + 16;
          v105.y += 16;
          v109 += 16;
          v107 += 16;
        }
      }
      else
      {
        v42 = v109;
        v43 = v107;
        y = v105.y;
      }
      v110 = v40 + v108 - x;
      v111 = v42 + v43 - y;
      v44 = v40 > x == v40 > v110;
      v45 = v43 > y == v43 > v111;
      v46 = v44 ^ 3;
      if ( *(&v105.x + 2 * v44) <= *(&v105.x + 2 * (v44 ^ 3LL)) )
        v46 = v44;
      v47 = v46;
      LODWORD(v78) = (*(&v105.x + 2 * v46) + 15) >> 4;
      v48 = v45 ^ 3;
      if ( *(&v105.y + 2 * v45) <= *(&v105.y + 2 * (v45 ^ 3LL)) )
        v48 = v45;
      DWORD1(v78) = (*(&v105.y + 2 * v48) + 15) >> 4;
      DWORD2(v78) = (*(&v105.x + 2 * (v47 ^ 3)) + 15) >> 4;
      HIDWORD(v78) = (*(&v105.y + 2 * (v48 ^ 3LL)) + 15) >> 4;
      v97 = v78;
    }
    else
    {
      *(_QWORD *)&v78 = __PAIR64__(a3, a2);
      DWORD2(v78) = a4 + a2;
      HIDWORD(v78) = a5 + a3;
      v97 = v78;
      EXFORMOBJ::bXform((EXFORMOBJ *)v89, (struct _POINTL *)&v97);
      ERECTL::vOrder((ERECTL *)&v97);
    }
    if ( ERECTL::bEmpty((ERECTL *)&v97) )
    {
      v11 = 1;
      goto LABEL_42;
    }
    if ( (*((_DWORD *)v79[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v79, (struct ERECTL *)&v97);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v95);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v95, (struct XDCOBJ *)v79, (struct XDCOBJ *)v80) )
    {
      v75 = XDCOBJ::bFullScreen((XDCOBJ *)v80);
      v11 = XDCOBJ::bFullScreen((XDCOBJ *)v79) | v75;
      goto LABEL_41;
    }
    v18 = (HDC)*((_QWORD *)v79[0] + 64);
    v81 = v18;
    if ( !v18 || (v19 = *((_QWORD *)v18 + 16), v20 = *((_QWORD *)v79[0] + 12), (v21 = *(HDC *)(v80[0] + 512LL)) == 0LL) )
    {
      v11 = 1;
      goto LABEL_41;
    }
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v80[0] + 512LL), v15, v16, v17)
      || !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v18) )
    {
      v74 = 6;
      goto LABEL_125;
    }
    v23 = 0;
    v112 = v97;
    if ( !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&v97,
                          (struct _POINTL *)((char *)v79[0] + ((*((_BYTE *)v79[0] + 40) & 1) != 0 ? 1440LL : 1432LL)),
                          v22)
      || !(unsigned int)ERECTL::bOffsetAdd(
                          (ERECTL *)&prcl,
                          (struct _POINTL *)(((*(_BYTE *)(v80[0] + 40LL) & 1) != 0 ? 1440LL : 1432LL) + v80[0]),
                          v24) )
    {
      v23 = 1;
    }
    v25 = *((_QWORD *)v21 + 6);
    if ( *((_WORD *)v21 + 50) == 1 && v25 && (*(_DWORD *)(v25 + 32) & 0x20000) != 0 )
    {
      v49 = *(_DWORD *)(v25 + 2600);
      if ( prcl.left >= v49 )
      {
        v50 = *(_DWORD *)(v25 + 2604);
        if ( prcl.top >= v50 && prcl.right <= *((_DWORD *)v21 + 14) + v49 )
        {
          v26 = prcl.bottom <= v50 + *((_DWORD *)v21 + 15);
LABEL_26:
          v27 = 0;
          if ( v26 )
            goto LABEL_27;
        }
      }
    }
    else if ( prcl.left >= 0 && prcl.top >= 0 && prcl.right <= *((_DWORD *)v21 + 14) )
    {
      v26 = prcl.bottom <= *((_DWORD *)v21 + 15);
      goto LABEL_26;
    }
    v27 = 1;
LABEL_27:
    v28 = v27 | v23;
    if ( v21 == v81 )
    {
      v98 = prcl;
      ERECTL::operator*=(&v98, &v97);
      if ( !ERECTL::bEmpty((ERECTL *)&v98) )
        v28 = 1;
    }
    if ( !v28 )
    {
      v29 = *((_QWORD *)v21 + 16);
      v30 = *(_QWORD *)(v80[0] + 96LL);
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v29, v30, a11, 1LL);
      v31 = XDCOBJ::prgnEffRao(v79);
      v101 = 0LL;
      v102 = 0;
      v103 = 1;
      v104 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v99, v31, (struct ERECTL *)&v97, 0);
      if ( ERECTL::bEmpty((ERECTL *)&v100) )
      {
        v37 = 1;
LABEL_117:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v95);
        `vector destructor iterator'(&v105, 8uLL, 4uLL, (void (*)(void *))Scale_None);
        goto LABEL_44;
      }
      if ( (*((_DWORD *)v79[0] + 9) & 0xE0) != 0 )
      {
        v98 = v100;
        XDCOBJ::vAccumulateTight((XDCOBJ *)v79, v32, (__m128i *)&v98);
      }
      *(_QWORD *)&v78 = 0LL;
      BYTE8(v78) = 0;
      HIDWORD(v78) = 0;
      if ( (GetAppCompatFlags2(0x400u) & 0x8000000) != 0
        && (*(_DWORD *)(*((_QWORD *)v79[0] + 10) + 312LL) & 9) != 9
        && (*(_DWORD *)(*((_QWORD *)v79[0] + 10) + 312LL) & 1) != 0 )
      {
        v87 = 0LL;
        memset(v88, 0, sizeof(v88));
        v87 = *((_QWORD *)v21 + 7);
        v86 = *((_DWORD *)v21 + 24);
        v51 = (_QWORD *)*((_QWORD *)v21 + 16);
        if ( v51 )
          *(_QWORD *)&v88[4] = *v51;
        else
          *(_QWORD *)&v88[4] = 0LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v78, (struct _DEVBITMAPINFO *)&v86, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !(_QWORD)v78
          || ((v52 = ((_DWORD)v21[28] & 0x400) == 0,
               *(_QWORD *)&v98.right = *((_QWORD *)v21 + 7),
               *(_QWORD *)&v98.left = 0LL,
               v85 = 0LL,
               v52)
            ? (v53 = EngCopyBits)
            : (v53 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v25 + 2856)),
              !((unsigned int (__fastcall *)(_QWORD, HDC, _QWORD, _QWORD, RECTL *, __int64 *))v53)(
                 v78 + 24,
                 v21 + 6,
                 0LL,
                 0LL,
                 &v98,
                 &v85)
           || (v54 = *(_DWORD *)(v78 + 96), (unsigned int)(v54 - 1) > 5)) )
        {
LABEL_116:
          SURFMEM::~SURFMEM((SURFMEM *)&v78);
          v37 = 0;
          goto LABEL_117;
        }
        qword_1C02DED10[v54]();
        v21 = (HDC)v78;
      }
      v82 = 0LL;
      v83 = 0;
      v84 = 0;
      if ( !v77[0] )
        goto LABEL_34;
      v92 = 0;
      v93 = 0;
      v90[1] = DWORD2(v97) - v97;
      v91 = (unsigned int)(HIDWORD(v97) - DWORD1(v97));
      v90[0] = (_DWORD)v21[24];
      v92 = (_DWORD)v21[28] & 0x40000;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v82, (struct _DEVBITMAPINFO *)v90, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v55 = v82;
        v56 = *((_DWORD *)v82 + 16);
        switch ( *((_DWORD *)v21 + 24) )
        {
          case 1:
            v68 = *((unsigned int *)v82 + 16);
            if ( NearestIndexFromColorref )
              v69 = 255;
            else
              v69 = 0;
            break;
          case 2:
            v68 = *((unsigned int *)v82 + 16);
            v69 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
            break;
          case 3:
            v68 = *((unsigned int *)v82 + 16);
            v69 = NearestIndexFromColorref;
            break;
          default:
            switch ( *((_DWORD *)v21 + 24) )
            {
              case 4:
                v65 = v56 >> 1;
                v66 = (_WORD *)*((_QWORD *)v82 + 9);
                if ( v65 )
                {
                  for ( i = v65; i; --i )
                    *v66++ = NearestIndexFromColorref;
                }
                break;
              case 5:
                v60 = (_BYTE *)*((_QWORD *)v82 + 10);
                for ( j = &v60[*((_DWORD *)v82 + 15) * *((_DWORD *)v82 + 22)]; v60 != j; v60 += *((int *)v55 + 22) )
                {
                  v62 = v60;
                  v63 = (unsigned __int64)&v60[3 * *((_DWORD *)v55 + 14) - 2];
                  if ( (unsigned __int64)v60 < v63 )
                  {
                    do
                    {
                      *v62 = NearestIndexFromColorref;
                      v64 = v62 + 1;
                      *v64++ = BYTE1(NearestIndexFromColorref);
                      *v64 = BYTE2(NearestIndexFromColorref);
                      v62 = v64 + 1;
                    }
                    while ( (unsigned __int64)v62 < v63 );
                    v55 = v82;
                  }
                }
                break;
              case 6:
                v57 = (int *)*((_QWORD *)v82 + 9);
                v58 = v56 >> 2;
                if ( v58 )
                {
                  for ( k = v58; k; --k )
                    *v57++ = NearestIndexFromColorref;
                }
                break;
            }
            goto LABEL_111;
        }
        memset(*((void **)v82 + 9), v69, v68);
LABEL_111:
        `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
        v77[0] = v105.x - 16 * v112;
        v77[1] = v105.y - 16 * DWORD1(v112);
        pptfx = *(POINTFIX *)v77;
        v77[0] = v106 - 16 * v112;
        v77[1] = v107 - 16 * DWORD1(v112);
        v116 = *(POINTFIX *)v77;
        v77[0] = v108 - 16 * v112;
        v77[1] = v109 - 16 * DWORD1(v112);
        v117 = *(POINTFIX *)v77;
        if ( v82 )
          v70 = (SURFOBJ *)(v82 + 6);
        else
          v70 = 0LL;
        EngPlgBlt(v70, (SURFOBJ *)(v21 + 6), 0LL, 0LL, xloIdent, 0LL, 0LL, &pptfx, &prcl, 0LL, 3u);
        v21 = v82;
        prcl.right = DWORD2(v97) - v97;
        prcl.bottom = HIDWORD(v97) - DWORD1(v97);
        *(_QWORD *)&prcl.left = 0LL;
        `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))Scale_None);
LABEL_34:
        v33 = 0LL;
        *(_QWORD *)v77 = 0LL;
        if ( *(_QWORD *)(v80[0] + 512LL) == *((_QWORD *)v79[0] + 64)
          || (inited = EXLATEOBJ::bInitXlateObj(
                         (__int64 *)v77,
                         0LL,
                         0,
                         v29,
                         v19,
                         v30,
                         v20,
                         *(_DWORD *)(*((_QWORD *)v79[0] + 10) + 40LL),
                         *(_DWORD *)(*((_QWORD *)v79[0] + 10) + 32LL),
                         -1,
                         0),
              v33 = *(POINTFIX *)v77,
              inited) )
        {
          v35 = v81;
          ++*((_DWORD *)v81 + 23);
          if ( *((_QWORD *)v79[0] + 6) == *(_QWORD *)(v80[0] + 48LL)
            || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v79) && *(_QWORD *)(v72 + 3536) == v73 )
          {
            if ( ((_DWORD)v35[28] & 0x8000) != 0 )
              v36 = (*(__int64 (__fastcall **)(HDC, unsigned __int64, _BYTE *, POINTFIX, __int128 *, RECTL *, int, _DWORD))(*((_QWORD *)v35 + 6) + 3296LL))(
                      v35 + 6,
                      (unsigned __int64)(v21 + 6) & -(__int64)(v21 != 0LL),
                      v99,
                      v33,
                      &v97,
                      &prcl,
                      NearestIndexFromColorref,
                      0);
            else
              v36 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))EngTransparentBlt)(
                      v35 + 6,
                      (unsigned __int64)(v21 + 6) & -(__int64)(v21 != 0LL),
                      v99,
                      v33,
                      &v97,
                      &prcl,
                      NearestIndexFromColorref,
                      0);
            v11 = v36;
            goto LABEL_40;
          }
          v71 = 87;
        }
        else
        {
          v71 = 6;
        }
        EngSetLastError(v71);
LABEL_40:
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v77);
        SURFMEM::~SURFMEM((SURFMEM *)&v82);
        SURFMEM::~SURFMEM((SURFMEM *)&v78);
LABEL_41:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v95);
LABEL_42:
        `vector destructor iterator'(&v105, 8uLL, 4uLL, (void (*)(void *))Scale_None);
LABEL_43:
        v37 = v11;
LABEL_44:
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v80);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v79);
        return v37;
      }
      EngSetLastError(8u);
      SURFMEM::~SURFMEM((SURFMEM *)&v82);
      goto LABEL_116;
    }
    v74 = 87;
LABEL_125:
    EngSetLastError(v74);
    goto LABEL_41;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
