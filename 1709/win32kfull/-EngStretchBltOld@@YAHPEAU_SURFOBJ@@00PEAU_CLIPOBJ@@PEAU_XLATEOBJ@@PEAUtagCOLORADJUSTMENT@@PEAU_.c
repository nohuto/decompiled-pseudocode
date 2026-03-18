/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C026ADBC
 * Callers:
 *     EngStretchBlt @ 0x1C00148E0 (EngStretchBlt.c)
 * Callees:
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C0014000 (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00183D8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00E2AA4 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C01106A4 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0142F08 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0142F40 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C01431B4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C027DA88 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltOld(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        int *a12)
{
  struct _RECTL *v14; // rsi
  struct _RECTL *v15; // r14
  __int64 v16; // rbx
  SIZEL v17; // r13
  unsigned int v18; // r15d
  int v19; // edx
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // r12d
  SURFOBJ *v24; // rcx
  struct _XLATEOBJ *v25; // r9
  int v26; // eax
  SURFOBJ *v27; // r10
  __int64 v28; // r8
  unsigned int v29; // edx
  int v30; // eax
  int v31; // r8d
  LONG bottom; // eax
  LONG top; // ecx
  LONG right; // eax
  LONG left; // ecx
  BOOL v36; // r10d
  int v37; // ecx
  struct _SURFOBJ *v38; // r9
  LONG v39; // ecx
  int v40; // eax
  LONG v41; // r8d
  LONG v42; // edx
  LONG v43; // edx
  SURFOBJ *v44; // rax
  LONG v45; // ecx
  LONG v46; // eax
  __int64 v47; // r10
  struct _SURFOBJ *v48; // r14
  __int64 *v49; // rax
  int v50; // ecx
  int v51; // eax
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rsi
  int v55; // eax
  struct _RECTL *v56; // rdx
  struct _XLATEOBJ *v57; // rax
  struct _RECTL *v58; // rbx
  int dhpdev; // eax
  SIZEL v60; // r8
  int v61; // eax
  int v62; // ecx
  signed int v63; // r8d
  LONG v64; // r11d
  int v65; // r9d
  int v66; // ecx
  int v67; // edx
  int v68; // ecx
  XCLIPOBJ *v69; // rdi
  int v70; // eax
  struct _RECTL *v71; // rcx
  LONG v72; // eax
  LONG v73; // ecx
  LONG v74; // edx
  LONG v75; // r8d
  unsigned int v76; // ecx
  void *v77; // r14
  unsigned int v78; // r8d
  __int64 v79; // rdx
  unsigned int v80; // eax
  __int64 v81; // rcx
  HSURF v82; // rbx
  struct _SURFOBJ *v83; // r10
  __int64 v84; // r11
  unsigned int v85; // r8d
  unsigned int v86; // r8d
  LONG v87; // r8d
  int v88; // r9d
  int v89; // edx
  __int64 v90; // rdx
  XCLIPOBJ *v91; // rsi
  unsigned int v93; // [rsp+70h] [rbp-3D8h]
  LONG v94; // [rsp+70h] [rbp-3D8h]
  int v95; // [rsp+74h] [rbp-3D4h]
  int i; // [rsp+74h] [rbp-3D4h]
  LONG v97; // [rsp+78h] [rbp-3D0h]
  int v98; // [rsp+78h] [rbp-3D0h]
  struct _SURFOBJ *v99; // [rsp+80h] [rbp-3C8h]
  struct _SURFOBJ *v100; // [rsp+80h] [rbp-3C8h]
  int v101; // [rsp+88h] [rbp-3C0h]
  struct _XLATEOBJ *v102; // [rsp+88h] [rbp-3C0h]
  __int64 v103; // [rsp+90h] [rbp-3B8h]
  struct _SURFOBJ *v104; // [rsp+98h] [rbp-3B0h] BYREF
  char v105; // [rsp+A0h] [rbp-3A8h]
  int v106; // [rsp+A4h] [rbp-3A4h]
  __int64 v107; // [rsp+A8h] [rbp-3A0h]
  SIZEL v108; // [rsp+B0h] [rbp-398h] BYREF
  char v109; // [rsp+B8h] [rbp-390h]
  int v110; // [rsp+BCh] [rbp-38Ch]
  struct REGION *v111[2]; // [rsp+C0h] [rbp-388h] BYREF
  unsigned int v112; // [rsp+D0h] [rbp-378h]
  unsigned __int64 v113; // [rsp+D8h] [rbp-370h]
  struct _SURFOBJ *v114; // [rsp+E0h] [rbp-368h]
  int v115; // [rsp+E8h] [rbp-360h]
  XCLIPOBJ *v116; // [rsp+F0h] [rbp-358h]
  SURFOBJ *pso; // [rsp+F8h] [rbp-350h]
  SIZEL sizl; // [rsp+100h] [rbp-348h]
  struct _RECTL *v119; // [rsp+108h] [rbp-340h]
  struct tagCOLORADJUSTMENT *v120; // [rsp+110h] [rbp-338h]
  __int64 v121; // [rsp+118h] [rbp-330h]
  struct REGION *v122[2]; // [rsp+120h] [rbp-328h] BYREF
  __int64 *v123[2]; // [rsp+130h] [rbp-318h] BYREF
  struct _RECTL v124; // [rsp+140h] [rbp-308h] BYREF
  SURFOBJ *v125; // [rsp+150h] [rbp-2F8h]
  HSURF hsurf; // [rsp+158h] [rbp-2F0h]
  __int64 v127; // [rsp+160h] [rbp-2E8h]
  BOOL v128; // [rsp+168h] [rbp-2E0h]
  int *v129; // [rsp+170h] [rbp-2D8h]
  int v130; // [rsp+178h] [rbp-2D0h]
  BOOL v131; // [rsp+17Ch] [rbp-2CCh]
  __int64 v132; // [rsp+180h] [rbp-2C8h] BYREF
  char v133; // [rsp+188h] [rbp-2C0h]
  int v134; // [rsp+18Ch] [rbp-2BCh]
  __int64 v135; // [rsp+190h] [rbp-2B8h]
  struct _CLIPOBJ *v136; // [rsp+198h] [rbp-2B0h]
  __int64 v137; // [rsp+1A0h] [rbp-2A8h] BYREF
  int v138; // [rsp+1A8h] [rbp-2A0h]
  int v139; // [rsp+1ACh] [rbp-29Ch]
  struct _XLATEOBJ *v140; // [rsp+1B0h] [rbp-298h]
  __int64 v141; // [rsp+1B8h] [rbp-290h] BYREF
  __int64 v142; // [rsp+1C0h] [rbp-288h] BYREF
  PVOID pvBits; // [rsp+1C8h] [rbp-280h] BYREF
  __int64 v144; // [rsp+1D0h] [rbp-278h]
  struct _CLIPOBJ *v145; // [rsp+1D8h] [rbp-270h]
  _QWORD v146[4]; // [rsp+1E8h] [rbp-260h] BYREF
  _QWORD v147[4]; // [rsp+208h] [rbp-240h] BYREF
  struct _RECTL v148; // [rsp+228h] [rbp-220h] BYREF
  struct _RECTL v149; // [rsp+238h] [rbp-210h] BYREF
  struct _RECTL v150; // [rsp+248h] [rbp-200h] BYREF
  __int64 v151; // [rsp+258h] [rbp-1F0h] BYREF
  int v152; // [rsp+260h] [rbp-1E8h]
  int v153; // [rsp+264h] [rbp-1E4h]
  __m128i v154; // [rsp+268h] [rbp-1E0h] BYREF
  __int64 v155; // [rsp+278h] [rbp-1D0h]
  unsigned int v156; // [rsp+280h] [rbp-1C8h]
  LONG v157; // [rsp+284h] [rbp-1C4h]
  struct _RECTL v158; // [rsp+288h] [rbp-1C0h] BYREF
  struct _RECTL v159; // [rsp+298h] [rbp-1B0h] BYREF
  int v160; // [rsp+2A8h] [rbp-1A0h] BYREF
  struct _RECTL v161; // [rsp+2ACh] [rbp-19Ch] BYREF
  _BYTE v162[160]; // [rsp+2C0h] [rbp-188h] BYREF
  char v163[4]; // [rsp+360h] [rbp-E8h] BYREF
  char v164[156]; // [rsp+364h] [rbp-E4h] BYREF

  v116 = (XCLIPOBJ *)a4;
  *(_QWORD *)&v124.left = a3;
  v99 = a2;
  v114 = a1;
  v136 = a4;
  v145 = a4;
  v140 = a5;
  v120 = a6;
  v113 = (unsigned __int64)a7;
  v14 = a8;
  v15 = a9;
  v119 = a9;
  v123[0] = (__int64 *)a10;
  v93 = a11;
  v129 = a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v16 = SURFOBJ_TO_SURFACE(a1);
  v121 = v16;
  v17 = (SIZEL)SURFOBJ_TO_SURFACE(a2);
  v127 = SURFOBJ_TO_SURFACE(a3);
  v18 = 0;
  if ( !v16 )
    return 0LL;
  if ( !*(_QWORD *)&v17 )
    return 0LL;
  v19 = *(_DWORD *)(v16 + 96);
  if ( (unsigned int)(v19 - 7) <= 2 )
    return 0LL;
  v20 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
  if ( v20 == 9 || v19 == 10 || v20 == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v21 = *(_QWORD *)(v16 + 48);
    v125 = (SURFOBJ *)v21;
    v135 = v21;
    v22 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
    v144 = v22;
    v132 = 0LL;
    v133 = 0;
    v134 = 0;
    v159 = *a9;
    v23 = 1;
    v24 = v99;
    if ( v99->iType == 1 && v22 && (*(_DWORD *)(v22 + 32) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v99, (struct SURFMEM *)&v132, &v159) )
      {
LABEL_188:
        SURFMEM::~SURFMEM((SURFMEM *)&v132);
        return v18;
      }
      if ( !v132 )
      {
LABEL_17:
        v18 = v23;
        goto LABEL_188;
      }
      v15 = &v159;
      v119 = &v159;
      v99 = (struct _SURFOBJ *)(v132 + 24);
      v17 = (SIZEL)SURFOBJ_TO_SURFACE(v132 + 24);
      v144 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
      v24 = v99;
    }
    v25 = a5;
    if ( !a5 || (v26 = 1, (a5->flXlate & 8) == 0) )
      v26 = 0;
    v101 = v26;
    v130 = v26;
    if ( v26 )
    {
      if ( v24->iType )
        goto LABEL_188;
      v27 = v114;
      if ( v114->iType != 1 )
        goto LABEL_188;
      v28 = *(_QWORD *)&v124.left;
      if ( *(_QWORD *)&v124.left )
        goto LABEL_188;
    }
    else
    {
      v27 = v114;
      v28 = *(_QWORD *)&v124.left;
    }
    v29 = a11;
    if ( a11 == 4 )
    {
      if ( v26 )
        goto LABEL_188;
      v30 = EngHTBlt(
              v27,
              v24,
              v28,
              (CLIPOBJ *)v116,
              (struct XLATE *)a5,
              v120,
              (__int64 *)v113,
              (XLATEOBJ *)a8,
              (XLATEOBJ *)v15,
              v123[0],
              0,
              0LL);
      if ( v30 == -1 )
        goto LABEL_188;
      if ( v30 )
      {
        if ( v30 == 1 )
          goto LABEL_17;
        v25 = a5;
        v29 = 4;
      }
      else
      {
        v29 = 3;
        v93 = 3;
        v25 = a5;
      }
    }
    v31 = 0;
    v95 = 0;
    bottom = a8->bottom;
    top = a8->top;
    if ( bottom < top )
    {
      a8->top = bottom;
      a8->bottom = top;
      v31 = 2;
      v95 = 2;
    }
    right = a8->right;
    left = a8->left;
    if ( right < a8->left )
    {
      a8->left = right;
      a8->right = left;
      v31 |= 1u;
      v95 = v31;
    }
    if ( v29 >= 3 || v127 )
    {
      v36 = 0;
      v115 = 0;
    }
    else
    {
      v36 = 1;
      v115 = 1;
      if ( a8->right - a8->left >= v15->right - v15->left )
      {
        v36 = a8->bottom - a8->top < v15->bottom - v15->top;
        v115 = v36;
      }
      v29 = v93;
    }
    v131 = v36;
    v128 = v36;
    if ( !v36 )
    {
      if ( v29 < 3 )
        v29 = 3;
      v93 = v29;
    }
    v37 = *(_DWORD *)(v121 + 112);
    if ( (v37 & 0x40000) != 0 )
      goto LABEL_72;
    if ( v25 && (v25->flXlate & 1) == 0 )
    {
      v38 = v99;
    }
    else
    {
      v38 = v99;
      if ( !v99->iType )
      {
LABEL_72:
        v104 = 0LL;
        v105 = 0;
        v106 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v162);
        v45 = *(_DWORD *)(*(_QWORD *)&v17 + 60LL);
        v46 = *(_DWORD *)(*(_QWORD *)&v17 + 56LL);
        *(_QWORD *)&v148.left = 0LL;
        v148.right = v46;
        v148.bottom = v45;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v111);
        v47 = v121;
        if ( !*(_WORD *)(v121 + 100) && *(_QWORD *)(v121 + 32) != *(_QWORD *)(*(_QWORD *)&v17 + 32LL) )
          goto LABEL_74;
        v154 = *(__m128i *)a8;
        v149.left = _mm_cvtsi128_si32(v154) - 1;
        v149.top = v154.m128i_i32[1] - 1;
        v149.right = _mm_cvtsi128_si32(_mm_srli_si128(v154, 8)) + 1;
        v149.bottom = _mm_srli_si128(v154, 8).m128i_i32[1] + 1;
        v50 = *(_DWORD *)(v121 + 60);
        v51 = *(_DWORD *)(v121 + 56);
        v137 = 0LL;
        v138 = v51;
        v139 = v50;
        ERECTL::operator*=(&v149, &v137);
        if ( ERECTL::bEmpty((ERECTL *)&v149) )
          goto LABEL_76;
        if ( *(_WORD *)(v47 + 100)
          || v149.left <= v15->right && v149.right >= v15->left && v149.top <= v15->bottom && v149.bottom >= v15->top )
        {
          v154.m128i_i32[0] = v52 - v149.left;
          v154.m128i_i32[1] -= v149.top;
          v154.m128i_i32[2] = v53 - v149.left;
          v154.m128i_i32[3] -= v149.top;
          memset(v146, 0, sizeof(v146));
          HIDWORD(v146[0]) = v149.right - v149.left + 1;
          LODWORD(v146[1]) = v149.bottom - v149.top + 1;
          v146[2] = 0LL;
          v54 = v121;
          if ( v101 )
            v55 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
          else
            v55 = *(_DWORD *)(v121 + 96);
          LODWORD(v146[0]) = v55;
          LODWORD(v146[3]) = *(_DWORD *)(v121 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v104, (struct _DEVBITMAPINFO *)v146, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v104 )
            goto LABEL_187;
          v107 = *(_QWORD *)&v149.left;
          if ( !v111[0] )
            goto LABEL_187;
          *(_QWORD *)&v149.left = 0LL;
          v149.right -= v107;
          v149.bottom -= HIDWORD(v107);
          RGNOBJ::vSet((RGNOBJ *)v111, &v149);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v162, v111[0], (struct ERECTL *)&v149, 1);
          v141 = *(_QWORD *)(v54 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v141, (struct _SURFOBJ *)(v54 + 24), 0LL, 0);
          if ( v127 )
            _guard_dispatch_icall_fptr();
          v48 = v104;
          v114 = v104;
          v14 = (struct _RECTL *)&v154;
          v49 = (__int64 *)v162;
        }
        else
        {
LABEL_74:
          v48 = (struct _SURFOBJ *)v47;
          v114 = (struct _SURFOBJ *)v47;
          v49 = (__int64 *)v116;
        }
        v113 = (unsigned __int64)v49;
        v142 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
        PDEVOBJ::vSync((PDEVOBJ *)&v142, v99, 0LL, 0);
        ERECTL::operator*=(&v148, v119);
        if ( !ERECTL::bEmpty((ERECTL *)&v148) )
        {
          v108 = 0LL;
          v109 = 0;
          v110 = 0;
          if ( v95
            || *(_WORD *)(*(_QWORD *)&v17 + 100LL)
            || (unsigned int)(*(_DWORD *)(*(_QWORD *)&v17 + 96LL) - 7) <= 1 )
          {
            memset(v147, 0, sizeof(v147));
            HIDWORD(v147[0]) = v148.right - v148.left;
            LODWORD(v147[1]) = v148.bottom - v148.top;
            v147[2] = 0LL;
            if ( v101 )
              dhpdev = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
            else
              dhpdev = (int)v48[1].dhpdev;
            LODWORD(v147[0]) = dhpdev;
            LODWORD(v147[3]) = *(_DWORD *)(*(_QWORD *)&v17 + 112LL) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v108, (struct _DEVBITMAPINFO *)v147, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !*(_QWORD *)&v108 )
              goto LABEL_186;
            v151 = 0LL;
            v152 = v148.right - v148.left;
            v153 = v148.bottom - v148.top;
            _guard_dispatch_icall_fptr();
            LODWORD(v151) = v119->left - v148.left;
            HIDWORD(v151) = v119->top - v148.top;
            v152 = v119->right - v148.left;
            v153 = v119->bottom - v148.top;
            v60 = v108;
            v17 = v108;
            sizl = v108;
            v58 = (struct _RECTL *)&v151;
            v119 = (struct _RECTL *)&v151;
            v102 = 0LL;
            v148.right -= v148.left;
            v61 = v148.bottom - v148.top;
            v148.bottom -= v148.top;
            *(_QWORD *)&v148.left = 0LL;
            if ( (v95 & 2) != 0 )
            {
              v62 = *(_DWORD *)(*(_QWORD *)&v108 + 88LL);
              if ( v62 <= 0 )
                *(_QWORD *)(*(_QWORD *)&v108 + 80LL) = *(_QWORD *)(*(_QWORD *)&v108 + 72LL);
              else
                *(_QWORD *)(*(_QWORD *)&v108 + 80LL) = *(_QWORD *)(*(_QWORD *)&v108 + 72LL) + v62 * (v61 - 1);
              *(_DWORD *)(*(_QWORD *)&v108 + 88LL) = -*(_DWORD *)(*(_QWORD *)&v108 + 88LL);
              v60 = v108;
            }
            if ( (v95 & 1) != 0 )
            {
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)&v60 + 96LL) - 1) > 5 )
              {
LABEL_186:
                SURFMEM::~SURFMEM((SURFMEM *)&v108);
LABEL_187:
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v111);
                SURFMEM::~SURFMEM((SURFMEM *)&v104);
                goto LABEL_188;
              }
              _guard_dispatch_icall_fptr();
            }
          }
          else
          {
            sizl = v17;
            v57 = 0LL;
            if ( !v101 )
              v57 = a5;
            v102 = v57;
            v58 = v56;
          }
          pvBits = v48->pvBits;
          PDEVOBJ::vSync((PDEVOBJ *)&pvBits, (struct _SURFOBJ *)&v48->hdev, 0LL, 0);
          v112 = v58->right;
          v63 = v112 - v58->left;
          if ( v63 >= 128000000 )
            goto LABEL_186;
          v64 = v58->top;
          v65 = v58->bottom - v64;
          if ( v65 >= 128000000 )
            goto LABEL_186;
          v66 = v14->right - v14->left;
          if ( v66 >= 128000000 )
            goto LABEL_186;
          v67 = v14->bottom - v14->top;
          if ( v67 >= 128000000 || v66 <= -128000000 || v67 <= -128000000 )
            goto LABEL_186;
          if ( v93 == 3 && !*(_QWORD *)&v124.left && (!v102 || (v102->flXlate & 1) != 0) )
          {
            v68 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
            if ( LODWORD(v48[1].dhpdev) == v68 && ((v68 - 3) & 0xFFFFFFFC) == 0 && v68 != 5 )
            {
              if ( v113 && *(_BYTE *)(v113 + 20) == 3 )
              {
                *(_QWORD *)&v124.left = 0LL;
                *(_QWORD *)&v124.right = 0LL;
                *(_QWORD *)&v148.right = 0LL;
                *(_QWORD *)&v148.left = 0LL;
                v69 = v116;
                XCLIPOBJ::cEnumStart(v116, 0, 0, 4u, 0);
                do
                {
                  v70 = XCLIPOBJ::bEnum(v69, 0x14u, (char *)&v160, 0LL);
                  v98 = v70;
                  if ( v160 )
                  {
                    StretchDIBDirect(
                      v48[1].dhsurf,
                      LODWORD(v48[1].hsurf),
                      (int)v48->pvScan0,
                      HIDWORD(v48->pvScan0),
                      v14,
                      *(void **)(*(_QWORD *)&v17 + 80LL),
                      *(_DWORD *)(*(_QWORD *)&v17 + 88LL),
                      *(_DWORD *)(*(_QWORD *)&v17 + 56LL),
                      *(_DWORD *)(*(_QWORD *)&v17 + 60LL),
                      v58,
                      &v124,
                      &v161);
                    ERECTL::operator+=((unsigned int *)&v148, (unsigned int *)&v124);
                    v70 = v98;
                  }
                }
                while ( v70 );
              }
              else
              {
                v71 = v14;
                if ( v113 && *(_BYTE *)(v113 + 20) == 1 )
                  v71 = (struct _RECTL *)(v113 + 4);
                StretchDIBDirect(
                  v48[1].dhsurf,
                  LODWORD(v48[1].hsurf),
                  (int)v48->pvScan0,
                  HIDWORD(v48->pvScan0),
                  v14,
                  *(void **)(*(_QWORD *)&v17 + 80LL),
                  *(_DWORD *)(*(_QWORD *)&v17 + 88LL),
                  *(_DWORD *)(*(_QWORD *)&v17 + 56LL),
                  *(_DWORD *)(*(_QWORD *)&v17 + 60LL),
                  v58,
                  &v148,
                  v71);
              }
              v72 = v148.left;
              v150 = v148;
              v73 = v148.right;
              v74 = v148.top;
              v75 = v148.bottom;
              goto LABEL_170;
            }
          }
          if ( (signed int)v112 < v58->left )
            goto LABEL_186;
          if ( v58->bottom < v64 )
            goto LABEL_186;
          v76 = v65 + v63;
          if ( v65 + v63 < (unsigned int)v63 )
            goto LABEL_186;
          if ( v76 >= 0x3FFFFFF5 )
            goto LABEL_186;
          v77 = PALLOCMEM2(4 * v76 + 40, 1752462151LL, 0);
          v120 = (struct tagCOLORADJUSTMENT *)v77;
          if ( !v77 )
            goto LABEL_186;
          *v129 = 1;
          vInitStrDDA((struct _STRDDA *)v77, &v148, v58, v14);
          v150 = *(struct _RECTL *)v77;
          if ( v113 )
            v113 &= -(__int64)(*(_BYTE *)(v113 + 20) != 0);
          v129 = (int *)qword_1C02D7CC0[LODWORD(v114[1].dhpdev)];
          if ( v115 )
            *((_DWORD *)v77 + 5) = (v93 != 1) - 1;
          pso = (SURFOBJ *)qword_1C02D7D80[3 * *(unsigned int *)(*(_QWORD *)&v17 + 96LL) - 1 + v93];
          v125 = pso;
          v78 = v150.right - v150.left;
          v79 = (unsigned int)(v14->right - v14->left);
          if ( v58->right - v58->left <= (int)v79 )
          {
            if ( v78 + 3 < v78 )
              goto LABEL_185;
            v80 = (v78 + 3) >> 1;
            if ( v80 >= 0x15555553 )
              goto LABEL_185;
          }
          else
          {
            if ( v78 >= 0x15555553 )
              goto LABEL_185;
            v80 = v150.right - v150.left;
          }
          v81 = 12 * (v80 + 2);
          if ( v78 <= 0x5F5E100 && (unsigned int)v81 <= 0x2710000 )
          {
            v82 = (HSURF)AllocFreeTmpBuffer(v81);
            hsurf = v82;
            if ( v82 )
            {
              v83 = (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)&v17 + 80LL)
                                      + *(_DWORD *)(*(_QWORD *)&v17 + 88LL) * v148.top);
              v100 = v83;
              if ( *(_QWORD *)&v124.left )
                v84 = *(_QWORD *)(v127 + 80)
                    + *(_DWORD *)(v127 + 88) * (v148.top + *((_DWORD *)v123[0] + 1) - v119->top);
              else
                v84 = 0LL;
              v103 = v84;
              if ( v115 )
              {
                v85 = -1;
                if ( v93 != 1 )
                  v85 = 0;
                vInitBuffer((struct _STRRUN *)v82, &v150, v85);
                v112 = v86;
                v83 = v100;
              }
              *(_DWORD *)v82 = *(_DWORD *)(HSURF)((int)v77 + 4);
              v87 = v148.top;
              v88 = 0;
              for ( i = 0; ; i = v88 )
              {
                v94 = v87;
                if ( v87 >= v148.bottom )
                  break;
                v89 = *(_DWORD *)(*((_QWORD *)v77 + 3) + 4LL * v88);
                *((_DWORD *)v82 + 1) = v89;
                if ( v89 )
                {
                  _guard_dispatch_icall_fptr();
                  _guard_dispatch_icall_fptr();
                  v87 = v94;
                  if ( v128 )
                  {
                    vInitBuffer((struct _STRRUN *)v82, &v150, v112);
                    v87 = v94;
                  }
                  v88 = i;
                  v83 = v100;
                  v84 = v103;
                }
                else if ( v131 )
                {
                  _guard_dispatch_icall_fptr();
                  v84 = v103;
                  v83 = v100;
                  v87 = v94;
                  v88 = i;
                }
                v83 = (struct _SURFOBJ *)((char *)v83 + *(int *)(*(_QWORD *)&v17 + 88LL));
                v100 = v83;
                *(_DWORD *)v82 += *((_DWORD *)v82 + 1);
                if ( v84 )
                {
                  v84 += *(int *)(v127 + 88);
                  v103 = v84;
                }
                ++v87;
                ++v88;
              }
              FreeTmpBuffer(v82);
              Win32FreePool(v77, v90);
              v75 = v150.bottom;
              v73 = v150.right;
              v74 = v150.top;
              v72 = v150.left;
              v48 = v114;
LABEL_170:
              if ( v48 == (struct _SURFOBJ *)v121 )
              {
LABEL_171:
                SURFMEM::~SURFMEM((SURFMEM *)&v108);
                goto LABEL_76;
              }
              v150.left = v107 + v72;
              v150.top = HIDWORD(v107) + v74;
              v150.right = v107 + v73;
              v150.bottom = HIDWORD(v107) + v75;
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
              if ( !v122[0] )
                goto LABEL_173;
              v91 = v116;
              if ( v116 )
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
                if ( !v123[0]
                  || (RGNOBJ::vSet((RGNOBJ *)v123, &v150),
                      !RGNOBJ::bMerge(
                         (RGNOBJ *)v122,
                         (struct RGNOBJ *)v123,
                         (struct RGNOBJ *)((unsigned __int64)&v145[2].rclBounds.top & -(__int64)(v145 != 0LL)),
                         BYTE1(gafjRgnOp))) )
                {
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
LABEL_173:
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
                  goto LABEL_186;
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
              }
              else
              {
                RGNOBJ::vSet((RGNOBJ *)v122, &v150);
              }
              v158 = *(struct _RECTL *)((char *)v122[0] + 88);
              if ( !v91 || bIntersect(&v158, (const struct _RECTL *)((char *)v91 + 4), &v158) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v163, v122[0], (struct ERECTL *)&v158, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v164) )
                {
                  v149.left += v107;
                  v149.top += HIDWORD(v107);
                  v149.right += v107;
                  v149.bottom += HIDWORD(v107);
                  v107 = 0LL;
                  _guard_dispatch_icall_fptr();
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
                  SURFMEM::~SURFMEM((SURFMEM *)&v108);
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v111);
                  SURFMEM::~SURFMEM((SURFMEM *)&v104);
                  SURFMEM::~SURFMEM((SURFMEM *)&v132);
                  return 1LL;
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
              goto LABEL_171;
            }
          }
LABEL_185:
          Win32FreePool(v77, v79);
          goto LABEL_186;
        }
LABEL_76:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v111);
        SURFMEM::~SURFMEM((SURFMEM *)&v104);
        goto LABEL_17;
      }
    }
    if ( *(_WORD *)(v121 + 100) )
    {
      if ( (v37 & 2) != 0 && !v31 && !*(_QWORD *)&v124.left )
      {
        v39 = v15->left;
        if ( v15->left >= 0 )
        {
          v40 = v15->top;
          if ( v40 >= 0 )
          {
            v41 = v15->right;
            if ( v41 <= v38->sizlBitmap.cx )
            {
              v42 = v15->bottom;
              if ( v42 <= v38->sizlBitmap.cy )
              {
                v112 = v41 - v39;
                sizl.cx = v41 - v39;
                v43 = v42 - v40;
                v97 = v43;
                sizl.cy = v43;
                if ( v41 - v39 <= a8->right - a8->left && v43 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, v114->iBitmapFormat, 0, 0LL);
                  v44 = EngLockSurface(hsurf);
                  pso = v44;
                  if ( v44 )
                  {
                    v44->iUniq = 0;
                    v155 = 0LL;
                    v156 = v112;
                    v157 = v97;
                    if ( !(unsigned int)_guard_dispatch_icall_fptr()
                      || !*(_QWORD *)(v21 + 2864)
                      || !(unsigned int)_guard_dispatch_icall_fptr() )
                    {
                      v23 = 0;
                    }
                    EngUnlockSurface(pso);
                    EngDeleteSurface(hsurf);
                    goto LABEL_17;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_72;
  }
  return 1LL;
}
