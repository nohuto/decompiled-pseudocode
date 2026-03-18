/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C0016100
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C0099BE0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreSetDIBitsInternal @ 0x1C0114550 (GreSetDIBitsInternal.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026340 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027C7C (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027FF8 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C009BC28 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C012CCD4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C01453A4 (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0295BAC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C0295C6C (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C0297E04 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C0299064 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        unsigned int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        __int64 a10,
        struct tagRGBQUAD *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  unsigned int v18; // edi
  int v19; // ebx
  __int64 v20; // rdi
  unsigned int v21; // edi
  __int64 v22; // rsi
  __int64 v23; // r12
  int v24; // r8d
  unsigned int v25; // ecx
  __int64 v26; // rbx
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // r14d
  unsigned int v33; // r12d
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  ULONG v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned __int64 v39; // rcx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  int v42; // eax
  unsigned __int64 v43; // rcx
  unsigned int v44; // edx
  unsigned int v45; // ecx
  __int64 v46; // rbx
  unsigned int v47; // edx
  __int64 v48; // rsi
  DC *v49; // rcx
  int v50; // edi
  LONG v51; // r8d
  LONG v52; // edx
  LONG v53; // ecx
  int v54; // eax
  __int64 v55; // r15
  struct _POINTL v56; // rax
  struct PALETTE *v57; // rbx
  __int64 v58; // rdi
  int v59; // r13d
  int v60; // eax
  bool v61; // zf
  HDC v62; // r14
  int v63; // ebx
  __int64 v64; // r8
  unsigned int v65; // r8d
  HDC XlateObject; // rax
  __int64 v67; // rcx
  __int64 v68; // r9
  __int64 v69; // r11
  LONG left; // esi
  int top; // edi
  __int64 v72; // rbx
  struct REGION *v73; // rax
  struct ECLIPOBJ *v74; // rdx
  struct _SURFOBJ *v75; // rdx
  BOOL (__stdcall *v76)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v77; // rdx
  LONG v78; // esi
  int v79; // edi
  int v80; // r13d
  LONG v81; // r14d
  DC *v82; // r10
  DC *v83; // r10
  struct REGION *v84; // rax
  struct ECLIPOBJ *v85; // rdx
  struct _SURFOBJ *v86; // rdx
  BOOL (__stdcall *v87)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v88; // rdx
  int v91; // [rsp+60h] [rbp-A0h]
  unsigned int v92; // [rsp+64h] [rbp-9Ch]
  unsigned int v93; // [rsp+68h] [rbp-98h]
  HDC v94; // [rsp+70h] [rbp-90h]
  DC *v95; // [rsp+78h] [rbp-88h] BYREF
  __int64 v96; // [rsp+80h] [rbp-80h]
  int v97; // [rsp+88h] [rbp-78h]
  unsigned int v98; // [rsp+8Ch] [rbp-74h]
  int v99; // [rsp+90h] [rbp-70h]
  unsigned int v100; // [rsp+94h] [rbp-6Ch]
  struct _POINTL v101; // [rsp+98h] [rbp-68h] BYREF
  HDC v102; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v103; // [rsp+A8h] [rbp-58h]
  _QWORD v104[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v105; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-38h]
  __int64 v107; // [rsp+D0h] [rbp-30h]
  __int64 v108; // [rsp+D8h] [rbp-28h]
  unsigned int v109; // [rsp+E0h] [rbp-20h]
  unsigned int v110; // [rsp+E4h] [rbp-1Ch]
  unsigned int v111; // [rsp+E8h] [rbp-18h]
  int v112; // [rsp+ECh] [rbp-14h]
  int v113; // [rsp+F0h] [rbp-10h]
  struct tagRGBQUAD *v114; // [rsp+F8h] [rbp-8h]
  struct _POINTL v115[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v116; // [rsp+110h] [rbp+10h] BYREF
  char v117; // [rsp+118h] [rbp+18h]
  int v118; // [rsp+11Ch] [rbp+1Ch]
  _BYTE v119[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v120; // [rsp+140h] [rbp+40h]
  __int64 v121; // [rsp+148h] [rbp+48h]
  struct _RECTL v122; // [rsp+170h] [rbp+70h] BYREF
  struct _RECTL v123; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v124[4]; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v125; // [rsp+194h] [rbp+94h] BYREF
  __int64 v126; // [rsp+1E0h] [rbp+E0h]
  int v127; // [rsp+1E8h] [rbp+E8h]
  int v128; // [rsp+210h] [rbp+110h]
  __int64 v129; // [rsp+220h] [rbp+120h]
  unsigned int v130; // [rsp+2E8h] [rbp+1E8h]

  v112 = a5;
  v18 = a4;
  v102 = a1;
  LOBYTE(v19) = -1;
  v115[0] = (struct _POINTL)a16;
  v98 = a4;
  *(_QWORD *)&v123.left = a10;
  v95 = 0LL;
  v96 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v95, a1);
  if ( v95 )
  {
    v19 = *(_DWORD *)(*((_QWORD *)v95 + 10) + 312LL);
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v95);
    v101.x = 0;
    v20 = *(_QWORD *)v95;
    HmgDecrementExclusiveReferenceCountEx(v95, HIDWORD(v96), &v101);
    if ( v101.x )
      bDeleteDCInternalEx(v20, 0LL);
    v18 = v98;
  }
  if ( (v19 & 1) != 0 )
    a2 = v18 + a2 - 1;
  if ( !a11 )
    goto LABEL_224;
  if ( !a10 )
    goto LABEL_224;
  v21 = a12;
  if ( a12 > 2 )
    goto LABEL_224;
  if ( a14 < 0x28 )
    goto LABEL_224;
  v22 = (__int64)*a11;
  if ( (unsigned int)v22 < 0x28 )
    goto LABEL_224;
  v23 = (unsigned int)a11[1];
  v113 = v23;
  if ( (int)v23 <= 0 )
    goto LABEL_224;
  v24 = (int)a11[2];
  v97 = v24;
  if ( !v24 )
    goto LABEL_224;
  v25 = (unsigned int)a11[8];
  v26 = *(unsigned __int16 *)&a11[3].rgbRed;
  v108 = 0LL;
  v100 = v25;
  v105 = 0LL;
  v106 = 0LL;
  v27 = (unsigned int)a11[4];
  v103 = v27;
  v114 = (struct tagRGBQUAD *)((char *)a11 + v22);
  v107 = 0LL;
  if ( v24 < 0 )
  {
    LODWORD(v108) = 1;
    if ( v27 > 0xC )
      goto LABEL_224;
    v28 = 7225;
    if ( !_bittest(&v28, v27) )
      goto LABEL_224;
    v24 = -v24;
    v97 = v24;
  }
  v101.x = 0;
  if ( v27 == 3 )
  {
    if ( a14 < 0x34 )
      goto LABEL_224;
    v29 = 0;
    if ( a12 != 1 )
      v29 = a12;
    a12 = v29;
    v21 = v29;
    if ( (_DWORD)v26 == 16 )
    {
      LODWORD(v105) = 4;
    }
    else
    {
      if ( (_DWORD)v26 != 32 )
        goto LABEL_224;
      LODWORD(v105) = 6;
    }
    v111 = (unsigned int)a11[10];
    v110 = (unsigned int)a11[11];
    v30 = -1;
    v31 = (unsigned int)a11[12];
    v114 = a11 + 10;
    v32 = 2;
    if ( (unsigned __int64)(v26 * v23) <= 0xFFFFFFFF )
      v30 = v26 * v23;
    v109 = v31;
    v92 = 0;
    v93 = 512;
    if ( (unsigned __int64)(v26 * v23) > 0xFFFFFFFF || v30 + 31 < v30 )
      goto LABEL_33;
    v33 = a9;
    v34 = -1;
    v35 = a9 * (((unsigned __int64)(v30 + 31) >> 3) & 0x1FFFFFFC);
    if ( v35 <= 0xFFFFFFFF )
      v34 = a9 * (((v30 + 31) >> 3) & 0x1FFFFFFC);
    HIDWORD(v106) = v34;
    if ( v35 > 0xFFFFFFFF )
    {
LABEL_33:
      v36 = 534;
LABEL_225:
      EngSetLastError(v36);
      return 0LL;
    }
    goto LABEL_55;
  }
  if ( !v27 )
  {
    switch ( (_DWORD)v26 )
    {
      case 1:
        LODWORD(v105) = 1;
        v92 = 2;
        break;
      case 4:
        v92 = 16;
        LODWORD(v105) = 2;
        break;
      case 8:
        LODWORD(v105) = 3;
        v92 = 256;
        break;
      default:
        v92 = 0;
        v37 = 0;
        if ( a12 != 1 )
          v37 = a12;
        v93 = 512;
        a12 = v37;
        v21 = v37;
        switch ( (_DWORD)v26 )
        {
          case 0x10:
            LODWORD(v105) = 4;
            v32 = 2;
            v111 = 31744;
            v110 = 992;
            v109 = 31;
            a12 = v37;
            break;
          case 0x18:
            LODWORD(v105) = 5;
            v32 = 8;
            a12 = v37;
            break;
          case 0x20:
            LODWORD(v105) = 6;
            v32 = 8;
            break;
          default:
            goto LABEL_224;
        }
        goto LABEL_50;
    }
    v32 = 1;
    v93 = 1024;
LABEL_50:
    v38 = v26 * v23;
    if ( (unsigned __int64)(v26 * v23) > 0xFFFFFFFF || v38 + 31 < v38 )
      goto LABEL_33;
    v33 = a9;
    v34 = -1;
    v39 = a9 * (((unsigned __int64)(v38 + 31) >> 3) & 0x1FFFFFFC);
    if ( v39 <= 0xFFFFFFFF )
      v34 = v39;
    HIDWORD(v106) = v34;
    if ( v39 > 0xFFFFFFFF )
      goto LABEL_33;
LABEL_55:
    v40 = v92;
    v99 = a8;
    goto LABEL_97;
  }
  if ( v27 != 10 )
  {
    if ( v27 != 2 )
    {
      if ( v27 != 12 )
      {
        if ( v27 != 1 )
        {
          if ( v27 != 11 )
          {
            if ( v27 == 4 )
            {
              LODWORD(v105) = 9;
            }
            else
            {
              if ( v27 != 5 )
                goto LABEL_224;
              LODWORD(v105) = 10;
            }
            v33 = a9;
            v93 = 512;
            v40 = 0;
            v32 = 8;
            goto LABEL_96;
          }
          DCOBJ::DCOBJ((DCOBJ *)&v95, a1);
          if ( !v95 || !(unsigned int)DC::bIsCMYKColor(v95) )
            goto LABEL_75;
          DCOBJ::~DCOBJ((DCOBJ *)&v95);
          v24 = v97;
        }
        if ( (_DWORD)v26 != 8 )
          goto LABEL_224;
        LODWORD(v105) = 8;
        v40 = 256;
LABEL_95:
        v32 = 1;
        v93 = 1024;
        v101.x = 1;
        v33 = v24;
LABEL_96:
        v34 = (unsigned int)a11[5];
        HIDWORD(v106) = v34;
        v99 = 0;
        v92 = v40;
LABEL_97:
        v130 = a14 - v22;
        if ( v100 )
        {
          v44 = v40;
          if ( v100 <= v40 )
            v44 = v100;
          v100 = v44;
        }
        else
        {
          v100 = v40;
        }
        if ( a13 >= v34 )
        {
          v45 = v24;
          HIDWORD(v105) = v113;
          v104[0] = 0LL;
          v104[1] = 0LL;
          if ( v103 - 4 > 1 )
            v45 = v33;
          LODWORD(v106) = v45;
          XDCOBJ::vLock((XDCOBJ *)v104, v102);
          v46 = v104[0];
          if ( !v104[0] || (*(_DWORD *)(v104[0] + 36LL) & 0x10000) != 0 )
          {
            EngSetLastError(0x57u);
            v33 = 0;
          }
          else
          {
            v47 = (unsigned int)a11[4];
            v48 = *(_QWORD *)(v104[0] + 48LL);
            v102 = (HDC)__PAIR64__(a3, a2);
            if ( v47 - 4 <= 1
              && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v104, v47) || v21 || *(_QWORD *)v115) )
            {
              v33 = 0;
            }
            if ( a15 )
            {
              LODWORD(v96) = *(_DWORD *)(*(_QWORD *)(v46 + 80) + 68LL);
              HIDWORD(v96) = *(_DWORD *)(*(_QWORD *)(v46 + 80) + 312LL) & 1;
              if ( (*(_DWORD *)(*(_QWORD *)(v46 + 80) + 352LL) & 0x1E000) != 0 )
              {
                EXFORMOBJ::vInit((EXFORMOBJ *)&v95, (struct XDCOBJ *)v104, 0x204u, 0);
                v49 = v95;
                v46 = v104[0];
              }
              else
              {
                v49 = (DC *)(v46 + 336);
                v95 = (DC *)(v46 + 336);
              }
              v50 = *((_DWORD *)v49 + 8);
              if ( (*((_BYTE *)v49 + 32) & 0x43) != 0x43 )
              {
                bCvtPts1((unsigned __int64)v49, &v102, 1LL);
                a2 = (int)v102;
                a3 = HIDWORD(v102);
              }
              if ( v33 && (unsigned int)(*(_DWORD *)&a11[4] - 4) <= 1 && (v50 & 1) == 0 )
                v33 = 0;
            }
            v51 = a2;
            v52 = a3;
            v53 = a2 + v98;
            v54 = a3 + v112;
            v122.left = a2;
            v122.top = a3;
            v122.right = a2 + v98;
            v122.bottom = a3 + v112;
            if ( a2 > (int)(a2 + v98) )
            {
              v51 = a2 + v98;
              v122.left = a2 + v98;
              v53 = a2;
              v122.right = a2;
            }
            if ( a3 > v54 )
            {
              v52 = a3 + v112;
              v122.top = a3 + v112;
              v54 = a3;
              v122.bottom = a3;
            }
            if ( v51 != v53 && v52 != v54 && v33 )
            {
              if ( (*(_DWORD *)(v46 + 36) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)v104, (struct ERECTL *)&v122);
              v120 = 0LL;
              v121 = 0LL;
              DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v119, (struct XDCOBJ *)v104, 0);
              v55 = *(_QWORD *)(v104[0] + 512LL);
              if ( !v55 )
                goto LABEL_221;
              v56 = v115[0];
              if ( !*(_QWORD *)v115 )
              {
                v56 = *(struct _POINTL *)(*(_QWORD *)(v104[0] + 80LL) + 112LL);
                v115[0] = v56;
              }
              v98 = *(_DWORD *)(v104[0] + 112LL);
              if ( (v98 & 0x10000000) != 0 && (!*(_QWORD *)&v56 || v103 - 10 > 2) )
                v98 = v98 & 0xFFFFFFF | 0x20000000;
              LODWORD(v96) = 0;
              v95 = 0LL;
              v57 = *(struct PALETTE **)(v104[0] + 96LL);
              v58 = *(_QWORD *)(v55 + 128);
              if ( v57 != ppalDefault )
                *(_QWORD *)(v55 + 176) = *(_QWORD *)v57;
              v91 = 0;
              v94 = 0LL;
              v102 = 0LL;
              v59 = 1;
              if ( a12 )
              {
                if ( a12 != 1 )
                {
                  v60 = *(_DWORD *)(v55 + 96);
                  if ( v60 != (_DWORD)v105 )
                  {
                    if ( v60 == 2 )
                    {
                      v61 = (_DWORD)v105 == 7;
                    }
                    else
                    {
                      if ( v60 != 3 )
                      {
LABEL_148:
                        EngSetLastError(0x57u);
LABEL_149:
                        v59 = 0;
                        v62 = 0LL;
                        v63 = 0;
                        goto LABEL_173;
                      }
                      v61 = (_DWORD)v105 == 8;
                    }
                    if ( !v61 )
                      goto LABEL_148;
                  }
                  v62 = (HDC)xloIdent;
                  v94 = (HDC)xloIdent;
                  goto LABEL_172;
                }
                if ( v130 >= 2 * (unsigned __int64)v100 )
                {
                  if ( !(unsigned int)EXLATEOBJ::bMakeXlate(&v102, v114, v57, v55, v100, v92) )
                  {
                    v59 = 0;
                    v62 = 0LL;
                    v63 = 0;
                    goto LABEL_173;
                  }
                  v94 = v102;
                  if ( gbMultiMonMismatchColor && (*(_DWORD *)(v48 + 32) & 1) != 0 )
                  {
                    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v95, v32, v92, 0LL, v111, v110, v109, v93, 1) )
                    {
                      v64 = *(_QWORD *)(v55 + 128);
                      if ( !v64 )
                        v64 = *(_QWORD *)(v48 + 1824);
                      XEPALOBJ::vGetEntriesFrom(&v95, v57, v64, v114, v100);
                      v62 = v94;
                      v63 = 1;
                      v91 = 1;
                      goto LABEL_173;
                    }
                    v62 = v94;
                  }
                  else
                  {
                    v62 = v102;
                  }
                  goto LABEL_172;
                }
LABEL_152:
                EngSetLastError(0x57u);
                v59 = 0;
                v62 = 0LL;
                v63 = 0;
                goto LABEL_173;
              }
              if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v95, v32, v92, 0LL, v111, v110, v109, v93, 1) )
                goto LABEL_149;
              if ( v100 )
              {
                if ( v130 < 4 * v100 )
                  goto LABEL_152;
                if ( v103 - 10 <= 2 )
                  XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v95, (unsigned int *)&v114->rgbBlue, v65, v100);
                else
                  XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v95, v114, 0, v100);
              }
              XlateObject = (HDC)CreateXlateObject(*(_QWORD *)v115, v98, v95, v58, v57, v57, 0, 0, 0xFFFFFF, 0);
              v102 = XlateObject;
              if ( !XlateObject )
              {
                v59 = 0;
                v62 = 0LL;
                v63 = 0;
                goto LABEL_173;
              }
              v62 = XlateObject;
              v94 = XlateObject;
LABEL_172:
              v63 = 0;
LABEL_173:
              v116 = 0LL;
              v117 = 0;
              v118 = 0;
              SURFMEM::bCreateDIB(
                (SURFMEM *)&v116,
                (struct _DEVBITMAPINFO *)&v105,
                *(void **)&v123.left,
                0LL,
                0,
                0LL,
                0LL,
                0,
                1,
                0,
                0);
              if ( v59 && v116 )
              {
                *(_DWORD *)(v116 + 92) = 0;
                if ( (v119[24] & 1) != 0 )
                {
                  v67 = v104[0] + 8LL * (*(_DWORD *)(v104[0] + 40LL) & 1);
                  v68 = *(int *)(v67 + 1432);
                  if ( (unsigned __int64)(v68 + v122.left + 0x80000000LL) <= 0xFFFFFFFF
                    && (unsigned __int64)(v68 + v122.right + 0x80000000LL) <= 0xFFFFFFFF )
                  {
                    v69 = *(int *)(v67 + 1436);
                    if ( (unsigned __int64)(v69 + v122.top + 0x80000000LL) <= 0xFFFFFFFF
                      && (unsigned __int64)(v69 + v122.bottom + 0x80000000LL) <= 0xFFFFFFFF )
                    {
                      left = v68 + v122.left;
                      v122.left += v68;
                      v122.right += *(_DWORD *)(v67 + 1432);
                      top = *(_DWORD *)(v67 + 1436) + v122.top;
                      v122.top = top;
                      v122.bottom += *(_DWORD *)(v67 + 1436);
                      if ( v63 )
                      {
                        *(_QWORD *)(v116 + 128) = v95;
                        top = v122.top;
                        left = v122.left;
                      }
                      v72 = *(_QWORD *)(v55 + 48);
                      if ( v101.x )
                      {
                        v115[0].x = a6;
                        v115[0].y = v97 - v112 - a7;
                        v73 = XDCOBJ::prgnEffRao((XDCOBJ *)v104);
                        v126 = 0LL;
                        v127 = 0;
                        v128 = 1;
                        v129 = 0LL;
                        XCLIPOBJ::vSetup((XCLIPOBJ *)v124, v73, (struct ERECTL *)&v122, 0);
                        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v125) )
                        {
                          if ( (*(_DWORD *)(v104[0] + 36LL) & 0xE0) != 0 )
                          {
                            v123 = v125;
                            XDCOBJ::vAccumulateTight((XDCOBJ *)v104, v74, (struct ERECTL *)&v123);
                          }
                          ++*(_DWORD *)(v55 + 92);
                          v75 = 0LL;
                          if ( v116 )
                            v75 = (struct _SURFOBJ *)(v116 + 24);
                          if ( bClipRectsToSurfaces((struct _SURFOBJ *)(v55 + 24), v75, &v122, v115) )
                          {
                            if ( (*(_DWORD *)(v55 + 112) & 0x400) != 0 )
                              v76 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v72 + 2856);
                            else
                              v76 = EngCopyBits;
                            v77 = 0LL;
                            if ( v116 )
                              v77 = v116 + 24;
                            ((void (__fastcall *)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, struct _POINTL *))v76)(
                              v55 + 24,
                              v77,
                              v124,
                              v62,
                              &v122,
                              v115);
                          }
                        }
                      }
                      else
                      {
                        v78 = left - a6;
                        v79 = top - (v97 - v112 - a7);
                        v80 = v99;
                        v101.x = a6;
                        v81 = v97 - v99 - v33;
                        v101.y = v97 - v112 - a7;
                        v123.left = v78;
                        v123.right = v78 + v113;
                        v123.bottom = v79 + v97 - v99;
                        v123.top = v79 + v81;
                        ERECTL::operator*=(&v123, &v122);
                        if ( v123.left != v123.right && v123.top != v123.bottom )
                        {
                          v84 = DC::prgnRao(v82) ? DC::prgnRao(v83) : DC::prgnVisSnap(v83);
                          v128 = 1;
                          v126 = 0LL;
                          v127 = 0;
                          v129 = 0LL;
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v124, v84, (struct ERECTL *)&v123, 0);
                          if ( v125.left != v125.right && v125.top != v125.bottom )
                          {
                            v123 = v125;
                            if ( (*(_DWORD *)(v104[0] + 36LL) & 0xE0) != 0 )
                            {
                              *(struct _RECTL *)&v115[0].x = v125;
                              XDCOBJ::vAccumulateTight((XDCOBJ *)v104, v85, (struct ERECTL *)v115);
                            }
                            v101.x = v123.left - v78;
                            if ( v103 - 4 <= 1 )
                              v101.y = v81;
                            else
                              v101.y = v33 + v80 - v97 + v123.top - v79;
                            ++*(_DWORD *)(v55 + 92);
                            v86 = 0LL;
                            if ( v116 )
                              v86 = (struct _SURFOBJ *)(v116 + 24);
                            if ( bClipRectsToSurfaces((struct _SURFOBJ *)(v55 + 24), v86, &v123, &v101) )
                            {
                              if ( (*(_DWORD *)(v55 + 112) & 0x400) != 0 )
                                v87 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v72 + 2856);
                              else
                                v87 = EngCopyBits;
                              v88 = 0LL;
                              if ( v116 )
                                v88 = v116 + 24;
                              if ( !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, struct _POINTL *))v87)(
                                      v55 + 24,
                                      v88,
                                      v124,
                                      v94,
                                      &v123,
                                      &v101) )
                                v33 = 0;
                            }
                          }
                        }
                      }
                      if ( v91 )
                        *(_QWORD *)(v116 + 128) = 0LL;
                    }
                  }
                }
              }
              else
              {
                v33 = 0;
              }
              SURFMEM::~SURFMEM((SURFMEM *)&v116);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v102);
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v95);
LABEL_221:
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v119);
              DCOBJ::~DCOBJ((DCOBJ *)v104);
              return v33;
            }
          }
          DCOBJ::~DCOBJ((DCOBJ *)v104);
          return v33;
        }
LABEL_224:
        v36 = 87;
        goto LABEL_225;
      }
      DCOBJ::DCOBJ((DCOBJ *)&v95, a1);
      if ( !v95 || !(unsigned int)DC::bIsCMYKColor(v95) )
        goto LABEL_75;
      DCOBJ::~DCOBJ((DCOBJ *)&v95);
      v24 = v97;
    }
    if ( (_DWORD)v26 != 4 )
      goto LABEL_224;
    LODWORD(v105) = 7;
    v40 = 16;
    goto LABEL_95;
  }
  DCOBJ::DCOBJ((DCOBJ *)&v95, a1);
  if ( !v95 || !(unsigned int)DC::bIsCMYKColor(v95) )
    goto LABEL_75;
  switch ( (_DWORD)v26 )
  {
    case 1:
      LODWORD(v105) = 1;
      v92 = 2;
      goto LABEL_67;
    case 4:
      v92 = 16;
      LODWORD(v105) = 2;
      goto LABEL_67;
    case 8:
      LODWORD(v105) = 3;
      v92 = 256;
LABEL_67:
      v32 = 1;
      v93 = 1024;
      goto LABEL_68;
  }
  if ( (_DWORD)v26 != 32 )
  {
LABEL_75:
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)&v95);
    return 0LL;
  }
  LODWORD(v105) = 6;
  v92 = 0;
  v93 = 512;
  v32 = 16;
LABEL_68:
  v41 = v26 * v23;
  if ( (unsigned __int64)(v26 * v23) <= 0xFFFFFFFF && v41 + 31 >= v41 )
  {
    v33 = a9;
    v42 = -1;
    v43 = a9 * (((unsigned __int64)(v41 + 31) >> 3) & 0x1FFFFFFC);
    if ( v43 <= 0xFFFFFFFF )
      v42 = v43;
    HIDWORD(v106) = v42;
    if ( v43 <= 0xFFFFFFFF )
    {
      DCOBJ::~DCOBJ((DCOBJ *)&v95);
      v34 = HIDWORD(v106);
      v40 = v92;
      v24 = v97;
      v99 = a8;
      goto LABEL_97;
    }
  }
  EngSetLastError(0x216u);
  DCOBJ::~DCOBJ((DCOBJ *)&v95);
  return 0LL;
}
