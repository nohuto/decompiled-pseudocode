/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0007E00 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C028366C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C003260C (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0032E00 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C003308C (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C003320C (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0035590 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0035834 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C003BD8C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C003C284 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7B8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE70 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003E0AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C003E0E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C003ED38 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     UmfdQueryFontCapsEx @ 0x1C010E9DC (UmfdQueryFontCapsEx.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C011FD08 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     GetFontIntensityCorrection @ 0x1C0253E1C (GetFontIntensityCorrection.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C0283D08 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 *     ?QueryFontCaps@PDEVOBJ@@QEAAJKPEAK@Z @ 0x1C0299938 (-QueryFontCaps@PDEVOBJ@@QEAAJKPEAK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bRealizeFont(
        struct _FD_XFORM **this,
        struct XDCOBJ *a2,
        struct PDEVOBJ *a3,
        struct tagENUMLOGFONTEXDVW *a4,
        FLOATL *a5,
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
  __int64 v17; // rax
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
  char v36; // r15
  int v37; // r9d
  struct _FD_XFORM *v38; // rcx
  __int64 v39; // rbx
  int v40; // eax
  int v41; // eax
  int v42; // r14d
  unsigned int v43; // ecx
  __int64 v44; // rbx
  bool v45; // zf
  struct _FD_XFORM *v46; // rdx
  int v47; // ecx
  unsigned int v48; // ecx
  __int64 v49; // rbx
  struct _FD_XFORM *v50; // rax
  __int64 v52; // rcx
  int FontCaps; // eax
  struct _FD_XFORM *v54; // rbx
  struct _FD_XFORM *v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // r8
  unsigned __int16 v58[4]; // [rsp+30h] [rbp-D0h] BYREF
  PDEVOBJ *v59; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v61[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  unsigned int v63[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct XDCOBJ *v64; // [rsp+60h] [rbp-A0h]
  _BYTE v65[32]; // [rsp+68h] [rbp-98h] BYREF
  _FD_DEVICEMETRICS v66; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)v61 = a5;
  v59 = a3;
  v14 = a3;
  v64 = a2;
  v16 = 0;
  *(_QWORD *)v63 = PFEOBJ::pfdg((PFEOBJ *)v61);
  if ( !*(_QWORD *)v63 )
    goto LABEL_87;
  v17 = PALLOCMEM2(0x398uLL);
  *this = (struct _FD_XFORM *)v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg((PFEOBJ *)v61);
LABEL_87:
    *this = 0LL;
    return v16;
  }
  v62 = *(_QWORD *)a5;
  *(_DWORD *)(v17 + 32) = PDEVOBJ::ulLogPixelsX(v14);
  v18 = *this;
  LODWORD(v18[2].eXY) = PDEVOBJ::ulLogPixelsY(v14);
  LODWORD((*this)[2].eYX) = a9;
  LODWORD((*this)->eYY) = a8 | PFEOBJ::flFontType((PFEOBJ *)v61);
  *(_QWORD *)&(*this)[3].eXX = 0LL;
  *(_QWORD *)&(*this)[3].eYX = 0LL;
  (*this)->eXY = a5[2];
  *(_QWORD *)&(*this)[1].eYX = *(_QWORD *)(v62 + 80);
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
  v60 = v21;
  if ( (LODWORD(v20->eYY) & 0x30000000) == 0x30000000 )
  {
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v20[13].eYX, (struct tagFLOATOBJ_XFORM *)v65);
    v52 = *(_QWORD *)(v62 + 208);
    *(float *)&v65[12] = *(float *)&v65[12] * (float)*(__int16 *)(v21 + 56);
    *(_QWORD *)&(*this)[57].eXX = GetFontIntensityCorrection(v52, (unsigned int)(int)*(float *)&v65[12]);
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
  LODWORD((*this)[53].eXY) = (_DWORD)a5[3] & 0x100;
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
  *(_QWORD *)&(*this)[29].eYX = *(_QWORD *)v63;
  v58[0] = *(_WORD *)(v21 + 116);
  RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)this, v58, 1, v63, 2u, 0);
  LODWORD((*this)[28].eYX) = v63[0];
  LODWORD((*this)[45].eXX) &= ~0x40u;
  memset(&v66, 0, sizeof(v66));
  *(_QWORD *)&(*this)[5].eXX = *(_QWORD *)(v62 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS((POINTL **)this, &v66) )
    goto LABEL_72;
  if ( !a2 )
    goto LABEL_19;
  *(POINTE *)&(*this)[24].eYX = v66.pteBase;
  *(POINTE *)&(*this)[25].eYY = v66.pteSide;
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
          (struct PFEOBJ *)v61,
          (int *)&(*this)[13].eXY) )
  {
LABEL_72:
    memset(v65, 0, sizeof(v65));
    PushThreadGuardedObject(v65, *this, Win32FreePool);
LABEL_86:
    RFONTOBJ::vDestroyFont((RFONTOBJ *)this, 1);
    PopThreadGuardedObject(v65);
    Win32FreePool(*this, v56, v57);
    goto LABEL_87;
  }
  v26 = *this;
  *(_DWORD *)v58 = 0;
  bFToL(v25, v58, 0LL);
  v26[20].eXX = *(FLOATL *)v58;
  v27 = *this;
  *(_DWORD *)v58 = 0;
  bFToL(v28, v58, 0LL);
  v27[20].eXY = *(FLOATL *)v58;
  v29 = *this;
  *(_DWORD *)v58 = 0;
  bFToL(v30, v58, 0LL);
  v29[20].eYX = *(FLOATL *)v58;
  v31 = *this;
  *(_DWORD *)v58 = 0;
  bFToL(v32, v58, 0LL);
  v31[20].eYY = *(FLOATL *)v58;
  (*this)[26].eYY = NAN;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) == 1 )
  {
    v33 = *(_DWORD *)(v60 + 48);
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
  v38 = *this;
  v60 = *(_QWORD *)&(*this)[5].eXX;
  v39 = v60;
  if ( (struct PDEV *)v60 == qword_1C0334158 )
  {
    v40 = UmfdQueryFontCapsEx(*(_QWORD *)&v38[1].eYX, v22, &v60);
    v37 = LODWORD(a10);
    if ( v40 != -1 )
      v36 = BYTE4(v60);
  }
  else if ( *(_QWORD *)(v60 + 3056) )
  {
    FontCaps = PDEVOBJ::QueryFontCaps((PDEVOBJ *)&v60, v22, v61);
    v37 = LODWORD(a10);
    if ( FontCaps != -1 )
      v36 = v61[1];
  }
  if ( (*(_DWORD *)(v39 + 32) & 0x2000) != 0 )
  {
    v41 = LODWORD((*this)->eYY) & 0x10010000;
    (*this)[5].eYX = 0.0;
    v42 = v41 != 0 ? 400 : 800;
    LODWORD((*this)[4].eYX) = 1;
    v43 = v42;
    if ( v37 )
    {
      LODWORD((*this)[4].eYX) = 2;
    }
    else
    {
      v44 = *(_QWORD *)&(*this)[6].eXX;
      if ( v44 )
      {
        v45 = (*(_DWORD *)(v44 + 32) & 0x8000) == 0;
        v60 = *(_QWORD *)&(*this)[6].eXX;
        if ( (v45 || !KeAreApcsDisabled()) && *(_QWORD *)(v44 + 3000) )
        {
          memset(v65, 0, sizeof(v65));
          PushThreadGuardedObject(v65, *this, vRestartbRealizeFont);
          LODWORD((*this)[4].eYX) = (*(__int64 (__fastcall **)(_QWORD, struct _FD_XFORM *))(v44 + 3000))(
                                      *(_QWORD *)&(*this)[6].eYX,
                                      *this);
          PopThreadGuardedObject(v65);
        }
        v43 = v42;
        if ( (*(_DWORD *)(v44 + 1840) & 0x40000000) != 0 )
        {
          v43 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v60);
          if ( v43 <= 0x320 )
            v43 = v42;
          if ( v43 > 0x960 )
            v43 = 2400;
        }
        v37 = LODWORD(a10);
      }
    }
    v46 = *this;
    if ( LODWORD((*this)[4].eYX) == 1 )
    {
      if ( (v36 & 2) == 0
        || (LODWORD(v46[30].eYX) & 0x8000) != 0 && (LODWORD(v46[21].eXX) > 2 * v43 || LODWORD(v46[21].eYY) > v43) )
      {
        LODWORD(v46[4].eYX) = 2;
      }
      goto LABEL_35;
    }
    if ( LODWORD((*this)[4].eYX) != 2 )
    {
LABEL_35:
      v14 = v59;
      goto LABEL_36;
    }
    v14 = v59;
    if ( (v36 & 1) == 0 )
      LODWORD(v46[4].eYX) = 1;
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
      memset(v65, 0, sizeof(v65));
      v55 = v54;
LABEL_85:
      PushThreadGuardedObject(v65, v55, Win32FreePool);
      goto LABEL_86;
    }
  }
  if ( !a11 || (v47 = 1, LODWORD((*this)[24].eXY)) )
    v47 = 0;
  LODWORD((*this)[40].eYY) = v47;
  if ( !(unsigned int)RFONTOBJ::bInitCache((RFONTOBJ *)this, a12) )
  {
    memset(v65, 0, sizeof(v65));
    v55 = *this;
    goto LABEL_85;
  }
  *(_QWORD *)&(*this)[43].eYX = 0LL;
  v60 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v45 = iUniqueStamp == -1;
  v48 = ++iUniqueStamp;
  if ( v45 )
  {
    v48 = 1;
    iUniqueStamp = 1;
  }
  LODWORD((*this)->eXX) = v48;
  if ( v14 )
  {
    LODWORD((*this)[30].eYY) = 1;
    v59 = PDEVOBJ::prfntActive(v14);
    RFONTOBJ::vInsert(this, &v59, 1LL);
    PDEVOBJ::prfntActive(v14, v59);
  }
  v49 = v62;
  v59 = *(PDEVOBJ **)(v62 + 72);
  RFONTOBJ::vInsert(this, &v59, 0LL);
  *(_QWORD *)(v49 + 72) = v59;
  SEMOBJ::vUnlock((SEMOBJ *)&v60);
  v50 = *this;
  if ( LODWORD((*this)[4].eYX) == 1 )
    LODWORD(v50->eYY) |= 1u;
  else
    LODWORD(v50->eYY) &= ~1u;
  if ( v64 )
    (*this)[12].eYX = *(FLOATL *)(*(_QWORD *)(*(_QWORD *)v64 + 80LL) + 68LL);
  else
    (*this)[12].eYX = 0.0;
  if ( gbSystemDBCSFontEnabled && ((_DWORD)a5[3] & 0x10) != 0 )
    v16 = 1;
  LODWORD((*this)[44].eYY) = v16;
  return 1;
}
