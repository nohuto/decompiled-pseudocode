/*
 * XREFs of ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01369A4
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000BAD4 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngLineTo @ 0x1C00E8340 (EngLineTo.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00E9D88 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00EA084 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0136660 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C025A130 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C025AC70 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E93EC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E9480 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0136BC0 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02A7C84 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 */

void __fastcall PRECOMPUTE::vInit(
        __int64 a1,
        SURFACE *a2,
        PDEVOBJ *a3,
        __int64 a4,
        __int64 a5,
        struct _XFORMOBJ *a6,
        struct _LINEATTRS *a7,
        char a8,
        unsigned int a9,
        int a10)
{
  __int64 v13; // rax
  struct _RECTL *v14; // r11
  int v15; // r9d
  int v16; // r10d
  __int64 v17; // rcx
  struct _RECTL *v18; // r13
  __int64 v19; // rdx
  int v20; // eax
  PRECOMPUTE *v21; // rcx
  PRECOMPUTE *v22; // rcx
  RGNOBJ *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  RGNOBJ *v35; // rcx
  struct _RECTL *v36; // r12
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // r11
  PRECOMPUTE *v40; // rcx
  __int64 v41; // r11
  int v42; // eax
  RGNOBJ *v43; // rcx
  __int64 v44; // r11
  struct _RECTL *v45; // r14
  __int64 v46; // rcx
  __int64 v47; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+38h] [rbp-C8h]
  __int128 v49; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ *v50; // [rsp+50h] [rbp-B0h] BYREF
  int v51; // [rsp+58h] [rbp-A8h]
  _BYTE v52[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-98h]
  struct _RECTL v54; // [rsp+E0h] [rbp-20h] BYREF
  __m128i *v55; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-8h]
  _BYTE v57[32]; // [rsp+148h] [rbp+48h] BYREF
  int v58; // [rsp+168h] [rbp+68h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 40) = 0LL;
  *(_DWORD *)(a4 + 48) = 0;
  *(_QWORD *)(a4 + 56) = 0LL;
  *(_DWORD *)(a4 + 64) = 0;
  *(_QWORD *)(a4 + 72) = 0LL;
  v13 = *(_QWORD *)a3;
  v50 = a6;
  if ( (*(_DWORD *)(v13 + 32) & 0x8000) != 0
    || !PDEVOBJ::bAllowShareAccess(a3)
    || (unsigned int)SURFACE::bRedirectionBitmap(a2) )
  {
    *(_QWORD *)(a1 + 32) = a4;
    return;
  }
  if ( !a10 )
  {
    if ( (a7->fl & 1) == 0 )
    {
LABEL_151:
      *(_QWORD *)(a1 + 32) = a4;
LABEL_152:
      v46 = *(_QWORD *)(a1 + 32);
      if ( v46 )
      {
        *(_QWORD *)(v46 + 16) = *(_QWORD *)a1;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = *(_QWORD *)(a1 + 24);
      }
      return;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v55);
    if ( v56 == v44
      || !EPATHOBJ::bClone((EPATHOBJ *)&v55, (struct EPATHOBJ *)a4)
      || ((unsigned __int8)v55 & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)&v55)
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v55, &v55, a6, a7) )
    {
      goto LABEL_142;
    }
    if ( *(_BYTE *)(a5 + 20) )
    {
      v54.top = 16 * *(_DWORD *)(a5 + 8);
      v45 = &v54;
      v54.bottom = 16 * *(_DWORD *)(a5 + 16);
    }
    else
    {
      v45 = 0LL;
    }
    v48 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)&v55, a9, v45);
    if ( !v47 )
      goto LABEL_139;
    *(_QWORD *)(a1 + 8) = v47;
    if ( a9 != 2 )
    {
      DWORD2(v49) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v49, (struct EPATHOBJ *)&v55, 2u, v45);
      if ( !(_QWORD)v49 )
      {
        REGION::vDeleteREGION(*(REGION **)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        if ( DWORD2(v49) == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
LABEL_139:
        if ( v48 != 1 )
          goto LABEL_142;
        v23 = (RGNOBJ *)&v47;
        goto LABEL_141;
      }
      *(_QWORD *)(a1 + 16) = v49;
      if ( DWORD2(v49) == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
    }
    if ( v48 != 1 )
      goto LABEL_149;
    v43 = (RGNOBJ *)&v47;
    goto LABEL_148;
  }
  if ( a10 == 1 )
  {
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v36 = v14;
      v37 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
      v38 = (int)*(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL) >> 4;
      v49 = *(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
      if ( *(_DWORD *)(a5 + 4) > v38
        || *(_DWORD *)(a5 + 12) < (DWORD2(v49) + 15) >> 4
        || *(_DWORD *)(a5 + 8) > SHIDWORD(v37) >> 4
        || *(_DWORD *)(a5 + 16) < (HIDWORD(v49) + 15) >> 4 )
      {
        v36 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v55);
      if ( v56 != v39
        && EPATHOBJ::bClone((EPATHOBJ *)&v55, (struct EPATHOBJ *)a4)
        && (((unsigned __int8)v55 & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)&v55))
        && (!a7 || (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v55, &v55, a6, a7))
        && (unsigned int)PRECOMPUTE::bPreComputeFast(v40, (struct EPATHOBJ *)&v55, (struct EPATHOBJ *)a4, v36, 1u) )
      {
        goto LABEL_149;
      }
      goto LABEL_142;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v55);
    if ( v56 == v41
      || !EPATHOBJ::bClone((EPATHOBJ *)&v55, (struct EPATHOBJ *)a4)
      || ((unsigned __int8)v55 & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)&v55)
      || a7 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v55, &v55, a6, a7) )
    {
      goto LABEL_142;
    }
    v42 = *(_DWORD *)(a5 + 8);
    DWORD2(v49) = 0;
    v54.top = 16 * v42;
    v54.bottom = 16 * *(_DWORD *)(a5 + 16);
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v49, (struct EPATHOBJ *)&v55, a9, &v54);
    if ( !(_QWORD)v49 )
    {
      if ( DWORD2(v49) != 1 )
        goto LABEL_142;
      v23 = (RGNOBJ *)&v49;
      goto LABEL_141;
    }
    *(_QWORD *)a1 = v49;
    if ( DWORD2(v49) != 1 )
      goto LABEL_149;
    v43 = (RGNOBJ *)&v49;
LABEL_148:
    RGNOBJ::vDeleteRGNOBJ(v43);
    goto LABEL_149;
  }
  if ( a10 != 2 )
    goto LABEL_152;
  v15 = *(_DWORD *)(a5 + 8);
  v16 = *(_DWORD *)(a5 + 16);
  v54.top = 16 * v15;
  v54.bottom = 16 * v16;
  if ( (a7->fl & 1) == 0 || a8 == 13 )
  {
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v18 = v14;
      v19 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
      v20 = (int)*(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL) >> 4;
      v49 = *(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
      if ( *(_DWORD *)(a5 + 4) > v20
        || *(_DWORD *)(a5 + 12) < (DWORD2(v49) + 15) >> 4
        || v15 > SHIDWORD(v19) >> 4
        || v16 < (HIDWORD(v49) + 15) >> 4 )
      {
        v18 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v55);
      if ( !v56 || !EPATHOBJ::bClone((EPATHOBJ *)&v55, (struct EPATHOBJ *)a4) )
        goto LABEL_142;
      if ( ((unsigned __int8)v55 & 1) == 0 )
      {
LABEL_45:
        if ( !(unsigned int)PRECOMPUTE::bPreComputeFast(v21, (struct EPATHOBJ *)&v55, (struct EPATHOBJ *)a4, v18, 1u) )
        {
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          goto LABEL_142;
        }
        if ( (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v55, &v55, v50, a7)
          || !(unsigned int)PRECOMPUTE::bPreComputeFast(v22, (struct EPATHOBJ *)&v55, (struct EPATHOBJ *)a4, v18, 2u) )
        {
          v30 = *(_QWORD *)(a4 + 56);
          if ( v30 )
            Win32FreePool(v30, v24, v25);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          *(_QWORD *)(a4 + 56) = 0LL;
          *(_DWORD *)(a4 + 48) = 0;
          goto LABEL_142;
        }
        DWORD2(v49) = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v49, (struct EPATHOBJ *)&v55, a9, &v54);
        if ( !(_QWORD)v49 )
        {
          v28 = *(_QWORD *)(a4 + 56);
          if ( v28 )
            Win32FreePool(v28, v26, v27);
          v29 = *(_QWORD *)(a4 + 72);
          if ( v29 )
            Win32FreePool(v29, v26, v27);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          *(_QWORD *)(a4 + 56) = 0LL;
          *(_DWORD *)(a4 + 48) = 0;
          *(_QWORD *)(a4 + 72) = 0LL;
          *(_DWORD *)(a4 + 64) = 0;
LABEL_76:
          if ( DWORD2(v49) != 1 )
            goto LABEL_142;
          v23 = (RGNOBJ *)&v49;
LABEL_141:
          RGNOBJ::vDeleteRGNOBJ(v23);
          goto LABEL_142;
        }
        *(_QWORD *)(a1 + 8) = v49;
        if ( a9 != 2 )
        {
          v48 = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)&v55, 2u, &v54);
          if ( !v47 )
          {
            v33 = *(_QWORD *)(a4 + 56);
            if ( v33 )
              Win32FreePool(v33, v31, v32);
            v34 = *(_QWORD *)(a4 + 72);
            if ( v34 )
              Win32FreePool(v34, v31, v32);
            if ( *(_QWORD *)a1 )
            {
              REGION::vDeleteREGION(*(REGION **)a1);
              *(_QWORD *)a1 = 0LL;
            }
            REGION::vDeleteREGION(*(REGION **)(a1 + 8));
            *(_QWORD *)(a1 + 8) = 0LL;
            *(_QWORD *)(a4 + 56) = 0LL;
            *(_DWORD *)(a4 + 48) = 0;
            *(_QWORD *)(a4 + 72) = 0LL;
            *(_DWORD *)(a4 + 64) = 0;
            if ( v48 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
            goto LABEL_76;
          }
          *(_QWORD *)(a1 + 16) = v47;
          if ( v48 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
        }
        if ( DWORD2(v49) == 1 )
        {
          v35 = (RGNOBJ *)&v49;
LABEL_97:
          RGNOBJ::vDeleteRGNOBJ(v35);
        }
LABEL_149:
        EPATHOBJ::vUnlock((EPATHOBJ *)&v55);
        if ( v58 )
          PopThreadGuardedObject(v57);
        goto LABEL_151;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)&v55) )
        goto LABEL_142;
      v48 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)&v55, a9, &v54);
      if ( v47 )
      {
        *(_QWORD *)a1 = v47;
        if ( v48 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
        goto LABEL_45;
      }
LABEL_48:
      if ( v48 != 1 )
        goto LABEL_142;
      v23 = (RGNOBJ *)&v47;
      goto LABEL_141;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v55);
    if ( !v56
      || !EPATHOBJ::bClone((EPATHOBJ *)&v55, (struct EPATHOBJ *)a4)
      || ((unsigned __int8)v55 & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)&v55)
      || (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v55, &v55, a6, a7) )
    {
      goto LABEL_142;
    }
    v48 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)&v55, a9, &v54);
    if ( !v47 )
      goto LABEL_48;
    *(_QWORD *)(a1 + 8) = v47;
    if ( a9 != 2 )
    {
      DWORD2(v49) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v49, (struct EPATHOBJ *)&v55, 2u, &v54);
      if ( !(_QWORD)v49 )
      {
        REGION::vDeleteREGION(*(REGION **)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        if ( DWORD2(v49) == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
        goto LABEL_48;
      }
      *(_QWORD *)(a1 + 16) = v49;
      if ( DWORD2(v49) == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
    }
    if ( v48 != 1 )
      goto LABEL_149;
    v35 = (RGNOBJ *)&v47;
    goto LABEL_97;
  }
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v55);
  if ( v56 && EPATHOBJ::bClone((EPATHOBJ *)&v55, (struct EPATHOBJ *)a4) )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v52);
    if ( v53
      && (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v52, (struct EPATHOBJ *)&v55, a6, a7)
      && (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v52, &v55, a6, a7)
      && (((unsigned __int8)v55 & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)&v55)) )
    {
      v48 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)v52, 2u, 0LL);
      v51 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v50, (struct EPATHOBJ *)&v55, a9, 0LL);
      v17 = v47;
      if ( v47 && v50 )
      {
        *(_QWORD *)a1 = v50;
        *(_QWORD *)(a1 + 24) = v17;
        if ( v51 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
        if ( v48 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v52);
        goto LABEL_149;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
      if ( v51 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
      if ( v48 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v52);
  }
LABEL_142:
  EPATHOBJ::vUnlock((EPATHOBJ *)&v55);
  if ( v58 )
    PopThreadGuardedObject(v57);
}
