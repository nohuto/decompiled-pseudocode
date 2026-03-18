/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C0019D78
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C0019AF0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026340 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BE10 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C009BC28 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreCreateDIBitmapComp @ 0x1C0114450 (GreCreateDIBitmapComp.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C012CCD4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0295BAC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C0295C6C (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C0297E04 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C0299064 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternal(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        int a13,
        unsigned int a14,
        unsigned int a15,
        __int64 a16)
{
  unsigned int v17; // edi
  char v18; // al
  __int64 v19; // r11
  unsigned int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  __int64 *v24; // r8
  unsigned int v25; // edx
  __int64 v26; // rdi
  unsigned int v27; // edx
  int v28; // eax
  int v29; // r15d
  __int64 v30; // rbx
  BOOL v32; // edi
  int v33; // r9d
  __int64 v34; // rdx
  int v35; // r10d
  unsigned int v36; // r8d
  __int64 v37; // r13
  int v38; // r15d
  unsigned int v39; // eax
  unsigned int v40; // r12d
  unsigned int v41; // r14d
  unsigned int v42; // ecx
  unsigned __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // edi
  int v46; // ebx
  __int64 v47; // r11
  __int64 v48; // rsi
  BOOL v49; // eax
  int v50; // edx
  int v51; // r8d
  int v52; // r9d
  int v53; // r10d
  char v54; // cl
  int v55; // edx
  int v56; // eax
  struct SURFACE *v57; // rax
  unsigned int v58; // r8d
  struct SURFACE *v59; // r13
  __int64 v60; // rdi
  struct PALETTE *v61; // rbx
  __int64 v62; // rax
  int v63; // r14d
  XLATEOBJ *v64; // rdi
  int v65; // esi
  LONG v66; // r8d
  __int64 v67; // rcx
  unsigned int v68; // r14d
  int v69; // eax
  int v70; // r9d
  int v71; // ecx
  char v72; // bl
  int v73; // edx
  struct REGION *v74; // rax
  struct ECLIPOBJ *v75; // rdx
  __int64 v76; // rax
  BOOL (__stdcall *v77)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v78; // r11d
  __int64 *v79; // r8
  __int64 v80; // rdx
  unsigned int v81; // ebx
  unsigned int v82; // eax
  int v83; // esi
  int v84; // edx
  HDC CompatibleDC; // r14
  __int64 DIBitmapComp; // rax
  __int64 v87; // rdi
  int v88; // ebx
  unsigned int v89; // eax
  unsigned __int64 v90; // rcx
  unsigned int v91; // r8d
  unsigned int v92; // eax
  unsigned __int64 v93; // rcx
  unsigned int v94; // eax
  __int64 v95; // rcx
  DC *v96; // rbx
  unsigned __int64 v97; // rcx
  int v98; // eax
  unsigned __int64 v99; // rcx
  DC *v100; // rdi
  DC *v101; // rdi
  SURFOBJ *v102; // rdx
  SURFOBJ *v103; // rcx
  __int64 v104; // r8
  int v105; // eax
  int v106; // ecx
  int v107; // ecx
  unsigned int v108; // [rsp+80h] [rbp-80h]
  unsigned int v109; // [rsp+84h] [rbp-7Ch]
  unsigned int v110; // [rsp+88h] [rbp-78h]
  unsigned int v111; // [rsp+90h] [rbp-70h]
  unsigned int v112; // [rsp+94h] [rbp-6Ch]
  unsigned int v113; // [rsp+94h] [rbp-6Ch]
  char v114; // [rsp+98h] [rbp-68h]
  int v115; // [rsp+9Ch] [rbp-64h]
  unsigned int v116; // [rsp+A0h] [rbp-60h]
  __int64 *v117; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v118; // [rsp+B0h] [rbp-50h]
  unsigned int v119; // [rsp+B8h] [rbp-48h]
  __int64 XlateObject; // [rsp+C0h] [rbp-40h] BYREF
  char v121; // [rsp+C8h] [rbp-38h]
  int v122; // [rsp+CCh] [rbp-34h]
  DC *v123; // [rsp+D0h] [rbp-30h] BYREF
  int v124; // [rsp+D8h] [rbp-28h]
  _OWORD v125[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v126; // [rsp+100h] [rbp+0h]
  unsigned int v127; // [rsp+104h] [rbp+4h]
  unsigned int v128; // [rsp+108h] [rbp+8h]
  unsigned int v129; // [rsp+10Ch] [rbp+Ch]
  int v130; // [rsp+110h] [rbp+10h]
  unsigned int v131; // [rsp+114h] [rbp+14h]
  int v132; // [rsp+118h] [rbp+18h]
  int v133; // [rsp+11Ch] [rbp+1Ch]
  __int64 v134; // [rsp+120h] [rbp+20h] BYREF
  char v135; // [rsp+128h] [rbp+28h]
  int v136; // [rsp+12Ch] [rbp+2Ch]
  __int64 v137[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v138; // [rsp+140h] [rbp+40h] BYREF
  int v139; // [rsp+148h] [rbp+48h]
  int v140; // [rsp+14Ch] [rbp+4Ch]
  unsigned __int64 v141; // [rsp+150h] [rbp+50h] BYREF
  int v142; // [rsp+15Ch] [rbp+5Ch]
  _BYTE v143[32]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v144; // [rsp+180h] [rbp+80h]
  __int64 v145; // [rsp+188h] [rbp+88h]
  _OWORD v146[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v147; // [rsp+1D0h] [rbp+D0h] BYREF
  int v148; // [rsp+1D4h] [rbp+D4h]
  int v149; // [rsp+1D8h] [rbp+D8h]
  int v150; // [rsp+1DCh] [rbp+DCh]
  struct tagRGBQUAD *v151; // [rsp+1E0h] [rbp+E0h] BYREF
  int v152; // [rsp+1E8h] [rbp+E8h]
  int v153; // [rsp+1ECh] [rbp+ECh]
  RECTL prclDest; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v155[4]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v156[4]; // [rsp+204h] [rbp+104h] BYREF
  __int64 v157; // [rsp+250h] [rbp+150h]
  int v158; // [rsp+258h] [rbp+158h]
  int v159; // [rsp+280h] [rbp+180h]
  __int64 v160; // [rsp+290h] [rbp+190h]

  v17 = 0;
  *(_QWORD *)&prclDest.left = a10;
  v137[0] = a16;
  v131 = a4;
  v132 = a3;
  v133 = a2;
  v18 = gajRop3[BYTE2(a13)];
  v111 = a12;
  v130 = a5;
  v109 = 0;
  if ( (v18 & 0xD4) == 0 )
    return (unsigned int)NtGdiPatBlt(a1, a5, a13);
  v117 = 0LL;
  v118 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v117, a1);
  if ( !v117 )
    return v17;
  if ( !a11 )
    goto LABEL_129;
  v19 = *(_QWORD *)&prclDest.left;
  if ( !*(_QWORD *)&prclDest.left )
    goto LABEL_129;
  if ( a12 > 2 )
    goto LABEL_129;
  if ( a14 < 0xC )
    goto LABEL_129;
  v20 = *(_DWORD *)a11;
  LODWORD(XlateObject) = v20;
  if ( a14 < v20 || v20 < 0x28 || *(int *)(a11 + 4) <= 0 || !*(_DWORD *)(a11 + 8) )
    goto LABEL_129;
  v21 = v117[10];
  v22 = *(unsigned __int8 *)(v21 + 75);
  v139 = *(_DWORD *)(v21 + 68);
  v23 = v117[10];
  v126 = v22;
  v140 = *(_DWORD *)(v23 + 312) & 1;
  if ( (*(_DWORD *)(v117[10] + 352) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v138, (struct XDCOBJ *)&v117, 0x204u, 0);
    v24 = v138;
    v19 = *(_QWORD *)&prclDest.left;
  }
  else
  {
    v24 = v117 + 42;
    v138 = v117 + 42;
  }
  v25 = *(_DWORD *)(a11 + 16);
  if ( v25 - 4 > 1 )
  {
    v26 = v137[0];
    goto LABEL_15;
  }
  if ( (unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v117, v25) )
  {
    if ( BYTE2(a13) == 204 && (v24[4] & 1) != 0 && !a12 )
    {
      v26 = v137[0];
      if ( !v137[0] )
      {
LABEL_15:
        if ( v131 == a8 )
        {
          v27 = a9;
          if ( v130 == a9 && a9 > 0 && a8 > 0 && !(a7 | a6) && BYTE2(a13) == 204 && v126 != 4 && (v24[4] & 2) != 0 )
          {
            v28 = *(_DWORD *)(a11 + 8);
            if ( v28 < 0 )
              v28 = -v28;
            if ( a9 >= v28 )
              v27 = v28;
            v29 = GreSetDIBitsToDeviceInternal(
                    a1,
                    v133,
                    v132,
                    v131,
                    v130,
                    a6,
                    a7,
                    a7,
                    v27,
                    v19,
                    (struct tagRGBQUAD *)a11,
                    a12,
                    a15,
                    a14,
                    1,
                    v26);
            goto LABEL_28;
          }
        }
        v32 = 0;
        if ( a12 == 1 )
        {
          v144 = 0LL;
          v145 = 0LL;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v143, (struct XDCOBJ *)&v117, 0);
          v95 = v117[64];
          if ( v95 )
            v32 = *(_DWORD *)(v95 + 96) == 1;
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v143);
          v24 = v138;
        }
        if ( BYTE2(a13) != 204 || (v24[4] & 1) == 0 || v32 )
        {
          v29 = *(_DWORD *)(a11 + 8);
          if ( v29 <= 0 )
            v83 = a7;
          else
            v83 = v29 - a7 - a9;
          CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
          if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
            DIBitmapComp = GreCreateDIBitmapComp(a1, *(__int64 *)&prclDest.left, a11, a12, a14, a15);
          else
            DIBitmapComp = GreCreateDIBitmapReal(
                             (_DWORD)a1,
                             v84,
                             prclDest.left,
                             a11,
                             a12,
                             a14,
                             a15,
                             0LL,
                             0,
                             0LL,
                             0,
                             0LL,
                             0LL);
          v87 = DIBitmapComp;
          if ( CompatibleDC && DIBitmapComp )
          {
            GreSelectBitmap(CompatibleDC, DIBitmapComp);
            v88 = GreStretchBltInternal(a1, v133, v132, v130, CompatibleDC, a6, v83, a8, a9, a13, 0xFFFFFF, 1);
            bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
            GreDeleteObject(v87);
            if ( !v88 )
              v29 = 0;
          }
          else
          {
            bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
            GreDeleteObject(v87);
            v29 = 0;
          }
          goto LABEL_28;
        }
        memset(v125, 0, sizeof(v125));
        v33 = *(_DWORD *)(a11 + 8);
        v17 = 0;
        v34 = *(unsigned int *)(a11 + 4);
        v35 = *(_DWORD *)(a11 + 16);
        v36 = *(_DWORD *)(a11 + 32);
        v37 = *(unsigned __int16 *)(a11 + 14);
        v38 = 1;
        DWORD2(v125[1]) = 0;
        v115 = v35;
        v112 = v34;
        v110 = v33;
        v119 = v36;
        v151 = (struct tagRGBQUAD *)(a11 + (unsigned int)XlateObject);
        if ( v33 < 0 )
        {
          v33 = -v33;
          DWORD2(v125[1]) = 1;
          v110 = v33;
        }
        switch ( v35 )
        {
          case 3:
            if ( a14 < 0x34 )
              goto LABEL_191;
            v89 = 0;
            if ( a12 != 1 )
              v89 = a12;
            v111 = v89;
            if ( (_DWORD)v37 == 32 )
            {
              LODWORD(v125[0]) = 6;
            }
            else if ( (_DWORD)v37 == 16 )
            {
              LODWORD(v125[0]) = 4;
            }
            else
            {
              EngSetLastError(0x57u);
              LODWORD(v34) = v112;
              v38 = 0;
              v33 = v110;
            }
            v90 = v37 * (unsigned int)v34;
            v129 = *(_DWORD *)(a11 + 40);
            v91 = -1;
            v128 = *(_DWORD *)(a11 + 44);
            v40 = 0;
            v92 = *(_DWORD *)(a11 + 48);
            if ( v90 <= 0xFFFFFFFF )
              v91 = v37 * v34;
            v151 = (struct tagRGBQUAD *)(a11 + 40);
            v41 = 512;
            v127 = v92;
            v108 = 2;
            if ( v90 > 0xFFFFFFFF || v91 + 31 < v91 )
              goto LABEL_195;
            v93 = (unsigned int)v33 * (((unsigned __int64)(v91 + 31) >> 3) & 0x1FFFFFFC);
            v94 = -1;
            if ( v93 <= 0xFFFFFFFF )
              v94 = v33 * (((v91 + 31) >> 3) & 0x1FFFFFFC);
            HIDWORD(v125[0]) = v94;
            if ( v93 > 0xFFFFFFFF )
            {
LABEL_195:
              EngSetLastError(0x216u);
              v29 = 0;
              goto LABEL_28;
            }
            v46 = 0;
            goto LABEL_175;
          case 0:
            switch ( (_DWORD)v37 )
            {
              case 1:
                LODWORD(v125[0]) = 1;
                v40 = 2;
                break;
              case 4:
                LODWORD(v125[0]) = 2;
                v40 = 16;
                break;
              case 8:
                LODWORD(v125[0]) = 3;
                v40 = 256;
                break;
              default:
                v39 = 0;
                if ( a12 != 1 )
                  v39 = a12;
                v111 = v39;
                if ( (_DWORD)v37 == 24 )
                {
                  v33 = v110;
                  v40 = 0;
                  LODWORD(v125[0]) = 5;
                  v41 = 512;
                  v108 = 8;
                  v111 = v39;
                  goto LABEL_47;
                }
                if ( (_DWORD)v37 != 16 )
                {
                  if ( (_DWORD)v37 == 32 )
                  {
                    LODWORD(v125[0]) = 6;
                    v40 = 0;
                    v108 = 8;
                    v41 = 512;
                    goto LABEL_47;
                  }
LABEL_191:
                  EngSetLastError(0x57u);
                  goto LABEL_129;
                }
                LODWORD(v125[0]) = 4;
                v40 = 0;
                v129 = 31744;
                v41 = 512;
                v128 = 992;
                v127 = 31;
                v108 = 2;
                v111 = v39;
LABEL_47:
                v42 = v37 * v34;
                if ( (unsigned __int64)(v37 * v34) <= 0xFFFFFFFF && v42 + 31 >= v42 )
                {
                  v43 = (unsigned int)v33 * (((unsigned __int64)(v42 + 31) >> 3) & 0x1FFFFFFC);
                  v44 = -1;
                  if ( v43 <= 0xFFFFFFFF )
                    v44 = v43;
                  HIDWORD(v125[0]) = v44;
                  if ( v43 <= 0xFFFFFFFF )
                  {
                    v45 = v108;
                    v46 = 0;
LABEL_53:
                    v36 = v119;
                    LODWORD(v34) = v112;
LABEL_54:
                    v47 = v137[0];
                    v116 = a14 - XlateObject;
                    if ( !v137[0] )
                    {
                      v47 = *(_QWORD *)(v117[10] + 112);
                      v137[0] = v47;
                    }
                    v119 = *((_DWORD *)v117 + 28);
                    if ( (v119 & 0x10000000) != 0 && (!v47 || (unsigned int)(v35 - 10) > 2) )
                      v119 = v119 & 0xFFFFFFF | 0x20000000;
                    *(_QWORD *)((char *)v125 + 4) = __PAIR64__(v33, v34);
                    if ( v36 )
                    {
                      v82 = v40;
                      if ( v36 <= v40 )
                        v82 = v36;
                      v113 = v82;
                    }
                    else
                    {
                      v113 = v40;
                    }
                    if ( a15 < HIDWORD(v125[0]) )
                    {
                      EngSetLastError(0x57u);
                      goto LABEL_128;
                    }
                    v48 = v117[6];
                    v149 = v133 + v131;
                    v147 = v133;
                    v148 = v132;
                    v150 = v132 + v130;
                    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v141, (struct XDCOBJ *)&v117, 0x204u);
                    v49 = (*(_BYTE *)(v141 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v141, &v147, 2LL);
                    if ( v142 )
                    {
                      ++v147;
                      ++v149;
                    }
                    if ( !v49 )
                      goto LABEL_128;
                    if ( !ERECTL::bEmpty((ERECTL *)&v147) )
                    {
                      v54 = 0;
                      v114 = 0;
                      if ( v51 > v50 )
                      {
                        v147 = v50;
                        v149 = v51;
                        if ( !v52 )
                        {
                          v147 = v53 + v50;
                          v149 = v51 + 1;
                        }
                        v54 = v53;
                        v114 = v53;
                      }
                      v55 = v148;
                      if ( v148 > v150 )
                      {
                        v148 = v150 + 1;
                        v114 = v54 ^ 2;
                        v150 = v55 + 1;
                      }
                      v124 = 0;
                      v123 = 0LL;
                      if ( !v111 )
                        v38 = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v123, v45, v40, 0LL, v129, v128, v127, v41, v53) != 0
                            ? v38
                            : 0;
                      if ( !v38 )
                        goto LABEL_127;
                      v145 = 0LL;
                      v144 = 0LL;
                      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v143, (struct XDCOBJ *)&v117, 0);
                      v56 = *(_DWORD *)(v117[6] + 32) & 0x8000;
                      *(_QWORD *)&v125[1] = 0LL;
                      DWORD2(v125[1]) |= 8 * v56;
                      v134 = 0LL;
                      v135 = 0;
                      v136 = 0;
                      if ( v46 )
                      {
                        XlateObject = 0LL;
                        v121 = 0;
                        v122 = 0;
                        v146[0] = v125[0];
                        v146[1] = v125[1];
                        if ( SURFMEM::bCreateDIB(
                               (SURFMEM *)&XlateObject,
                               (struct _DEVBITMAPINFO *)v146,
                               *(void **)&prclDest.left,
                               0LL,
                               0,
                               0LL,
                               0LL,
                               0,
                               1,
                               0,
                               0)
                          && (LODWORD(v125[0]) = (LODWORD(v125[0]) != 7) + 2,
                              SURFMEM::bCreateDIB(
                                (SURFMEM *)&v134,
                                (struct _DEVBITMAPINFO *)v125,
                                0LL,
                                0LL,
                                0,
                                0LL,
                                0LL,
                                0,
                                1,
                                0,
                                0)) )
                        {
                          v102 = 0LL;
                          *(_QWORD *)&prclDest.left = 0LL;
                          *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)v125 + 4);
                          if ( XlateObject )
                            v102 = (SURFOBJ *)(XlateObject + 24);
                          v103 = 0LL;
                          if ( v134 )
                            v103 = (SURFOBJ *)(v134 + 24);
                          EngCopyBits(v103, v102, 0LL, 0LL, &prclDest, &gptl00);
                        }
                        else
                        {
                          v38 = 0;
                        }
                        SURFMEM::~SURFMEM((SURFMEM *)&XlateObject);
                      }
                      else
                      {
                        v38 = SURFMEM::bCreateDIB(
                                (SURFMEM *)&v134,
                                (struct _DEVBITMAPINFO *)v125,
                                *(void **)&prclDest.left,
                                0LL,
                                0,
                                0LL,
                                0LL,
                                0,
                                1,
                                0,
                                0) != 0
                            ? v38
                            : 0;
                      }
                      if ( !v38 )
                      {
LABEL_126:
                        SURFMEM::~SURFMEM((SURFMEM *)&v134);
                        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v143);
LABEL_127:
                        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v123);
LABEL_128:
                        v17 = v109;
                        goto LABEL_129;
                      }
                      v57 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v117);
                      v59 = v57;
                      *(_QWORD *)&prclDest.left = 0LL;
                      v60 = *((_QWORD *)v57 + 16);
                      v61 = (struct PALETTE *)v117[12];
                      if ( v61 != ppalDefault )
                        *((_QWORD *)v57 + 22) = *(_QWORD *)v61;
                      if ( v111 )
                      {
                        if ( v111 == 1 )
                        {
                          if ( v116 < 2 * (unsigned __int64)v113
                            || !(unsigned int)EXLATEOBJ::bMakeXlate(&prclDest, v151, v61, v57, v113, v40) )
                          {
                            goto LABEL_125;
                          }
                          v64 = *(XLATEOBJ **)&prclDest.left;
                          if ( gbMultiMonMismatchColor && (*(_DWORD *)(v48 + 32) & 1) != 0 )
                          {
                            if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v123, v108, v40, 0LL, v129, v128, v127, v41, 1) )
                            {
                              v104 = *((_QWORD *)v59 + 16);
                              if ( !v104 )
                                v104 = *(_QWORD *)(v48 + 1824);
                              XEPALOBJ::vGetEntriesFrom(&v123, v61, v104, v151, v113);
                              v65 = 1;
                            }
                            else
                            {
                              v38 = 0;
                              v65 = 0;
                            }
                            v63 = v115;
                          }
                          else
                          {
                            v65 = 0;
                            v63 = v115;
                          }
                        }
                        else
                        {
                          v63 = v115;
                          v65 = 0;
                          if ( v111 == 2 )
                          {
                            v64 = xloIdent;
                            if ( *((_DWORD *)v57 + 24) != LODWORD(v125[0]) )
                              v38 = 0;
                          }
                          else
                          {
                            v64 = 0LL;
                          }
                        }
                      }
                      else
                      {
                        if ( v113 )
                        {
                          if ( v116 < 4 * v113 )
                            goto LABEL_125;
                          v63 = v115;
                          if ( (unsigned int)(v115 - 10) <= 2 )
                            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v123, (unsigned int *)&v151->rgbBlue, v58, v113);
                          else
                            XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v123, v151, 0, v113);
                          XlateObject = CreateXlateObject(v137[0], v119, v123, v60, v61, v61, 0, 0, 0xFFFFFF, 0);
                          *(_QWORD *)&prclDest.left = XlateObject;
                          if ( !XlateObject )
                            v38 = 0;
                        }
                        else
                        {
                          v62 = CreateXlateObject(v137[0], v119, v123, v60, v61, v61, 0, 0, 0xFFFFFF, 0);
                          v63 = v115;
                          XlateObject = v62;
                          if ( !v62 )
                            v38 = 0;
                          *(_QWORD *)&prclDest.left = v62;
                        }
                        v64 = (XLATEOBJ *)XlateObject;
                        v65 = 0;
                      }
                      if ( v38 )
                      {
                        if ( (*((_DWORD *)v117 + 9) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)&v117, (struct ERECTL *)&v147);
                        if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)&v117) )
                        {
                          v68 = v110;
                        }
                        else
                        {
                          if ( (v143[24] & 1) == 0 )
                            goto LABEL_125;
                          v66 = a6;
                          v67 = v117[5] & 1;
                          v147 += LODWORD(v117[v67 + 179]);
                          v149 += LODWORD(v117[v67 + 179]);
                          v148 += HIDWORD(v117[v67 + 179]);
                          v150 += HIDWORD(v117[v67 + 179]);
                          LODWORD(v151) = a6;
                          if ( v63 == 4 && (BYTE8(v125[1]) & 1) != 0 )
                          {
                            v70 = a7;
                            v69 = a9;
                            v68 = v110;
                          }
                          else
                          {
                            v68 = v110;
                            v69 = a9;
                            v70 = v110 - a7 - a9;
                          }
                          v71 = v70 + v69;
                          v72 = v114;
                          v73 = a6 + a8;
                          HIDWORD(v151) = v70;
                          v153 = v70 + v69;
                          v152 = a6 + a8;
                          if ( a6 > a6 + a8 )
                          {
                            v66 = v73 + 1;
                            v72 = v114 ^ 1;
                            v73 = a6 + 1;
                            LODWORD(v151) = v66;
                            v152 = a6 + 1;
                          }
                          if ( v70 > v71 )
                          {
                            v105 = v70;
                            v72 ^= 2u;
                            v70 = v71 + 1;
                            HIDWORD(v151) = v71 + 1;
                            v71 = v105 + 1;
                            v153 = v105 + 1;
                          }
                          if ( v73 <= 0
                            || v71 <= 0
                            || v66 >= *(_DWORD *)(v134 + 56)
                            || v70 >= *(_DWORD *)(v134 + 60)
                            || ERECTL::bEmpty((ERECTL *)&v151) )
                          {
                            goto LABEL_125;
                          }
                          v74 = XDCOBJ::prgnEffRao((XDCOBJ *)&v117);
                          v157 = 0LL;
                          v158 = 0;
                          v159 = 1;
                          v160 = 0LL;
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v155, v74, (struct ERECTL *)&v147, 0);
                          if ( !ERECTL::bEmpty((ERECTL *)v156) )
                          {
                            if ( (*((_DWORD *)v117 + 9) & 0xE0) != 0 )
                            {
                              *(_OWORD *)v137 = v156[0];
                              XDCOBJ::vAccumulateTight((XDCOBJ *)&v117, v75, (struct ERECTL *)v137);
                            }
                            if ( v65 )
                              *(_QWORD *)(v134 + 128) = v123;
                            v76 = *((_QWORD *)v59 + 6);
                            if ( (*((_DWORD *)v59 + 28) & 2) != 0 )
                              v77 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v76 + 2864);
                            else
                              v77 = EngStretchBlt;
                            v78 = v126;
                            if ( (*((_DWORD *)v59 + 28) & 2) != 0 && (*(_DWORD *)(v76 + 32) & 0x20000) == 0 )
                            {
                              if ( v126 == 4 && (v117[9] & 0x10) == 0 )
                                v77 = EngStretchBlt;
                              if ( (int)v151 < 0
                                || SHIDWORD(v151) < 0
                                || v152 > *(_DWORD *)(v134 + 56)
                                || v153 > *(_DWORD *)(v134 + 60) )
                              {
                                v77 = EngStretchBlt;
                              }
                            }
                            if ( (v72 & 1) != 0 )
                            {
                              v106 = v147;
                              v147 = v149;
                              v149 = v106;
                            }
                            if ( (v72 & 2) != 0 )
                            {
                              v107 = v148;
                              v148 = v150;
                              v150 = v107;
                            }
                            ++*((_DWORD *)v59 + 23);
                            v79 = 0LL;
                            if ( *((__int16 *)v117 + 121) >= 0 )
                              v79 = v117 + 30;
                            v80 = 0LL;
                            if ( v134 )
                              v80 = v134 + 24;
                            v81 = 0;
                            if ( ((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, XLATEOBJ *, __int64 *, __int64 *, int *, struct tagRGBQUAD **, _QWORD, int))v77)(
                                   (char *)v59 + 24,
                                   v80,
                                   0LL,
                                   v155,
                                   v64,
                                   v79,
                                   v117 + 199,
                                   &v147,
                                   &v151,
                                   0LL,
                                   v78) )
                            {
                              v81 = v68;
                            }
                            v109 = v81;
                            if ( v65 )
                              *(_QWORD *)(v134 + 128) = 0LL;
                            goto LABEL_125;
                          }
                        }
                        v109 = v68;
                      }
LABEL_125:
                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&prclDest);
                      goto LABEL_126;
                    }
                    v17 = a9;
LABEL_129:
                    if ( v117 )
                      XDCOBJ::vUnlockFast((XDCOBJ *)&v117);
                    return v17;
                  }
                }
                goto LABEL_195;
            }
            v108 = 1;
            v41 = 1024;
            goto LABEL_47;
          case 10:
            DCOBJ::DCOBJ((DCOBJ *)&v123, a1);
            v96 = v123;
            if ( !v123 || !(unsigned int)DC::bIsCMYKColor(v123) )
              goto LABEL_204;
            if ( (_DWORD)v37 == 1 )
            {
              v40 = 2;
              LODWORD(v125[0]) = 1;
              v108 = 1;
            }
            else
            {
              switch ( (_DWORD)v37 )
              {
                case 4:
                  LODWORD(v125[0]) = 2;
                  v40 = 16;
                  break;
                case 8:
                  LODWORD(v125[0]) = 3;
                  v40 = 256;
                  break;
                case 0x20:
                  LODWORD(v125[0]) = 6;
                  v40 = 0;
                  v108 = 16;
                  v41 = 512;
                  goto LABEL_213;
                default:
LABEL_204:
                  EngSetLastError(0x57u);
                  v40 = XlateObject;
                  v38 = 0;
                  v41 = XlateObject;
                  v33 = v110;
                  v108 = XlateObject;
LABEL_205:
                  if ( v96 )
                  {
                    XDCOBJ::vUnlockFast((XDCOBJ *)&v123);
                    v33 = v110;
                  }
                  v46 = 0;
LABEL_175:
                  v45 = v108;
LABEL_176:
                  if ( !v38 )
                    goto LABEL_128;
                  v35 = v115;
                  goto LABEL_53;
              }
              v108 = 1;
            }
            v41 = 1024;
LABEL_213:
            v97 = v37 * v112;
            if ( v97 > 0xFFFFFFFF || (int)v97 + 31 < (unsigned int)v97 )
              goto LABEL_218;
            v33 = v110;
            v98 = -1;
            v99 = v110 * (((unsigned __int64)(unsigned int)(v97 + 31) >> 3) & 0x1FFFFFFC);
            if ( v99 <= 0xFFFFFFFF )
              v98 = v99;
            HIDWORD(v125[0]) = v98;
            if ( v99 > 0xFFFFFFFF )
            {
LABEL_218:
              EngSetLastError(0x216u);
              v29 = 0;
              XDCOBJ::vUnlockFast((XDCOBJ *)&v123);
              goto LABEL_28;
            }
            goto LABEL_205;
        }
        if ( v35 != 2 )
        {
          if ( v35 != 12 )
          {
            if ( v35 != 1 )
            {
              if ( v35 != 11 )
              {
                if ( v35 == 4 )
                {
                  LODWORD(v125[0]) = 9;
                }
                else
                {
                  if ( v35 != 5 )
                    goto LABEL_191;
                  LODWORD(v125[0]) = 10;
                }
                v40 = 0;
                HIDWORD(v125[0]) = *(_DWORD *)(a11 + 20);
                v41 = 512;
                v46 = 0;
                v45 = 8;
                v108 = 8;
                goto LABEL_54;
              }
              DCOBJ::DCOBJ((DCOBJ *)&v123, a1);
              v100 = v123;
              if ( !v123 || !(unsigned int)DC::bIsCMYKColor(v123) )
              {
                EngSetLastError(0x57u);
                v38 = 0;
              }
              if ( v100 )
                XDCOBJ::vUnlockFast((XDCOBJ *)&v123);
              if ( !v38 )
                goto LABEL_128;
            }
            if ( (_DWORD)v37 != 8 )
            {
              EngSetLastError(0x57u);
              v38 = 0;
            }
            LODWORD(v125[0]) = 8;
            v40 = 256;
            goto LABEL_239;
          }
          DCOBJ::DCOBJ((DCOBJ *)&v123, a1);
          v101 = v123;
          if ( !v123 || !(unsigned int)DC::bIsCMYKColor(v123) )
          {
            EngSetLastError(0x57u);
            v38 = 0;
          }
          if ( v101 )
            XDCOBJ::vUnlockFast((XDCOBJ *)&v123);
          if ( !v38 )
            goto LABEL_128;
        }
        if ( (_DWORD)v37 != 4 )
        {
          EngSetLastError(0x57u);
          v38 = 0;
        }
        LODWORD(v125[0]) = 7;
        v40 = 16;
LABEL_239:
        v45 = 1;
        v33 = v110;
        v46 = 1;
        HIDWORD(v125[0]) = *(_DWORD *)(a11 + 20);
        v41 = 1024;
        v108 = 1;
        goto LABEL_176;
      }
    }
  }
  v29 = 0;
LABEL_28:
  if ( v117 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v117);
    LODWORD(XlateObject) = 0;
    v30 = *v117;
    HmgDecrementExclusiveReferenceCountEx(v117, HIDWORD(v118), &XlateObject);
    if ( (_DWORD)XlateObject )
      bDeleteDCInternalEx(v30, 0LL);
  }
  return (unsigned int)v29;
}
