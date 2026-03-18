/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C026E634
 * Callers:
 *     EngStretchBlt @ 0x1C00986A0 (EngStretchBlt.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00816C4 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C0099F1C (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C009C3EC (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C009C628 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C013C0B0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C013C0E8 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C013C35C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0280F58 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
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
  struct _RECTL *v14; // r12
  struct _RECTL *v15; // r13
  __int64 v16; // rbx
  SIZEL v17; // r15
  unsigned int v18; // esi
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // r14d
  SURFOBJ *v24; // rcx
  XLATEOBJ *v25; // r9
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
  SURFOBJ *v48; // r13
  XCLIPOBJ *v49; // rax
  int v50; // ecx
  int v51; // eax
  int v52; // r8d
  int v53; // r9d
  int v54; // eax
  struct _RECTL *v55; // rdx
  int v56; // eax
  XLATEOBJ *v57; // rax
  struct _RECTL *v58; // rbx
  int dhpdev; // eax
  SIZEL v60; // r8
  int v61; // eax
  int v62; // ecx
  int v63; // r8d
  LONG v64; // r11d
  int v65; // r9d
  int v66; // ecx
  int v67; // edx
  int v68; // eax
  XCLIPOBJ *v69; // rdi
  unsigned int v70; // eax
  struct _RECTL *v71; // rcx
  LONG v72; // eax
  LONG v73; // ecx
  LONG v74; // edx
  LONG v75; // r8d
  unsigned int v76; // ecx
  void *v77; // r15
  unsigned int v78; // r8d
  unsigned int v79; // eax
  __int64 v80; // rcx
  HSURF v81; // rbx
  __int64 v82; // r12
  struct _SURFOBJ *v83; // r10
  __int64 v84; // r11
  unsigned int v85; // r8d
  int v86; // r8d
  LONG v87; // r8d
  int i; // r9d
  int v89; // edx
  XCLIPOBJ *v90; // r15
  unsigned int v92; // [rsp+70h] [rbp-3E8h]
  LONG v93; // [rsp+70h] [rbp-3E8h]
  int v94; // [rsp+74h] [rbp-3E4h]
  int v95; // [rsp+74h] [rbp-3E4h]
  unsigned int v96; // [rsp+78h] [rbp-3E0h]
  int v97; // [rsp+78h] [rbp-3E0h]
  unsigned int v98; // [rsp+78h] [rbp-3E0h]
  struct _SURFOBJ *v99; // [rsp+80h] [rbp-3D8h]
  struct _SURFOBJ *v100; // [rsp+80h] [rbp-3D8h]
  int v101; // [rsp+88h] [rbp-3D0h]
  XLATEOBJ *v102; // [rsp+88h] [rbp-3D0h]
  SURFOBJ *v103; // [rsp+90h] [rbp-3C8h] BYREF
  char v104; // [rsp+98h] [rbp-3C0h]
  int v105; // [rsp+9Ch] [rbp-3BCh]
  __int64 v106; // [rsp+A0h] [rbp-3B8h]
  SIZEL v107; // [rsp+A8h] [rbp-3B0h] BYREF
  char v108; // [rsp+B0h] [rbp-3A8h]
  int v109; // [rsp+B4h] [rbp-3A4h]
  struct REGION *v110[2]; // [rsp+B8h] [rbp-3A0h] BYREF
  __int64 v111; // [rsp+C8h] [rbp-390h]
  XLATEOBJ *v112; // [rsp+D0h] [rbp-388h]
  unsigned __int64 v113; // [rsp+D8h] [rbp-380h]
  int v114; // [rsp+E0h] [rbp-378h]
  XCLIPOBJ *v115; // [rsp+E8h] [rbp-370h]
  SURFOBJ *pso; // [rsp+F0h] [rbp-368h]
  SIZEL sizl; // [rsp+F8h] [rbp-360h]
  struct _RECTL *v118; // [rsp+100h] [rbp-358h]
  struct tagCOLORADJUSTMENT *v119; // [rsp+108h] [rbp-350h]
  XLATEOBJ *v120; // [rsp+110h] [rbp-348h]
  struct _SURFOBJ *v121; // [rsp+118h] [rbp-340h]
  struct REGION *v122[2]; // [rsp+120h] [rbp-338h] BYREF
  __int64 *v123[2]; // [rsp+130h] [rbp-328h] BYREF
  __int64 v124; // [rsp+140h] [rbp-318h]
  HSURF hsurf; // [rsp+148h] [rbp-310h]
  __int64 v126; // [rsp+150h] [rbp-308h]
  struct _RECTL v127; // [rsp+158h] [rbp-300h] BYREF
  __int64 v128; // [rsp+168h] [rbp-2F0h]
  int *v129; // [rsp+170h] [rbp-2E8h]
  BOOL v130; // [rsp+178h] [rbp-2E0h]
  int v131; // [rsp+17Ch] [rbp-2DCh]
  BOOL v132; // [rsp+180h] [rbp-2D8h]
  __int64 v133; // [rsp+188h] [rbp-2D0h] BYREF
  char v134; // [rsp+190h] [rbp-2C8h]
  int v135; // [rsp+194h] [rbp-2C4h]
  struct _CLIPOBJ *v136; // [rsp+198h] [rbp-2C0h]
  __int64 v137; // [rsp+1A0h] [rbp-2B8h]
  _DWORD v138[4]; // [rsp+1A8h] [rbp-2B0h] BYREF
  __int64 v139; // [rsp+1B8h] [rbp-2A0h]
  int v140; // [rsp+1C0h] [rbp-298h]
  int v141; // [rsp+1C4h] [rbp-294h]
  _DWORD v142[4]; // [rsp+1C8h] [rbp-290h] BYREF
  __int64 v143; // [rsp+1D8h] [rbp-280h]
  int v144; // [rsp+1E0h] [rbp-278h]
  int v145; // [rsp+1E4h] [rbp-274h]
  __int64 v146; // [rsp+1E8h] [rbp-270h] BYREF
  int v147; // [rsp+1F0h] [rbp-268h]
  int v148; // [rsp+1F4h] [rbp-264h]
  PVOID pvBits; // [rsp+1F8h] [rbp-260h] BYREF
  __int64 v150; // [rsp+200h] [rbp-258h]
  __int64 v151; // [rsp+208h] [rbp-250h] BYREF
  struct _CLIPOBJ *v152; // [rsp+210h] [rbp-248h]
  struct _XLATEOBJ *v153; // [rsp+220h] [rbp-238h]
  __int64 v154; // [rsp+228h] [rbp-230h] BYREF
  struct _RECTL v155; // [rsp+230h] [rbp-228h] BYREF
  struct _RECTL v156; // [rsp+240h] [rbp-218h] BYREF
  struct _RECTL v157; // [rsp+250h] [rbp-208h] BYREF
  __int64 v158; // [rsp+260h] [rbp-1F8h] BYREF
  int v159; // [rsp+268h] [rbp-1F0h]
  int v160; // [rsp+26Ch] [rbp-1ECh]
  __m128i v161; // [rsp+270h] [rbp-1E8h] BYREF
  __int64 v162; // [rsp+280h] [rbp-1D8h]
  int v163; // [rsp+288h] [rbp-1D0h]
  unsigned int v164; // [rsp+28Ch] [rbp-1CCh]
  struct _RECTL v165; // [rsp+290h] [rbp-1C8h] BYREF
  struct _RECTL v166; // [rsp+2A0h] [rbp-1B8h] BYREF
  int v167; // [rsp+2B0h] [rbp-1A8h] BYREF
  struct _RECTL v168; // [rsp+2B4h] [rbp-1A4h] BYREF
  _BYTE v169[160]; // [rsp+2D0h] [rbp-188h] BYREF
  char v170[4]; // [rsp+370h] [rbp-E8h] BYREF
  char v171[156]; // [rsp+374h] [rbp-E4h] BYREF

  v115 = (XCLIPOBJ *)a4;
  v121 = a3;
  v99 = a2;
  v113 = (unsigned __int64)a1;
  v136 = a4;
  v152 = a4;
  v112 = a5;
  v153 = a5;
  v119 = a6;
  v120 = (XLATEOBJ *)a7;
  v14 = a8;
  v15 = a9;
  v118 = a9;
  v123[0] = (__int64 *)a10;
  v92 = a11;
  v129 = a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v16 = SURFOBJ_TO_SURFACE(a1);
  v124 = v16;
  v17 = (SIZEL)SURFOBJ_TO_SURFACE(a2);
  *(SIZEL *)&v127.left = v17;
  v126 = SURFOBJ_TO_SURFACE(a3);
  v18 = 0;
  if ( !v16 )
    return 0LL;
  if ( !*(_QWORD *)&v17 )
    return 0LL;
  v19 = *(_DWORD *)(v16 + 96);
  switch ( v19 )
  {
    case 7:
      return 0LL;
    case 8:
      return 0LL;
    case 9:
      return 0LL;
  }
  v20 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
  if ( v20 == 9 || v19 == 10 || v20 == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v21 = *(_QWORD *)(v16 + 48);
    v128 = v21;
    v137 = v21;
    v22 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
    v150 = v22;
    v133 = 0LL;
    v134 = 0;
    v135 = 0;
    v166 = *a9;
    v23 = 1;
    v24 = v99;
    if ( v99->iType == 1 && v22 && (*(_DWORD *)(v22 + 32) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v99, (struct SURFMEM *)&v133, &v166) )
      {
LABEL_192:
        SURFMEM::~SURFMEM((SURFMEM *)&v133);
        return v18;
      }
      if ( !v133 )
      {
LABEL_19:
        v18 = v23;
        goto LABEL_192;
      }
      v15 = &v166;
      v118 = &v166;
      v99 = (struct _SURFOBJ *)(v133 + 24);
      v17 = (SIZEL)SURFOBJ_TO_SURFACE(v133 + 24);
      *(SIZEL *)&v127.left = v17;
      v150 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
      v24 = v99;
    }
    v25 = v112;
    if ( !v112 || (v26 = 1, (v112->flXlate & 8) == 0) )
      v26 = 0;
    v101 = v26;
    v131 = v26;
    if ( v26 )
    {
      if ( v24->iType )
        goto LABEL_192;
      v27 = (SURFOBJ *)v113;
      if ( *(_WORD *)(v113 + 76) != 1 )
        goto LABEL_192;
      v28 = (__int64)v121;
      if ( v121 )
        goto LABEL_192;
    }
    else
    {
      v27 = (SURFOBJ *)v113;
      v28 = (__int64)v121;
    }
    v29 = a11;
    if ( a11 == 4 )
    {
      if ( v26 )
        goto LABEL_192;
      v30 = EngHTBlt(
              v27,
              v24,
              v28,
              (CLIPOBJ *)v115,
              (struct XLATE *)v112,
              v119,
              v120,
              (XLATEOBJ *)a8,
              (XLATEOBJ *)v15,
              v123[0],
              0,
              0LL);
      if ( v30 == -1 )
        goto LABEL_192;
      if ( v30 )
      {
        if ( v30 == 1 )
          goto LABEL_19;
        v25 = v112;
        v29 = 4;
      }
      else
      {
        v29 = 3;
        v92 = 3;
        v25 = v112;
      }
    }
    v31 = 0;
    v94 = 0;
    bottom = a8->bottom;
    top = a8->top;
    if ( bottom < top )
    {
      a8->top = bottom;
      a8->bottom = top;
      v31 = 2;
      v94 = 2;
    }
    right = a8->right;
    left = a8->left;
    if ( right < a8->left )
    {
      a8->left = right;
      a8->right = left;
      v31 |= 1u;
      v94 = v31;
    }
    if ( v29 >= 3 || v126 )
    {
      v36 = 0;
      v114 = 0;
    }
    else
    {
      v36 = 1;
      v114 = 1;
      if ( a8->right - a8->left >= v15->right - v15->left )
      {
        v36 = a8->bottom - a8->top < v15->bottom - v15->top;
        v114 = v36;
      }
      v29 = v92;
    }
    v132 = v36;
    v130 = v36;
    if ( !v36 )
    {
      if ( v29 < 3 )
        v29 = 3;
      v92 = v29;
    }
    v37 = *(_DWORD *)(v124 + 112);
    if ( (v37 & 0x40000) != 0 )
      goto LABEL_74;
    if ( v25 && (v25->flXlate & 1) == 0 )
    {
      v38 = v99;
    }
    else
    {
      v38 = v99;
      if ( !v99->iType )
      {
LABEL_74:
        v103 = 0LL;
        v104 = 0;
        v105 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v169);
        v45 = *(_DWORD *)(*(_QWORD *)&v17 + 60LL);
        v46 = *(_DWORD *)(*(_QWORD *)&v17 + 56LL);
        *(_QWORD *)&v155.left = 0LL;
        v155.right = v46;
        v155.bottom = v45;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v110);
        v47 = v124;
        if ( !*(_WORD *)(v124 + 100) && *(_QWORD *)(v124 + 32) != *(_QWORD *)(*(_QWORD *)&v17 + 32LL) )
          goto LABEL_76;
        v161 = *(__m128i *)a8;
        v156.left = _mm_cvtsi128_si32(v161) - 1;
        v156.top = v161.m128i_i32[1] - 1;
        v156.right = _mm_cvtsi128_si32(_mm_srli_si128(v161, 8)) + 1;
        v156.bottom = _mm_srli_si128(v161, 8).m128i_i32[1] + 1;
        v50 = *(_DWORD *)(v124 + 60);
        v51 = *(_DWORD *)(v124 + 56);
        v146 = 0LL;
        v147 = v51;
        v148 = v50;
        ERECTL::operator*=(&v156, &v146);
        if ( ERECTL::bEmpty((ERECTL *)&v156) )
          goto LABEL_78;
        if ( *(_WORD *)(v47 + 100)
          || v156.left <= v15->right && v156.right >= v15->left && v156.top <= v15->bottom && v156.bottom >= v15->top )
        {
          v161.m128i_i32[0] = v52 - v156.left;
          v161.m128i_i32[1] -= v156.top;
          v161.m128i_i32[2] = v53 - v156.left;
          v161.m128i_i32[3] -= v156.top;
          v138[3] = 0;
          v140 = 0;
          v141 = 0;
          v138[1] = v156.right - v156.left + 1;
          v138[2] = v156.bottom - v156.top + 1;
          v139 = 0LL;
          if ( v101 )
            v54 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
          else
            v54 = *(_DWORD *)(v47 + 96);
          v138[0] = v54;
          v140 = *(_DWORD *)(v47 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v103, (struct _DEVBITMAPINFO *)v138, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v103 )
            goto LABEL_191;
          v106 = *(_QWORD *)&v156.left;
          if ( !v110[0] )
            goto LABEL_191;
          *(_QWORD *)&v156.left = 0LL;
          v156.right -= v106;
          v156.bottom -= HIDWORD(v106);
          RGNOBJ::vSet((RGNOBJ *)v110, &v156);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v169, v110[0], (struct ERECTL *)&v156, 1);
          v151 = *(_QWORD *)(v124 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v151, (struct _SURFOBJ *)(v124 + 24), 0LL, 0);
          if ( v126 )
            _guard_dispatch_icall_fptr();
          v48 = v103;
          pso = v103;
          v14 = (struct _RECTL *)&v161;
          v49 = (XCLIPOBJ *)v169;
        }
        else
        {
LABEL_76:
          v48 = (SURFOBJ *)v47;
          pso = (SURFOBJ *)v47;
          v49 = v115;
        }
        v113 = (unsigned __int64)v49;
        v154 = *(_QWORD *)(*(_QWORD *)&v17 + 48LL);
        PDEVOBJ::vSync((PDEVOBJ *)&v154, v99, 0LL, 0);
        ERECTL::operator*=(&v155, v118);
        if ( !ERECTL::bEmpty((ERECTL *)&v155) )
        {
          v107 = 0LL;
          v108 = 0;
          v109 = 0;
          if ( v94
            || *(_WORD *)(*(_QWORD *)&v17 + 100LL)
            || (v56 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL), v56 == 7)
            || v56 == 8 )
          {
            v142[3] = 0;
            v144 = 0;
            v145 = 0;
            v142[1] = v155.right - v155.left;
            v142[2] = v155.bottom - v155.top;
            v143 = 0LL;
            if ( v101 )
              dhpdev = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
            else
              dhpdev = (int)v48[1].dhpdev;
            v142[0] = dhpdev;
            v144 = *(_DWORD *)(*(_QWORD *)&v17 + 112LL) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v107, (struct _DEVBITMAPINFO *)v142, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !*(_QWORD *)&v107 )
              goto LABEL_190;
            v158 = 0LL;
            v159 = v155.right - v155.left;
            v160 = v155.bottom - v155.top;
            _guard_dispatch_icall_fptr();
            LODWORD(v158) = v118->left - v155.left;
            HIDWORD(v158) = v118->top - v155.top;
            v159 = v118->right - v155.left;
            v160 = v118->bottom - v155.top;
            v60 = v107;
            v17 = v107;
            *(SIZEL *)&v127.left = v107;
            sizl = v107;
            v58 = (struct _RECTL *)&v158;
            v118 = (struct _RECTL *)&v158;
            v102 = 0LL;
            v155.right -= v155.left;
            v61 = v155.bottom - v155.top;
            v155.bottom -= v155.top;
            *(_QWORD *)&v155.left = 0LL;
            if ( (v94 & 2) != 0 )
            {
              v62 = *(_DWORD *)(*(_QWORD *)&v107 + 88LL);
              if ( v62 <= 0 )
                *(_QWORD *)(*(_QWORD *)&v107 + 80LL) = *(_QWORD *)(*(_QWORD *)&v107 + 72LL);
              else
                *(_QWORD *)(*(_QWORD *)&v107 + 80LL) = *(_QWORD *)(*(_QWORD *)&v107 + 72LL) + v62 * (v61 - 1);
              *(_DWORD *)(*(_QWORD *)&v107 + 88LL) = -*(_DWORD *)(*(_QWORD *)&v107 + 88LL);
              v60 = v107;
            }
            if ( (v94 & 1) != 0 )
            {
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)&v60 + 96LL) - 1) > 5 )
              {
LABEL_190:
                SURFMEM::~SURFMEM((SURFMEM *)&v107);
LABEL_191:
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v110);
                SURFMEM::~SURFMEM((SURFMEM *)&v103);
                goto LABEL_192;
              }
              _guard_dispatch_icall_fptr();
            }
          }
          else
          {
            sizl = v17;
            v57 = 0LL;
            if ( !v101 )
              v57 = v112;
            v102 = v57;
            v58 = v55;
          }
          pvBits = v48->pvBits;
          PDEVOBJ::vSync((PDEVOBJ *)&pvBits, (struct _SURFOBJ *)&v48->hdev, 0LL, 0);
          LODWORD(v111) = v58->right;
          v97 = v58->left;
          v63 = v111 - v58->left;
          if ( v63 >= 128000000 )
            goto LABEL_190;
          v64 = v58->top;
          v65 = v58->bottom - v64;
          if ( v65 >= 128000000 )
            goto LABEL_190;
          v66 = v14->right - v14->left;
          if ( v66 >= 128000000 )
            goto LABEL_190;
          v67 = v14->bottom - v14->top;
          if ( v67 >= 128000000 || v66 <= -128000000 || v67 <= -128000000 )
            goto LABEL_190;
          if ( v92 == 3 && !v121 && (!v102 || (v102->flXlate & 1) != 0) )
          {
            v68 = *(_DWORD *)(*(_QWORD *)&v17 + 96LL);
            if ( LODWORD(v48[1].dhpdev) == v68 && (v68 == 3 || v68 == 4 || v68 == 6) )
            {
              if ( v113 && *(_BYTE *)(v113 + 20) == 3 )
              {
                *(_QWORD *)&v127.left = 0LL;
                *(_QWORD *)&v127.right = 0LL;
                *(_QWORD *)&v155.right = 0LL;
                *(_QWORD *)&v155.left = 0LL;
                v69 = v115;
                XCLIPOBJ::cEnumStart(v115, 0, 0, 4u, 0);
                do
                {
                  v70 = XCLIPOBJ::bEnum(v69, 0x14u, (char *)&v167, 0LL);
                  v98 = v70;
                  if ( v167 )
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
                      &v127,
                      &v168);
                    ERECTL::operator+=((unsigned int *)&v155, (unsigned int *)&v127);
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
                  &v155,
                  v71);
              }
              v72 = v155.left;
              v157 = v155;
              v73 = v155.right;
              v74 = v155.top;
              v75 = v155.bottom;
              goto LABEL_174;
            }
          }
          if ( (int)v111 < v97 )
            goto LABEL_190;
          if ( v58->bottom < v64 )
            goto LABEL_190;
          v76 = v65 + v63;
          if ( v65 + v63 < (unsigned int)v63 )
            goto LABEL_190;
          if ( v76 >= 0x3FFFFFF5 )
            goto LABEL_190;
          v77 = PALLOCMEM2(4 * v76 + 40, 1752462151LL, 0);
          v119 = (struct tagCOLORADJUSTMENT *)v77;
          if ( !v77 )
            goto LABEL_190;
          *v129 = 1;
          vInitStrDDA((struct _STRDDA *)v77, &v155, v58, v14);
          v157 = *(struct _RECTL *)v77;
          if ( v113 )
            v113 &= -(__int64)(*(_BYTE *)(v113 + 20) != 0);
          v128 = qword_1C02DDC40[LODWORD(v48[1].dhpdev)];
          if ( v114 )
            *((_DWORD *)v77 + 5) = (v92 != 1) - 1;
          v112 = (XLATEOBJ *)qword_1C02DDCA0[3 * *(unsigned int *)(*(_QWORD *)&v127.left + 96LL) - 1 + v92];
          v120 = v112;
          v78 = v157.right - v157.left;
          if ( v58->right - v58->left <= v14->right - v14->left )
          {
            if ( v78 + 3 < v78 )
              goto LABEL_189;
            v79 = (v78 + 3) >> 1;
            if ( v79 >= 0x15555553 )
              goto LABEL_189;
          }
          else
          {
            if ( v78 >= 0x15555553 )
              goto LABEL_189;
            v79 = v157.right - v157.left;
          }
          v80 = 12 * (v79 + 2);
          if ( v78 <= 0x5F5E100 && (unsigned int)v80 <= 0x2710000 )
          {
            v81 = (HSURF)AllocFreeTmpBuffer(v80);
            hsurf = v81;
            if ( v81 )
            {
              v82 = *(_QWORD *)&v127.left;
              v83 = (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)&v127.left + 80LL)
                                      + *(_DWORD *)(*(_QWORD *)&v127.left + 88LL) * v155.top);
              v100 = v83;
              if ( v121 )
              {
                LODWORD(v129) = v155.left + *(_DWORD *)v123[0] - v118->left;
                v84 = *(_QWORD *)(v126 + 80)
                    + *(_DWORD *)(v126 + 88) * (v155.top + *((_DWORD *)v123[0] + 1) - v118->top);
              }
              else
              {
                v84 = 0LL;
              }
              v111 = v84;
              if ( v114 )
              {
                v85 = -1;
                if ( v92 != 1 )
                  v85 = 0;
                vInitBuffer((struct _STRRUN *)v81, &v157, v85);
                v97 = v86;
                v83 = v100;
              }
              *(_DWORD *)v81 = *(_DWORD *)(HSURF)((int)v77 + 4);
              v87 = v155.top;
              for ( i = 0; ; ++i )
              {
                v95 = i;
                v93 = v87;
                if ( v87 >= v155.bottom )
                  break;
                v89 = *(_DWORD *)(*((_QWORD *)v77 + 3) + 4LL * i);
                *((_DWORD *)v81 + 1) = v89;
                if ( v89 )
                {
                  _guard_dispatch_icall_fptr();
                  _guard_dispatch_icall_fptr();
                  v87 = v93;
                  if ( v130 )
                  {
                    vInitBuffer((struct _STRRUN *)v81, &v157, v97);
                    v87 = v93;
                  }
                  i = v95;
                  v83 = v100;
                  v84 = v111;
                }
                else if ( v132 )
                {
                  _guard_dispatch_icall_fptr();
                  v84 = v111;
                  v83 = v100;
                  v87 = v93;
                  i = v95;
                }
                v83 = (struct _SURFOBJ *)((char *)v83 + *(int *)(v82 + 88));
                v100 = v83;
                *(_DWORD *)v81 += *((_DWORD *)v81 + 1);
                if ( v84 )
                {
                  v84 += *(int *)(v126 + 88);
                  v111 = v84;
                }
                ++v87;
              }
              FreeTmpBuffer(v81);
              Win32FreePool(v77);
              v75 = v157.bottom;
              v73 = v157.right;
              v74 = v157.top;
              v72 = v157.left;
LABEL_174:
              if ( v48 == (SURFOBJ *)v124 )
              {
LABEL_175:
                SURFMEM::~SURFMEM((SURFMEM *)&v107);
                goto LABEL_78;
              }
              v157.left = v106 + v72;
              v157.top = HIDWORD(v106) + v74;
              v157.right = v106 + v73;
              v157.bottom = HIDWORD(v106) + v75;
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
              if ( !v122[0] )
                goto LABEL_177;
              v90 = v115;
              if ( v115 )
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
                if ( !v123[0]
                  || (RGNOBJ::vSet((RGNOBJ *)v123, &v157),
                      !RGNOBJ::bMerge(
                         (RGNOBJ *)v122,
                         (struct RGNOBJ *)v123,
                         (struct RGNOBJ *)((unsigned __int64)&v152[2].rclBounds.top & -(__int64)(v152 != 0LL)),
                         BYTE1(gafjRgnOp))) )
                {
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
LABEL_177:
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
                  goto LABEL_190;
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v123);
              }
              else
              {
                RGNOBJ::vSet((RGNOBJ *)v122, &v157);
              }
              v165 = *(struct _RECTL *)((char *)v122[0] + 88);
              if ( !v90 || bIntersect(&v165, (const struct _RECTL *)((char *)v90 + 4), &v165) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v170, v122[0], (struct ERECTL *)&v165, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v171) )
                {
                  v156.left += v106;
                  v156.top += HIDWORD(v106);
                  v156.right += v106;
                  v156.bottom += HIDWORD(v106);
                  v106 = 0LL;
                  _guard_dispatch_icall_fptr();
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
                  SURFMEM::~SURFMEM((SURFMEM *)&v107);
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v110);
                  SURFMEM::~SURFMEM((SURFMEM *)&v103);
                  SURFMEM::~SURFMEM((SURFMEM *)&v133);
                  return 1LL;
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v122);
              goto LABEL_175;
            }
          }
LABEL_189:
          Win32FreePool(v77);
          goto LABEL_190;
        }
LABEL_78:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v110);
        SURFMEM::~SURFMEM((SURFMEM *)&v103);
        goto LABEL_19;
      }
    }
    if ( *(_WORD *)(v124 + 100) )
    {
      if ( (v37 & 2) != 0 && !v31 && !v121 )
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
                LODWORD(v111) = v41 - v39;
                sizl.cx = v41 - v39;
                v43 = v42 - v40;
                v96 = v43;
                sizl.cy = v43;
                if ( v41 - v39 <= a8->right - a8->left && v43 <= a8->bottom - a8->top )
                {
                  hsurf = (HSURF)EngCreateBitmap(sizl, 0, *(_DWORD *)(v113 + 72), 0, 0LL);
                  v44 = EngLockSurface(hsurf);
                  pso = v44;
                  if ( v44 )
                  {
                    v44->iUniq = 0;
                    v162 = 0LL;
                    v163 = v111;
                    v164 = v96;
                    if ( !(unsigned int)_guard_dispatch_icall_fptr()
                      || !*(_QWORD *)(v21 + 2864)
                      || !(unsigned int)_guard_dispatch_icall_fptr() )
                    {
                      v23 = 0;
                    }
                    EngUnlockSurface(pso);
                    EngDeleteSurface(hsurf);
                    goto LABEL_19;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_74;
  }
  return 1LL;
}
