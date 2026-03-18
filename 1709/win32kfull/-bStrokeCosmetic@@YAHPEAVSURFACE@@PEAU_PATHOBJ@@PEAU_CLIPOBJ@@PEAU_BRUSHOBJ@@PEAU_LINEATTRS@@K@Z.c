/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C012D884
 * Callers:
 *     EngLineTo @ 0x1C00E8340 (EngLineTo.c)
 *     EngStrokePath @ 0x1C012D570 (EngStrokePath.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C012DD30 (-bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRI.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C012F8A4 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C012F970 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall bStrokeCosmetic(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *this,
        struct _BRUSHOBJ *a4,
        struct _LINEATTRS *a5,
        FIX a6)
{
  __int64 v10; // r9
  FLONG fl; // eax
  unsigned int v12; // esi
  __int64 v13; // rcx
  ULONG cstyle; // edi
  PFLOAT_LONG pstyle; // r9
  bool v16; // zf
  int v17; // r8d
  int *v18; // rdx
  int *v19; // rcx
  LONG l; // eax
  int v21; // eax
  int v22; // r8d
  int e_low; // ecx
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // r9d
  ULONG iSolidColor; // ecx
  struct _BMINFO *v28; // rdi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  void (* near **v35)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // rdx
  __int64 v36; // r8
  void (**v37)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // r13
  struct _PATHOBJ v38; // rcx
  int v39; // eax
  ULONG count; // r8d
  int v41; // r12d
  ULONG v42; // ecx
  char flags; // r9
  POINTFIX *pptfx; // rdx
  POINTFIX *v45; // r11
  POINTFIX *v46; // r10
  int v47; // eax
  unsigned int v49; // esi
  int v50; // ebx
  struct _RECTL *v51; // [rsp+30h] [rbp-D0h]
  int v52; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX v53; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v54; // [rsp+70h] [rbp-90h]
  _QWORD v55[14]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+F0h] [rbp-10h]
  struct _POINTFIX v57; // [rsp+F8h] [rbp-8h] BYREF
  struct _CLIPLINE v58[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _PATHDATA v59; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v60[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v61[64]; // [rsp+210h] [rbp+110h] BYREF

  v53.x = a6;
  memset(v55, 0, sizeof(v55));
  fl = a5->fl;
  v56 = 0LL;
  v12 = 0;
  if ( (fl & 2) != 0 )
  {
    HIDWORD(v55[11]) = 0;
    v55[9] = &gaspAlternateStyle;
    v12 = 1024;
    v55[10] = &gaspAlternateStyle;
    HIDWORD(v55[7]) = HIWORD(a5->elStyleState.l) & 1;
    v55[12] = 0x100000001LL;
    HIDWORD(v55[6]) = 1;
    LODWORD(v55[7]) = 2;
    v55[13] = 0x100000001LL;
  }
  else if ( a5->pstyle )
  {
    v13 = *((_QWORD *)a1 + 6);
    if ( v13 )
    {
      v55[12] = *(_QWORD *)(v13 + 2228);
      LODWORD(v55[13]) = *(_DWORD *)(v13 + 2236);
    }
    else
    {
      v55[12] = 0x100000001LL;
      LODWORD(v55[13]) = 3;
    }
    v12 = 1024;
    if ( bUMPDSecurityGateEx(v13, 1LL, 1024LL, v10) && (cstyle = 16, a5->cstyle > 0x10) )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:bStrokeCosmetic:bStorkeCosmetic's style index (pla->cstyle"
          ") is greater than STYLE_MAX_COUNT.\n",
          289);
    }
    else
    {
      cstyle = a5->cstyle;
    }
    pstyle = a5->pstyle;
    HIDWORD(v55[13]) = cstyle;
    v16 = (a5->fl & 4) == 0;
    v17 = 0;
    HIDWORD(v55[6]) = 0;
    HIDWORD(v55[11]) = !v16;
    v55[9] = v60;
    v55[10] = v61;
    if ( cstyle )
    {
      v18 = &v60[cstyle - 1];
      v19 = (int *)v61;
      if ( v18 >= v60 )
      {
        do
        {
          l = pstyle->l;
          ++pstyle;
          v21 = LODWORD(v55[13]) * l;
          *v18 = v21;
          *v19++ = v21;
          v17 = *v18-- + HIDWORD(v55[6]);
          HIDWORD(v55[6]) = v17;
        }
        while ( (unsigned __int64)v18 >= v55[9] );
      }
    }
    v22 = 2 * v17;
    e_low = LOWORD(a5->elStyleState.e);
    v24 = LODWORD(v55[13]) * HIWORD(a5->elStyleState.l);
    LODWORD(v55[7]) = v22;
    v25 = e_low + v24;
    if ( v25 < 0 )
      v25 = 0;
    HIDWORD(v55[7]) = v25;
    if ( v25 >= v22 )
      HIDWORD(v55[7]) = v25 % v22;
  }
  v26 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v52 = *((_DWORD *)a1 + 22) / 4;
  v54 = (unsigned int *)*((_QWORD *)a1 + 10);
  v28 = (struct _BMINFO *)((char *)&gabminfo + 32 * v26);
  if ( v26 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_53;
  }
  if ( v26 == 2 )
  {
LABEL_53:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_54;
  }
  if ( v26 != 3 )
  {
    if ( v26 != 4 )
      goto LABEL_18;
    goto LABEL_55;
  }
LABEL_54:
  iSolidColor |= iSolidColor << 8;
LABEL_55:
  iSolidColor |= iSolidColor << 16;
LABEL_18:
  HIDWORD(v59.pptfx) = -1;
  v29 = 8LL;
  v59.count = iSolidColor;
  v59.flags = 0;
  LODWORD(v59.pptfx) = ~iSolidColor;
  v30 = aiLineMix[v53.x & 0xF];
  v31 = (unsigned __int8)v30;
  v32 = v30 >> 8;
  v33 = *(&v59.flags + v31);
  if ( v26 != 5 )
    v29 = 0LL;
  v34 = *(&v59.flags + v32);
  v35 = &gapfnStripCddCallback;
  v55[0] = __PAIR64__(v34, v33);
  v36 = -(__int64)(v12 != 0) & 4 | v29;
  if ( !*((_QWORD *)a1 + 71) )
    v35 = &gapfnStrip;
  v37 = (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))&v35[v36];
  if ( this && this->iDComplexity )
  {
    v49 = v12 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v50 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[10], a2, 0xB8u, v58, 1);
      if ( v58[0].c )
      {
        if ( (v49 & 0x400) != 0 )
          LODWORD(v55[8]) = LOWORD(v58[0].lStyleState) + LODWORD(v55[13]) * HIWORD(v58[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v28,
                              &v58[0].ptfxA,
                              &v58[0].ptfxB,
                              v58[0].arun,
                              v58[0].c,
                              (struct _LINESTATE *)v55,
                              v51,
                              v37,
                              v49,
                              v54,
                              v52,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 71)) )
          break;
      }
      if ( !v50 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    v38 = a2[1];
    a2->fl &= ~8u;
    v59.flags = 0;
    *(_QWORD *)(*(_QWORD *)&v38 + 80LL) = *(_QWORD *)(*(_QWORD *)&v38 + 32LL);
    do
    {
      v39 = EPATHOBJ::bEnum((EPATHOBJ *)a2, &v59);
      count = v59.count;
      v41 = v39;
      v42 = v59.count;
      if ( !v59.count )
        break;
      flags = v59.flags;
      pptfx = v59.pptfx;
      if ( (v59.flags & 1) != 0 )
      {
        v45 = v59.pptfx + 1;
        v57 = *v59.pptfx;
        v46 = v59.pptfx;
        v42 = v59.count - 1;
      }
      else
      {
        v46 = &v53;
        v45 = v59.pptfx;
      }
      v47 = HIDWORD(v55[7]);
      if ( (v59.flags & 4) != 0 )
        v47 = v56;
      HIDWORD(v55[7]) = v47;
      if ( v42 )
      {
        if ( !(unsigned int)bLines(
                              v28,
                              v46,
                              v45,
                              0LL,
                              v42,
                              (struct _LINESTATE *)v55,
                              v51,
                              v37,
                              v12,
                              v54,
                              v52,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 71)) )
          return 0LL;
        pptfx = v59.pptfx;
        count = v59.count;
        flags = v59.flags;
      }
      v53 = pptfx[count - 1];
      if ( (flags & 8) != 0
        && !(unsigned int)bLines(
                            v28,
                            &v53,
                            &v57,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v55,
                            v51,
                            v37,
                            v12,
                            v54,
                            v52,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 71)) )
      {
        return 0LL;
      }
    }
    while ( v41 );
    if ( v12 )
      a5->elStyleState.l = (unsigned __int16)(HIDWORD(v55[7]) % LODWORD(v55[13])) | ((unsigned __int16)(HIDWORD(v55[7]) / LODWORD(v55[13])) << 16);
    return 1LL;
  }
}
