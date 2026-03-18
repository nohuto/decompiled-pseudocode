/*
 * XREFs of EngTextOut @ 0x1C0083290
 * Callers:
 *     NtGdiEngTextOut @ 0x1C009ABE0 (NtGdiEngTextOut.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0275B30 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0279E40 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C027C770 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0283A30 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0076E60 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0083D10 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00842D8 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C00DF180 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C00DF3C0 (STROBJ_bEnum.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C013C58C (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C013C5E8 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0270084 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 */

BOOL __stdcall EngTextOut(
        SURFOBJ *pso,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
{
  int v10; // r12d
  STROBJ *v11; // rdi
  LONG bottom; // eax
  struct _GLYPHPOS *pgp; // r12
  int v14; // r13d
  unsigned int cGlyphs; // r11d
  LONG v16; // ebx
  LONG right; // r14d
  LONG top; // esi
  LONG left; // r15d
  __int64 v20; // r8
  struct _GLYPHPOS *v21; // r9
  GLYPHBITS *pgb; // rax
  LONG v23; // edi
  LONG v24; // edx
  LONG v25; // r10d
  LONG v26; // eax
  __int64 v27; // r13
  FLONG flFontType; // eax
  ULONG iSolidColor; // r12d
  LONG v30; // edx
  struct _RECTL *v31; // rdi
  unsigned int v32; // r8d
  unsigned int v33; // edx
  unsigned int v34; // ebx
  unsigned int v35; // edi
  unsigned int v36; // edx
  unsigned int v37; // ebx
  _DWORD *v38; // rax
  _DWORD *v39; // r15
  STROBJ *v40; // r11
  FLONG flAccel; // edx
  int v42; // ecx
  int v43; // eax
  RECTL *v44; // r14
  struct _BRUSHOBJ *v45; // rdi
  __int64 *v46; // rax
  struct _SURFOBJ *v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  ULONG v50; // esi
  LONG v51; // edx
  LONG v52; // edi
  int v53; // eax
  LONG v54; // ecx
  struct _RECTL *v55; // r9
  LONG v56; // r8d
  LONG v57; // ecx
  LONG v58; // edx
  LONG v59; // ecx
  LONG v60; // edi
  unsigned int v61; // r10d
  void *v62; // r8
  unsigned __int64 v63; // rdx
  ULONG v64; // r12d
  struct _GLYPHPOS *v65; // rsi
  unsigned int v66; // r14d
  BOOL v67; // r14d
  bool v68; // sf
  int v69; // eax
  void *v71; // r8
  unsigned __int64 v72; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // ecx
  FLONG v77; // eax
  int v78; // edx
  BOOL v79; // eax
  ULONG v80; // eax
  LONG v81; // edx
  CLIPOBJ *v82; // rdi
  unsigned __int8 *v83; // r15
  int v84; // ebx
  int v85; // eax
  struct _FONTOBJ *v86; // rdx
  int v87; // edi
  bool v88; // zf
  __int64 v89; // rcx
  unsigned int v90; // r14d
  LONG v91; // ecx
  int v92; // eax
  LONG v93; // ecx
  int v94; // r10d
  __int64 v95; // rdi
  LONG v96; // edx
  __int64 v97; // r9
  __int64 v98; // r8
  int v99; // ecx
  int v100; // ecx
  LONG v101; // r10d
  int v102; // eax
  BOOL (__stdcall *v103)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v104; // rcx
  __int64 v105; // rdi
  int v106; // eax
  BOOL (__stdcall *v107)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v108; // rdx
  int v109; // eax
  char *v110; // rbx
  int (*v111)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  _DWORD *i; // rdi
  unsigned __int8 *v113; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v114; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v115; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v116; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v117; // [rsp+50h] [rbp-D0h]
  unsigned int v118; // [rsp+60h] [rbp-C0h]
  unsigned int v119; // [rsp+80h] [rbp-A0h]
  int v120; // [rsp+A0h] [rbp-80h]
  ULONG pc; // [rsp+A4h] [rbp-7Ch] BYREF
  STROBJ *pstroa; // [rsp+A8h] [rbp-78h]
  struct _RECTL v123; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v124; // [rsp+C0h] [rbp-60h]
  int v125; // [rsp+C4h] [rbp-5Ch]
  ULONG v126; // [rsp+C8h] [rbp-58h] BYREF
  struct _FONTOBJ *v127; // [rsp+D0h] [rbp-50h]
  CLIPOBJ *v128; // [rsp+D8h] [rbp-48h]
  int iDComplexity; // [rsp+E0h] [rbp-40h]
  struct _RECTL *p_rclBkGround; // [rsp+E8h] [rbp-38h]
  struct _RECTL v131; // [rsp+F0h] [rbp-30h] BYREF
  int v132; // [rsp+100h] [rbp-20h]
  struct _BRUSHOBJ *v133; // [rsp+108h] [rbp-18h]
  PGLYPHPOS v134; // [rsp+110h] [rbp-10h] BYREF
  struct SURFACE *v135; // [rsp+118h] [rbp-8h]
  struct _POINTL *v136; // [rsp+120h] [rbp+0h]
  struct _BRUSHOBJ *v137; // [rsp+128h] [rbp+8h]
  struct SURFACE *v138; // [rsp+130h] [rbp+10h]
  struct _RECTL v139; // [rsp+140h] [rbp+20h] BYREF
  unsigned int v140; // [rsp+150h] [rbp+30h]
  SURFOBJ *v141; // [rsp+158h] [rbp+38h]
  unsigned __int8 *v142; // [rsp+160h] [rbp+40h]
  PGLYPHPOS ppgpos; // [rsp+168h] [rbp+48h] BYREF
  _DWORD *v144; // [rsp+170h] [rbp+50h]
  struct _RECTL *v145; // [rsp+178h] [rbp+58h]
  __int64 v146; // [rsp+180h] [rbp+60h] BYREF
  __int64 v147; // [rsp+188h] [rbp+68h]
  __int64 v148; // [rsp+190h] [rbp+70h]
  __int64 v149; // [rsp+198h] [rbp+78h]
  RECTL *v150; // [rsp+1A0h] [rbp+80h]
  int v151; // [rsp+1B0h] [rbp+90h] BYREF
  struct _RECTL v152[20]; // [rsp+1B4h] [rbp+94h] BYREF
  LONG v153; // [rsp+300h] [rbp+1E0h] BYREF
  int v154; // [rsp+304h] [rbp+1E4h]
  int v155; // [rsp+308h] [rbp+1E8h]
  LONG v156; // [rsp+30Ch] [rbp+1ECh]
  struct _RECTL v157; // [rsp+310h] [rbp+1F0h] BYREF
  SURFACE *v158; // [rsp+320h] [rbp+200h]
  __int64 v159; // [rsp+328h] [rbp+208h]
  struct _CLIPOBJ *v160; // [rsp+330h] [rbp+210h]
  struct _BRUSHOBJ *v161; // [rsp+338h] [rbp+218h]
  int v162; // [rsp+340h] [rbp+220h]
  _DWORD v163[17]; // [rsp+344h] [rbp+224h] BYREF
  struct _FONTOBJ *v164; // [rsp+388h] [rbp+268h]
  _BYTE v165[80]; // [rsp+390h] [rbp+270h] BYREF
  _BYTE v166[80]; // [rsp+3E0h] [rbp+2C0h] BYREF
  _BYTE v167[80]; // [rsp+430h] [rbp+310h] BYREF
  struct _RECTL si128; // [rsp+480h] [rbp+360h] BYREF
  int v169; // [rsp+49Ch] [rbp+37Ch]

  v10 = 0;
  v11 = pstro;
  v145 = prclExtra;
  v150 = prclOpaque;
  v137 = pboFore;
  v133 = pboOpaque;
  v136 = pptlOrg;
  *(_QWORD *)&v131.left = *(_QWORD *)&pstro->rclBkGround.left;
  v131.right = pstro->rclBkGround.right;
  bottom = pstro->rclBkGround.bottom;
  v141 = pso;
  v131.bottom = bottom;
  v123 = v131;
  v128 = pco;
  v127 = pfo;
  pstroa = pstro;
  v134 = 0LL;
  v124 = 0;
  v120 = 0;
  v135 = 0LL;
  p_rclBkGround = &pstro->rclBkGround;
  if ( pstro->ulCharInc )
  {
    v16 = v123.bottom;
    right = v123.right;
    top = v123.top;
    left = v123.left;
  }
  else
  {
    pgp = pstro->pgp;
    v14 = 0;
    cGlyphs = pstro->cGlyphs;
    ppgpos = pgp;
    pc = cGlyphs;
    if ( !pgp )
    {
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      v14 = 1;
    }
    v16 = v123.bottom;
    right = v123.right;
    top = v123.top;
    left = v123.left;
    if ( v14 )
      goto LABEL_101;
    while ( 1 )
    {
      v20 = 0LL;
      if ( cGlyphs )
        break;
LABEL_19:
      if ( !v14 )
        goto LABEL_20;
LABEL_101:
      v79 = STROBJ_bEnum(v11, &pc, &ppgpos);
      cGlyphs = pc;
      v14 = v79;
      pgp = ppgpos;
    }
    while ( 1 )
    {
      v21 = &pgp[v20];
      pgb = v21->pgdf->pgb;
      if ( !pgb )
        break;
      v23 = v21->ptl.y + pgb->ptlOrigin.y;
      v24 = pgb->ptlOrigin.x + v21->ptl.x;
      v25 = v24 + pgb->sizlBitmap.cx;
      v26 = v23 + pgb->sizlBitmap.cy;
      v139.left = v24;
      *(_QWORD *)&v139.top = __PAIR64__(v25, v23);
      v139.bottom = v26;
      if ( left == right || top == v16 )
      {
        v123 = v139;
        v16 = v139.bottom;
        right = v139.right;
        top = v139.top;
        left = v139.left;
      }
      else
      {
        if ( v24 < left )
        {
          left = v24;
          v123.left = v24;
        }
        if ( v23 < top )
        {
          top = v23;
          v123.top = v23;
        }
        if ( v25 > right )
        {
          right = v25;
          v123.right = v25;
        }
        if ( v26 > v16 )
        {
          v16 = v26;
          v123.bottom = v26;
        }
      }
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= cGlyphs )
      {
        v11 = pstroa;
        goto LABEL_19;
      }
    }
    v11 = pstroa;
LABEL_20:
    v10 = 0;
  }
  v27 = SURFOBJ_TO_SURFACE(v141);
  v138 = (struct SURFACE *)v27;
  if ( (v127->flFontType & 0x10000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v74 = *ThreadWin32Thread) != 0 )
      v75 = *(_QWORD *)(v74 + 304);
    else
      v75 = *(_QWORD *)(v27 + 104);
    if ( v75 )
      v135 = *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v75 + 48LL) + 2568LL);
    else
      v135 = (struct SURFACE *)v27;
    if ( *(_WORD *)(v27 + 100) )
    {
      v10 = 16;
      v120 = 16;
    }
    v16 = v123.bottom;
    right = v123.right;
    top = v123.top;
    left = v123.left;
    if ( (*(_WORD *)(v27 + 102) & 0x100) != 0 )
      v120 = v10 | 0x80;
  }
  flFontType = v127->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v128 )
    iDComplexity = v128->iDComplexity;
  else
    iDComplexity = 0;
  pc = -1;
  iSolidColor = v137->iSolidColor;
  v132 = v137->iSolidColor;
  if ( (flFontType & 0x10000) == 0 )
  {
    v30 = v11->rclBkGround.right;
    v31 = p_rclBkGround;
    v125 = 1;
    v32 = 1;
    v33 = (int)(((v30 + 32) & 0xFFFFFFE0) - (p_rclBkGround->left & 0xFFFFFFE0)) >> 3;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v27 + 96) == 3 )
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v133 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 638);
      return 0;
    }
    if ( v133->iSolidColor == -1 )
      return 0;
  }
  v76 = v120 | 8;
  v120 |= 8u;
  v77 = v127->flFontType;
  if ( (v77 & 0x10000000) == 0 )
  {
    if ( (v77 & 0x20000000) != 0 )
    {
      v33 = v124;
      v32 = v124;
      v31 = p_rclBkGround;
    }
    else
    {
      v32 = 4;
      v81 = v11->rclBkGround.right;
      v31 = p_rclBkGround;
      v33 = (((v81 + 8) >> 1) & 0xFFFFFFFC) - ((p_rclBkGround->left >> 1) & 0xFFFFFFFC);
    }
    goto LABEL_27;
  }
  v78 = v11->rclBkGround.right;
  v120 = v76 | 0x20;
  v32 = 8;
  if ( v78 > 2147483643 )
    return 0;
  v31 = p_rclBkGround;
  if ( (unsigned int)(v78 - p_rclBkGround->left + 4) >= 0x7FFFFFFF )
    return 0;
  v33 = ((v78 + 4) & 0xFFFFFFFC) - (p_rclBkGround->left & 0xFFFFFFFC);
LABEL_27:
  v34 = v16 - top;
  v35 = ((v32 * (v31->left - left) + 31) >> 3) & 0x1FFFFFFC;
  v36 = v35 + (((v32 * (right - pstroa->rclBkGround.right) + 31) >> 3) & 0x1FFFFFFC) + v33;
  v124 = v36;
  if ( v36 > 0x7FFF || v34 > 0x7FFF )
    return 0;
  v37 = v36 * v34;
  v140 = v37;
  v38 = v37 >= 0x10000 ? EngAllocUserMem(v37, 0x6F746547u) : (_DWORD *)AllocThreadBufferWithTag(v37, 1869899079LL, 32LL);
  v144 = v38;
  v39 = v38;
  if ( !v38 )
    return 0;
  v40 = pstroa;
  flAccel = pstroa->flAccel;
  v142 = (unsigned __int8 *)v38 + v124 * (pstroa->rclBkGround.top - top) + v35;
  if ( (flAccel & 0xA) == 2 )
  {
    v42 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v42 = 4;
    v43 = 0;
    if ( (flAccel & 0x11) != 0x11 )
      v43 = 2;
    v120 |= (pstroa->ulCharInc != 0) | v43 | v42;
  }
  v158 = (SURFACE *)v27;
  if ( *(_WORD *)(v27 + 100) )
    v159 = 0LL;
  else
    v159 = *(_QWORD *)(v27 + 72);
  v44 = v150;
  v45 = v133;
  v160 = v128;
  v164 = v127;
  v161 = v133;
  v162 = 0;
  if ( v150 )
  {
    v46 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v46 )
    {
      v48 = *v46;
      if ( v48 )
      {
        v49 = (_QWORD *)(v48 + 40);
        if ( (_QWORD *)*v49 != v49 )
        {
          v89 = *v49 - 40LL;
          if ( *v49 != 40LL && (*(_DWORD *)(v89 + 412) & 0x100) != 0 && *(_DWORD *)(v89 + 432) && !v45 )
          {
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 858);
            if ( v37 >= 0x10000 )
              EngFreeUserMem(v39);
            else
              FreeThreadBufferWithTag(v39);
            v67 = 0;
            goto LABEL_73;
          }
        }
      }
    }
    v50 = v45->iSolidColor;
    pc = v50;
    if ( v50 == -1 || iSolidColor == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)v27,
        v127,
        v120,
        v47,
        (struct _SURFOBJ *)v113,
        v128,
        v114,
        v44,
        v115,
        (struct _POINTL *)v116,
        v45,
        v136,
        v118);
      v40 = pstroa;
      v55 = p_rclBkGround;
    }
    else
    {
      v40 = pstroa;
      v51 = v44->top;
      v52 = pstroa->rclBkGround.top;
      if ( v52 > v51 )
      {
        v163[4 * v162] = v44->left;
        v163[4 * v162 + 1] = v51;
        v163[4 * v162 + 2] = v44->right;
        v163[4 * v162 + 3] = v52;
        v53 = ++v162;
      }
      else
      {
        v53 = v162;
      }
      v54 = v40->rclBkGround.left;
      v55 = &v40->rclBkGround;
      v56 = v44->left;
      if ( v54 > v44->left )
      {
        v163[4 * v53] = v56;
        v163[4 * v162 + 1] = v52;
        v163[4 * v162 + 2] = v54;
        v163[4 * v162 + 3] = v40->rclBkGround.bottom;
        v53 = ++v162;
      }
      v57 = v40->rclBkGround.right;
      v58 = v44->right;
      if ( v57 < v58 )
      {
        v163[4 * v53] = v57;
        v163[4 * v162 + 1] = v52;
        v163[4 * v162 + 2] = v58;
        v163[4 * v162 + 3] = v40->rclBkGround.bottom;
        v53 = ++v162;
      }
      v59 = v40->rclBkGround.bottom;
      v60 = v44->bottom;
      if ( v59 < v60 )
      {
        v163[4 * v53] = v56;
        v163[4 * v162 + 1] = v59;
        v163[4 * v162 + 2] = v58;
        v163[4 * v162++ + 3] = v60;
      }
    }
  }
  else
  {
    v50 = pc;
    v55 = &pstroa->rclBkGround;
  }
  v61 = v120;
  v146 = 0LL;
  *(_QWORD *)&v131.left = 0LL;
  LOBYTE(v131.right) = 0;
  LODWORD(v133) = v120 & 0x10;
  v131.bottom = 0;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  if ( (v120 & 0x10) != 0 )
  {
    v90 = v55->left & 0xFFFFFFF8;
    if ( (v120 & 0x20) != 0 )
      v90 = v55->left & 0xFFFFFFFC;
    v91 = v40->rclBkGround.top;
    LODWORD(v146) = *(_DWORD *)(v27 + 96);
    HIDWORD(v146) = v40->rclBkGround.right - v90;
    LODWORD(v147) = v40->rclBkGround.bottom - v91;
    v125 = v91;
    v92 = 1;
    LODWORD(v149) = 1;
    v148 = 0LL;
    if ( (*(_DWORD *)(v27 + 112) & 0x40000) != 0 )
      v92 = 262145;
    LODWORD(v149) = v92;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v131, (struct _DEVBITMAPINFO *)&v146, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v37 >= 0x10000 )
        EngFreeUserMem(v39);
      else
        FreeThreadBufferWithTag(v39);
      v67 = 0;
      goto LABEL_72;
    }
    v93 = 0;
    v94 = 0;
    v138 = *(struct SURFACE **)&v131.left;
    v95 = *(_QWORD *)(v27 + 48);
    if ( v27 == *(_QWORD *)(v95 + 2568) && (*(_DWORD *)(v95 + 32) & 0x20000) != 0 )
    {
      v93 = *(_DWORD *)(v95 + 2600);
      v94 = *(_DWORD *)(v95 + 2604);
    }
    v40 = pstroa;
    v96 = p_rclBkGround->left;
    if ( v93 > p_rclBkGround->left )
      v96 = v93;
    v97 = (unsigned int)pstroa->rclBkGround.top;
    v98 = (unsigned int)pstroa->rclBkGround.right;
    if ( v94 > (int)v97 )
      v97 = (unsigned int)v94;
    v157 = *p_rclBkGround;
    v99 = v141->sizlBitmap.cx + v93;
    v153 = v96;
    if ( v99 < (int)v98 )
      v98 = (unsigned int)v99;
    v154 = v97;
    v155 = v98;
    v100 = v94 + v141->sizlBitmap.cy;
    v101 = pstroa->rclBkGround.bottom;
    if ( v100 < v101 )
      v101 = v100;
    v156 = v101;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v153, &v128->rclBounds, v98, v97) )
        goto LABEL_69;
      v101 = v156;
      LODWORD(v98) = v155;
      LODWORD(v97) = v154;
      v96 = v153;
      v40 = pstroa;
    }
    v157.right = v155 - v90;
    v157.left = v96 - v90;
    v157.top = v154 - v125;
    v157.bottom = v156 - v125;
    if ( v50 == -1 && v96 < (int)v98 && (int)v97 < v101 )
    {
      v102 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        (UMPDReleaseAcquireRFONTSem *)v165,
        (struct SURFACE *)v27,
        v127,
        v102);
      if ( (*(_DWORD *)(v27 + 112) & 0x400) != 0 )
        v103 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v95 + 2856);
      else
        v103 = EngCopyBits;
      if ( *(_QWORD *)&v131.left )
        v104 = *(_QWORD *)&v131.left + 24LL;
      else
        v104 = 0LL;
      ((void (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, LONG *))v103)(
        v104,
        v27 + 24,
        0LL,
        xloIdent,
        &v157,
        &v153);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v165);
      v40 = pstroa;
    }
    v61 = v120;
  }
  *(_QWORD *)&v40[1].cGlyphs = 0LL;
  if ( v50 == -1 )
    goto LABEL_60;
  v62 = v39;
  v63 = (unsigned __int64)v37 >> 2;
  if ( !v63 )
    goto LABEL_60;
  if ( ((unsigned __int8)v39 & 4) == 0 )
    goto LABEL_58;
  *v39 = 0;
  if ( --v63 )
  {
    v62 = v39 + 1;
LABEL_58:
    memset(v62, 0, 8 * (v63 >> 1));
    if ( (v63 & 1) != 0 )
      *((_DWORD *)v62 + v63 - 1) = 0;
  }
LABEL_60:
  v64 = pc;
  do
  {
    if ( v64 == -1 )
    {
      v71 = v39;
      v72 = (unsigned __int64)v37 >> 2;
      if ( v72 )
      {
        if ( ((unsigned __int8)v39 & 4) != 0 )
        {
          *v39 = 0;
          if ( !--v72 )
            goto LABEL_62;
          v71 = v39 + 1;
        }
        memset(v71, 0, 8 * (v72 >> 1));
        if ( (v72 & 1) != 0 )
          *((_DWORD *)v71 + v72 - 1) = 0;
      }
    }
LABEL_62:
    v65 = v40->pgp;
    if ( v65 )
    {
      v66 = v40->cGlyphs;
      v126 = v40->cGlyphs;
      v134 = v65;
      pc = 0;
    }
    else
    {
      if ( (v40[1].rclBkGround.top & 2) != 0 )
        v80 = STROBJ_bEnum(v40, &v126, &v134);
      else
        v80 = STROBJ_bEnumCheckBounds(v40, &v126, &v134, &v123);
      v61 = v120;
      v40 = pstroa;
      v66 = v126;
      v65 = v134;
      pc = v80;
    }
    if ( v66 )
    {
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v169 = 0;
      switch ( iDComplexity )
      {
        case 0:
          goto LABEL_66;
        case 1:
          v169 = 0;
          si128 = v128->rclBounds;
LABEL_66:
          vExpandAndCopyText(
            (struct SURFACE *)v27,
            v127,
            v65,
            v66,
            v142,
            v124,
            v40->ulCharInc,
            v138,
            v135,
            &v40->rclBkGround,
            v117,
            v132,
            v64,
            v61,
            &si128,
            v145,
            v119,
            v137,
            v136);
          break;
        case 3:
          v82 = v128;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v128, 0, 0, 4u, 0);
          v83 = v142;
          v84 = v132;
          do
          {
            v85 = XCLIPOBJ::bEnum((XCLIPOBJ *)v82, 0x134u, (char *)&v151, 0LL);
            v86 = v127;
            v87 = v85;
            v152[v151].bottom = 0;
            vExpandAndCopyText(
              (struct SURFACE *)v27,
              v86,
              v65,
              v66,
              v83,
              v124,
              pstroa->ulCharInc,
              v138,
              v135,
              p_rclBkGround,
              v117,
              v84,
              v64,
              v120,
              v152,
              v145,
              v119,
              v137,
              v136);
            v88 = v87 == 0;
            v82 = v128;
          }
          while ( !v88 );
          v37 = v140;
          v39 = v144;
          break;
      }
    }
    v40 = pstroa;
    v61 = v120;
  }
  while ( pc );
  if ( (_DWORD)v133 )
  {
    v105 = *(_QWORD *)(v27 + 48);
    v106 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v166,
      (struct SURFACE *)v27,
      v127,
      v106);
    if ( (*(_DWORD *)(v27 + 112) & 0x400) != 0 )
      v107 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v105 + 2856);
    else
      v107 = EngCopyBits;
    if ( *(_QWORD *)&v131.left )
      v108 = *(_QWORD *)&v131.left + 24LL;
    else
      v108 = 0LL;
    ((void (__fastcall *)(__int64, __int64, CLIPOBJ *, _QWORD, LONG *, struct _RECTL *))v107)(
      v27 + 24,
      v108,
      v128,
      0LL,
      &v153,
      &v157);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v166);
  }
LABEL_69:
  if ( v37 >= 0x10000 )
    EngFreeUserMem(v39);
  else
    FreeThreadBufferWithTag(v39);
  v67 = 1;
LABEL_72:
  SURFMEM::~SURFMEM((SURFMEM *)&v131);
LABEL_73:
  if ( !v159 )
  {
    v109 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v167, v158, v164, v109);
    v110 = 0LL;
    *(_QWORD *)&v139.left = 0LL;
    if ( v158 )
      v110 = (char *)v158 + 24;
    v111 = SURFACE::pfnBitBlt(v158);
    for ( i = v163; i < &v163[4 * v162]; i += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _RECTL *, int))v111)(
        v110,
        0LL,
        0LL,
        v160,
        0LL,
        i,
        0LL,
        0LL,
        v161,
        &v139,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v167);
    return v67;
  }
  v68 = v162 - 1 < 0;
  v69 = --v162;
  if ( v68 )
    return v67;
  do
  {
    vDIBSolidBlt(v158, (struct _RECTL *)&v163[4 * v69], v160, v161->iSolidColor, 0);
    v68 = v162 - 1 < 0;
    v69 = --v162;
  }
  while ( !v68 );
  return v67;
}
