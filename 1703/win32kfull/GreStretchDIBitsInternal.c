/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C0093B84
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C00938F0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0089750 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0096624 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreCreateDIBitmapComp @ 0x1C010AD08 (GreCreateDIBitmapComp.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C01248C4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0299508 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02995C4 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C029B65C (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C029C8C4 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternal(
        HDC a1,
        unsigned int a2,
        int a3,
        int a4,
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
        int a15,
        __int64 a16)
{
  unsigned int v18; // r13d
  char v19; // al
  int v20; // eax
  int v21; // r11d
  void *v22; // r10
  unsigned int v23; // r9d
  unsigned int v24; // eax
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  char *v28; // r8
  unsigned int v29; // edx
  unsigned int v30; // ecx
  int v31; // r13d
  int v32; // eax
  unsigned int v33; // ebx
  BOOL v35; // ebx
  int v36; // r11d
  __int64 v37; // r9
  int v38; // r10d
  int v39; // r15d
  unsigned int v40; // r8d
  __int64 v41; // rsi
  unsigned int v42; // eax
  unsigned int v43; // r13d
  unsigned int v44; // r14d
  unsigned int v45; // edx
  unsigned __int64 v46; // rdx
  unsigned int v47; // r12d
  int v48; // edi
  __int64 v49; // rsi
  __int64 v50; // rsi
  BOOL v51; // eax
  signed int v52; // edx
  signed int v53; // r8d
  int v54; // r9d
  __int64 v55; // r11
  char v56; // r10
  int v57; // ecx
  XLATEOBJ *v58; // r12
  unsigned int v59; // r8d
  struct SURFACE *v60; // r15
  __int64 v61; // rdi
  struct PALETTE *v62; // rbx
  __int64 v63; // rax
  int v64; // ecx
  int v65; // esi
  int v66; // edi
  unsigned __int8 v67; // r11
  LONG v68; // r8d
  __int64 v69; // rcx
  unsigned int v70; // esi
  int v71; // r13d
  int v72; // r9d
  int v73; // ecx
  char v74; // bl
  int v75; // edx
  struct REGION *v76; // rax
  int v77; // r11d
  struct ECLIPOBJ *v78; // rdx
  __int64 v79; // rax
  BOOL (__stdcall *v80)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v81; // r11d
  char *v82; // r8
  __int64 v83; // rdx
  unsigned int v84; // ebx
  unsigned int v85; // eax
  int v86; // r14d
  int v87; // ebx
  int v88; // r13d
  int v89; // ebx
  unsigned int v90; // edx
  HDC CompatibleDC; // rsi
  __int64 DIBitmapComp; // rax
  __int64 v93; // rdi
  int v94; // ebx
  unsigned int v95; // eax
  unsigned __int64 v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // r11
  __int64 v99; // rcx
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // rdx
  SURFOBJ *v102; // rdx
  SURFOBJ *v103; // rcx
  unsigned int v104; // edi
  __int64 v105; // r8
  int v106; // eax
  unsigned int v107; // ecx
  int v108; // ecx
  int v109[2]; // [rsp+30h] [rbp-D0h]
  __int64 v110; // [rsp+38h] [rbp-C8h]
  int v111[2]; // [rsp+40h] [rbp-C0h]
  __int64 v112; // [rsp+48h] [rbp-B8h]
  unsigned int v113; // [rsp+80h] [rbp-80h]
  int v114; // [rsp+84h] [rbp-7Ch]
  unsigned int v115; // [rsp+88h] [rbp-78h]
  unsigned int v116; // [rsp+8Ch] [rbp-74h]
  int v117; // [rsp+90h] [rbp-70h]
  char v118; // [rsp+94h] [rbp-6Ch]
  unsigned int v119; // [rsp+98h] [rbp-68h]
  unsigned int v120; // [rsp+9Ch] [rbp-64h]
  DC *v122[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v123; // [rsp+B8h] [rbp-48h]
  unsigned int v124; // [rsp+BCh] [rbp-44h]
  unsigned int v125; // [rsp+C0h] [rbp-40h]
  __int64 XlateObject; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v127[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v128; // [rsp+F0h] [rbp-10h]
  int v129; // [rsp+F4h] [rbp-Ch]
  unsigned int v130; // [rsp+F8h] [rbp-8h]
  unsigned int v131; // [rsp+FCh] [rbp-4h]
  unsigned int v132; // [rsp+100h] [rbp+0h]
  int v133; // [rsp+104h] [rbp+4h]
  int v134; // [rsp+108h] [rbp+8h]
  int v135; // [rsp+10Ch] [rbp+Ch]
  __int64 v136; // [rsp+110h] [rbp+10h] BYREF
  char v137; // [rsp+118h] [rbp+18h]
  int v138; // [rsp+11Ch] [rbp+1Ch]
  __int64 v139; // [rsp+120h] [rbp+20h] BYREF
  int v140; // [rsp+128h] [rbp+28h]
  __int64 v141[2]; // [rsp+130h] [rbp+30h] BYREF
  char *v142; // [rsp+140h] [rbp+40h] BYREF
  int v143; // [rsp+148h] [rbp+48h]
  int v144; // [rsp+14Ch] [rbp+4Ch]
  __int64 v145; // [rsp+150h] [rbp+50h] BYREF
  char v146; // [rsp+158h] [rbp+58h]
  int v147; // [rsp+15Ch] [rbp+5Ch]
  DC *v148[2]; // [rsp+160h] [rbp+60h] BYREF
  DC *v149[2]; // [rsp+170h] [rbp+70h] BYREF
  DC *v150[2]; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v151; // [rsp+190h] [rbp+90h] BYREF
  int v152; // [rsp+19Ch] [rbp+9Ch]
  _OWORD v153[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v154[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v155; // [rsp+1E0h] [rbp+E0h]
  __int64 v156; // [rsp+1E8h] [rbp+E8h]
  _BYTE v157[32]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v158; // [rsp+230h] [rbp+130h]
  __int64 v159; // [rsp+238h] [rbp+138h]
  unsigned int v160; // [rsp+260h] [rbp+160h] BYREF
  int v161; // [rsp+264h] [rbp+164h]
  unsigned int v162; // [rsp+268h] [rbp+168h]
  int v163; // [rsp+26Ch] [rbp+16Ch]
  struct tagRGBQUAD *v164; // [rsp+270h] [rbp+170h] BYREF
  int v165; // [rsp+278h] [rbp+178h]
  int v166; // [rsp+27Ch] [rbp+17Ch]
  RECTL prclDest; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v168[4]; // [rsp+290h] [rbp+190h] BYREF
  __int128 v169[4]; // [rsp+294h] [rbp+194h] BYREF
  __int64 v170; // [rsp+2E0h] [rbp+1E0h]
  int v171; // [rsp+2E8h] [rbp+1E8h]
  int v172; // [rsp+310h] [rbp+210h]
  __int64 v173; // [rsp+320h] [rbp+220h]

  v18 = 0;
  XlateObject = a10;
  v129 = a15;
  v141[0] = a16;
  v134 = a4;
  v135 = a3;
  v19 = gajRop3[BYTE2(a13)];
  v117 = a12;
  v133 = a5;
  v115 = 0;
  if ( (v19 & 0xD4) == 0 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  v122[1] = 0LL;
  v122[0] = (DC *)HmgLockEx(a1, 1LL, 0LL);
  if ( !v122[0] )
    goto LABEL_133;
  v20 = XDCOBJ::bSaveAttributes((XDCOBJ *)v122);
  v21 = 0;
  if ( !v20 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v122[0] + 3);
    v122[0] = 0LL;
    goto LABEL_133;
  }
  if ( (*((_DWORD *)v122[0] + 134) & 4) != 0 )
    DC::vMarkTransformDirty(v122[0]);
  if ( !v122[0] )
    goto LABEL_133;
  if ( !a11 )
    goto LABEL_133;
  v22 = (void *)XlateObject;
  if ( !XlateObject )
    goto LABEL_133;
  if ( a12 > 2 )
    goto LABEL_133;
  v23 = a14;
  if ( a14 < 0xC )
    goto LABEL_133;
  v24 = *(_DWORD *)a11;
  v124 = v24;
  if ( a14 < v24 || v24 < 0x28 || *(_DWORD *)(a11 + 4) <= v21 || *(_DWORD *)(a11 + 8) == v21 )
    goto LABEL_133;
  v25 = *((_QWORD *)v122[0] + 10);
  v26 = *(unsigned __int8 *)(v25 + 75);
  v143 = *(_DWORD *)(v25 + 68);
  v27 = *((_QWORD *)v122[0] + 10);
  v128 = v26;
  v144 = *(_DWORD *)(v27 + 312) & 1;
  if ( (*(_DWORD *)(*((_QWORD *)v122[0] + 10) + 352LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v142, (struct XDCOBJ *)v122, 0x204u, 0);
    v28 = v142;
    v23 = a14;
    v22 = (void *)XlateObject;
  }
  else
  {
    v28 = (char *)v122[0] + 336;
    v142 = (char *)v122[0] + 336;
  }
  v29 = *(_DWORD *)(a11 + 16);
  if ( v29 - 4 > 1
    || (unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v122, v29)
    && BYTE2(a13) == 204
    && (v28[32] & 1) != 0
    && !a12
    && v141[0] == v98 )
  {
    if ( a4 == a8 && (v30 = a9, v133 == a9) && a9 > 0 )
    {
      v31 = a7;
      if ( a8 > 0 && !(a7 | a6) && BYTE2(a13) == 204 && v128 != 4 && (*((_DWORD *)v28 + 8) & 2) != 0 )
      {
        v32 = *(_DWORD *)(a11 + 8);
        if ( v32 < 0 )
          v32 = -v32;
        if ( a9 >= v32 )
          v30 = v32;
        v115 = GreSetDIBitsToDeviceInternal(
                 a1,
                 a2,
                 v135,
                 a4,
                 v133,
                 a6,
                 a7,
                 a7,
                 v30,
                 v22,
                 (struct tagRGBQUAD *)a11,
                 a12,
                 v129,
                 v23,
                 1,
                 v141[0]);
        goto LABEL_31;
      }
    }
    else
    {
      v31 = a7;
    }
    v35 = 0;
    if ( a12 == 1 )
    {
      v158 = 0LL;
      v159 = 0LL;
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v157, (struct XDCOBJ *)v122, 0);
      v99 = *((_QWORD *)v122[0] + 64);
      if ( v99 )
        v35 = *(_DWORD *)(v99 + 96) == 1;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v157);
      v28 = v142;
    }
    if ( BYTE2(a13) != 204 || (v28[32] & 1) == 0 || v35 )
    {
      v86 = *(_DWORD *)(a11 + 8);
      if ( v86 <= 0 )
      {
        v89 = v31;
        v88 = a9;
      }
      else
      {
        v87 = v86 - v31;
        v88 = a9;
        v89 = v87 - a9;
      }
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
        DIBitmapComp = GreCreateDIBitmapComp(a1, XlateObject, a11, a12, a14, v129);
      else
        DIBitmapComp = GreCreateDIBitmapReal(
                         a1,
                         v90,
                         (void *)XlateObject,
                         (unsigned int *)a11,
                         a12,
                         a14,
                         v129,
                         0LL,
                         0,
                         0LL,
                         0,
                         0LL,
                         0LL);
      v93 = DIBitmapComp;
      if ( CompatibleDC && DIBitmapComp )
      {
        GreSelectBitmap(CompatibleDC, DIBitmapComp);
        v94 = GreStretchBltInternal(a1, a2, v135, v133, CompatibleDC, a6, v89, a8, v88, a13, 0xFFFFFF, 1);
        bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
        GreDeleteObject(v93);
        if ( v94 )
          v115 = v86;
      }
      else
      {
        bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
        GreDeleteObject(v93);
      }
      goto LABEL_31;
    }
    memset(v127, 0, sizeof(v127));
    v36 = *(_DWORD *)(a11 + 8);
    v37 = *(unsigned int *)(a11 + 4);
    v38 = *(_DWORD *)(a11 + 16);
    v39 = 1;
    v40 = *(_DWORD *)(a11 + 32);
    v41 = *(unsigned __int16 *)(a11 + 14);
    DWORD2(v127[1]) = 0;
    v114 = 1;
    v123 = v38;
    v116 = v37;
    v119 = v36;
    v125 = v40;
    v164 = (struct tagRGBQUAD *)(a11 + v124);
    if ( v36 < 0 )
    {
      v36 = -v36;
      DWORD2(v127[1]) = 1;
      v119 = v36;
    }
    switch ( v38 )
    {
      case 3:
        if ( a14 < 0x34 )
          goto LABEL_195;
        v95 = 0;
        if ( a12 != 1 )
          v95 = a12;
        v117 = v95;
        if ( (_DWORD)v41 == 32 )
        {
          LODWORD(v127[0]) = 6;
        }
        else if ( (_DWORD)v41 == 16 )
        {
          LODWORD(v127[0]) = 4;
        }
        else
        {
          EngSetLastError(0x57u);
          LODWORD(v37) = v116;
          v39 = 0;
          v114 = 0;
        }
        v132 = *(_DWORD *)(a11 + 40);
        v43 = 0;
        v44 = 512;
        v96 = v41 * (unsigned int)v37;
        v131 = *(_DWORD *)(a11 + 44);
        v97 = *(_DWORD *)(a11 + 48);
        v164 = (struct tagRGBQUAD *)(a11 + 40);
        v130 = v97;
        v113 = 2;
        if ( v96 > 0xFFFFFFFF || (int)v96 + 31 < (unsigned int)v96 )
        {
LABEL_201:
          EngSetLastError(0x216u);
          v33 = 0;
          goto LABEL_32;
        }
        v36 = v119;
        v46 = v119 * (unsigned __int64)(((unsigned int)(v96 + 31) >> 3) & 0x1FFFFFFC);
        if ( v46 > 0xFFFFFFFF )
        {
LABEL_182:
          HIDWORD(v127[0]) = -1;
          goto LABEL_201;
        }
        v47 = 2;
        v48 = 0;
        goto LABEL_176;
      case 0:
        switch ( (_DWORD)v41 )
        {
          case 1:
            LODWORD(v127[0]) = 1;
            v43 = 2;
            break;
          case 4:
            LODWORD(v127[0]) = 2;
            v43 = 16;
            break;
          case 8:
            LODWORD(v127[0]) = 3;
            v43 = 256;
            break;
          default:
            v42 = 0;
            if ( a12 != 1 )
              v42 = a12;
            v117 = v42;
            if ( (_DWORD)v41 == 24 )
            {
              LODWORD(v127[0]) = 5;
              v113 = 8;
LABEL_51:
              v43 = 0;
              v117 = v42;
              v44 = 512;
              goto LABEL_52;
            }
            if ( (_DWORD)v41 != 32 )
            {
              if ( (_DWORD)v41 != 16 )
              {
                EngSetLastError(0x57u);
                v18 = 0;
                goto LABEL_133;
              }
              LODWORD(v127[0]) = 4;
              v132 = 31744;
              v131 = 992;
              v130 = 31;
              v113 = 2;
              goto LABEL_51;
            }
            LODWORD(v127[0]) = 6;
            v43 = 0;
            v113 = 8;
            v44 = 512;
LABEL_52:
            v45 = v41 * v37;
            if ( (unsigned __int64)(v41 * v37) > 0xFFFFFFFF || v45 + 31 < v45 )
              goto LABEL_201;
            v46 = (unsigned int)v36 * (unsigned __int64)(((v45 + 31) >> 3) & 0x1FFFFFFC);
            if ( v46 <= 0xFFFFFFFF )
            {
              v47 = v113;
              v48 = 0;
              HIDWORD(v127[0]) = v46;
LABEL_56:
              v40 = v125;
LABEL_57:
              v49 = v141[0];
              v120 = a14 - v124;
              if ( !v141[0] )
              {
                v49 = *(_QWORD *)(*((_QWORD *)v122[0] + 10) + 112LL);
                v141[0] = v49;
              }
              v125 = *((_DWORD *)v122[0] + 28);
              if ( (v125 & 0x10000000) != 0 && (!v49 || (unsigned int)(v38 - 10) > 2) )
                v125 = v125 & 0xFFFFFFF | 0x20000000;
              *(_QWORD *)((char *)v127 + 4) = __PAIR64__(v36, v37);
              if ( v40 )
              {
                v85 = v43;
                if ( v40 <= v43 )
                  v85 = v40;
                v124 = v85;
              }
              else
              {
                v124 = v43;
              }
              if ( v129 >= (unsigned int)v46 )
              {
                v50 = *((_QWORD *)v122[0] + 6);
                v162 = a2 + v134;
                v160 = a2;
                v161 = v135;
                v163 = v135 + v133;
                EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v151, (struct XDCOBJ *)v122, 0x204u);
                v51 = (*(_BYTE *)(v151 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v151, &v160, 2LL);
                if ( v152 )
                {
                  ++v160;
                  ++v162;
                }
                if ( !v51 )
                  goto LABEL_132;
                if ( !ERECTL::bEmpty((ERECTL *)&v160) )
                {
                  v118 = v55;
                  v56 = v55;
                  if ( v53 > v52 )
                  {
                    v160 = v52;
                    v162 = v53;
                    if ( !v54 )
                    {
                      v160 = v52 + 1;
                      v162 = v53 + 1;
                    }
                    v56 = 1;
                    v118 = 1;
                  }
                  v57 = v161;
                  if ( v161 > v163 )
                  {
                    v161 = v163 + 1;
                    v118 = v56 ^ 2;
                    v163 = v57 + 1;
                  }
                  v140 = v55;
                  v139 = v55;
                  if ( !v117 )
                  {
                    v39 &= -(PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v139, v47, v43, 0LL, v132, v131, v130, v44, 1) != 0);
                    v114 = v39;
                  }
                  v58 = 0LL;
                  if ( !v39 )
                    goto LABEL_131;
                  v155 = 0LL;
                  v156 = 0LL;
                  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v154, (struct XDCOBJ *)v122, 0);
                  DWORD2(v127[1]) |= 8 * (*(_DWORD *)(*((_QWORD *)v122[0] + 6) + 32LL) & 0x8000);
                  *(_QWORD *)&v127[1] = 0LL;
                  v136 = 0LL;
                  v137 = 0;
                  v138 = 0;
                  if ( v48 )
                  {
                    v145 = 0LL;
                    v146 = 0;
                    v153[0] = v127[0];
                    v147 = 0;
                    v153[1] = v127[1];
                    if ( SURFMEM::bCreateDIB(
                           (SURFMEM *)&v145,
                           (struct _DEVBITMAPINFO *)v153,
                           (void *)XlateObject,
                           0LL,
                           0,
                           0LL,
                           0LL,
                           0,
                           1,
                           0,
                           0)
                      && (LODWORD(v127[0]) = (LODWORD(v127[0]) != 7) + 2,
                          SURFMEM::bCreateDIB(
                            (SURFMEM *)&v136,
                            (struct _DEVBITMAPINFO *)v127,
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
                      *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)v127 + 4);
                      *(_QWORD *)&prclDest.left = 0LL;
                      if ( v145 )
                        v102 = (SURFOBJ *)(v145 + 24);
                      v103 = 0LL;
                      if ( v136 )
                        v103 = (SURFOBJ *)(v136 + 24);
                      EngCopyBits(v103, v102, 0LL, 0LL, &prclDest, &gptl00);
                    }
                    else
                    {
                      v39 = 0;
                      v114 = 0;
                    }
                    SURFMEM::~SURFMEM((SURFMEM *)&v145);
                  }
                  else
                  {
                    v39 &= -(SURFMEM::bCreateDIB(
                               (SURFMEM *)&v136,
                               (struct _DEVBITMAPINFO *)v127,
                               (void *)XlateObject,
                               0LL,
                               0,
                               0LL,
                               0LL,
                               0,
                               1,
                               0,
                               0) != 0);
                    v114 = v39;
                  }
                  if ( !v39 )
                  {
LABEL_130:
                    SURFMEM::~SURFMEM((SURFMEM *)&v136);
                    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v154);
LABEL_131:
                    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v139);
LABEL_132:
                    v18 = v115;
                    goto LABEL_133;
                  }
                  v60 = (struct SURFACE *)*((_QWORD *)v122[0] + 64);
                  if ( !v60 )
                    v60 = SURFACE::pdibDefault;
                  v61 = *((_QWORD *)v60 + 16);
                  XlateObject = 0LL;
                  v62 = (struct PALETTE *)*((_QWORD *)v122[0] + 12);
                  if ( v62 != ppalDefault )
                    *((_QWORD *)v60 + 22) = *(_QWORD *)v62;
                  if ( v117 )
                  {
                    if ( v117 == 1 )
                    {
                      v104 = v124;
                      if ( v120 < 2 * (unsigned __int64)v124
                        || !(unsigned int)EXLATEOBJ::bMakeXlate(&XlateObject, v164, v62, v60, v124, v43) )
                      {
                        goto LABEL_129;
                      }
                      v58 = (XLATEOBJ *)XlateObject;
                      if ( gbMultiMonMismatchColor && (*(_DWORD *)(v50 + 32) & 1) != 0 )
                      {
                        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v139, v113, v43, 0LL, v132, v131, v130, v44, 1) )
                        {
                          v105 = *((_QWORD *)v60 + 16);
                          if ( !v105 )
                            v105 = *(_QWORD *)(v50 + 1824);
                          XEPALOBJ::vGetEntriesFrom(&v139, v62, v105, v164, v104);
                          v64 = v114;
                          v65 = v123;
                          v66 = 1;
                        }
                        else
                        {
                          v65 = v123;
                          v64 = 0;
                          v66 = 0;
                        }
                      }
                      else
                      {
                        v64 = v114;
                        v66 = 0;
                        v65 = v123;
                      }
                    }
                    else
                    {
                      v64 = v114;
                      v65 = v123;
                      if ( v117 == 2 )
                      {
                        v66 = 0;
                        if ( *((_DWORD *)v60 + 24) != LODWORD(v127[0]) )
                          v64 = 0;
                        v58 = xloIdent;
                      }
                      else
                      {
                        v66 = 0;
                      }
                    }
                  }
                  else
                  {
                    if ( v124 )
                    {
                      if ( v120 < 4 * v124 )
                        goto LABEL_129;
                      v65 = v123;
                      if ( (unsigned int)(v123 - 10) <= 2 )
                        XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v139, (unsigned int *)&v164->rgbBlue, v59, v124);
                      else
                        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v139, v164, 0, v124);
                      LODWORD(v112) = 0;
                      v111[0] = 0xFFFFFF;
                      LODWORD(v110) = 0;
                      v109[0] = 0;
                      XlateObject = CreateXlateObject(
                                      v141[0],
                                      v125,
                                      v139,
                                      v61,
                                      v62,
                                      v62,
                                      *(_QWORD *)v109,
                                      v110,
                                      *(_QWORD *)v111,
                                      v112);
                      v58 = (XLATEOBJ *)XlateObject;
                      if ( XlateObject )
                        v64 = v114;
                      else
                        v64 = 0;
                    }
                    else
                    {
                      LODWORD(v112) = 0;
                      v111[0] = 0xFFFFFF;
                      LODWORD(v110) = 0;
                      v109[0] = 0;
                      v63 = CreateXlateObject(
                              v141[0],
                              v125,
                              v139,
                              v61,
                              v62,
                              v62,
                              *(_QWORD *)v109,
                              v110,
                              *(_QWORD *)v111,
                              v112);
                      v64 = v114;
                      v65 = v123;
                      v58 = (XLATEOBJ *)v63;
                      XlateObject = v63;
                      if ( !v63 )
                        v64 = 0;
                    }
                    v66 = 0;
                  }
                  if ( v64 )
                  {
                    if ( (*((_DWORD *)v122[0] + 9) & 0xE0) != 0 )
                      XDCOBJ::vAccumulate((XDCOBJ *)v122, (struct ERECTL *)&v160);
                    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v122) )
                    {
                      v70 = v119;
                    }
                    else
                    {
                      if ( (v67 & v154[24]) == 0 )
                        goto LABEL_129;
                      v68 = a6;
                      v69 = (v67 & *((_BYTE *)v122[0] + 40)) != 0 ? 8 : 0;
                      v160 += *(_DWORD *)((char *)v122[0] + v69 + 1432);
                      v162 += *(_DWORD *)((char *)v122[0] + v69 + 1432);
                      v161 += *(_DWORD *)((char *)v122[0] + v69 + 1436);
                      v163 += *(_DWORD *)((char *)v122[0] + v69 + 1436);
                      LODWORD(v164) = a6;
                      if ( v65 == 4 && (v67 & BYTE8(v127[1])) != 0 )
                      {
                        v72 = a7;
                        v71 = a9;
                        v70 = v119;
                      }
                      else
                      {
                        v70 = v119;
                        v71 = a9;
                        v72 = v119 - a7 - a9;
                      }
                      v73 = v72 + v71;
                      v74 = v118;
                      v75 = a6 + a8;
                      HIDWORD(v164) = v72;
                      v166 = v72 + v71;
                      v165 = a6 + a8;
                      if ( a6 > a6 + a8 )
                      {
                        v68 = v75 + 1;
                        v74 = v67 ^ v118;
                        v75 = a6 + 1;
                        LODWORD(v164) = v68;
                        v165 = a6 + 1;
                      }
                      if ( v72 > v73 )
                      {
                        v106 = v72;
                        v74 ^= 2u;
                        v72 = v73 + 1;
                        HIDWORD(v164) = v73 + 1;
                        v73 = v106 + 1;
                        v166 = v106 + 1;
                      }
                      if ( v75 <= 0
                        || v73 <= 0
                        || v68 >= *(_DWORD *)(v136 + 56)
                        || v72 >= *(_DWORD *)(v136 + 60)
                        || ERECTL::bEmpty((ERECTL *)&v164) )
                      {
                        goto LABEL_129;
                      }
                      v76 = XDCOBJ::prgnEffRao(v122);
                      v170 = 0LL;
                      v171 = 0;
                      v172 = v77;
                      v173 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)v168, v76, (struct ERECTL *)&v160, 0);
                      if ( !ERECTL::bEmpty((ERECTL *)v169) )
                      {
                        if ( (*((_DWORD *)v122[0] + 9) & 0xE0) != 0 )
                        {
                          *(_OWORD *)v141 = v169[0];
                          XDCOBJ::vAccumulateTight((XDCOBJ *)v122, v78, (__m128i *)v141);
                        }
                        if ( v66 )
                          *(_QWORD *)(v136 + 128) = v139;
                        v79 = *((_QWORD *)v60 + 6);
                        if ( (*((_DWORD *)v60 + 28) & 2) != 0 )
                          v80 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v79 + 2864);
                        else
                          v80 = EngStretchBlt;
                        v81 = v128;
                        if ( (*((_DWORD *)v60 + 28) & 2) != 0 && (*(_DWORD *)(v79 + 32) & 0x20000) == 0 )
                        {
                          if ( v128 == 4 && (*((_BYTE *)v122[0] + 72) & 0x10) == 0 )
                            v80 = EngStretchBlt;
                          if ( (int)v164 < 0
                            || SHIDWORD(v164) < 0
                            || v165 > *(_DWORD *)(v136 + 56)
                            || v166 > *(_DWORD *)(v136 + 60) )
                          {
                            v80 = EngStretchBlt;
                          }
                        }
                        if ( (v74 & 1) != 0 )
                        {
                          v107 = v160;
                          v160 = v162;
                          v162 = v107;
                        }
                        if ( (v74 & 2) != 0 )
                        {
                          v108 = v161;
                          v161 = v163;
                          v163 = v108;
                        }
                        ++*((_DWORD *)v60 + 23);
                        v82 = 0LL;
                        if ( *((__int16 *)v122[0] + 121) >= 0 )
                          v82 = (char *)v122[0] + 240;
                        v83 = 0LL;
                        if ( v136 )
                          v83 = v136 + 24;
                        v84 = 0;
                        if ( ((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, XLATEOBJ *, char *, char *, unsigned int *, struct tagRGBQUAD **, _QWORD, int))v80)(
                               (char *)v60 + 24,
                               v83,
                               0LL,
                               v168,
                               v58,
                               v82,
                               (char *)v122[0] + 1592,
                               &v160,
                               &v164,
                               0LL,
                               v81) )
                        {
                          v84 = v70;
                        }
                        v115 = v84;
                        if ( v66 )
                          *(_QWORD *)(v136 + 128) = 0LL;
                        goto LABEL_129;
                      }
                    }
                    v115 = v70;
                  }
LABEL_129:
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&XlateObject);
                  goto LABEL_130;
                }
                v18 = a9;
LABEL_133:
                if ( v122[0] )
                {
                  XDCOBJ::RestoreAttributes((XDCOBJ *)v122);
                  _InterlockedDecrement((volatile signed __int32 *)v122[0] + 3);
                }
                return v18;
              }
LABEL_195:
              EngSetLastError(0x57u);
              v18 = 0;
              goto LABEL_133;
            }
            goto LABEL_182;
        }
        v113 = 1;
        v44 = 1024;
        goto LABEL_52;
      case 10:
        DCOBJ::DCOBJ((DCOBJ *)v148, a1);
        if ( !v148[0] || !(unsigned int)DC::bIsCMYKColor(v148[0]) )
          goto LABEL_221;
        if ( (_DWORD)v41 == 1 )
        {
          v43 = 2;
          LODWORD(v127[0]) = 1;
          v113 = 1;
        }
        else
        {
          switch ( (_DWORD)v41 )
          {
            case 4:
              LODWORD(v127[0]) = 2;
              v43 = 16;
              break;
            case 8:
              LODWORD(v127[0]) = 3;
              v43 = 256;
              break;
            case 0x20:
              LODWORD(v127[0]) = 6;
              v43 = 0;
              v113 = 16;
              v44 = 512;
LABEL_215:
              v100 = v41 * v116;
              if ( v100 <= 0xFFFFFFFF && (int)v100 + 31 >= (unsigned int)v100 )
              {
                v101 = v119 * (unsigned __int64)(((unsigned int)(v100 + 31) >> 3) & 0x1FFFFFFC);
                if ( v101 <= 0xFFFFFFFF )
                {
                  HIDWORD(v127[0]) = v101;
LABEL_222:
                  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v148);
                  LODWORD(v46) = HIDWORD(v127[0]);
                  LODWORD(v37) = v116;
                  v36 = v119;
                  v47 = v113;
                  v48 = 0;
                  goto LABEL_177;
                }
                HIDWORD(v127[0]) = -1;
              }
              EngSetLastError(0x216u);
              v33 = 0;
              XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v148);
              goto LABEL_32;
            default:
LABEL_221:
              EngSetLastError(0x57u);
              v113 = a2;
              v44 = a2;
              v39 = 0;
              v43 = a2;
              v114 = 0;
              goto LABEL_222;
          }
          v113 = 1;
        }
        v44 = 1024;
        goto LABEL_215;
    }
    if ( v38 != 2 )
    {
      if ( v38 != 12 )
      {
        if ( v38 != 1 )
        {
          if ( v38 != 11 )
          {
            if ( v38 == 4 )
            {
              LODWORD(v127[0]) = 9;
            }
            else
            {
              if ( v38 != 5 )
                goto LABEL_195;
              LODWORD(v127[0]) = 10;
            }
            v43 = 0;
            v47 = 8;
            LODWORD(v46) = *(_DWORD *)(a11 + 20);
            v44 = 512;
            v113 = 8;
            v48 = 0;
            HIDWORD(v127[0]) = v46;
            goto LABEL_57;
          }
          DCOBJ::DCOBJ((DCOBJ *)v149, a1);
          if ( !v149[0] || !(unsigned int)DC::bIsCMYKColor(v149[0]) )
          {
            EngSetLastError(0x57u);
            v39 = 0;
            v114 = 0;
          }
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v149);
          if ( !v39 )
            goto LABEL_132;
        }
        if ( (_DWORD)v41 != 8 )
        {
          EngSetLastError(0x57u);
          v114 = 0;
          v39 = 0;
        }
        LODWORD(v127[0]) = 8;
        v43 = 256;
        goto LABEL_246;
      }
      DCOBJ::DCOBJ((DCOBJ *)v150, a1);
      if ( !v150[0] || !(unsigned int)DC::bIsCMYKColor(v150[0]) )
      {
        EngSetLastError(0x57u);
        v39 = 0;
        v114 = 0;
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v150);
      if ( !v39 )
        goto LABEL_132;
    }
    if ( (_DWORD)v41 != 4 )
    {
      EngSetLastError(0x57u);
      v114 = 0;
      v39 = 0;
    }
    LODWORD(v127[0]) = 7;
    v43 = 16;
LABEL_246:
    LODWORD(v46) = *(_DWORD *)(a11 + 20);
    v44 = 1024;
    v36 = v119;
    v48 = 1;
    LODWORD(v37) = v116;
    v47 = 1;
    v113 = 1;
LABEL_176:
    HIDWORD(v127[0]) = v46;
LABEL_177:
    if ( !v39 )
    {
      v18 = 0;
      goto LABEL_133;
    }
    v38 = v123;
    goto LABEL_56;
  }
  v115 = v98;
LABEL_31:
  v33 = v115;
LABEL_32:
  if ( v122[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v122);
    _InterlockedDecrement((volatile signed __int32 *)v122[0] + 3);
  }
  return v33;
}
