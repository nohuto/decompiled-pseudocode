/*
 * XREFs of ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C002FCB4
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C002A0E4 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00E3714 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FBA88 (GreGetFontUnicodeRanges.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C029D650 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0032114 (-QueryFontTree@PDEVOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00322E4 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0297784 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 */

struct _FD_GLYPHSET *__fastcall PFEOBJ::pfdg(__int64 **this)
{
  struct _FD_GLYPHSET *v2; // rdi
  int v3; // r14d
  __int64 v4; // r15
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // rbx
  bool v9; // al
  __int64 v10; // [rsp+70h] [rbp+38h] BYREF
  struct _FD_GLYPHSET *v11; // [rsp+78h] [rbp+40h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+48h] BYREF
  struct _FD_GLYPHSET *v13; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = **this;
  v5 = *(_QWORD *)(v4 + 88);
  v12 = 0LL;
  v10 = v5;
  GreAcquireSemaphore(ghsemGlyphSet);
  if ( !(*this)[2] )
  {
    v6 = *(_DWORD *)(v10 + 32) & 0x8000;
    if ( v6 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
      GreReleaseSemaphoreInternal(ghsemGlyphSet);
    }
    v11 = (struct _FD_GLYPHSET *)PDEVOBJ::QueryFontTree(
                                   (PDEVOBJ *)&v10,
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
  if ( v3 && *(_QWORD *)(v10 + 3040) )
    PDEVOBJ::Free((PDEVOBJ *)&v10, v2, v12);
  v7 = (*this)[2];
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
  return (struct _FD_GLYPHSET *)v7;
}
