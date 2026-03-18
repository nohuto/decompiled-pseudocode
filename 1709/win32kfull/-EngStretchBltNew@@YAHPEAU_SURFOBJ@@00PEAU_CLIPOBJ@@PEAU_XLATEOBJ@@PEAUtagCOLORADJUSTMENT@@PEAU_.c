/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00149D8
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
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00E2768 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00E2AA4 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C010F79C (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C01106A4 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0142F08 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0142F40 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C01431B4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C027DA88 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltNew(
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
        unsigned int a11)
{
  struct _RECTL *v13; // r14
  struct _RECTL *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned int v17; // r15d
  int v18; // edx
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rdi
  int v22; // r12d
  struct _SURFOBJ *v23; // rcx
  struct _XLATEOBJ *v24; // r11
  int v25; // eax
  struct _SURFOBJ *v26; // r10
  struct _SURFOBJ *v27; // r8
  unsigned int v28; // edx
  int v29; // r9d
  LONG bottom; // eax
  LONG top; // ecx
  LONG right; // eax
  LONG left; // ecx
  BOOL v34; // r8d
  int v35; // ecx
  struct _SURFOBJ *v36; // rax
  LONG v37; // ecx
  LONG v38; // eax
  __int64 v39; // r10
  XCLIPOBJ *v40; // rax
  struct _XLATEOBJ *v41; // rax
  __int64 v42; // rdi
  int v43; // ecx
  int v44; // edx
  int v45; // ecx
  struct _RECTL *v46; // rcx
  LONG v47; // eax
  LONG v48; // ecx
  LONG v49; // edx
  LONG v50; // r8d
  int v52; // eax
  __int64 v53; // rax
  void *v54; // r8
  XCLIPOBJ *v55; // rcx
  struct _RECTL v56; // xmm0
  __int64 i; // rax
  LONG v58; // eax
  LONG v59; // ecx
  LONG v60; // edx
  unsigned int v61; // eax
  unsigned int v62; // ecx
  struct _STRDDA *v63; // rax
  struct _SURFOBJ *v64; // r8
  struct _SURFOBJ *v65; // rcx
  unsigned int v66; // r9d
  __int64 v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rcx
  struct _STRRUN *v70; // r11
  int v71; // ecx
  XCLIPOBJ *v72; // rdi
  LONG v73; // r8d
  int v74; // r9d
  struct _STRRUN *v75; // rdi
  int v76; // edx
  unsigned int v77; // r10d
  struct _STRRUN *v78; // rcx
  LONG v79; // edx
  int v80; // eax
  unsigned int *v81; // r9
  unsigned __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // r8
  unsigned int v85; // edi
  XCLIPOBJ *v86; // rbx
  int v87; // eax
  int v88; // eax
  __int64 v89; // rdi
  int v90; // eax
  char v91; // dl
  int v92; // ecx
  LONG v93; // r9d
  int v94; // ecx
  LONG v95; // r8d
  LONG v96; // edx
  LONG v97; // edx
  SURFOBJ *v98; // rax
  __int64 v99; // rax
  SURFOBJ *v100; // rbx
  int v101; // ecx
  int v102; // eax
  int v103; // r8d
  int v104; // r9d
  __int64 v105; // r14
  int v106; // eax
  XCLIPOBJ *v107; // rdi
  int v108; // [rsp+70h] [rbp-518h]
  int v109; // [rsp+70h] [rbp-518h]
  int v110; // [rsp+74h] [rbp-514h]
  unsigned int v111; // [rsp+78h] [rbp-510h]
  LONG v112; // [rsp+80h] [rbp-508h]
  struct _SURFOBJ *v113; // [rsp+88h] [rbp-500h]
  struct _SURFOBJ *v114; // [rsp+88h] [rbp-500h]
  int v115; // [rsp+90h] [rbp-4F8h]
  int v116; // [rsp+90h] [rbp-4F8h]
  int v117; // [rsp+90h] [rbp-4F8h]
  __int64 v118; // [rsp+98h] [rbp-4F0h]
  LONG v119; // [rsp+A0h] [rbp-4E8h]
  __int64 v120; // [rsp+A8h] [rbp-4E0h] BYREF
  char v121; // [rsp+B0h] [rbp-4D8h]
  int v122; // [rsp+B4h] [rbp-4D4h]
  struct _SURFOBJ *v123; // [rsp+B8h] [rbp-4D0h]
  unsigned int v124; // [rsp+C0h] [rbp-4C8h]
  struct REGION *v125[2]; // [rsp+C8h] [rbp-4C0h] BYREF
  __int64 v126; // [rsp+D8h] [rbp-4B0h] BYREF
  char v127; // [rsp+E0h] [rbp-4A8h]
  int v128; // [rsp+E4h] [rbp-4A4h]
  SURFOBJ *pso; // [rsp+E8h] [rbp-4A0h]
  struct _XLATEOBJ *v130; // [rsp+F0h] [rbp-498h]
  XCLIPOBJ *v131; // [rsp+F8h] [rbp-490h]
  unsigned int v132; // [rsp+100h] [rbp-488h]
  struct tagCOLORADJUSTMENT *v133; // [rsp+108h] [rbp-480h]
  __int64 v134; // [rsp+110h] [rbp-478h]
  struct _SURFOBJ *v135; // [rsp+118h] [rbp-470h]
  XCLIPOBJ *v136; // [rsp+120h] [rbp-468h]
  struct _POINTL *v137; // [rsp+128h] [rbp-460h]
  SIZEL sizl; // [rsp+130h] [rbp-458h]
  __int64 v139; // [rsp+138h] [rbp-450h]
  __int64 v140; // [rsp+140h] [rbp-448h]
  struct _STRRUN *v141; // [rsp+148h] [rbp-440h]
  __int64 v142; // [rsp+150h] [rbp-438h]
  __int64 v143; // [rsp+158h] [rbp-430h]
  struct REGION *v144[2]; // [rsp+160h] [rbp-428h] BYREF
  struct _POINTL *v145; // [rsp+170h] [rbp-418h]
  HSURF hsurf; // [rsp+178h] [rbp-410h]
  __int64 v147; // [rsp+180h] [rbp-408h]
  _DWORD *v148; // [rsp+188h] [rbp-400h]
  struct _RECTL *v149; // [rsp+190h] [rbp-3F8h]
  BOOL v150; // [rsp+198h] [rbp-3F0h]
  BOOL v151; // [rsp+19Ch] [rbp-3ECh]
  unsigned int v152; // [rsp+1A0h] [rbp-3E8h]
  BOOL v153; // [rsp+1A4h] [rbp-3E4h]
  unsigned int v154; // [rsp+1A8h] [rbp-3E0h]
  int v155; // [rsp+1ACh] [rbp-3DCh]
  BOOL v156; // [rsp+1B0h] [rbp-3D8h]
  struct _RECTL v157; // [rsp+1B8h] [rbp-3D0h] BYREF
  _QWORD v158[2]; // [rsp+1C8h] [rbp-3C0h] BYREF
  __int64 v159; // [rsp+1D8h] [rbp-3B0h] BYREF
  char v160; // [rsp+1E0h] [rbp-3A8h]
  int v161; // [rsp+1E4h] [rbp-3A4h]
  struct _SURFOBJ *v162; // [rsp+1E8h] [rbp-3A0h]
  struct _CLIPOBJ *v163; // [rsp+1F0h] [rbp-398h]
  __int64 v164; // [rsp+1F8h] [rbp-390h]
  struct REGION *v165[2]; // [rsp+200h] [rbp-388h] BYREF
  __int64 v166; // [rsp+210h] [rbp-378h] BYREF
  int v167; // [rsp+218h] [rbp-370h]
  int v168; // [rsp+21Ch] [rbp-36Ch]
  __int64 v169; // [rsp+220h] [rbp-368h]
  __int64 v170; // [rsp+228h] [rbp-360h] BYREF
  __int64 v171; // [rsp+230h] [rbp-358h] BYREF
  _QWORD v172[2]; // [rsp+238h] [rbp-350h] BYREF
  __int64 v173; // [rsp+248h] [rbp-340h] BYREF
  struct _CLIPOBJ *v174; // [rsp+250h] [rbp-338h]
  struct _XLATEOBJ *v175; // [rsp+260h] [rbp-328h]
  struct _RECTL v176; // [rsp+268h] [rbp-320h] BYREF
  _QWORD v177[4]; // [rsp+278h] [rbp-310h] BYREF
  _QWORD v178[4]; // [rsp+298h] [rbp-2F0h] BYREF
  struct _RECTL v179; // [rsp+2B8h] [rbp-2D0h] BYREF
  struct _RECTL v180; // [rsp+2C8h] [rbp-2C0h] BYREF
  struct _RECTL v181; // [rsp+2D8h] [rbp-2B0h] BYREF
  struct _RECTL v182; // [rsp+2E8h] [rbp-2A0h] BYREF
  __int64 v183; // [rsp+2F8h] [rbp-290h] BYREF
  int v184; // [rsp+300h] [rbp-288h]
  int v185; // [rsp+304h] [rbp-284h]
  __m128i v186; // [rsp+308h] [rbp-280h] BYREF
  __int64 v187; // [rsp+318h] [rbp-270h]
  int v188; // [rsp+320h] [rbp-268h]
  LONG v189; // [rsp+324h] [rbp-264h]
  struct _RECTL v190; // [rsp+328h] [rbp-260h] BYREF
  struct _RECTL v191; // [rsp+338h] [rbp-250h] BYREF
  int v192; // [rsp+348h] [rbp-240h] BYREF
  struct _RECTL v193; // [rsp+34Ch] [rbp-23Ch] BYREF
  _BYTE v194[160]; // [rsp+360h] [rbp-228h] BYREF
  _BYTE v195[160]; // [rsp+400h] [rbp-188h] BYREF
  char v196[4]; // [rsp+4A0h] [rbp-E8h] BYREF
  char v197[156]; // [rsp+4A4h] [rbp-E4h] BYREF

  v131 = (XCLIPOBJ *)a4;
  v135 = a3;
  v113 = a2;
  v123 = a1;
  v162 = a3;
  v163 = a4;
  v174 = a4;
  v130 = a5;
  v175 = a5;
  v133 = a6;
  v137 = a7;
  v13 = a8;
  v14 = a9;
  v145 = a10;
  v111 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v143 = v15;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v134 = v16;
  v147 = SURFOBJ_TO_SURFACE(a3);
  v17 = 0;
  if ( !v15 )
    return 0LL;
  if ( !v16 )
    return 0LL;
  v18 = *(_DWORD *)(v15 + 96);
  if ( (unsigned int)(v18 - 7) <= 2 )
    return 0LL;
  v19 = *(_DWORD *)(v16 + 96);
  if ( v19 == 9 || v18 == 10 || v19 == 10 )
    return 0LL;
  if ( a9->left == a9->right || a9->top == a9->bottom || a8->left == a8->right || a8->top == a8->bottom )
    return 1LL;
  v20 = *(_QWORD *)(v15 + 48);
  v148 = (_DWORD *)v20;
  v164 = v20;
  v21 = *(_QWORD *)(v16 + 48);
  v169 = v21;
  v159 = 0LL;
  v160 = 0;
  v161 = 0;
  v191 = *a9;
  v22 = 1;
  v23 = v113;
  if ( v113->iType == 1 && v21 && (*(_DWORD *)(v21 + 32) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v113, (struct SURFMEM *)&v159, &v191) )
      goto LABEL_65;
    if ( !v159 )
    {
LABEL_64:
      v17 = v22;
LABEL_65:
      SURFMEM::~SURFMEM((SURFMEM *)&v159);
      return v17;
    }
    v14 = &v191;
    v113 = (struct _SURFOBJ *)(v159 + 24);
    v16 = SURFOBJ_TO_SURFACE(v159 + 24);
    v134 = v16;
    v169 = *(_QWORD *)(v16 + 48);
    v23 = v113;
  }
  v24 = v130;
  if ( !v130 || (v25 = 1, (v130->flXlate & 8) == 0) )
    v25 = 0;
  v110 = v25;
  v155 = v25;
  if ( v25 )
  {
    if ( v23->iType )
      goto LABEL_65;
    v26 = v123;
    if ( v123->iType != 1 )
      goto LABEL_65;
    v27 = v135;
    if ( v135 )
      goto LABEL_65;
  }
  else
  {
    v26 = v123;
    v27 = v135;
  }
  v28 = a11;
  if ( a11 == 4 )
  {
    if ( v25 )
      goto LABEL_65;
    v52 = EngHTBlt(v26, v23, v27, v131, v130, v133, v137, a8, v14, v145, 0, 0LL);
    if ( v52 == -1 )
      goto LABEL_65;
    if ( v52 )
    {
      if ( v52 == 1 )
        goto LABEL_64;
      v24 = v130;
      v28 = 4;
    }
    else
    {
      v28 = 3;
      v111 = 3;
      v24 = v130;
    }
  }
  v29 = 0;
  v108 = 0;
  bottom = a8->bottom;
  top = a8->top;
  if ( bottom < top )
  {
    a8->top = bottom;
    a8->bottom = top;
    v29 = 2;
    v108 = 2;
  }
  right = a8->right;
  left = a8->left;
  if ( right < a8->left )
  {
    a8->left = right;
    a8->right = left;
    v29 |= 1u;
    v108 = v29;
  }
  if ( v28 >= 3 || v147 )
  {
    v34 = 0;
  }
  else
  {
    v34 = 1;
    if ( a8->right - a8->left >= v14->right - v14->left )
      v34 = a8->bottom - a8->top < v14->bottom - v14->top;
    v28 = v111;
  }
  v156 = v34;
  v153 = v34;
  v151 = v34;
  v150 = v34;
  if ( !v34 )
  {
    if ( v28 < 3 )
      v28 = 3;
    v111 = v28;
  }
  v152 = v28;
  v154 = v28;
  v35 = *(_DWORD *)(v143 + 112);
  if ( (v35 & 0x40000) == 0 )
  {
    if ( v24 && (v24->flXlate & 1) == 0 )
    {
      v36 = v113;
    }
    else
    {
      v36 = v113;
      if ( !v113->iType )
        goto LABEL_33;
    }
    if ( !*(_WORD *)(v143 + 100) )
      goto LABEL_33;
    if ( (v35 & 2) == 0 )
      goto LABEL_33;
    if ( v29 )
      goto LABEL_33;
    if ( v135 )
      goto LABEL_33;
    v93 = v14->left;
    if ( v14->left < 0 )
      goto LABEL_33;
    v94 = v14->top;
    if ( v94 < 0 )
      goto LABEL_33;
    v95 = v14->right;
    if ( v95 > v36->sizlBitmap.cx )
      goto LABEL_33;
    v96 = v14->bottom;
    if ( v96 > v36->sizlBitmap.cy )
      goto LABEL_33;
    v117 = v95 - v93;
    sizl.cx = v95 - v93;
    v97 = v96 - v94;
    v119 = v97;
    sizl.cy = v97;
    if ( v95 - v93 > a8->right - a8->left )
      goto LABEL_33;
    if ( v97 > a8->bottom - a8->top )
      goto LABEL_33;
    hsurf = (HSURF)EngCreateBitmap(sizl, 0, v123->iBitmapFormat, 0, 0LL);
    v98 = EngLockSurface(hsurf);
    pso = v98;
    if ( !v98 )
      goto LABEL_33;
    v98->iUniq = 0;
    v187 = 0LL;
    v188 = v117;
    v189 = v119;
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      v99 = *(_QWORD *)(v20 + 2864);
      v100 = pso;
      if ( v99 && (unsigned int)_guard_dispatch_icall_fptr() )
        goto LABEL_182;
    }
    else
    {
      v100 = pso;
    }
    v22 = 0;
LABEL_182:
    EngUnlockSurface(v100);
    EngDeleteSurface(hsurf);
    goto LABEL_64;
  }
LABEL_33:
  v120 = 0LL;
  v121 = 0;
  v122 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v194);
  v37 = *(_DWORD *)(v16 + 60);
  v38 = *(_DWORD *)(v16 + 56);
  *(_QWORD *)&v179.left = 0LL;
  v179.right = v38;
  v179.bottom = v37;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
  v39 = v143;
  if ( !*(_WORD *)(v143 + 100) && *(_QWORD *)(v143 + 32) != *(_QWORD *)(v16 + 32) )
    goto LABEL_35;
  v186 = *(__m128i *)a8;
  v181.left = _mm_cvtsi128_si32(v186) - 1;
  v181.top = v186.m128i_i32[1] - 1;
  v181.right = _mm_cvtsi128_si32(_mm_srli_si128(v186, 8)) + 1;
  v181.bottom = _mm_srli_si128(v186, 8).m128i_i32[1] + 1;
  v101 = *(_DWORD *)(v143 + 60);
  v102 = *(_DWORD *)(v143 + 56);
  v166 = 0LL;
  v167 = v102;
  v168 = v101;
  ERECTL::operator*=(&v181, &v166);
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v181) )
    goto LABEL_63;
  if ( *(_WORD *)(v39 + 100)
    || v181.left <= v14->right && v181.right >= v14->left && v181.top <= v14->bottom && v181.bottom >= v14->top )
  {
    v186.m128i_i32[0] = v103 - v181.left;
    v186.m128i_i32[1] -= v181.top;
    v186.m128i_i32[2] = v104 - v181.left;
    v186.m128i_i32[3] -= v181.top;
    memset(v177, 0, sizeof(v177));
    HIDWORD(v177[0]) = v181.right - v181.left + 1;
    LODWORD(v177[1]) = v181.bottom - v181.top + 1;
    v177[2] = 0LL;
    v16 = v134;
    v105 = v143;
    if ( v110 )
      v106 = *(_DWORD *)(v134 + 96);
    else
      v106 = *(_DWORD *)(v143 + 96);
    LODWORD(v177[0]) = v106;
    LODWORD(v177[3]) = *(_DWORD *)(v143 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v120, (struct _DEVBITMAPINFO *)v177, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v120 )
      goto LABEL_199;
    v118 = *(_QWORD *)&v181.left;
    if ( !v125[0] )
      goto LABEL_199;
    *(_QWORD *)&v181.left = 0LL;
    v181.right -= v118;
    v181.bottom -= HIDWORD(v118);
    RGNOBJ::vSet((RGNOBJ *)v125, &v181);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v194, v125[0], (struct ERECTL *)&v181, 1);
    v170 = *(_QWORD *)(v105 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v170, (struct _SURFOBJ *)(v105 + 24), 0LL, 0);
    if ( v147 )
      _guard_dispatch_icall_fptr();
    v142 = v120;
    v13 = (struct _RECTL *)&v186;
    v40 = (XCLIPOBJ *)v194;
  }
  else
  {
LABEL_35:
    v142 = v39;
    v40 = v131;
  }
  v133 = (struct tagCOLORADJUSTMENT *)v13;
  v136 = v40;
  v171 = *(_QWORD *)(v16 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v171, v113, 0LL, 0);
  ERECTL::operator*=(&v179, v14);
  if ( v179.left == v179.right || v179.top == v179.bottom )
    goto LABEL_63;
  v126 = 0LL;
  v127 = 0;
  v128 = 0;
  if ( v108 || *(_WORD *)(v16 + 100) || (unsigned int)(*(_DWORD *)(v16 + 96) - 7) <= 1 )
  {
    memset(v178, 0, sizeof(v178));
    HIDWORD(v178[0]) = v179.right - v179.left;
    LODWORD(v178[1]) = v179.bottom - v179.top;
    v178[2] = 0LL;
    if ( v110 )
      v88 = *(_DWORD *)(v16 + 96);
    else
      v88 = *(_DWORD *)(v142 + 96);
    LODWORD(v178[0]) = v88;
    LODWORD(v178[3]) = *(_DWORD *)(v16 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v126, (struct _DEVBITMAPINFO *)v178, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v126 )
      goto LABEL_198;
    v183 = 0LL;
    v184 = v179.right - v179.left;
    v185 = v179.bottom - v179.top;
    _guard_dispatch_icall_fptr();
    LODWORD(v183) = v14->left - v179.left;
    HIDWORD(v183) = v14->top - v179.top;
    v184 = v14->right - v179.left;
    v185 = v14->bottom - v179.top;
    v89 = v126;
    v16 = v126;
    v134 = v126;
    v137 = (struct _POINTL *)v126;
    v14 = (struct _RECTL *)&v183;
    sizl = (SIZEL)&v183;
    v114 = 0LL;
    v179.right -= v179.left;
    v90 = v179.bottom - v179.top;
    v179.bottom -= v179.top;
    *(_QWORD *)&v179.left = 0LL;
    v91 = v108;
    if ( (v108 & 2) != 0 )
    {
      v92 = *(_DWORD *)(v126 + 88);
      if ( v92 > 0 )
      {
        *(_QWORD *)(v126 + 80) = *(_QWORD *)(v126 + 72) + v92 * (v90 - 1);
        v91 = v108;
      }
      else
      {
        *(_QWORD *)(v126 + 80) = *(_QWORD *)(v126 + 72);
      }
      *(_DWORD *)(v126 + 88) = -*(_DWORD *)(v126 + 88);
      v89 = v126;
    }
    if ( (v91 & 1) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v89 + 96) - 1) > 5 )
        goto LABEL_198;
      _guard_dispatch_icall_fptr();
    }
  }
  else
  {
    v137 = (struct _POINTL *)v16;
    sizl = (SIZEL)v14;
    v41 = 0LL;
    if ( !v110 )
      v41 = v130;
    v114 = (struct _SURFOBJ *)v41;
  }
  v42 = v142;
  v172[0] = *(_QWORD *)(v142 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)v172, (struct _SURFOBJ *)(v142 + 24), 0LL, 0);
  if ( v14->right - v14->left >= 128000000 )
    goto LABEL_198;
  if ( v14->bottom - v14->top >= 128000000 )
    goto LABEL_198;
  v43 = v13->right - v13->left;
  if ( v43 >= 128000000 )
    goto LABEL_198;
  v44 = v13->bottom - v13->top;
  if ( v44 >= 128000000 || v43 <= -128000000 || v44 <= -128000000 )
    goto LABEL_198;
  if ( v111 != 3
    || v135
    || v114 && (HIDWORD(v114->dhsurf) & 1) == 0
    || (v45 = *(_DWORD *)(v16 + 96), *(_DWORD *)(v42 + 96) != v45)
    || ((v45 - 3) & 0xFFFFFFFC) != 0
    || v45 == 5 )
  {
    v53 = AllocFreeTmpBuffer(324LL);
    v54 = (void *)v53;
    v148 = (_DWORD *)v53;
    if ( v53 )
    {
      v173 = v53;
      v55 = v136;
      if ( v136 && *((_BYTE *)v136 + 20) )
      {
        if ( *((_BYTE *)v136 + 20) != 1 )
        {
          if ( *((_BYTE *)v136 + 20) == 3 )
          {
            v110 = 1;
            XCLIPOBJ::cEnumStart(v136, 0, 0, 4u, 0x14u);
            v55 = v136;
            v54 = v148;
          }
LABEL_82:
          *(_QWORD *)&v182.right = 0LL;
          *(_QWORD *)&v182.left = 0LL;
          v124 = v132;
          if ( v110 )
            goto LABEL_205;
          while ( 1 )
          {
            for ( i = 0LL; ; i = (unsigned int)(v115 + 1) )
            {
              v115 = i;
              v54 = v148;
              if ( (unsigned int)i >= *v148 )
                break;
              v149 = (struct _RECTL *)&v148[4 * i + 1];
              v180 = 0LL;
              vInitStrDDAClip(&v179, v14, v13, v149, &v180);
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v180) )
              {
                --v180.left;
                --v180.top;
                ++v180.right;
                ++v180.bottom;
                ERECTL::operator*=(&v180, &v179);
                v58 = v14->right;
                if ( v58 >= v14->left )
                {
                  v59 = v14->bottom;
                  v60 = v14->top;
                  if ( v59 >= v60 )
                  {
                    v61 = v58 - v14->left;
                    v62 = v61 + v59 - v60;
                    if ( v62 >= v61 && v62 < 0x3FFFFFF5 )
                    {
                      v63 = (struct _STRDDA *)PALLOCMEM2(4 * v62 + 40);
                      v123 = (struct _SURFOBJ *)v63;
                      if ( v63 )
                      {
                        vInitStrDDA(v63, &v180, v14, v13);
                        v64 = v123;
                        v157 = *(struct _RECTL *)&v123->dhsurf;
                        v65 = v114;
                        if ( v114 )
                        {
                          if ( (BYTE4(v114->dhsurf) & 1) != 0 )
                            v65 = 0LL;
                          v114 = v65;
                        }
                        v172[1] = qword_1C02D7CC0[*(unsigned int *)(v42 + 96)];
                        if ( v150 )
                          HIDWORD(v123->dhpdev) = (v154 != 1) - 1;
                        pso = (SURFOBJ *)qword_1C02D7D80[3 * *(unsigned int *)(v16 + 96) - 1 + v111];
                        hsurf = (HSURF)pso;
                        v66 = v157.right - v157.left;
                        v67 = (unsigned int)(v13->right - v13->left);
                        if ( v14->right - v14->left > (int)v67 )
                        {
                          if ( v66 >= 0x15555553 )
                            goto LABEL_210;
                          v68 = v157.right - v157.left;
                        }
                        else
                        {
                          if ( v66 + 3 < v66 )
                            goto LABEL_210;
                          v68 = (v66 + 3) >> 1;
                          if ( v68 >= 0x15555553 )
                            goto LABEL_210;
                        }
                        v69 = 12 * (v68 + 2);
                        if ( v66 > 0x5F5E100 || (unsigned int)v69 > 0x2710000 )
                          goto LABEL_210;
                        v70 = (struct _STRRUN *)AllocFreeTmpBuffer(v69);
                        v141 = v70;
                        if ( !v70 )
                        {
                          v64 = v123;
LABEL_210:
                          Win32FreePool(v64, v67, v64);
                          continue;
                        }
                        v112 = v180.top;
                        v139 = *(_QWORD *)(v16 + 80) + *(_DWORD *)(v16 + 88) * v180.top;
                        if ( v135 )
                        {
                          LODWORD(v130) = v145->x + v180.left - v14->left;
                          v140 = *(_QWORD *)(v147 + 80) + (v180.top + v145->y - v14->top) * *(_DWORD *)(v147 + 88);
                        }
                        else
                        {
                          v140 = 0LL;
                        }
                        if ( v151 )
                        {
                          v85 = -1;
                          if ( v152 != 1 )
                            v85 = 0;
                          v124 = v85;
                          vInitBuffer(v70, &v157, v85);
                          v132 = v85;
                        }
                        *(_DWORD *)v70 = HIDWORD(v123->dhsurf);
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v165);
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v195);
                        v71 = 0;
                        v72 = v136;
                        if ( v136 && v165[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v165, v149);
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v195, v165[0], (struct ERECTL *)v149, 1);
                          v71 = 1;
                        }
                        LODWORD(v149) = v71;
                        if ( !v72 || v165[0] )
                        {
                          v73 = v112;
                          v74 = 0;
                          v109 = 0;
                          v75 = v141;
                          while ( 1 )
                          {
                            if ( v73 >= v180.bottom )
                              goto LABEL_126;
                            v76 = *((_DWORD *)v123->hdev + v74);
                            *((_DWORD *)v75 + 1) = v76;
                            if ( v76 )
                              break;
                            if ( v156 )
                            {
                              _guard_dispatch_icall_fptr();
                              v73 = v112;
                              v74 = v109;
                            }
LABEL_116:
                            v139 += *(int *)(v16 + 88);
                            v75 = v141;
                            *(_DWORD *)v141 += *((_DWORD *)v141 + 1);
                            if ( v140 )
                              v140 += *(int *)(v147 + 88);
                            v112 = ++v73;
                            v109 = ++v74;
                          }
                          _guard_dispatch_icall_fptr();
                          _guard_dispatch_icall_fptr();
                          v16 = v134;
                          v73 = v112;
                          v77 = v124;
                          if ( !v153 )
                          {
LABEL_115:
                            v74 = v109;
                            goto LABEL_116;
                          }
                          v78 = v141;
                          v79 = v157.left;
                          *((_DWORD *)v141 + 2) = v157.left;
                          v80 = v157.right - v79;
                          *((_DWORD *)v78 + 3) = v157.right - v79;
                          v81 = (unsigned int *)((char *)v78 + 16);
                          v82 = (unsigned __int64)(4 * v80) >> 2;
                          if ( v82 )
                          {
                            if ( ((unsigned __int8)v81 & 4) != 0 )
                            {
                              *v81 = v77;
                              if ( --v82 )
                              {
                                v81 = (unsigned int *)((char *)v78 + 20);
                                goto LABEL_123;
                              }
                            }
                            else
                            {
LABEL_123:
                              memset64(v81, v77 | ((unsigned __int64)v77 << 32), v82 >> 1);
                              if ( (v82 & 1) != 0 )
                                v81[v82 - 1] = v77;
                            }
                          }
                          v73 = v112;
                          goto LABEL_115;
                        }
LABEL_126:
                        FreeTmpBuffer(v141);
                        Win32FreePool(v123, v83, v84);
                        ERECTL::operator+=(&v182, &v157);
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v165);
                        v42 = v142;
                      }
                    }
                  }
                }
              }
            }
            v55 = v136;
            if ( !v110 )
            {
              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v173);
              v50 = v182.bottom;
              v48 = v182.right;
              v49 = v182.top;
              v47 = v182.left;
              goto LABEL_61;
            }
LABEL_205:
            v110 = XCLIPOBJ::bEnum(v55, 0x144u, v54, 0LL);
          }
        }
        *(_DWORD *)v53 = 1;
        v56 = *(struct _RECTL *)((char *)v55 + 4);
      }
      else
      {
        *(_DWORD *)v53 = 1;
        v56 = *v13;
      }
      v110 = 0;
      *(struct _RECTL *)(v53 + 4) = v56;
      goto LABEL_82;
    }
LABEL_198:
    SURFMEM::~SURFMEM((SURFMEM *)&v126);
LABEL_199:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
    SURFMEM::~SURFMEM((SURFMEM *)&v120);
    goto LABEL_65;
  }
  if ( v136 && *((_BYTE *)v136 + 20) == 3 )
  {
    *(_QWORD *)&v176.left = 0LL;
    *(_QWORD *)&v176.right = 0LL;
    *(_QWORD *)&v179.right = 0LL;
    *(_QWORD *)&v179.left = 0LL;
    v86 = v131;
    XCLIPOBJ::cEnumStart(v131, 0, 0, 4u, 0);
    do
    {
      v87 = XCLIPOBJ::bEnum(v86, 0x14u, &v192, 0LL);
      v116 = v87;
      if ( v192 )
      {
        StretchDIBDirect(
          *(void **)(v42 + 80),
          *(unsigned int *)(v42 + 88),
          *(_DWORD *)(v42 + 56),
          *(_DWORD *)(v42 + 60),
          v13,
          *(void **)(v16 + 80),
          *(_DWORD *)(v16 + 88),
          *(_DWORD *)(v16 + 56),
          *(_DWORD *)(v16 + 60),
          v14,
          &v176,
          &v193);
        ERECTL::operator+=(&v179, &v176);
        v87 = v116;
      }
    }
    while ( v87 );
  }
  else
  {
    v46 = v13;
    if ( v136 && *((_BYTE *)v136 + 20) == 1 )
      v46 = (struct _RECTL *)((char *)v136 + 4);
    StretchDIBDirect(
      *(void **)(v42 + 80),
      *(unsigned int *)(v42 + 88),
      *(_DWORD *)(v42 + 56),
      *(_DWORD *)(v42 + 60),
      v13,
      *(void **)(v16 + 80),
      *(_DWORD *)(v16 + 88),
      *(_DWORD *)(v16 + 56),
      *(_DWORD *)(v16 + 60),
      v14,
      &v179,
      v46);
  }
  v47 = v179.left;
  v182 = v179;
  v48 = v179.right;
  v49 = v179.top;
  v50 = v179.bottom;
LABEL_61:
  if ( v42 == v143 )
  {
LABEL_62:
    SURFMEM::~SURFMEM((SURFMEM *)&v126);
LABEL_63:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
    SURFMEM::~SURFMEM((SURFMEM *)&v120);
    goto LABEL_64;
  }
  v182.left = v118 + v47;
  v182.top = HIDWORD(v118) + v49;
  v182.right = v118 + v48;
  v182.bottom = HIDWORD(v118) + v50;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v144);
  if ( !v144[0] )
  {
LABEL_197:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v144);
    goto LABEL_198;
  }
  v107 = v131;
  if ( v131 )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v158);
    if ( v158[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v158, &v182);
      if ( RGNOBJ::bMerge(
             (RGNOBJ *)v144,
             (struct RGNOBJ *)v158,
             (struct RGNOBJ *)((unsigned __int64)&v174[2].rclBounds.top & -(__int64)(v174 != 0LL)),
             BYTE1(gafjRgnOp)) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v158);
        goto LABEL_217;
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v158);
    goto LABEL_197;
  }
  RGNOBJ::vSet((RGNOBJ *)v144, &v182);
LABEL_217:
  v190 = *(struct _RECTL *)((char *)v144[0] + 88);
  if ( v107 && !bIntersect(&v190, (const struct _RECTL *)((char *)v107 + 4), &v190)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v196, v144[0], (struct ERECTL *)&v190, 1),
        (unsigned int)ERECTL::bEmpty((ERECTL *)v197)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v144);
    goto LABEL_62;
  }
  v181.left += v118;
  v181.top += HIDWORD(v118);
  v181.right += v118;
  v181.bottom += HIDWORD(v118);
  _guard_dispatch_icall_fptr();
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v144);
  SURFMEM::~SURFMEM((SURFMEM *)&v126);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v125);
  SURFMEM::~SURFMEM((SURFMEM *)&v120);
  SURFMEM::~SURFMEM((SURFMEM *)&v159);
  return 1LL;
}
