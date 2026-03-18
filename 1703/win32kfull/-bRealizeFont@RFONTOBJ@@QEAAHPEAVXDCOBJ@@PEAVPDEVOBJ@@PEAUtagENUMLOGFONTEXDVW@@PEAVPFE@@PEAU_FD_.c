/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000312C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C0286B1C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C002FBE0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C002FCB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C002FFD0 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003177C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0031818 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0032694 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0032DEC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C008C714 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C008CF00 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C008D18C (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C008D30C (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F678 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C008F910 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00F006C (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C0102F94 (UmfdQueryFontCapsEx.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C0115494 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     GetFontIntensityCorrection @ 0x1C025232C (GetFontIntensityCorrection.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02871D4 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall RFONTOBJ::bRealizeFont(
        struct _FD_XFORM **this,
        struct XDCOBJ *a2,
        struct PDEVOBJ *a3,
        struct tagENUMLOGFONTEXDVW *a4,
        struct PFE *a5,
        struct _FD_XFORM *a6,
        struct _POINTL *const a7,
        unsigned int a8,
        unsigned int a9,
        FLOATL a10,
        int a11,
        unsigned int a12)
{
  struct PDEVOBJ *v14; // r14
  unsigned int v16; // esi
  struct _FD_XFORM *v17; // rax
  struct _FD_XFORM *v18; // rbx
  __int64 v19; // rax
  struct _FD_XFORM *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  struct _FD_XFORM *v23; // rax
  struct _FD_XFORM *v24; // rcx
  __int64 v25; // rcx
  struct _FD_XFORM *v26; // rbx
  struct _FD_XFORM *v27; // rbx
  __int64 v28; // rcx
  struct _FD_XFORM *v29; // rbx
  __int64 v30; // rcx
  struct _FD_XFORM *v31; // rbx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // eax
  char v36; // r12
  int v37; // r9d
  __int64 v38; // rbx
  int v39; // eax
  int v40; // eax
  int v41; // r14d
  unsigned int v42; // ecx
  __int64 v43; // rbx
  bool v44; // zf
  struct _FD_XFORM *v45; // rdx
  int v46; // ecx
  unsigned int v47; // ecx
  __int64 v48; // r11
  struct _FD_XFORM *v49; // rax
  __int64 v51; // rcx
  __int64 (__fastcall *v52)(__int64, __int64 *); // rax
  int v53; // eax
  struct _FD_XFORM *v54; // rbx
  struct _FD_XFORM *v55; // rdx
  unsigned __int16 v56[4]; // [rsp+30h] [rbp-D0h] BYREF
  PDEVOBJ *v57; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v59; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B0h]
  unsigned int v61[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct XDCOBJ *v62; // [rsp+60h] [rbp-A0h]
  _BYTE v63[32]; // [rsp+68h] [rbp-98h] BYREF
  _FD_DEVICEMETRICS v64; // [rsp+90h] [rbp-70h] BYREF

  v59 = (__int64 *)a5;
  v57 = a3;
  v14 = a3;
  v62 = a2;
  v16 = 0;
  *(_QWORD *)v61 = PFEOBJ::pfdg(&v59);
  if ( !*(_QWORD *)v61 )
    goto LABEL_87;
  v17 = (struct _FD_XFORM *)PALLOCMEM2(0x398uLL, 1953392199LL, 1);
  *this = v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg(&v59);
LABEL_87:
    *this = 0LL;
    return v16;
  }
  v60 = *(_QWORD *)a5;
  LODWORD(v17[2].eXX) = PDEVOBJ::ulLogPixelsX(v14);
  v18 = *this;
  LODWORD(v18[2].eXY) = PDEVOBJ::ulLogPixelsY(v14);
  LODWORD((*this)[2].eYX) = a9;
  LODWORD((*this)->eYY) = a8 | PFEOBJ::flFontType((PFEOBJ *)&v59);
  *(_QWORD *)&(*this)[3].eXX = 0LL;
  *(_QWORD *)&(*this)[3].eYX = 0LL;
  (*this)->eXY = *((FLOATL *)a5 + 2);
  *(_QWORD *)&(*this)[1].eYX = *(_QWORD *)(v60 + 80);
  if ( (LODWORD((*this)->eYY) & 4) != 0 )
    v19 = *((unsigned int *)a5 + 22);
  else
    v19 = 0LL;
  *(_QWORD *)&(*this)[1].eXX = v19;
  (*this)[8] = *a6;
  (*this)[9] = *a6;
  *(struct _FD_XFORM *)((char *)*this + 356) = *a6;
  *(struct _POINTL *)&(*this)[42].eXX = *a7;
  *(_QWORD *)&(*this)[13].eYX = (char *)*this + 232;
  RFONTOBJ::vSetNotionalToDevice((RFONTOBJ *)this, (struct EXFORMOBJ *)&(*this)[13].eYX);
  v20 = *this;
  v21 = *((_QWORD *)a5 + 4);
  v58 = v21;
  if ( (LODWORD(v20->eYY) & 0x30000000) == 0x30000000 )
  {
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v20[13].eYX, (struct tagFLOATOBJ_XFORM *)v63);
    v51 = *(_QWORD *)(v60 + 208);
    *(float *)&v63[12] = *(float *)&v63[12] * (float)*(__int16 *)(v21 + 56);
    *(_QWORD *)&(*this)[57].eXX = GetFontIntensityCorrection(v51, (unsigned int)(int)*(float *)&v63[12]);
  }
  *(_QWORD *)&(*this)[7].eXX = a5;
  *(_QWORD *)&(*this)[7].eYX = *(_QWORD *)a5;
  *(_QWORD *)&(*this)[45].eYX = 0LL;
  *(_QWORD *)&(*this)[46].eXX = 0LL;
  *(_QWORD *)&(*this)[46].eYX = 0LL;
  *(_QWORD *)&(*this)[47].eXX = 0LL;
  (*this)[52].eYX = 0.0;
  (*this)[45].eXX = 0.0;
  (*this)[53].eXX = 0.0;
  (*this)[52].eYY = 0.0;
  LODWORD((*this)[53].eXY) = *((_DWORD *)a5 + 3) & 0x100;
  if ( v14 )
  {
    *(_QWORD *)&(*this)[6].eXX = *(_QWORD *)v14;
    *(_QWORD *)&(*this)[6].eYX = *(_QWORD *)(*(_QWORD *)v14 + 1816LL);
  }
  else
  {
    *(_QWORD *)&(*this)[6].eXX = 0LL;
    *(_QWORD *)&(*this)[6].eYX = 0LL;
  }
  LODWORD((*this)[10].eXX) = 1;
  (*this)[30].eYX = *(FLOATL *)(*((_QWORD *)a5 + 4) + 48LL);
  *(_QWORD *)&(*this)[29].eYX = *(_QWORD *)v61;
  v56[0] = *(_WORD *)(v21 + 116);
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)this, v56, 1, v61, 2u, 0);
  LODWORD((*this)[28].eYX) = v61[0];
  LODWORD((*this)[45].eXX) &= ~0x40u;
  memset(&v64, 0, sizeof(v64));
  *(_QWORD *)&(*this)[5].eXX = *(_QWORD *)(v60 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS((POINTL **)this, &v64) )
    goto LABEL_72;
  if ( !a2 )
    goto LABEL_19;
  *(POINTE *)&(*this)[24].eYX = v64.pteBase;
  *(POINTE *)&(*this)[25].eYY = v64.pteSide;
  v23 = *(struct _FD_XFORM **)a2;
  v24 = *this;
  *(struct _FD_XFORM *)((char *)v24 + 164) = *(struct _FD_XFORM *)(*(_QWORD *)a2 + 336LL);
  *(struct _FD_XFORM *)((char *)v24 + 180) = v23[22];
  v24[12].eXY = v23[23].eXX;
  if ( !(unsigned int)RFONTOBJ::bCalcLayoutUnits((RFONTOBJ *)this, a2)
    || !bGetNtoWScales(
          (struct EPOINTFL *)&(*this)[12].eYY,
          a2,
          (struct _FD_XFORM *)((char *)*this + 356),
          (struct PFEOBJ *)&v59,
          (int *)&(*this)[13].eXY) )
  {
LABEL_72:
    memset(v63, 0, sizeof(v63));
    PushThreadGuardedObject(v63, *this, Win32FreePool);
LABEL_86:
    RFONTOBJ::vDestroyFont((RFONTOBJ *)this, 1);
    PopThreadGuardedObject(v63);
    Win32FreePool(*this);
    goto LABEL_87;
  }
  v26 = *this;
  *(_DWORD *)v56 = 0;
  bFToL(v25, v56, 0LL);
  v26[20].eXX = *(FLOATL *)v56;
  v27 = *this;
  *(_DWORD *)v56 = 0;
  bFToL(v28, v56, 0LL);
  v27[20].eXY = *(FLOATL *)v56;
  v29 = *this;
  *(_DWORD *)v56 = 0;
  bFToL(v30, v56, 0LL);
  v29[20].eYX = *(FLOATL *)v56;
  v31 = *this;
  *(_DWORD *)v56 = 0;
  bFToL(v32, v56, 0LL);
  v31[20].eYY = *(FLOATL *)v56;
  (*this)[26].eYY = NAN;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) == 1 )
  {
    v33 = *(_DWORD *)(v58 + 48);
    if ( (v33 & 4) == 0 )
    {
      if ( (v33 & 0x10) == 0 )
      {
        v35 = ulSimpleDeviceOrientation((struct RFONTOBJ *)this);
        goto LABEL_18;
      }
      v34 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_17:
      v35 = lNormAngle(v34);
LABEL_18:
      LODWORD((*this)[24].eXY) = v35;
      goto LABEL_19;
    }
LABEL_71:
    v34 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_17;
  }
  LODWORD((*this)[24].eXY) = RFONTOBJ::ulSimpleOrientation((RFONTOBJ *)this, a2);
  if ( LODWORD((*this)[24].eXY) >= 0xE10 && (LODWORD((*this)[30].eYX) & 0x10) != 0 )
    goto LABEL_71;
LABEL_19:
  v36 = 0;
  v37 = LODWORD(a10);
  (*this)[42].eYX = a10;
  v38 = *(_QWORD *)&(*this)[5].eXX;
  if ( (struct PDEV *)v38 == qword_1C0338A40 )
  {
    v39 = UmfdQueryFontCapsEx(*(_QWORD *)&(*this)[1].eYX, v22, &v58);
    v37 = LODWORD(a10);
    if ( v39 != -1 )
      v36 = BYTE4(v58);
  }
  else
  {
    v52 = *(__int64 (__fastcall **)(__int64, __int64 *))(v38 + 3056);
    if ( v52 )
    {
      v53 = v52(2LL, &v58);
      v37 = LODWORD(a10);
      if ( v53 != -1 )
        v36 = BYTE4(v58);
    }
  }
  if ( (*(_DWORD *)(v38 + 32) & 0x2000) != 0 )
  {
    v40 = LODWORD((*this)->eYY) & 0x10010000;
    (*this)[5].eYX = 0.0;
    v41 = v40 != 0 ? 400 : 800;
    LODWORD((*this)[4].eYX) = 1;
    v42 = v41;
    if ( v37 )
    {
      LODWORD((*this)[4].eYX) = 2;
    }
    else
    {
      v43 = *(_QWORD *)&(*this)[6].eXX;
      if ( v43 )
      {
        v44 = (*(_DWORD *)(v43 + 32) & 0x8000) == 0;
        v58 = *(_QWORD *)&(*this)[6].eXX;
        if ( (v44 || !KeAreApcsDisabled()) && *(_QWORD *)(v43 + 3000) )
        {
          memset(v63, 0, sizeof(v63));
          PushThreadGuardedObject(v63, *this, vRestartbRealizeFont);
          LODWORD((*this)[4].eYX) = (*(__int64 (__fastcall **)(_QWORD, struct _FD_XFORM *))(v43 + 3000))(
                                      *(_QWORD *)&(*this)[6].eYX,
                                      *this);
          PopThreadGuardedObject(v63);
        }
        v42 = v41;
        if ( (*(_DWORD *)(v43 + 1840) & 0x40000000) != 0 )
        {
          v42 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v58);
          if ( v42 <= 0x320 )
            v42 = v41;
          if ( v42 > 0x960 )
            v42 = 2400;
        }
        v37 = LODWORD(a10);
      }
    }
    v45 = *this;
    if ( LODWORD((*this)[4].eYX) == 1 )
    {
      if ( (v36 & 2) == 0
        || (LODWORD(v45[30].eYX) & 0x8000) != 0 && (LODWORD(v45[21].eXX) > 2 * v42 || LODWORD(v45[21].eYY) > v42) )
      {
        LODWORD(v45[4].eYX) = 2;
      }
      goto LABEL_35;
    }
    if ( LODWORD((*this)[4].eYX) != 2 )
    {
LABEL_35:
      v14 = v57;
      goto LABEL_36;
    }
    v14 = v57;
    if ( (v36 & 1) == 0 )
      LODWORD(v45[4].eYX) = 1;
  }
  else
  {
    LODWORD((*this)[5].eYX) = 1;
    (*this)[4].eYX = 0.0;
    (*this)[40].eYX = 0.0;
  }
LABEL_36:
  if ( LODWORD((*this)[4].eYX) == 2 )
    LODWORD((*this)->eYY) &= 0x8FFEFFFF;
  if ( v37 )
  {
    v54 = *this;
    if ( LODWORD((*this)[4].eYX) != 2 )
    {
      memset(v63, 0, sizeof(v63));
      v55 = v54;
LABEL_85:
      PushThreadGuardedObject(v63, v55, Win32FreePool);
      goto LABEL_86;
    }
  }
  if ( !a11 || (v46 = 1, LODWORD((*this)[24].eXY)) )
    v46 = 0;
  LODWORD((*this)[40].eYY) = v46;
  if ( !(unsigned int)RFONTOBJ::bInitCache((RFONTOBJ *)this, a12) )
  {
    memset(v63, 0, sizeof(v63));
    v55 = *this;
    goto LABEL_85;
  }
  *(_QWORD *)&(*this)[43].eYX = 0LL;
  v58 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v44 = iUniqueStamp == -1;
  v47 = ++iUniqueStamp;
  if ( v44 )
  {
    v47 = 1;
    iUniqueStamp = 1;
  }
  LODWORD((*this)->eXX) = v47;
  if ( v14 )
  {
    LODWORD((*this)[30].eYY) = 1;
    v57 = PDEVOBJ::prfntActive(v14);
    RFONTOBJ::vInsert(this, &v57, 1LL);
    PDEVOBJ::prfntActive(v14, v57);
  }
  v57 = *(PDEVOBJ **)(v60 + 72);
  RFONTOBJ::vInsert(this, &v57, 0LL);
  *(_QWORD *)(v48 + 72) = v57;
  SEMOBJ::vUnlock((SEMOBJ *)&v58);
  v49 = *this;
  if ( LODWORD((*this)[4].eYX) == 1 )
    LODWORD(v49->eYY) |= 1u;
  else
    LODWORD(v49->eYY) &= ~1u;
  if ( v62 )
    (*this)[12].eYX = *(FLOATL *)(*(_QWORD *)(*(_QWORD *)v62 + 80LL) + 68LL);
  else
    (*this)[12].eYX = 0.0;
  if ( gbSystemDBCSFontEnabled && (*((_DWORD *)a5 + 3) & 0x10) != 0 )
    v16 = 1;
  LODWORD((*this)[44].eYY) = v16;
  return 1;
}
