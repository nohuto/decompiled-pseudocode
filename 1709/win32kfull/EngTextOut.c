/*
 * XREFs of EngTextOut @ 0x1C0011110
 * Callers:
 *     NtGdiEngTextOut @ 0x1C00B84F0 (NtGdiEngTextOut.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0272500 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0276830 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0279160 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02805B0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C000DB00 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C000DCD0 (STROBJ_bEnum.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0011FE0 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0012530 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C002E470 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C014343C (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C0143498 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C026C788 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
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
  struct _GLYPHPOS *pgp; // r13
  ULONG v13; // eax
  unsigned int cGlyphs; // r12d
  LONG bottom; // r14d
  LONG right; // edi
  LONG top; // ebx
  LONG left; // esi
  __int64 v19; // r9
  __int64 v20; // r10
  GLYPHBITS *pgb; // rax
  int v22; // r8d
  int v23; // edx
  int v24; // r11d
  LONG v25; // eax
  __int64 v26; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  FLONG flFontType; // eax
  int v33; // r12d
  FLONG v34; // eax
  LONG v35; // edx
  unsigned int v36; // r8d
  LONG v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // r14d
  unsigned int v40; // edi
  unsigned int v41; // edx
  unsigned int v42; // r14d
  _DWORD *v43; // rax
  __int64 v44; // r8
  _DWORD *v45; // r12
  __int64 v46; // rax
  __int64 flAccel; // rdx
  unsigned int v48; // ebx
  unsigned __int8 *v49; // rcx
  int v50; // ecx
  int v51; // eax
  struct _BRUSHOBJ *v52; // rsi
  struct _KTHREAD *v53; // rdi
  struct _SURFOBJ *v54; // r9
  __int64 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  BOOL v59; // r14d
  ULONG v60; // esi
  RECTL *v61; // r9
  LONG v62; // edx
  LONG v63; // edi
  int v64; // eax
  LONG v65; // ecx
  RECTL *p_rclBkGround; // r10
  LONG v67; // r8d
  LONG v68; // ecx
  LONG v69; // edi
  LONG v70; // ecx
  LONG v71; // edx
  LONG v72; // ecx
  LONG v73; // eax
  unsigned int v74; // ebx
  int v75; // eax
  int v76; // eax
  __int64 v77; // rdi
  LONG v78; // ecx
  LONG v79; // r10d
  LONG v80; // edx
  LONG v81; // r9d
  LONG v82; // r8d
  RECTL v83; // xmm0
  LONG v84; // ecx
  LONG v85; // ecx
  LONG v86; // r10d
  int v87; // eax
  BOOL (__stdcall *v88)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v89; // rcx
  int v90; // edi
  void *v91; // r8
  unsigned __int64 v92; // rdx
  void *v93; // r8
  unsigned __int64 v94; // rdx
  struct _GLYPHPOS *v95; // rbx
  ULONG v96; // esi
  ULONG v97; // eax
  CLIPOBJ *v98; // rdi
  int v99; // r12d
  unsigned int v100; // r14d
  int v101; // eax
  struct _FONTOBJ *v102; // rdx
  int v103; // edi
  bool v104; // zf
  struct _FONTOBJ *v105; // rbx
  __int64 v106; // rdi
  int v107; // eax
  BOOL (__stdcall *v108)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  struct _GLYPHPOS *v109; // r8
  __int64 v110; // rdx
  bool v111; // sf
  int i; // eax
  int v113; // eax
  char *v114; // rbx
  int (*v115)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  _DWORD *j; // rdi
  unsigned __int8 *v117; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v118; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v119; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v120; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v121; // [rsp+50h] [rbp-D0h]
  unsigned int v122; // [rsp+60h] [rbp-C0h]
  unsigned int v123; // [rsp+80h] [rbp-A0h]
  int v124; // [rsp+A0h] [rbp-80h]
  ULONG v125; // [rsp+A4h] [rbp-7Ch] BYREF
  ULONG pc; // [rsp+A8h] [rbp-78h] BYREF
  struct _RECTL v127; // [rsp+B0h] [rbp-70h] BYREF
  PGLYPHPOS ppgpos; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v129; // [rsp+C8h] [rbp-58h]
  unsigned int v130; // [rsp+CCh] [rbp-54h]
  struct _FONTOBJ *v131; // [rsp+D0h] [rbp-50h]
  CLIPOBJ *v132; // [rsp+D8h] [rbp-48h]
  int iDComplexity; // [rsp+E0h] [rbp-40h]
  int iSolidColor; // [rsp+E4h] [rbp-3Ch]
  struct _BRUSHOBJ *v135; // [rsp+E8h] [rbp-38h]
  RECTL rclBkGround; // [rsp+F0h] [rbp-30h] BYREF
  PGLYPHPOS v137; // [rsp+100h] [rbp-20h] BYREF
  struct SURFACE *v138; // [rsp+108h] [rbp-18h]
  struct _POINTL *v139; // [rsp+110h] [rbp-10h]
  struct _BRUSHOBJ *v140; // [rsp+118h] [rbp-8h]
  struct SURFACE *v141; // [rsp+120h] [rbp+0h]
  struct _RECTL v142; // [rsp+130h] [rbp+10h] BYREF
  unsigned int v143; // [rsp+140h] [rbp+20h]
  RECTL *v144; // [rsp+148h] [rbp+28h]
  unsigned __int8 *v145; // [rsp+150h] [rbp+30h]
  SURFOBJ *v146; // [rsp+158h] [rbp+38h]
  _DWORD *v147; // [rsp+160h] [rbp+40h]
  struct _RECTL *v148; // [rsp+168h] [rbp+48h]
  __int64 v149; // [rsp+170h] [rbp+50h] BYREF
  __int64 v150; // [rsp+178h] [rbp+58h]
  __int64 v151; // [rsp+180h] [rbp+60h]
  __int64 v152; // [rsp+188h] [rbp+68h]
  int v153; // [rsp+190h] [rbp+70h] BYREF
  struct _RECTL v154[20]; // [rsp+194h] [rbp+74h] BYREF
  LONG v155; // [rsp+2E0h] [rbp+1C0h] BYREF
  LONG v156; // [rsp+2E4h] [rbp+1C4h]
  LONG v157; // [rsp+2E8h] [rbp+1C8h]
  LONG v158; // [rsp+2ECh] [rbp+1CCh]
  RECTL v159; // [rsp+2F0h] [rbp+1D0h] BYREF
  SURFACE *v160; // [rsp+300h] [rbp+1E0h]
  __int64 v161; // [rsp+308h] [rbp+1E8h]
  struct _CLIPOBJ *v162; // [rsp+310h] [rbp+1F0h]
  struct _BRUSHOBJ *v163; // [rsp+318h] [rbp+1F8h]
  int v164; // [rsp+320h] [rbp+200h]
  _DWORD v165[17]; // [rsp+324h] [rbp+204h] BYREF
  struct _FONTOBJ *v166; // [rsp+368h] [rbp+248h]
  _BYTE v167[80]; // [rsp+370h] [rbp+250h] BYREF
  _BYTE v168[80]; // [rsp+3C0h] [rbp+2A0h] BYREF
  _BYTE v169[80]; // [rsp+410h] [rbp+2F0h] BYREF
  struct _RECTL si128; // [rsp+460h] [rbp+340h] BYREF
  int v171; // [rsp+47Ch] [rbp+35Ch]

  v10 = 0;
  v148 = prclExtra;
  v144 = prclOpaque;
  v140 = pboFore;
  v135 = pboOpaque;
  v139 = pptlOrg;
  rclBkGround = pstro->rclBkGround;
  v127 = rclBkGround;
  v132 = pco;
  v131 = pfo;
  v146 = pso;
  v137 = 0LL;
  v129 = 0;
  v124 = 0;
  v138 = 0LL;
  if ( pstro->ulCharInc )
  {
    bottom = v127.bottom;
    right = v127.right;
    top = v127.top;
    left = v127.left;
  }
  else
  {
    pgp = pstro->pgp;
    v13 = 0;
    cGlyphs = pstro->cGlyphs;
    ppgpos = pgp;
    pc = cGlyphs;
    v125 = 0;
    if ( !pgp )
    {
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      v13 = 1;
      v125 = 1;
    }
    bottom = v127.bottom;
    right = v127.right;
    top = v127.top;
    left = v127.left;
    if ( !v13 )
      goto LABEL_6;
    while ( 1 )
    {
      v13 = STROBJ_bEnum(pstro, &pc, &ppgpos);
      pgp = ppgpos;
      cGlyphs = pc;
      v125 = v13;
LABEL_6:
      v19 = 0LL;
      if ( cGlyphs )
        break;
LABEL_21:
      if ( !v13 )
        goto LABEL_22;
    }
    while ( 1 )
    {
      v20 = v19;
      pgb = pgp[v19].pgdf->pgb;
      if ( !pgb )
        break;
      v22 = pgp[v20].ptl.y + pgb->ptlOrigin.y;
      v23 = pgb->ptlOrigin.x + pgp[v20].ptl.x;
      v24 = v23 + pgb->sizlBitmap.cx;
      v25 = v22 + pgb->sizlBitmap.cy;
      v142.left = v23;
      *(_QWORD *)&v142.top = __PAIR64__(v24, v22);
      v142.bottom = v25;
      if ( left == right || top == bottom )
      {
        v127 = v142;
        bottom = v142.bottom;
        right = v142.right;
        top = v142.top;
        left = v142.left;
      }
      else
      {
        if ( v23 < left )
          left = v23;
        v127.left = left;
        if ( v22 < top )
          top = v22;
        v127.top = top;
        if ( v24 > right )
          right = v24;
        v127.right = right;
        if ( v25 > bottom )
        {
          bottom = v25;
          v127.bottom = v25;
        }
      }
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= cGlyphs )
      {
        v13 = v125;
        goto LABEL_21;
      }
    }
LABEL_22:
    v10 = 0;
  }
  v26 = SURFOBJ_TO_SURFACE(v146);
  v141 = (struct SURFACE *)v26;
  if ( (v131->flFontType & 0x10000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)((__int64 (*)(void))IsThreadCrossSessionAttached)()
      && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v29 = *ThreadWin32Thread) != 0 )
    {
      v30 = *(_QWORD *)(v29 + 304);
    }
    else
    {
      v30 = *(_QWORD *)(v26 + 104);
    }
    v138 = v30 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v30 + 48LL) + 2568LL) : (struct SURFACE *)v26;
    bottom = v127.bottom;
    right = v127.right;
    top = v127.top;
    left = v127.left;
    v10 = *(_WORD *)(v26 + 100) != 0 ? 0x10 : 0;
    v124 = v10;
    if ( (*(_WORD *)(v26 + 102) & 0x100) != 0 )
    {
      v10 |= 0x80u;
      v124 = v10;
    }
  }
  flFontType = v131->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v132 )
    iDComplexity = v132->iDComplexity;
  else
    iDComplexity = 0;
  LODWORD(ppgpos) = -1;
  iSolidColor = v140->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *(_DWORD *)(v26 + 96) != 3 )
      goto LABEL_47;
    if ( (unsigned int)bUMPDSecurityGateEx() && !v135 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 638);
      return 0;
    }
    if ( v135->iSolidColor != -1 )
    {
LABEL_47:
      v33 = v10 | 8;
      v124 = v33;
      v34 = v131->flFontType;
      if ( (v34 & 0x10000000) != 0 )
      {
        v35 = pstro->rclBkGround.right;
        v124 = v33 | 0x20;
        v36 = 8;
        if ( v35 > 2147483643 )
          return 0;
        v37 = pstro->rclBkGround.left;
        if ( (unsigned int)(v35 - v37 + 4) >= 0x7FFFFFFF )
          return 0;
        v38 = ((v35 + 4) & 0xFFFFFFFC) - (v37 & 0xFFFFFFFC);
      }
      else if ( (v34 & 0x20000000) != 0 )
      {
        v38 = v129;
        v36 = v129;
      }
      else
      {
        v36 = 4;
        v38 = (((pstro->rclBkGround.right + 8) >> 1) & 0xFFFFFFFC) - ((pstro->rclBkGround.left >> 1) & 0xFFFFFFFC);
      }
      goto LABEL_55;
    }
    return 0;
  }
  v36 = 1;
  v38 = (int)(((pstro->rclBkGround.right + 32) & 0xFFFFFFE0) - (pstro->rclBkGround.left & 0xFFFFFFE0)) >> 3;
LABEL_55:
  v39 = bottom - top;
  v40 = (((v36 * (pstro->rclBkGround.left - left) + 31) >> 3) & 0x1FFFFFFC)
      + (((v36 * (right - pstro->rclBkGround.right) + 31) >> 3) & 0x1FFFFFFC);
  v130 = ((v36 * (pstro->rclBkGround.left - left) + 31) >> 3) & 0x1FFFFFFC;
  v41 = v40 + v38;
  v129 = v41;
  if ( v41 > 0x7FFF || v39 > 0x7FFF )
    return 0;
  v42 = v41 * v39;
  v143 = v42;
  v43 = v42 >= 0x10000 ? EngAllocUserMem(v42, 0x6F746547u) : (_DWORD *)AllocThreadBufferWithTag(v42, 1869899079LL, 32LL);
  v147 = v43;
  v45 = v43;
  if ( !v43 )
    return 0;
  v46 = v129 * (pstro->rclBkGround.top - top);
  flAccel = pstro->flAccel;
  v48 = v124;
  v49 = (unsigned __int8 *)v45 + v46 + v130;
  LOBYTE(v46) = pstro->flAccel & 0xA;
  v145 = v49;
  if ( (_BYTE)v46 == 2 )
  {
    v50 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v50 = 4;
    flAccel &= 0x11u;
    v51 = 0;
    if ( (_BYTE)flAccel != 17 )
      v51 = 2;
    v49 = (unsigned __int8 *)((pstro->ulCharInc != 0) | v51 | (unsigned int)v50);
    v48 = (unsigned int)v49 | v124;
    v124 |= (unsigned int)v49;
  }
  v160 = (SURFACE *)v26;
  if ( *(_WORD *)(v26 + 100) )
    v161 = 0LL;
  else
    v161 = *(_QWORD *)(v26 + 72);
  v52 = v135;
  v162 = v132;
  v166 = v131;
  v163 = v135;
  v164 = 0;
  if ( v144 )
  {
    v53 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v49, flAccel, v44, 0LL) )
    {
      v55 = (__int64 *)PsGetThreadWin32Thread(v53);
      if ( v55 )
      {
        v56 = *v55;
        if ( v56 )
        {
          v57 = *(_QWORD *)(v56 + 40);
          if ( v57 != v56 + 40 )
          {
            v58 = v57 - 40;
            if ( v58 )
            {
              if ( (*(_DWORD *)(v58 + 412) & 0x100) != 0 && *(_DWORD *)(v58 + 432) && !v52 )
              {
                if ( gfUMPDDebug )
                  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 858);
                if ( v42 >= 0x10000 )
                  EngFreeUserMem(v45);
                else
                  FreeThreadBufferWithTag(v45);
                v59 = 0;
                goto LABEL_174;
              }
            }
          }
        }
      }
    }
    v60 = v52->iSolidColor;
    LODWORD(ppgpos) = v60;
    if ( v60 == -1 || iSolidColor == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)v26,
        v131,
        v48,
        v54,
        (struct _SURFOBJ *)v117,
        v132,
        v118,
        v144,
        v119,
        (struct _POINTL *)v120,
        v135,
        v139,
        v122);
      p_rclBkGround = &pstro->rclBkGround;
    }
    else
    {
      v61 = v144;
      v62 = pstro->rclBkGround.top;
      v63 = v144->top;
      if ( v62 <= v63 )
      {
        v64 = v164;
      }
      else
      {
        v165[4 * v164] = v144->left;
        v165[4 * v164 + 1] = v63;
        v165[4 * v164 + 2] = v61->right;
        v165[4 * v164 + 3] = v62;
        v64 = ++v164;
      }
      v65 = pstro->rclBkGround.left;
      p_rclBkGround = &pstro->rclBkGround;
      v67 = v61->left;
      if ( v65 > v61->left )
      {
        v165[4 * v64] = v67;
        v165[4 * v164 + 1] = v62;
        v165[4 * v164 + 2] = v65;
        v165[4 * v164 + 3] = pstro->rclBkGround.bottom;
        v64 = ++v164;
      }
      v68 = pstro->rclBkGround.right;
      v69 = v61->right;
      if ( v68 < v69 )
      {
        v165[4 * v64] = v68;
        v165[4 * v164 + 1] = v62;
        v165[4 * v164 + 2] = v69;
        v165[4 * v164 + 3] = pstro->rclBkGround.bottom;
        v64 = ++v164;
      }
      v70 = pstro->rclBkGround.bottom;
      v71 = v61->bottom;
      if ( v70 < v71 )
      {
        v165[4 * v64] = v67;
        v165[4 * v164 + 1] = v70;
        v165[4 * v164 + 2] = v69;
        v165[4 * v164++ + 3] = v71;
      }
    }
  }
  else
  {
    v60 = (unsigned int)ppgpos;
    p_rclBkGround = &pstro->rclBkGround;
  }
  *(_QWORD *)&rclBkGround.left = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  LOBYTE(rclBkGround.right) = 0;
  LODWORD(v135) = v48 & 0x10;
  rclBkGround.bottom = 0;
  if ( (v48 & 0x10) != 0 )
  {
    v72 = pstro->rclBkGround.top;
    LODWORD(v149) = *(_DWORD *)(v26 + 96);
    v73 = pstro->rclBkGround.right;
    v130 = v72;
    v151 = 0LL;
    v74 = p_rclBkGround->left & ((v48 >> 3) & 4 | 0xFFFFFFF8);
    HIDWORD(v149) = v73 - v74;
    v75 = pstro->rclBkGround.bottom - v72;
    LODWORD(v152) = 1;
    LODWORD(v150) = v75;
    v76 = 1;
    if ( (*(_DWORD *)(v26 + 112) & 0x40000) != 0 )
      v76 = 262145;
    LODWORD(v152) = v76;
    if ( !SURFMEM::bCreateDIB(
            (SURFMEM *)&rclBkGround,
            (struct _DEVBITMAPINFO *)&v149,
            0LL,
            0LL,
            0,
            0LL,
            0LL,
            0,
            1,
            0,
            0) )
    {
      if ( v42 >= 0x10000 )
        EngFreeUserMem(v45);
      else
        FreeThreadBufferWithTag(v45);
      v59 = 0;
      goto LABEL_173;
    }
    v77 = *(_QWORD *)(v26 + 48);
    v78 = 0;
    v79 = 0;
    v141 = *(struct SURFACE **)&rclBkGround.left;
    if ( v26 == *(_QWORD *)(v77 + 2568) && (*(_DWORD *)(v77 + 32) & 0x20000) != 0 )
    {
      v78 = *(_DWORD *)(v77 + 2600);
      v79 = *(_DWORD *)(v77 + 2604);
    }
    v80 = pstro->rclBkGround.left;
    v81 = pstro->rclBkGround.top;
    if ( v78 > v80 )
      v80 = v78;
    v82 = pstro->rclBkGround.right;
    v83 = pstro->rclBkGround;
    if ( v79 > v81 )
      v81 = v79;
    v155 = v80;
    v84 = v146->sizlBitmap.cx + v78;
    v159 = v83;
    v156 = v81;
    if ( v84 < v82 )
      v82 = v84;
    v85 = v79 + v146->sizlBitmap.cy;
    v157 = v82;
    v86 = pstro->rclBkGround.bottom;
    if ( v85 < v86 )
      v86 = v85;
    v158 = v86;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v155, &v132->rclBounds) )
        goto LABEL_169;
      v86 = v158;
      v82 = v157;
      v81 = v156;
      v80 = v155;
    }
    v159.right = v157 - v74;
    v159.left = v80 - v74;
    v159.top = v156 - v130;
    v159.bottom = v158 - v130;
    if ( v60 == -1 && v80 < v82 && v81 < v86 )
    {
      v87 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        (UMPDReleaseAcquireRFONTSem *)v167,
        (struct SURFACE *)v26,
        v131,
        v87);
      if ( (*(_DWORD *)(v26 + 112) & 0x400) != 0 )
        v88 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v77 + 2856);
      else
        v88 = EngCopyBits;
      if ( *(_QWORD *)&rclBkGround.left )
        v89 = *(_QWORD *)&rclBkGround.left + 24LL;
      else
        v89 = 0LL;
      ((void (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, RECTL *, LONG *))v88)(
        v89,
        v26 + 24,
        0LL,
        xloIdent,
        &v159,
        &v155);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v167);
    }
  }
  v90 = (int)ppgpos;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  if ( v90 == -1 )
    goto LABEL_138;
  v91 = v45;
  v92 = (unsigned __int64)v42 >> 2;
  if ( v92 )
  {
    if ( ((unsigned __int8)v45 & 4) != 0 )
    {
      *v45 = 0;
      if ( !--v92 )
        goto LABEL_137;
      v91 = v45 + 1;
    }
    memset(v91, 0, 8 * (v92 >> 1));
    v90 = (int)ppgpos;
    if ( (v92 & 1) != 0 )
      *((_DWORD *)v91 + v92 - 1) = 0;
  }
  do
  {
LABEL_137:
    if ( v90 != -1 )
      goto LABEL_144;
LABEL_138:
    v93 = v45;
    v94 = (unsigned __int64)v42 >> 2;
    if ( v94 )
    {
      if ( ((unsigned __int8)v45 & 4) != 0 )
      {
        *v45 = 0;
        if ( !--v94 )
          goto LABEL_144;
        v93 = v45 + 1;
      }
      memset(v93, 0, 8 * (v94 >> 1));
      v90 = (int)ppgpos;
      if ( (v94 & 1) != 0 )
        *((_DWORD *)v93 + v94 - 1) = 0;
    }
LABEL_144:
    v95 = pstro->pgp;
    if ( v95 )
    {
      v96 = pstro->cGlyphs;
      v125 = pstro->cGlyphs;
      v137 = v95;
      pc = 0;
    }
    else
    {
      if ( (pstro[1].rclBkGround.top & 2) != 0 )
        v97 = STROBJ_bEnum(pstro, &v125, &v137);
      else
        v97 = STROBJ_bEnumCheckBounds(pstro, &v125, &v137, &v127);
      v96 = v125;
      v95 = v137;
      pc = v97;
    }
    if ( !v96 )
      goto LABEL_157;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    v171 = 0;
    if ( iDComplexity )
    {
      if ( iDComplexity != 1 )
      {
        if ( iDComplexity == 3 )
        {
          v98 = v132;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v132, 0, 0, 4u, 0);
          v99 = (int)ppgpos;
          v100 = v129;
          do
          {
            v101 = XCLIPOBJ::bEnum((XCLIPOBJ *)v98, 0x134u, &v153, 0LL);
            v102 = v131;
            v103 = v101;
            v154[v153].bottom = 0;
            vExpandAndCopyText(
              (struct SURFACE *)v26,
              v102,
              v95,
              v96,
              v145,
              v100,
              pstro->ulCharInc,
              v141,
              v138,
              &pstro->rclBkGround,
              v121,
              iSolidColor,
              v99,
              v124,
              v154,
              v148,
              v123,
              v140,
              v139);
            v104 = v103 == 0;
            v98 = v132;
          }
          while ( !v104 );
          v42 = v143;
          v45 = v147;
        }
LABEL_157:
        v105 = v131;
        goto LABEL_158;
      }
      v171 = 0;
      si128 = v132->rclBounds;
    }
    v109 = v95;
    v105 = v131;
    vExpandAndCopyText(
      (struct SURFACE *)v26,
      v131,
      v109,
      v96,
      v145,
      v129,
      pstro->ulCharInc,
      v141,
      v138,
      &pstro->rclBkGround,
      v121,
      iSolidColor,
      v90,
      v124,
      &si128,
      v148,
      v123,
      v140,
      v139);
LABEL_158:
    v90 = (int)ppgpos;
  }
  while ( pc );
  if ( (_DWORD)v135 )
  {
    v106 = *(_QWORD *)(v26 + 48);
    v107 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v168,
      (struct SURFACE *)v26,
      v105,
      v107);
    if ( (*(_DWORD *)(v26 + 112) & 0x400) != 0 )
      v108 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v106 + 2856);
    else
      v108 = EngCopyBits;
    if ( *(_QWORD *)&rclBkGround.left )
      v110 = *(_QWORD *)&rclBkGround.left + 24LL;
    else
      v110 = 0LL;
    ((void (__fastcall *)(__int64, __int64, CLIPOBJ *, _QWORD, LONG *, RECTL *))v108)(
      v26 + 24,
      v110,
      v132,
      0LL,
      &v155,
      &v159);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v168);
  }
LABEL_169:
  if ( v42 >= 0x10000 )
    EngFreeUserMem(v45);
  else
    FreeThreadBufferWithTag(v45);
  v59 = 1;
LABEL_173:
  SURFMEM::~SURFMEM((SURFMEM *)&rclBkGround);
LABEL_174:
  if ( v161 )
  {
    v111 = v164 - 1 < 0;
    for ( i = --v164; !v111; --v164 )
    {
      vDIBSolidBlt(v160, (struct _RECTL *)&v165[4 * i], v162, v163->iSolidColor, 0);
      v111 = v164 - 1 < 0;
      i = v164 - 1;
    }
    return v59;
  }
  else
  {
    v113 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v169, v160, v166, v113);
    v114 = 0LL;
    *(_QWORD *)&v142.left = 0LL;
    if ( v160 )
      v114 = (char *)v160 + 24;
    v115 = SURFACE::pfnBitBlt(v160);
    for ( j = v165; j < &v165[4 * v164]; j += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _RECTL *, int))v115)(
        v114,
        0LL,
        0LL,
        v162,
        0LL,
        j,
        0LL,
        0LL,
        v163,
        &v142,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v169);
    return v59;
  }
}
