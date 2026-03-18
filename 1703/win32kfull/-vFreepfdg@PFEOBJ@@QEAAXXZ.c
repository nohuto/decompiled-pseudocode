/*
 * XREFs of ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C002FBE0
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C002A0E4 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C008F6E4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00E3714 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FBA88 (GreGetFontUnicodeRanges.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02871D4 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00322E4 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00D48C8 (UmfdTrueTypeFreeGlyphset.c)
 *     ttfdFreeGlyphset @ 0x1C022E684 (ttfdFreeGlyphset.c)
 */

void __fastcall PFEOBJ::vFreepfdg(__int64 **this)
{
  void *v2; // rsi
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  int v5; // eax
  __int64 *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = **this;
  GreAcquireSemaphore(ghsemGlyphSet);
  v5 = *((_DWORD *)*this + 35);
  if ( v5 )
  {
    *((_DWORD *)*this + 35) = v5 - 1;
    v6 = *this;
    if ( !*((_DWORD *)*this + 35) )
    {
      v7 = *(_QWORD *)(v4 + 88);
      if ( (struct PDEV *)v7 == gppdevTrueType )
      {
        ttfdFreeGlyphset(*(_QWORD *)(v4 + 80), *((unsigned int *)v6 + 2));
        goto LABEL_7;
      }
      if ( (struct PDEV *)v7 == qword_1C0338A40 )
      {
        v8 = *(_QWORD *)(v4 + 80);
        if ( !*(_DWORD *)(v8 + 8) )
        {
          UmfdTrueTypeFreeGlyphset(v8, *((unsigned int *)v6 + 2), v6[2]);
LABEL_7:
          (*this)[2] = 0LL;
          goto LABEL_8;
        }
      }
      if ( (*(_DWORD *)(v7 + 32) & 0x8000) != 0 && *(_QWORD *)(v7 + 3040) )
      {
        if ( *(_BYTE *)(v6[4] + 44) == 2 && (v9 = v6[2]) != 0 && (*(_DWORD *)(v9 + 4) & 0x10) != 0 )
        {
          Win32FreePool(v9);
        }
        else
        {
          v2 = (void *)v6[2];
          v3 = v6[3];
        }
        (*this)[2] = 0LL;
        if ( v2 )
        {
          v10 = *(_QWORD *)(v4 + 88);
          PDEVOBJ::Free((PDEVOBJ *)&v10, v2, v3);
        }
      }
    }
  }
LABEL_8:
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
}
