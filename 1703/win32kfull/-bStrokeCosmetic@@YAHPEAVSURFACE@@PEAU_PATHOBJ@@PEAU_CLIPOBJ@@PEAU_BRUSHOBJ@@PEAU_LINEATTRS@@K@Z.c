/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C0127388
 * Callers:
 *     EngLineTo @ 0x1C00A67C0 (EngLineTo.c)
 *     EngStrokePath @ 0x1C0126EF0 (EngStrokePath.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C012783C (-bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRI.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C0129670 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C0129734 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall bStrokeCosmetic(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *this,
        struct _BRUSHOBJ *a4,
        struct _LINEATTRS *a5,
        FIX a6)
{
  FLONG fl; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  ULONG cstyle; // edi
  PFLOAT_LONG pstyle; // r9
  bool v15; // zf
  int v16; // r8d
  int *v17; // rdx
  int *v18; // rcx
  LONG l; // eax
  int v20; // eax
  int v21; // r8d
  int e_low; // ecx
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // r8d
  ULONG iSolidColor; // ecx
  struct _BMINFO *v27; // rdi
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  void (* near **v33)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // r12
  struct _PATHOBJ v34; // rcx
  int v35; // eax
  ULONG count; // r8d
  int v37; // r13d
  ULONG v38; // ecx
  char flags; // r9
  POINTFIX *pptfx; // rdx
  POINTFIX *v41; // r11
  POINTFIX *v42; // r10
  int v43; // eax
  unsigned int v45; // esi
  int v46; // ebx
  struct _RECTL *v47; // [rsp+30h] [rbp-D0h]
  int v48; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX v49; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v50; // [rsp+70h] [rbp-90h]
  _QWORD v51[14]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-10h]
  struct _POINTFIX v53; // [rsp+F8h] [rbp-8h] BYREF
  struct _CLIPLINE v54[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _PATHDATA v55; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v56[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v57[64]; // [rsp+210h] [rbp+110h] BYREF

  v49.x = a6;
  memset(v51, 0, sizeof(v51));
  fl = a5->fl;
  v52 = 0LL;
  v11 = 0;
  if ( (fl & 2) != 0 )
  {
    HIDWORD(v51[11]) = 0;
    v51[9] = &gaspAlternateStyle;
    v11 = 1024;
    v51[10] = &gaspAlternateStyle;
    HIDWORD(v51[7]) = HIWORD(a5->elStyleState.l) & 1;
    v51[12] = 0x100000001LL;
    HIDWORD(v51[6]) = 1;
    LODWORD(v51[7]) = 2;
    v51[13] = 0x100000001LL;
  }
  else if ( a5->pstyle )
  {
    v12 = *((_QWORD *)a1 + 6);
    if ( v12 )
    {
      v51[12] = *(_QWORD *)(v12 + 2228);
      LODWORD(v51[13]) = *(_DWORD *)(v12 + 2236);
    }
    else
    {
      v51[12] = 0x100000001LL;
      LODWORD(v51[13]) = 3;
    }
    v11 = 1024;
    if ( bUMPDSecurityGateEx() && (cstyle = 16, a5->cstyle > 0x10) )
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
    HIDWORD(v51[13]) = cstyle;
    v15 = (a5->fl & 4) == 0;
    v16 = 0;
    HIDWORD(v51[6]) = 0;
    HIDWORD(v51[11]) = !v15;
    v51[9] = v56;
    v51[10] = v57;
    if ( cstyle )
    {
      v17 = &v56[cstyle - 1];
      v18 = (int *)v57;
      if ( v17 >= v56 )
      {
        do
        {
          l = pstyle->l;
          ++pstyle;
          v20 = LODWORD(v51[13]) * l;
          *v17 = v20;
          *v18++ = v20;
          v16 = *v17-- + HIDWORD(v51[6]);
          HIDWORD(v51[6]) = v16;
        }
        while ( (unsigned __int64)v17 >= v51[9] );
      }
    }
    v21 = 2 * v16;
    e_low = LOWORD(a5->elStyleState.e);
    v23 = LODWORD(v51[13]) * HIWORD(a5->elStyleState.l);
    LODWORD(v51[7]) = v21;
    v24 = e_low + v23;
    if ( v24 < 0 )
      v24 = 0;
    HIDWORD(v51[7]) = v24;
    if ( v24 >= v21 )
      HIDWORD(v51[7]) = v24 % v21;
  }
  v25 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v48 = *((_DWORD *)a1 + 22) / 4;
  v50 = (unsigned int *)*((_QWORD *)a1 + 10);
  v27 = (struct _BMINFO *)((char *)&gabminfo + 32 * v25);
  if ( v25 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_53;
  }
  if ( v25 == 2 )
  {
LABEL_53:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_54;
  }
  if ( v25 != 3 )
  {
    if ( v25 != 4 )
      goto LABEL_18;
    goto LABEL_55;
  }
LABEL_54:
  iSolidColor |= iSolidColor << 8;
LABEL_55:
  iSolidColor |= iSolidColor << 16;
LABEL_18:
  HIDWORD(v55.pptfx) = -1;
  v55.count = iSolidColor;
  v55.flags = 0;
  LODWORD(v55.pptfx) = ~iSolidColor;
  v28 = *((int *)&aiLineMix + (v49.x & 0xF));
  v29 = *(&v55.flags + (unsigned __int8)v28);
  v30 = *(&v55.flags + (v28 >> 8));
  v31 = 8LL;
  if ( v25 != 5 )
    v31 = 0LL;
  v51[0] = __PAIR64__(v30, v29);
  v32 = -(__int64)(v11 != 0) & 4 | v31;
  v33 = &(&gapfnStrip)[v32];
  if ( *((_QWORD *)a1 + 71) )
    v33 = &(&gapfnStripCddCallback)[v32];
  if ( this && this->iDComplexity )
  {
    v45 = v11 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v46 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[10], a2, 0xB8u, v54, 1);
      if ( v54[0].c )
      {
        if ( (v45 & 0x400) != 0 )
          LODWORD(v51[8]) = LOWORD(v54[0].lStyleState) + LODWORD(v51[13]) * HIWORD(v54[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v27,
                              &v54[0].ptfxA,
                              &v54[0].ptfxB,
                              v54[0].arun,
                              v54[0].c,
                              (struct _LINESTATE *)v51,
                              v47,
                              (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))v33,
                              v45,
                              v50,
                              v48,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 71)) )
          break;
      }
      if ( !v46 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    v34 = a2[1];
    a2->fl &= ~8u;
    v55.flags = 0;
    *(_QWORD *)(*(_QWORD *)&v34 + 80LL) = *(_QWORD *)(*(_QWORD *)&v34 + 32LL);
    do
    {
      v35 = EPATHOBJ::bEnum((EPATHOBJ *)a2, &v55);
      count = v55.count;
      v37 = v35;
      v38 = v55.count;
      if ( !v55.count )
        break;
      flags = v55.flags;
      pptfx = v55.pptfx;
      if ( (v55.flags & 1) != 0 )
      {
        v41 = v55.pptfx + 1;
        v53 = *v55.pptfx;
        v42 = v55.pptfx;
        v38 = v55.count - 1;
      }
      else
      {
        v42 = &v49;
        v41 = v55.pptfx;
      }
      v43 = HIDWORD(v51[7]);
      if ( (v55.flags & 4) != 0 )
        v43 = v52;
      HIDWORD(v51[7]) = v43;
      if ( v38 )
      {
        if ( !(unsigned int)bLines(
                              v27,
                              v42,
                              v41,
                              0LL,
                              v38,
                              (struct _LINESTATE *)v51,
                              v47,
                              (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))v33,
                              v11,
                              v50,
                              v48,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 71)) )
          return 0LL;
        pptfx = v55.pptfx;
        count = v55.count;
        flags = v55.flags;
      }
      v49 = pptfx[count - 1];
      if ( (flags & 8) != 0
        && !(unsigned int)bLines(
                            v27,
                            &v49,
                            &v53,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v51,
                            v47,
                            (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))v33,
                            v11,
                            v50,
                            v48,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 71)) )
      {
        return 0LL;
      }
    }
    while ( v37 );
    if ( v11 )
      a5->elStyleState.l = (unsigned __int16)(HIDWORD(v51[7]) % LODWORD(v51[13])) | ((unsigned __int16)(HIDWORD(v51[7]) / LODWORD(v51[13])) << 16);
    return 1LL;
  }
}
