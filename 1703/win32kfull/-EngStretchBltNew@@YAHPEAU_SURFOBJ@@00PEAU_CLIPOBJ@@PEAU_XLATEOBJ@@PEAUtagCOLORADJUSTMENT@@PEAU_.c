/*
 * XREFs of ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0098798
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
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C009BE4C (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C009C0A8 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C009C3EC (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C009C628 (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C013C0B0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C013C0E8 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C013C35C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0280F58 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
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
  __m128i *v13; // r12
  struct _RECTL *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned int v17; // r14d
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rdi
  int v22; // r15d
  SURFOBJ *v23; // rcx
  struct _XLATEOBJ *v24; // r9
  int v25; // eax
  SURFOBJ *v26; // r10
  __int64 v27; // r8
  unsigned int v28; // edx
  int v29; // r10d
  LONG bottom; // eax
  LONG top; // ecx
  LONG right; // eax
  LONG left; // ecx
  BOOL v34; // r8d
  int v35; // ecx
  struct _SURFOBJ *v36; // r9
  LONG v37; // ecx
  LONG v38; // eax
  __int64 v39; // r10
  SURFOBJ *v40; // rsi
  XCLIPOBJ *v41; // rax
  int v42; // r8d
  __int64 v43; // rdi
  struct _XLATEOBJ *v44; // rax
  int v45; // ecx
  int v46; // edx
  unsigned int v47; // edx
  int v48; // eax
  struct _RECTL *v49; // rcx
  LONG v50; // eax
  LONG v51; // ecx
  LONG v52; // edx
  LONG v53; // edi
  int v55; // eax
  __int64 v56; // rax
  char *v57; // rdx
  XCLIPOBJ *v58; // r10
  __m128i v59; // xmm0
  __int64 v60; // rax
  LONG v61; // eax
  LONG v62; // ecx
  LONG v63; // edx
  unsigned int v64; // eax
  unsigned int v65; // ecx
  struct _STRDDA *v66; // rax
  struct _SURFOBJ *v67; // r8
  struct _SURFOBJ *v68; // rcx
  unsigned int v69; // r9d
  unsigned int v70; // eax
  __int64 v71; // rcx
  struct _STRRUN *v72; // r11
  XCLIPOBJ *v73; // rdi
  LONG v74; // r8d
  int v75; // r9d
  struct _STRRUN *v76; // rsi
  int v77; // edx
  unsigned int v78; // r10d
  LONG v79; // ecx
  int v80; // eax
  unsigned int *v81; // r9
  unsigned __int64 v82; // r8
  unsigned int v83; // edi
  XCLIPOBJ *v84; // rbx
  int v85; // eax
  int dhpdev; // eax
  __int64 v87; // rdi
  int v88; // eax
  char v89; // dl
  int v90; // ecx
  LONG v91; // ecx
  int v92; // eax
  LONG v93; // r8d
  LONG v94; // edx
  LONG v95; // edx
  SURFOBJ *v96; // rax
  __int64 v97; // rax
  SURFOBJ *v98; // rbx
  int v99; // ecx
  int v100; // eax
  int v101; // r8d
  int v102; // r9d
  int v103; // eax
  XCLIPOBJ *v104; // rdi
  int v105; // [rsp+70h] [rbp-518h]
  int v106; // [rsp+70h] [rbp-518h]
  int v107; // [rsp+74h] [rbp-514h]
  unsigned int v108; // [rsp+78h] [rbp-510h]
  LONG v109; // [rsp+80h] [rbp-508h]
  struct _SURFOBJ *v110; // [rsp+88h] [rbp-500h]
  struct _SURFOBJ *v111; // [rsp+88h] [rbp-500h]
  __int64 v112; // [rsp+90h] [rbp-4F8h]
  int v113; // [rsp+98h] [rbp-4F0h]
  int v114; // [rsp+98h] [rbp-4F0h]
  int v115; // [rsp+98h] [rbp-4F0h]
  __int64 v116; // [rsp+A0h] [rbp-4E8h]
  LONG v117; // [rsp+A8h] [rbp-4E0h]
  struct _RECTL *v118; // [rsp+B0h] [rbp-4D8h]
  SURFOBJ *v119; // [rsp+B8h] [rbp-4D0h] BYREF
  char v120; // [rsp+C0h] [rbp-4C8h]
  int v121; // [rsp+C4h] [rbp-4C4h]
  struct _SURFOBJ *v122; // [rsp+C8h] [rbp-4C0h]
  unsigned int v123; // [rsp+D0h] [rbp-4B8h]
  struct REGION *v124[2]; // [rsp+D8h] [rbp-4B0h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-4A0h] BYREF
  char v126; // [rsp+F0h] [rbp-498h]
  int v127; // [rsp+F4h] [rbp-494h]
  SURFOBJ *pso; // [rsp+F8h] [rbp-490h]
  XCLIPOBJ *v129; // [rsp+100h] [rbp-488h]
  unsigned int v130; // [rsp+108h] [rbp-480h]
  XCLIPOBJ *v131; // [rsp+110h] [rbp-478h]
  struct tagCOLORADJUSTMENT *v132; // [rsp+118h] [rbp-470h]
  struct _SURFOBJ *v133; // [rsp+120h] [rbp-468h]
  struct _STRRUN *v134; // [rsp+128h] [rbp-460h]
  __int64 v135; // [rsp+130h] [rbp-458h]
  __int64 v136; // [rsp+138h] [rbp-450h]
  SIZEL sizl; // [rsp+140h] [rbp-448h]
  XLATEOBJ *v138; // [rsp+148h] [rbp-440h]
  __int64 *v139; // [rsp+150h] [rbp-438h]
  struct REGION *v140[3]; // [rsp+158h] [rbp-430h] BYREF
  __int64 v141; // [rsp+170h] [rbp-418h]
  __int64 v142; // [rsp+178h] [rbp-410h]
  char *v143; // [rsp+180h] [rbp-408h]
  HSURF hsurf; // [rsp+188h] [rbp-400h]
  BOOL v145; // [rsp+190h] [rbp-3F8h]
  BOOL v146; // [rsp+194h] [rbp-3F4h]
  unsigned int v147; // [rsp+198h] [rbp-3F0h]
  unsigned int v148; // [rsp+19Ch] [rbp-3ECh]
  int v149; // [rsp+1A0h] [rbp-3E8h]
  BOOL v150; // [rsp+1A4h] [rbp-3E4h]
  BOOL v151; // [rsp+1A8h] [rbp-3E0h]
  struct _RECTL v152; // [rsp+1B0h] [rbp-3D8h] BYREF
  _QWORD v153[2]; // [rsp+1C0h] [rbp-3C8h] BYREF
  __int64 v154; // [rsp+1D0h] [rbp-3B8h] BYREF
  char v155; // [rsp+1D8h] [rbp-3B0h]
  int v156; // [rsp+1DCh] [rbp-3ACh]
  struct _SURFOBJ *v157; // [rsp+1E0h] [rbp-3A8h]
  struct _CLIPOBJ *v158; // [rsp+1E8h] [rbp-3A0h]
  __int64 v159; // [rsp+1F0h] [rbp-398h]
  struct REGION *v160[2]; // [rsp+1F8h] [rbp-390h] BYREF
  _DWORD v161[4]; // [rsp+208h] [rbp-380h] BYREF
  __int64 v162; // [rsp+218h] [rbp-370h]
  int v163; // [rsp+220h] [rbp-368h]
  int v164; // [rsp+224h] [rbp-364h]
  _DWORD v165[4]; // [rsp+228h] [rbp-360h] BYREF
  __int64 v166; // [rsp+238h] [rbp-350h]
  int v167; // [rsp+240h] [rbp-348h]
  int v168; // [rsp+244h] [rbp-344h]
  __int64 v169; // [rsp+248h] [rbp-340h] BYREF
  int v170; // [rsp+250h] [rbp-338h]
  int v171; // [rsp+254h] [rbp-334h]
  struct _XLATEOBJ *v172; // [rsp+260h] [rbp-328h]
  __int64 v173; // [rsp+268h] [rbp-320h]
  __int64 v174; // [rsp+270h] [rbp-318h] BYREF
  __int64 v175; // [rsp+278h] [rbp-310h] BYREF
  PVOID pvBits; // [rsp+280h] [rbp-308h] BYREF
  int v177; // [rsp+288h] [rbp-300h]
  __int64 v178; // [rsp+290h] [rbp-2F8h]
  __int64 v179; // [rsp+298h] [rbp-2F0h] BYREF
  struct _CLIPOBJ *v180; // [rsp+2A0h] [rbp-2E8h]
  struct _RECTL v181; // [rsp+2A8h] [rbp-2E0h] BYREF
  struct _RECTL v182; // [rsp+2B8h] [rbp-2D0h] BYREF
  struct _RECTL v183; // [rsp+2C8h] [rbp-2C0h] BYREF
  struct _RECTL v184; // [rsp+2D8h] [rbp-2B0h] BYREF
  struct _RECTL v185; // [rsp+2E8h] [rbp-2A0h] BYREF
  __int64 v186; // [rsp+2F8h] [rbp-290h] BYREF
  int v187; // [rsp+300h] [rbp-288h]
  int v188; // [rsp+304h] [rbp-284h]
  __m128i v189; // [rsp+308h] [rbp-280h] BYREF
  __int64 v190; // [rsp+318h] [rbp-270h]
  int v191; // [rsp+320h] [rbp-268h]
  LONG v192; // [rsp+324h] [rbp-264h]
  struct _RECTL v193; // [rsp+328h] [rbp-260h] BYREF
  struct _RECTL v194; // [rsp+338h] [rbp-250h] BYREF
  int v195; // [rsp+348h] [rbp-240h] BYREF
  struct _RECTL v196; // [rsp+34Ch] [rbp-23Ch] BYREF
  _BYTE v197[160]; // [rsp+360h] [rbp-228h] BYREF
  _BYTE v198[160]; // [rsp+400h] [rbp-188h] BYREF
  char v199[4]; // [rsp+4A0h] [rbp-E8h] BYREF
  char v200[156]; // [rsp+4A4h] [rbp-E4h] BYREF

  v129 = (XCLIPOBJ *)a4;
  v133 = a3;
  v110 = a2;
  v122 = a1;
  v157 = a3;
  v158 = a4;
  v180 = a4;
  v172 = a5;
  v132 = a6;
  v138 = (XLATEOBJ *)a7;
  v13 = (__m128i *)a8;
  v14 = a9;
  v139 = (__int64 *)a10;
  v108 = a11;
  if ( a11 - 1 > 3 )
    return 0LL;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v142 = v15;
  v16 = SURFOBJ_TO_SURFACE(a2);
  v112 = v16;
  v141 = SURFOBJ_TO_SURFACE(a3);
  v17 = 0;
  if ( !v15 )
    return 0LL;
  if ( !v16 )
    return 0LL;
  v18 = *(_DWORD *)(v15 + 96);
  switch ( v18 )
  {
    case 7:
      return 0LL;
    case 8:
      return 0LL;
    case 9:
      return 0LL;
  }
  v19 = *(_DWORD *)(v16 + 96);
  if ( v19 == 9 || v18 == 10 || v19 == 10 )
    return 0LL;
  if ( a9->left == a9->right || a9->top == a9->bottom || a8->left == a8->right || a8->top == a8->bottom )
    return 1LL;
  v20 = *(_QWORD *)(v15 + 48);
  v143 = (char *)v20;
  v159 = v20;
  v21 = *(_QWORD *)(v16 + 48);
  v173 = v21;
  v154 = 0LL;
  v155 = 0;
  v156 = 0;
  v194 = *a9;
  v22 = 1;
  v23 = v110;
  if ( v110->iType == 1 && v21 && (*(_DWORD *)(v21 + 32) & 0x20000) != 0 )
  {
    if ( !(unsigned int)MulCopyDeviceToDIB(v110, (struct SURFMEM *)&v154, &v194) )
      goto LABEL_67;
    if ( !v154 )
    {
LABEL_66:
      v17 = v22;
LABEL_67:
      SURFMEM::~SURFMEM((SURFMEM *)&v154);
      return v17;
    }
    v14 = &v194;
    v110 = (struct _SURFOBJ *)(v154 + 24);
    v16 = SURFOBJ_TO_SURFACE(v154 + 24);
    v112 = v16;
    v173 = *(_QWORD *)(v16 + 48);
    v23 = v110;
  }
  v24 = a5;
  if ( !a5 || (v25 = 1, (a5->flXlate & 8) == 0) )
    v25 = 0;
  v107 = v25;
  v149 = v25;
  if ( v25 )
  {
    if ( v23->iType )
      goto LABEL_67;
    v26 = v122;
    if ( v122->iType != 1 )
      goto LABEL_67;
    v27 = (__int64)v133;
    if ( v133 )
      goto LABEL_67;
  }
  else
  {
    v26 = v122;
    v27 = (__int64)v133;
  }
  v28 = a11;
  if ( a11 == 4 )
  {
    if ( v25 )
      goto LABEL_67;
    v55 = EngHTBlt(
            v26,
            v23,
            v27,
            (CLIPOBJ *)v129,
            (struct XLATE *)a5,
            v132,
            v138,
            (XLATEOBJ *)a8,
            (XLATEOBJ *)v14,
            v139,
            0,
            0LL);
    if ( v55 == -1 )
      goto LABEL_67;
    if ( v55 )
    {
      if ( v55 == 1 )
        goto LABEL_66;
      v24 = a5;
      v28 = 4;
    }
    else
    {
      v28 = 3;
      v108 = 3;
      v24 = a5;
    }
  }
  v29 = 0;
  v105 = 0;
  bottom = a8->bottom;
  top = a8->top;
  if ( bottom < top )
  {
    a8->top = bottom;
    a8->bottom = top;
    v29 = 2;
    v105 = 2;
  }
  right = a8->right;
  left = a8->left;
  if ( right < a8->left )
  {
    a8->left = right;
    a8->right = left;
    v29 |= 1u;
    v105 = v29;
  }
  if ( v28 >= 3 || v141 )
  {
    v34 = 0;
  }
  else
  {
    v34 = 1;
    if ( a8->right - a8->left >= v14->right - v14->left )
      v34 = a8->bottom - a8->top < v14->bottom - v14->top;
    v28 = v108;
  }
  v150 = v34;
  v151 = v34;
  v146 = v34;
  v145 = v34;
  if ( !v34 )
  {
    if ( v28 < 3 )
      v28 = 3;
    v108 = v28;
  }
  v147 = v28;
  v148 = v28;
  v35 = *(_DWORD *)(v142 + 112);
  if ( (v35 & 0x40000) != 0 )
    goto LABEL_35;
  if ( v24 && (v24->flXlate & 1) == 0 )
  {
    v36 = v110;
    goto LABEL_162;
  }
  v36 = v110;
  if ( v110->iType )
  {
LABEL_162:
    if ( !*(_WORD *)(v142 + 100) )
      goto LABEL_35;
    if ( (v35 & 2) == 0 )
      goto LABEL_35;
    if ( v29 )
      goto LABEL_35;
    if ( v133 )
      goto LABEL_35;
    v91 = v14->left;
    if ( v14->left < 0 )
      goto LABEL_35;
    v92 = v14->top;
    if ( v92 < 0 )
      goto LABEL_35;
    v93 = v14->right;
    if ( v93 > v36->sizlBitmap.cx )
      goto LABEL_35;
    v94 = v14->bottom;
    if ( v94 > v36->sizlBitmap.cy )
      goto LABEL_35;
    v115 = v93 - v91;
    sizl.cx = v93 - v91;
    v95 = v94 - v92;
    v117 = v95;
    sizl.cy = v95;
    if ( v93 - v91 > a8->right - a8->left )
      goto LABEL_35;
    if ( v95 > a8->bottom - a8->top )
      goto LABEL_35;
    hsurf = (HSURF)EngCreateBitmap(sizl, 0, v122->iBitmapFormat, 0, 0LL);
    v96 = EngLockSurface(hsurf);
    pso = v96;
    if ( !v96 )
      goto LABEL_35;
    v96->iUniq = 0;
    v190 = 0LL;
    v191 = v115;
    v192 = v117;
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      v97 = *(_QWORD *)(v20 + 2864);
      v98 = pso;
      if ( v97 && (unsigned int)_guard_dispatch_icall_fptr() )
        goto LABEL_190;
    }
    else
    {
      v98 = pso;
    }
    v22 = 0;
LABEL_190:
    EngUnlockSurface(v98);
    EngDeleteSurface(hsurf);
    goto LABEL_66;
  }
LABEL_35:
  v119 = 0LL;
  v120 = 0;
  v121 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v197);
  v37 = *(_DWORD *)(v16 + 60);
  v38 = *(_DWORD *)(v16 + 56);
  *(_QWORD *)&v182.left = 0LL;
  v182.right = v38;
  v182.bottom = v37;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v124);
  v39 = v142;
  if ( !*(_WORD *)(v142 + 100) && *(_QWORD *)(v142 + 32) != *(_QWORD *)(v16 + 32) )
    goto LABEL_37;
  v189 = *(__m128i *)a8;
  v184.left = _mm_cvtsi128_si32(v189) - 1;
  v184.top = v189.m128i_i32[1] - 1;
  v184.right = _mm_cvtsi128_si32(_mm_srli_si128(v189, 8)) + 1;
  v184.bottom = _mm_srli_si128(v189, 8).m128i_i32[1] + 1;
  v99 = *(_DWORD *)(v142 + 60);
  v100 = *(_DWORD *)(v142 + 56);
  v169 = 0LL;
  v170 = v100;
  v171 = v99;
  ERECTL::operator*=(&v184, &v169);
  if ( ERECTL::bEmpty((ERECTL *)&v184) )
  {
LABEL_65:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v124);
    SURFMEM::~SURFMEM((SURFMEM *)&v119);
    goto LABEL_66;
  }
  if ( *(_WORD *)(v39 + 100)
    || v184.left <= v14->right && v184.right >= v14->left && v184.top <= v14->bottom && v184.bottom >= v14->top )
  {
    v189.m128i_i32[0] = v101 - v184.left;
    v189.m128i_i32[1] -= v184.top;
    v189.m128i_i32[2] = v102 - v184.left;
    v189.m128i_i32[3] -= v184.top;
    v161[3] = 0;
    v163 = 0;
    v164 = 0;
    v161[1] = v184.right - v184.left + 1;
    v161[2] = v184.bottom - v184.top + 1;
    v162 = 0LL;
    if ( v107 )
      v103 = *(_DWORD *)(v16 + 96);
    else
      v103 = *(_DWORD *)(v39 + 96);
    v161[0] = v103;
    v163 = *(_DWORD *)(v39 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v119, (struct _DEVBITMAPINFO *)v161, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v119 )
      goto LABEL_207;
    v116 = *(_QWORD *)&v184.left;
    if ( !v124[0] )
      goto LABEL_207;
    *(_QWORD *)&v184.left = 0LL;
    v184.right -= v116;
    v184.bottom -= HIDWORD(v116);
    RGNOBJ::vSet((RGNOBJ *)v124, &v184);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v197, v124[0], (struct ERECTL *)&v184, 1);
    v174 = *(_QWORD *)(v142 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v174, (struct _SURFOBJ *)(v142 + 24), 0LL, 0);
    if ( v141 )
      _guard_dispatch_icall_fptr();
    v40 = v119;
    pso = v119;
    v13 = &v189;
    v41 = (XCLIPOBJ *)v197;
  }
  else
  {
LABEL_37:
    v40 = (SURFOBJ *)v39;
    pso = (SURFOBJ *)v39;
    v41 = v129;
  }
  v140[2] = (struct REGION *)v13;
  v131 = v41;
  v175 = *(_QWORD *)(v112 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v175, v110, 0LL, 0);
  ERECTL::operator*=(&v182, v14);
  if ( v182.left == v182.right || v182.top == v182.bottom )
    goto LABEL_65;
  v125 = 0LL;
  v126 = 0;
  v127 = 0;
  if ( v105 || *(_WORD *)(v112 + 100) || (v42 = *(_DWORD *)(v112 + 96), v42 == 7) || v42 == 8 )
  {
    v165[3] = 0;
    v167 = 0;
    v168 = 0;
    v165[1] = v182.right - v182.left;
    v165[2] = v182.bottom - v182.top;
    v166 = 0LL;
    if ( v107 )
      dhpdev = *(_DWORD *)(v112 + 96);
    else
      dhpdev = (int)v40[1].dhpdev;
    v165[0] = dhpdev;
    v167 = *(_DWORD *)(v112 + 112) & 0x40000;
    SURFMEM::bCreateDIB((SURFMEM *)&v125, (struct _DEVBITMAPINFO *)v165, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v125 )
      goto LABEL_206;
    v186 = 0LL;
    v187 = v182.right - v182.left;
    v188 = v182.bottom - v182.top;
    _guard_dispatch_icall_fptr();
    LODWORD(v186) = v14->left - v182.left;
    HIDWORD(v186) = v14->top - v182.top;
    v187 = v14->right - v182.left;
    v188 = v14->bottom - v182.top;
    v87 = v125;
    v112 = v125;
    v138 = (XLATEOBJ *)v125;
    v14 = (struct _RECTL *)&v186;
    sizl = (SIZEL)&v186;
    v111 = 0LL;
    v182.right -= v182.left;
    v88 = v182.bottom - v182.top;
    v182.bottom -= v182.top;
    *(_QWORD *)&v182.left = 0LL;
    v89 = v105;
    if ( (v105 & 2) != 0 )
    {
      v90 = *(_DWORD *)(v125 + 88);
      if ( v90 > 0 )
      {
        *(_QWORD *)(v125 + 80) = *(_QWORD *)(v125 + 72) + v90 * (v88 - 1);
        v89 = v105;
      }
      else
      {
        *(_QWORD *)(v125 + 80) = *(_QWORD *)(v125 + 72);
      }
      *(_DWORD *)(v125 + 88) = -*(_DWORD *)(v125 + 88);
      v87 = v125;
    }
    if ( (v89 & 1) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v87 + 96) - 1) > 5 )
      {
LABEL_206:
        SURFMEM::~SURFMEM((SURFMEM *)&v125);
LABEL_207:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v124);
        SURFMEM::~SURFMEM((SURFMEM *)&v119);
        goto LABEL_67;
      }
      _guard_dispatch_icall_fptr();
    }
    v43 = v112;
  }
  else
  {
    v43 = v112;
    v138 = (XLATEOBJ *)v112;
    sizl = (SIZEL)v14;
    v44 = 0LL;
    if ( !v107 )
      v44 = a5;
    v111 = (struct _SURFOBJ *)v44;
  }
  pvBits = v40->pvBits;
  PDEVOBJ::vSync((PDEVOBJ *)&pvBits, (struct _SURFOBJ *)&v40->hdev, 0LL, 0);
  if ( v14->right - v14->left >= 128000000 )
    goto LABEL_206;
  if ( v14->bottom - v14->top >= 128000000 )
    goto LABEL_206;
  v45 = v13->m128i_i32[2] - v13->m128i_i32[0];
  if ( v45 >= 128000000 )
    goto LABEL_206;
  v46 = v13->m128i_i32[3] - v13->m128i_i32[1];
  if ( v46 >= 128000000 || v45 <= -128000000 || v46 <= -128000000 )
    goto LABEL_206;
  if ( v108 == 3 && !v133 && (!v111 || (HIDWORD(v111->dhsurf) & 1) != 0) )
  {
    v47 = (unsigned int)v40[1].dhpdev;
    v48 = *(_DWORD *)(v43 + 96);
    if ( v47 == v48 && (v48 == 6 || v48 == 3 || v48 == 4) )
    {
      if ( v131 && *((_BYTE *)v131 + 20) == 3 )
      {
        *(_QWORD *)&v181.left = 0LL;
        *(_QWORD *)&v181.right = 0LL;
        *(_QWORD *)&v182.right = 0LL;
        *(_QWORD *)&v182.left = 0LL;
        v84 = v129;
        XCLIPOBJ::cEnumStart(v129, 0, 0, 4u, 0);
        do
        {
          v85 = XCLIPOBJ::bEnum(v84, 0x14u, (char *)&v195, 0LL);
          v114 = v85;
          if ( v195 )
          {
            StretchDIBDirect(
              v40[1].dhsurf,
              (int)v40[1].hsurf,
              (unsigned int)v40->pvScan0,
              HIDWORD(v40->pvScan0),
              (struct _RECTL *)v13,
              *(void **)(v43 + 80),
              *(_DWORD *)(v43 + 88),
              *(_DWORD *)(v43 + 56),
              *(_DWORD *)(v43 + 60),
              v14,
              &v181,
              &v196,
              (unsigned int)v40[1].dhpdev);
            ERECTL::operator+=((unsigned int *)&v182, (unsigned int *)&v181);
            v85 = v114;
          }
        }
        while ( v85 );
      }
      else
      {
        v49 = (struct _RECTL *)v13;
        if ( v131 && *((_BYTE *)v131 + 20) == 1 )
          v49 = (struct _RECTL *)((char *)v131 + 4);
        StretchDIBDirect(
          v40[1].dhsurf,
          (int)v40[1].hsurf,
          (unsigned int)v40->pvScan0,
          HIDWORD(v40->pvScan0),
          (struct _RECTL *)v13,
          *(void **)(v43 + 80),
          *(_DWORD *)(v43 + 88),
          *(_DWORD *)(v43 + 56),
          *(_DWORD *)(v43 + 60),
          v14,
          &v182,
          v49,
          v47);
      }
      v50 = v182.left;
      v185 = v182;
      v51 = v182.right;
      v52 = v182.top;
      v53 = v182.bottom;
      goto LABEL_63;
    }
  }
  v56 = AllocFreeTmpBuffer(324LL);
  v57 = (char *)v56;
  v143 = (char *)v56;
  if ( !v56 )
    goto LABEL_206;
  v179 = v56;
  v58 = v131;
  if ( v131 && *((_BYTE *)v131 + 20) )
  {
    if ( *((_BYTE *)v131 + 20) != 1 )
    {
      if ( *((_BYTE *)v131 + 20) == 3 )
      {
        v107 = 1;
        XCLIPOBJ::cEnumStart(v131, 0, 0, 4u, 0x14u);
        v58 = v131;
        v57 = v143;
      }
      goto LABEL_87;
    }
    *(_DWORD *)v56 = 1;
    v59 = *(__m128i *)((char *)v58 + 4);
  }
  else
  {
    *(_DWORD *)v56 = 1;
    v59 = *v13;
  }
  v107 = 0;
  *(__m128i *)(v56 + 4) = v59;
LABEL_87:
  *(_QWORD *)&v185.right = 0LL;
  *(_QWORD *)&v185.left = 0LL;
  v123 = v130;
  if ( v107 )
    goto LABEL_213;
  while ( 2 )
  {
    v60 = 0LL;
    while ( 1 )
    {
      v113 = v60;
      v57 = v143;
      if ( (unsigned int)v60 >= *(_DWORD *)v143 )
        break;
      v118 = (struct _RECTL *)&v143[16 * v60 + 4];
      v183 = 0LL;
      vInitStrDDAClip(&v182, v14, (struct _RECTL *)v13, v118, &v183);
      if ( !ERECTL::bEmpty((ERECTL *)&v183) )
      {
        --v183.left;
        --v183.top;
        ++v183.right;
        ++v183.bottom;
        ERECTL::operator*=(&v183, &v182);
        v61 = v14->right;
        if ( v61 >= v14->left )
        {
          v62 = v14->bottom;
          v63 = v14->top;
          if ( v62 >= v63 )
          {
            v64 = v61 - v14->left;
            v65 = v64 + v62 - v63;
            if ( v65 >= v64 && v65 < 0x3FFFFFF5 )
            {
              v66 = (struct _STRDDA *)PALLOCMEM2(4 * v65 + 40, 1752462151LL, 0);
              v122 = (struct _SURFOBJ *)v66;
              if ( v66 )
              {
                vInitStrDDA(v66, &v183, v14, (struct _RECTL *)v13);
                v67 = v122;
                v152 = *(struct _RECTL *)&v122->dhsurf;
                v68 = v111;
                if ( v111 )
                {
                  if ( (BYTE4(v111->dhsurf) & 1) != 0 )
                    v68 = 0LL;
                  v111 = v68;
                }
                v178 = qword_1C02DDC40[LODWORD(v40[1].dhpdev)];
                if ( v145 )
                  HIDWORD(v122->dhpdev) = (v148 != 1) - 1;
                v132 = (struct tagCOLORADJUSTMENT *)qword_1C02DDCA0[3 * *(unsigned int *)(v43 + 96) - 1 + v108];
                hsurf = (HSURF)v132;
                v69 = v152.right - v152.left;
                if ( v14->right - v14->left > v13->m128i_i32[2] - v13->m128i_i32[0] )
                {
                  if ( v69 < 0x15555553 )
                  {
                    v70 = v152.right - v152.left;
LABEL_102:
                    v71 = 12 * (v70 + 2);
                    if ( v69 <= 0x5F5E100 && (unsigned int)v71 <= 0x2710000 )
                    {
                      v72 = (struct _STRRUN *)AllocFreeTmpBuffer(v71);
                      v134 = v72;
                      if ( v72 )
                      {
                        v109 = v183.top;
                        v135 = *(_QWORD *)(v43 + 80) + *(_DWORD *)(v112 + 88) * v183.top;
                        if ( v133 )
                        {
                          v177 = *(_DWORD *)v139 + v183.left - v14->left;
                          v136 = *(_QWORD *)(v141 + 80)
                               + (v183.top + *((_DWORD *)v139 + 1) - v14->top) * *(_DWORD *)(v141 + 88);
                        }
                        else
                        {
                          v136 = 0LL;
                        }
                        if ( v146 )
                        {
                          v83 = -1;
                          if ( v147 != 1 )
                            v83 = 0;
                          v123 = v83;
                          vInitBuffer(v72, &v152, v83);
                          v130 = v83;
                        }
                        *(_DWORD *)v72 = HIDWORD(v122->dhsurf);
                        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v160);
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v198);
                        v73 = v131;
                        if ( v131 && v160[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v160, v118);
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v198, v160[0], (struct ERECTL *)v118, 1);
                        }
                        if ( v73 && !v160[0] )
                        {
LABEL_126:
                          FreeTmpBuffer(v134);
                          Win32FreePool(v122);
                          ERECTL::operator+=((unsigned int *)&v185, (unsigned int *)&v152);
                          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v160);
                          goto LABEL_127;
                        }
                        v74 = v109;
                        v75 = 0;
                        v106 = 0;
                        v76 = v134;
                        while ( 2 )
                        {
                          if ( v74 >= v183.bottom )
                          {
                            v40 = pso;
                            goto LABEL_126;
                          }
                          v77 = *((_DWORD *)v122->hdev + v75);
                          *((_DWORD *)v76 + 1) = v77;
                          if ( v77 )
                          {
                            _guard_dispatch_icall_fptr();
                            v76 = v134;
                            _guard_dispatch_icall_fptr();
                            v74 = v109;
                            v78 = v123;
                            if ( !v151 )
                              goto LABEL_114;
                            v79 = v152.left;
                            *((_DWORD *)v76 + 2) = v152.left;
                            v80 = v152.right - v79;
                            *((_DWORD *)v76 + 3) = v152.right - v79;
                            v81 = (unsigned int *)((char *)v76 + 16);
                            v82 = (unsigned __int64)(4 * v80) >> 2;
                            if ( v82 )
                            {
                              if ( ((unsigned __int8)v81 & 4) != 0 )
                              {
                                *v81 = v78;
                                if ( --v82 )
                                {
                                  v81 = (unsigned int *)((char *)v76 + 20);
                                  goto LABEL_122;
                                }
                              }
                              else
                              {
LABEL_122:
                                memset64(v81, v78 | ((unsigned __int64)v78 << 32), v82 >> 1);
                                if ( (v82 & 1) != 0 )
                                  v81[v82 - 1] = v78;
                              }
                            }
                            v74 = v109;
LABEL_114:
                            v75 = v106;
                          }
                          else if ( v150 )
                          {
                            _guard_dispatch_icall_fptr();
                            v74 = v109;
                            v75 = v106;
                          }
                          v135 += *(int *)(v112 + 88);
                          *(_DWORD *)v76 += *((_DWORD *)v76 + 1);
                          if ( v136 )
                            v136 += *(int *)(v141 + 88);
                          v109 = ++v74;
                          v106 = ++v75;
                          continue;
                        }
                      }
                      v67 = v122;
                    }
                  }
                }
                else if ( v69 + 3 >= v69 )
                {
                  v70 = (v69 + 3) >> 1;
                  if ( v70 < 0x15555553 )
                    goto LABEL_102;
                }
                Win32FreePool(v67);
              }
            }
          }
        }
      }
LABEL_127:
      v60 = (unsigned int)(v113 + 1);
      v43 = v112;
    }
    v58 = v131;
    if ( v107 )
    {
LABEL_213:
      v107 = XCLIPOBJ::bEnum(v58, 0x144u, v57, 0LL);
      continue;
    }
    break;
  }
  AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v179);
  v53 = v185.bottom;
  v51 = v185.right;
  v52 = v185.top;
  v50 = v185.left;
LABEL_63:
  if ( v40 == (SURFOBJ *)v142 )
  {
LABEL_64:
    SURFMEM::~SURFMEM((SURFMEM *)&v125);
    goto LABEL_65;
  }
  v185.left = v116 + v50;
  v185.top = HIDWORD(v116) + v52;
  v185.right = v116 + v51;
  v185.bottom = HIDWORD(v116) + v53;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v140);
  if ( !v140[0] )
    goto LABEL_205;
  v104 = v129;
  if ( !v129 )
  {
    RGNOBJ::vSet((RGNOBJ *)v140, &v185);
    goto LABEL_225;
  }
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v153);
  if ( !v153[0]
    || (RGNOBJ::vSet((RGNOBJ *)v153, &v185),
        !RGNOBJ::bMerge(
           (RGNOBJ *)v140,
           (struct RGNOBJ *)v153,
           (struct RGNOBJ *)((unsigned __int64)&v180[2].rclBounds.top & -(__int64)(v180 != 0LL)),
           BYTE1(gafjRgnOp))) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v153);
LABEL_205:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v140);
    goto LABEL_206;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v153);
LABEL_225:
  v193 = *(struct _RECTL *)((char *)v140[0] + 88);
  if ( v104 && !bIntersect(&v193, (const struct _RECTL *)((char *)v104 + 4), &v193)
    || (ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v199, v140[0], (struct ERECTL *)&v193, 1), ERECTL::bEmpty((ERECTL *)v200)) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v140);
    goto LABEL_64;
  }
  v184.left += v116;
  v184.top += HIDWORD(v116);
  v184.right += v116;
  v184.bottom += HIDWORD(v116);
  _guard_dispatch_icall_fptr();
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v140);
  SURFMEM::~SURFMEM((SURFMEM *)&v125);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v124);
  SURFMEM::~SURFMEM((SURFMEM *)&v119);
  SURFMEM::~SURFMEM((SURFMEM *)&v154);
  return 1LL;
}
