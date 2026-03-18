/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C0080550
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C00476C0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsInternal @ 0x1C010AE08 (GreSetDIBitsInternal.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B1C8 (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B538 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0084370 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0089750 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0096624 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00F0CF0 (-pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C01248C4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C013FB74 (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0299508 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02995C4 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C029B65C (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C029C8C4 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        __int64 a2,
        LONG a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        void *a10,
        struct tagRGBQUAD *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  int v16; // esi
  int v19; // ebx
  DC *v20; // rcx
  unsigned int v21; // r13d
  __int64 v22; // rax
  __int64 v23; // r10
  int v24; // r8d
  unsigned int v25; // edx
  __int64 v26; // rbx
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // esi
  unsigned int v30; // eax
  unsigned int v31; // r14d
  unsigned int v32; // ecx
  unsigned int v33; // edi
  unsigned __int64 v34; // rcx
  unsigned int v35; // r15d
  ULONG v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // rdx
  DC *v43; // rbx
  unsigned int v44; // edx
  __int64 v45; // rsi
  char *v46; // rcx
  int v47; // r15d
  __int64 v48; // r9
  LONG v49; // r8d
  LONG v50; // edx
  LONG v51; // ecx
  int v52; // eax
  __int64 v53; // r15
  __int64 v54; // rax
  unsigned int v55; // r13d
  __int64 v56; // rdi
  struct PALETTE *v57; // rbx
  int v58; // r12d
  int v59; // eax
  bool v60; // zf
  int v61; // ebx
  XLATEOBJ *v62; // r13
  __int64 v63; // rax
  __int64 v64; // r11
  _DWORD *v65; // rcx
  __int64 v66; // r9
  LONG left; // esi
  int top; // edi
  struct REGION *v69; // rax
  struct ECLIPOBJ *v70; // rdx
  struct _SURFOBJ *v71; // rdi
  struct _SURFOBJ *v72; // rax
  __int64 v73; // r8
  unsigned int v74; // r8d
  __int64 XlateObject; // rax
  struct _SURFOBJ *v76; // rax
  void (__fastcall *v77)(struct _SURFOBJ *, struct _SURFOBJ *, _BYTE *, XLATEOBJ *, struct _RECTL *, struct _POINTL *); // r10
  LONG v78; // esi
  int v79; // edi
  unsigned int v80; // r14d
  DC *v81; // r10
  DC *v82; // r10
  struct REGION *v83; // rax
  struct ECLIPOBJ *v84; // rdx
  struct _SURFOBJ *v85; // rdi
  struct _SURFOBJ *v86; // rax
  struct _SURFOBJ *v87; // rax
  unsigned int (__fastcall *v88)(struct _SURFOBJ *, struct _SURFOBJ *, _BYTE *, XLATEOBJ *, struct _RECTL *, struct _POINTL *); // r10
  LONG v90; // [rsp+60h] [rbp-A0h]
  int v91; // [rsp+60h] [rbp-A0h]
  unsigned int v92; // [rsp+64h] [rbp-9Ch]
  unsigned int v93; // [rsp+68h] [rbp-98h]
  unsigned int v94; // [rsp+6Ch] [rbp-94h]
  unsigned int v95; // [rsp+70h] [rbp-90h]
  int v96; // [rsp+74h] [rbp-8Ch]
  int v97; // [rsp+78h] [rbp-88h]
  unsigned int v98; // [rsp+7Ch] [rbp-84h]
  unsigned int v99; // [rsp+7Ch] [rbp-84h]
  DC *v100[2]; // [rsp+80h] [rbp-80h] BYREF
  int v101; // [rsp+90h] [rbp-70h]
  unsigned int v102; // [rsp+98h] [rbp-68h]
  __int64 v103; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-58h]
  __int64 v105; // [rsp+B0h] [rbp-50h]
  __int64 v106; // [rsp+B8h] [rbp-48h]
  LONG v107; // [rsp+C0h] [rbp-40h]
  unsigned int v108; // [rsp+C4h] [rbp-3Ch]
  unsigned int v109; // [rsp+C8h] [rbp-38h]
  unsigned int v110; // [rsp+CCh] [rbp-34h]
  int v111; // [rsp+D0h] [rbp-30h]
  int v112; // [rsp+D4h] [rbp-2Ch]
  struct _POINTL v113; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v114; // [rsp+E0h] [rbp-20h]
  XLATEOBJ *v115; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v116; // [rsp+F0h] [rbp-10h] BYREF
  char v117; // [rsp+F8h] [rbp-8h]
  int v118; // [rsp+FCh] [rbp-4h]
  struct tagRGBQUAD *v119; // [rsp+100h] [rbp+0h]
  __int64 v120; // [rsp+108h] [rbp+8h] BYREF
  int v121; // [rsp+110h] [rbp+10h]
  LONG v122; // [rsp+118h] [rbp+18h] BYREF
  LONG v123; // [rsp+11Ch] [rbp+1Ch]
  DC *v124[2]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v125; // [rsp+130h] [rbp+30h]
  struct _POINTL v126; // [rsp+138h] [rbp+38h] BYREF
  char *v127; // [rsp+140h] [rbp+40h] BYREF
  int v128; // [rsp+148h] [rbp+48h]
  int v129; // [rsp+14Ch] [rbp+4Ch]
  HDC v130; // [rsp+150h] [rbp+50h]
  void *v131; // [rsp+158h] [rbp+58h]
  DC *v132[2]; // [rsp+160h] [rbp+60h] BYREF
  DC *v133[2]; // [rsp+170h] [rbp+70h] BYREF
  DC *v134[2]; // [rsp+180h] [rbp+80h] BYREF
  __m128i v135; // [rsp+190h] [rbp+90h] BYREF
  __m128i v136; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v137[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v138; // [rsp+1D0h] [rbp+D0h]
  __int64 v139; // [rsp+1D8h] [rbp+D8h]
  struct _RECTL v140; // [rsp+200h] [rbp+100h] BYREF
  struct _RECTL v141; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v142[4]; // [rsp+220h] [rbp+120h] BYREF
  struct _RECTL v143; // [rsp+224h] [rbp+124h]
  __int64 v144; // [rsp+270h] [rbp+170h]
  int v145; // [rsp+278h] [rbp+178h]
  int v146; // [rsp+2A0h] [rbp+1A0h]
  __int64 v147; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v148[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __m128i v149[4]; // [rsp+2C4h] [rbp+1C4h] BYREF
  __int64 v150; // [rsp+310h] [rbp+210h]
  int v151; // [rsp+318h] [rbp+218h]
  int v152; // [rsp+340h] [rbp+240h]
  __int64 v153; // [rsp+350h] [rbp+250h]
  unsigned int v154; // [rsp+418h] [rbp+318h]

  v16 = a2;
  v112 = a5;
  LOBYTE(v19) = -1;
  v107 = a3;
  v90 = a2;
  LOBYTE(a2) = 1;
  v114 = a16;
  v101 = a4;
  v130 = a1;
  v131 = a10;
  v124[1] = 0LL;
  v124[0] = (DC *)HmgLockEx(a1, a2, 0LL);
  v20 = v124[0];
  if ( v124[0] )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v124) )
    {
      v20 = v124[0];
      if ( (*((_DWORD *)v124[0] + 134) & 4) != 0 )
        DC::vMarkTransformDirty(v124[0]);
      v19 = *(_DWORD *)(*((_QWORD *)v20 + 10) + 312LL);
    }
    else
    {
      v20 = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)v124[0] + 3);
      v124[0] = 0LL;
    }
  }
  if ( v20 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v124);
    _InterlockedDecrement((volatile signed __int32 *)v124[0] + 3);
  }
  if ( (v19 & 1) != 0 )
    v90 = a4 + v16 - 1;
  if ( !a11 )
    goto LABEL_223;
  if ( !a10 )
    goto LABEL_223;
  v21 = a12;
  if ( a12 > 2 )
    goto LABEL_223;
  if ( a14 < 0x28 )
    goto LABEL_223;
  v22 = (__int64)*a11;
  v98 = v22;
  if ( (unsigned int)v22 < 0x28 )
    goto LABEL_223;
  v23 = (unsigned int)a11[1];
  v95 = v23;
  if ( (int)v23 <= 0 )
    goto LABEL_223;
  v24 = (int)a11[2];
  v97 = v24;
  if ( !v24 )
    goto LABEL_223;
  v25 = (unsigned int)a11[4];
  v26 = *(unsigned __int16 *)&a11[3].rgbRed;
  v106 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v125 = (unsigned int)a11[8];
  v105 = 0LL;
  v102 = v25;
  v119 = (struct tagRGBQUAD *)((char *)a11 + v22);
  if ( v24 < 0 )
  {
    LODWORD(v106) = 1;
    if ( v25 > 0xC )
      goto LABEL_223;
    v27 = 7225;
    if ( !_bittest(&v27, v25) )
      goto LABEL_223;
    v24 = -v24;
    v97 = v24;
  }
  v111 = 0;
  if ( v25 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      v28 = 0;
      if ( a12 != 1 )
        v28 = a12;
      a12 = v28;
      v21 = v28;
      if ( (_DWORD)v26 == 16 )
      {
        LODWORD(v103) = 4;
LABEL_30:
        v110 = (unsigned int)a11[10];
        v29 = 0;
        v30 = (unsigned int)a11[11];
        v31 = 2;
        v119 = a11 + 10;
        v109 = v30;
        v32 = v26 * v23;
        v108 = (unsigned int)a11[12];
        v94 = 0;
        v93 = 512;
        if ( (unsigned __int64)(v26 * v23) > 0xFFFFFFFF || v32 + 31 < v32 )
          goto LABEL_35;
        v33 = a9;
        v92 = a9;
        v34 = a9 * (unsigned __int64)(((v32 + 31) >> 3) & 0x1FFFFFFC);
        if ( v34 <= 0xFFFFFFFF )
        {
          v35 = v23;
          v96 = a8;
LABEL_97:
          HIDWORD(v104) = v34;
LABEL_98:
          v154 = a14 - v98;
          if ( v125 )
          {
            v41 = v29;
            if ( v125 <= v29 )
              v41 = v125;
            v99 = v41;
          }
          else
          {
            v99 = v29;
          }
          if ( a13 >= (unsigned int)v34 )
          {
            v42 = (unsigned int)v24;
            HIDWORD(v103) = v35;
            v100[0] = 0LL;
            if ( v102 - 4 > 1 )
              v42 = v33;
            v100[1] = 0LL;
            LODWORD(v104) = v42;
            LOBYTE(v42) = 1;
            v100[0] = (DC *)HmgLockEx(v130, v42, 0LL);
            if ( v100[0] )
            {
              if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v100) )
              {
                _InterlockedDecrement((volatile signed __int32 *)v100[0] + 3);
                v33 = 0;
                v100[0] = 0LL;
LABEL_221:
                EngSetLastError(0x57u);
LABEL_222:
                DCOBJ::~DCOBJ((DCOBJ *)v100);
                return v33;
              }
              v43 = v100[0];
              if ( (*((_DWORD *)v100[0] + 134) & 4) != 0 )
              {
                DC::vMarkTransformDirty(v100[0]);
                v43 = v100[0];
              }
              if ( v43 && (*((_DWORD *)v43 + 9) & 0x10000) == 0 )
              {
                v44 = (unsigned int)a11[4];
                v45 = *((_QWORD *)v43 + 6);
                v122 = v90;
                v123 = v107;
                if ( v44 - 4 <= 1
                  && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v100, v44) || v21 || v114) )
                {
                  v33 = 0;
                  v92 = 0;
                }
                if ( !a15 )
                  goto LABEL_131;
                v128 = *(_DWORD *)(*((_QWORD *)v43 + 10) + 68LL);
                v129 = *(_DWORD *)(*((_QWORD *)v43 + 10) + 312LL) & 1;
                if ( (*(_DWORD *)(*((_QWORD *)v43 + 10) + 352LL) & 0x1E000) != 0 )
                {
                  EXFORMOBJ::vInit((EXFORMOBJ *)&v127, (struct XDCOBJ *)v100, 0x204u, 0);
                  v46 = v127;
                  v43 = v100[0];
                }
                else
                {
                  v46 = (char *)v43 + 336;
                  v127 = (char *)v43 + 336;
                }
                v47 = *((_DWORD *)v46 + 8);
                if ( (v46[32] & 0x43) != 0x43 )
                {
                  bCvtPts1(v46, &v122, 1LL);
                  v107 = v123;
                  v90 = v122;
                }
                if ( v33 && (unsigned int)(*(_DWORD *)&a11[4] - 4) <= 1 )
                {
                  v48 = 0LL;
                  if ( (v47 & 1) == 0 )
                    v33 = 0;
                  v92 = v33;
                }
                else
                {
LABEL_131:
                  v48 = 0LL;
                }
                v49 = v90;
                v50 = v107;
                v51 = v90 + v101;
                v52 = v107 + v112;
                v140.left = v90;
                v140.top = v107;
                v140.right = v90 + v101;
                v140.bottom = v107 + v112;
                if ( v90 > v90 + v101 )
                {
                  v49 = v90 + v101;
                  v140.left = v90 + v101;
                  v51 = v90;
                  v140.right = v90;
                }
                if ( v107 > v52 )
                {
                  v50 = v107 + v112;
                  v140.top = v107 + v112;
                  v52 = v107;
                  v140.bottom = v107;
                }
                if ( v49 != v51 && v50 != v52 && v33 )
                {
                  if ( (*((_DWORD *)v43 + 9) & 0xE0) != 0 )
                    XDCOBJ::vAccumulate((XDCOBJ *)v100, (struct ERECTL *)&v140);
                  v138 = v48;
                  v139 = 0LL;
                  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v137, (struct XDCOBJ *)v100, 0);
                  v53 = *((_QWORD *)v100[0] + 64);
                  if ( !v53 )
                    goto LABEL_219;
                  v54 = v114;
                  if ( !v114 )
                  {
                    v54 = *(_QWORD *)(*((_QWORD *)v100[0] + 10) + 112LL);
                    v114 = v54;
                  }
                  v55 = *((_DWORD *)v100[0] + 28);
                  if ( (v55 & 0x10000000) != 0 && (!v54 || v102 - 10 > 2) )
                    v55 = v55 & 0xFFFFFFF | 0x20000000;
                  v56 = *(_QWORD *)(v53 + 128);
                  v121 = 0;
                  v120 = 0LL;
                  v57 = (struct PALETTE *)*((_QWORD *)v100[0] + 12);
                  if ( v57 != ppalDefault )
                    *(_QWORD *)(v53 + 176) = *(_QWORD *)v57;
                  v58 = 1;
                  v91 = 0;
                  v115 = 0LL;
                  if ( a12 )
                  {
                    if ( a12 != 1 )
                    {
                      v59 = *(_DWORD *)(v53 + 96);
                      if ( v59 != (_DWORD)v103 )
                      {
                        if ( v59 == 2 )
                        {
                          v60 = (_DWORD)v103 == 7;
                        }
                        else
                        {
                          if ( v59 != 3 )
                          {
LABEL_158:
                            EngSetLastError(0x57u);
LABEL_159:
                            v58 = 0;
                            v61 = 0;
                            v62 = 0LL;
                            goto LABEL_162;
                          }
                          v60 = (_DWORD)v103 == 8;
                        }
                        if ( !v60 )
                          goto LABEL_158;
                      }
                      v62 = xloIdent;
                      goto LABEL_161;
                    }
                    if ( v154 >= 2 * (unsigned __int64)v99 )
                    {
                      if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v115, v119, v57, v53, v99, v94) )
                      {
                        v62 = v115;
                        if ( gbMultiMonMismatchColor
                          && (*(_DWORD *)(v45 + 32) & 1) != 0
                          && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v120, v31, v94, 0LL, v110, v109, v108, v93, 1) )
                        {
                          v73 = *(_QWORD *)(v53 + 128);
                          if ( !v73 )
                            v73 = *(_QWORD *)(v45 + 1824);
                          XEPALOBJ::vGetEntriesFrom(&v120, v57, v73, v119, v99);
                          v61 = 1;
                          v91 = 1;
                          goto LABEL_162;
                        }
LABEL_161:
                        v61 = 0;
                        goto LABEL_162;
                      }
                      v58 = 0;
                      v61 = 0;
                      v62 = 0LL;
LABEL_162:
                      v116 = 0LL;
                      v117 = 0;
                      v118 = 0;
                      SURFMEM::bCreateDIB(
                        (SURFMEM *)&v116,
                        (struct _DEVBITMAPINFO *)&v103,
                        v131,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0,
                        1,
                        0,
                        0);
                      if ( v58 && v116 )
                      {
                        *(_DWORD *)(v116 + 92) = 0;
                        if ( (v137[24] & 1) == 0 )
                          goto LABEL_217;
                        v63 = 1432LL;
                        if ( (*((_BYTE *)v100[0] + 40) & 1) != 0 )
                          v63 = 1440LL;
                        v64 = *(int *)((char *)v100[0] + v63);
                        v65 = (_DWORD *)((char *)v100[0] + v63);
                        if ( (unsigned __int64)(v64 + v140.left + 0x80000000LL) <= 0xFFFFFFFF
                          && (unsigned __int64)(v64 + v140.right + 0x80000000LL) <= 0xFFFFFFFF
                          && (v66 = (int)v65[1], (unsigned __int64)(v66 + v140.top + 0x80000000LL) <= 0xFFFFFFFF)
                          && (unsigned __int64)(v66 + v140.bottom + 0x80000000LL) <= 0xFFFFFFFF )
                        {
                          left = v64 + v140.left;
                          v140.left += v64;
                          v140.right += *v65;
                          top = v65[1] + v140.top;
                          v140.top = top;
                          v140.bottom += v65[1];
                          if ( v61 )
                          {
                            *(_QWORD *)(v116 + 128) = v120;
                            top = v140.top;
                            left = v140.left;
                          }
                          if ( v111 )
                          {
                            v126.x = a6;
                            v126.y = v97 - v112 - a7;
                            v69 = XDCOBJ::prgnEffRao(v100);
                            v150 = 0LL;
                            v151 = 0;
                            v152 = 1;
                            v153 = 0LL;
                            XCLIPOBJ::vSetup((XCLIPOBJ *)v148, v69, (struct ERECTL *)&v140, 0);
                            if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v149) )
                            {
                              if ( (*((_DWORD *)v100[0] + 9) & 0xE0) != 0 )
                              {
                                v135 = v149[0];
                                XDCOBJ::vAccumulateTight((XDCOBJ *)v100, v70, &v135);
                              }
                              ++*(_DWORD *)(v53 + 92);
                              v71 = SURFACE::pSurfobj((SURFACE *)v53);
                              v72 = SURFMEM::pSurfobj((SURFMEM *)&v116);
                              if ( bClipRectsToSurfaces(v71, v72, &v140, &v126) )
                              {
                                v76 = SURFMEM::pSurfobj((SURFMEM *)&v116);
                                v77(v71, v76, v148, v62, &v140, &v126);
                              }
                            }
                          }
                          else
                          {
                            v78 = left - a6;
                            v79 = top - (v97 - v112 - a7);
                            v80 = v92;
                            v113.x = a6;
                            v113.y = v97 - v112 - a7;
                            v141.left = v78;
                            v141.right = v78 + v95;
                            v141.top = v79 + v97 - v96 - v92;
                            v141.bottom = v79 + v97 - v96;
                            ERECTL::operator*=(&v141, &v140, (unsigned int)v141.bottom, 0xFFFFFFFFLL);
                            if ( v141.left != v141.right && v141.top != v141.bottom )
                            {
                              v83 = DC::prgnRao(v81) ? DC::prgnRao(v82) : DC::prgnVisSnap(v82);
                              v146 = 1;
                              v144 = 0LL;
                              v145 = 0;
                              v147 = 0LL;
                              XCLIPOBJ::vSetup((XCLIPOBJ *)v142, v83, (struct ERECTL *)&v141, 0);
                              if ( v143.left != v143.right && v143.top != v143.bottom )
                              {
                                v141 = v143;
                                if ( (*((_DWORD *)v100[0] + 9) & 0xE0) != 0 )
                                {
                                  v136 = (__m128i)v143;
                                  XDCOBJ::vAccumulateTight((XDCOBJ *)v100, v84, &v136);
                                }
                                v113.x = v141.left - v78;
                                if ( v102 - 4 <= 1 )
                                  v113.y = v97 - v96 - v92;
                                else
                                  v113.y = v92 + v96 - v97 + v141.top - v79;
                                ++*(_DWORD *)(v53 + 92);
                                v85 = SURFACE::pSurfobj((SURFACE *)v53);
                                v86 = SURFMEM::pSurfobj((SURFMEM *)&v116);
                                if ( bClipRectsToSurfaces(v85, v86, &v141, &v113) )
                                {
                                  v87 = SURFMEM::pSurfobj((SURFMEM *)&v116);
                                  if ( !v88(v85, v87, v142, v62, &v141, &v113) )
                                    v80 = 0;
                                  v92 = v80;
                                }
                              }
                            }
                          }
                          v33 = v92;
                          if ( v91 )
                            *(_QWORD *)(v116 + 128) = 0LL;
                        }
                        else
                        {
LABEL_217:
                          v33 = v92;
                        }
                      }
                      else
                      {
                        v33 = 0;
                      }
                      SURFMEM::~SURFMEM((SURFMEM *)&v116);
                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v115);
                      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v120);
LABEL_219:
                      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v137);
                      DCOBJ::~DCOBJ((DCOBJ *)v100);
                      return v33;
                    }
LABEL_180:
                    EngSetLastError(0x57u);
                    v58 = 0;
                    v61 = 0;
                    v62 = 0LL;
                    goto LABEL_162;
                  }
                  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v120, v31, v94, 0LL, v110, v109, v108, v93, 1) )
                    goto LABEL_159;
                  if ( v99 )
                  {
                    if ( v154 < 4 * v99 )
                      goto LABEL_180;
                    if ( v102 - 10 <= 2 )
                      XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v120, (unsigned int *)&v119->rgbBlue, v74, v99);
                    else
                      XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v120, v119, 0, v99);
                  }
                  XlateObject = CreateXlateObject(v114, v55, v120, v56, v57, v57, 0, 0, 0xFFFFFF, 0);
                  v115 = (XLATEOBJ *)XlateObject;
                  v61 = 0;
                  if ( XlateObject )
                  {
                    v62 = (XLATEOBJ *)XlateObject;
                  }
                  else
                  {
                    v58 = 0;
                    v62 = 0LL;
                  }
                  goto LABEL_162;
                }
                goto LABEL_222;
              }
            }
            v33 = 0;
            goto LABEL_221;
          }
          goto LABEL_223;
        }
LABEL_34:
        HIDWORD(v104) = -1;
LABEL_35:
        v36 = 534;
LABEL_224:
        EngSetLastError(v36);
        return 0LL;
      }
      if ( (_DWORD)v26 == 32 )
      {
        LODWORD(v103) = 6;
        goto LABEL_30;
      }
    }
LABEL_223:
    v36 = 87;
    goto LABEL_224;
  }
  if ( !v25 )
  {
    switch ( (_DWORD)v26 )
    {
      case 1:
        LODWORD(v103) = 1;
        v29 = 2;
        break;
      case 4:
        LODWORD(v103) = 2;
        v29 = 16;
        break;
      case 8:
        LODWORD(v103) = 3;
        v29 = 256;
        break;
      default:
        v94 = 0;
        v37 = 0;
        if ( a12 != 1 )
          v37 = a12;
        v93 = 512;
        a12 = v37;
        v21 = v37;
        v29 = 0;
        switch ( (_DWORD)v26 )
        {
          case 0x10:
            LODWORD(v103) = 4;
            v31 = 2;
            v110 = 31744;
            v109 = 992;
            v108 = 31;
            a12 = v37;
            break;
          case 0x18:
            LODWORD(v103) = 5;
            v31 = 8;
            a12 = v37;
            break;
          case 0x20:
            LODWORD(v103) = 6;
            v31 = 8;
            break;
          default:
            goto LABEL_223;
        }
LABEL_52:
        v38 = v26 * v23;
        if ( (unsigned __int64)(v26 * v23) > 0xFFFFFFFF || v38 + 31 < v38 )
          goto LABEL_35;
        v33 = a9;
        v92 = a9;
        v34 = a9 * (unsigned __int64)(((v38 + 31) >> 3) & 0x1FFFFFFC);
        if ( v34 <= 0xFFFFFFFF )
        {
          v35 = v23;
          v96 = a8;
          goto LABEL_97;
        }
        goto LABEL_34;
    }
    v94 = v29;
    v31 = 1;
    v93 = 1024;
    goto LABEL_52;
  }
  if ( v25 != 10 )
  {
    if ( v25 != 2 )
    {
      if ( v25 != 12 )
      {
        if ( v25 != 1 )
        {
          if ( v25 != 11 )
          {
            if ( v25 == 4 )
            {
              LODWORD(v103) = 9;
            }
            else
            {
              if ( v25 != 5 )
                goto LABEL_223;
              LODWORD(v103) = 10;
            }
            v33 = a9;
            v93 = 512;
            v29 = 0;
            v35 = v23;
            v94 = 0;
            v31 = 8;
            v92 = a9;
LABEL_96:
            LODWORD(v34) = a11[5];
            v96 = 0;
            goto LABEL_97;
          }
          DCOBJ::DCOBJ((DCOBJ *)v133, a1);
          if ( !v133[0] || !(unsigned int)DC::bIsCMYKColor(v133[0]) )
          {
            EngSetLastError(0x57u);
            DCOBJ::~DCOBJ((DCOBJ *)v133);
            return 0LL;
          }
          DCOBJ::~DCOBJ((DCOBJ *)v133);
          v24 = v97;
        }
        if ( (_DWORD)v26 != 8 )
          goto LABEL_223;
        v29 = 256;
        LODWORD(v103) = 8;
        v94 = 256;
LABEL_95:
        v35 = v95;
        v31 = 1;
        v111 = 1;
        v33 = v24;
        v92 = v24;
        v93 = 1024;
        goto LABEL_96;
      }
      DCOBJ::DCOBJ((DCOBJ *)v134, a1);
      if ( !v134[0] || !(unsigned int)DC::bIsCMYKColor(v134[0]) )
      {
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v134);
        return 0LL;
      }
      DCOBJ::~DCOBJ((DCOBJ *)v134);
      v24 = v97;
    }
    if ( (_DWORD)v26 != 4 )
      goto LABEL_223;
    LODWORD(v103) = 7;
    v29 = 16;
    v94 = 16;
    goto LABEL_95;
  }
  DCOBJ::DCOBJ((DCOBJ *)v132, a1);
  if ( !v132[0] || !(unsigned int)DC::bIsCMYKColor(v132[0]) )
    goto LABEL_74;
  switch ( (_DWORD)v26 )
  {
    case 1:
      LODWORD(v103) = 1;
      v29 = 2;
      break;
    case 4:
      LODWORD(v103) = 2;
      v29 = 16;
      break;
    case 8:
      LODWORD(v103) = 3;
      v29 = 256;
      break;
    case 0x20:
      LODWORD(v103) = 6;
      v31 = 16;
      v29 = 0;
      v93 = 512;
      goto LABEL_68;
    default:
LABEL_74:
      EngSetLastError(0x57u);
      DCOBJ::~DCOBJ((DCOBJ *)v132);
      return 0LL;
  }
  v31 = 1;
  v93 = 1024;
LABEL_68:
  v35 = v95;
  v94 = v29;
  v39 = v26 * v95;
  if ( v39 <= 0xFFFFFFFF && (int)v39 + 31 >= (unsigned int)v39 )
  {
    v33 = a9;
    v92 = a9;
    v40 = a9 * (unsigned __int64)(((unsigned int)(v39 + 31) >> 3) & 0x1FFFFFFC);
    if ( v40 <= 0xFFFFFFFF )
    {
      HIDWORD(v104) = v40;
      DCOBJ::~DCOBJ((DCOBJ *)v132);
      LODWORD(v34) = HIDWORD(v104);
      v24 = v97;
      v96 = a8;
      goto LABEL_98;
    }
    HIDWORD(v104) = -1;
  }
  EngSetLastError(0x216u);
  DCOBJ::~DCOBJ((DCOBJ *)v132);
  return 0LL;
}
