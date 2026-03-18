/*
 * XREFs of ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C003C284
 * Callers:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00B37F0 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F56B8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C0110D38 (GreGetFontUnicodeRanges.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0299D30 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0039204 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C003DEC0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0293E50 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 */

struct _FD_GLYPHSET *__fastcall PFEOBJ::pfdg(__int64 **this)
{
  struct _FD_GLYPHSET *v2; // rsi
  int v3; // r15d
  __int64 v4; // r13
  __int64 v5; // rbx
  int v6; // r14d
  __int64 v7; // rbx
  bool v9; // al
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  struct _FD_GLYPHSET *v11; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp+48h] BYREF
  struct _FD_GLYPHSET *v13; // [rsp+90h] [rbp+50h] BYREF
  __int64 v14; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = **this;
  v10 = v4;
  v5 = *(_QWORD *)(v4 + 88);
  v12 = 0LL;
  v14 = v5;
  GreAcquireSemaphore(ghsemGlyphSet);
  if ( !(*this)[2] )
  {
    v6 = *(_DWORD *)(v5 + 32) & 0x8000;
    if ( v6 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
      GreReleaseSemaphoreInternal(ghsemGlyphSet);
    }
    v11 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   (PFFOBJ *)&v10,
                                   *(struct DHPDEV__ **)(v4 + 96),
                                   *(_QWORD *)(v4 + 80),
                                   *((_DWORD *)*this + 2),
                                   3u,
                                   &v12);
    v2 = v11;
    if ( v6 )
      GreAcquireSemaphore(ghsemGlyphSet);
    if ( v2 )
    {
      if ( (*this)[2] )
      {
LABEL_13:
        v3 = 1;
        goto LABEL_9;
      }
      (*this)[2] = (__int64)v2;
      (*this)[3] = v12;
      if ( v6 )
      {
        if ( *(_BYTE *)((*this)[4] + 44) == 2 )
        {
          v13 = 0LL;
          v9 = bExtendGlyphSet(&v11, &v13);
          v2 = v11;
          if ( v9 )
          {
            (*this)[2] = (__int64)v13;
            goto LABEL_13;
          }
        }
      }
    }
  }
LABEL_9:
  if ( (*this)[2] )
    ++*((_DWORD *)*this + 35);
  if ( v3 && *(_QWORD *)(v5 + 3040) )
    PDEVOBJ::Free((PDEVOBJ *)&v14, v2, v12);
  v7 = (*this)[2];
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
  return (struct _FD_GLYPHSET *)v7;
}
