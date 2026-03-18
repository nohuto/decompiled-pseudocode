/*
 * XREFs of ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0
 * Callers:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00B37F0 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00F56B8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C0110D38 (GreGetFontUnicodeRanges.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C0283D08 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C003DEC0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0040D74 (UmfdTrueTypeFreeGlyphset.c)
 *     ttfdFreeGlyphset @ 0x1C022FB98 (ttfdFreeGlyphset.c)
 */

void __fastcall PFEOBJ::vFreepfdg(__int64 **this)
{
  void *v2; // rsi
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // eax
  __int64 *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = **this;
  GreAcquireSemaphore(ghsemGlyphSet);
  v6 = *((_DWORD *)*this + 35);
  if ( v6 )
  {
    *((_DWORD *)*this + 35) = v6 - 1;
    v7 = *this;
    if ( !*((_DWORD *)*this + 35) )
    {
      v8 = *(_QWORD *)(v4 + 88);
      if ( (struct PDEV *)v8 == gppdevTrueType )
      {
        ttfdFreeGlyphset(*(_QWORD *)(v4 + 80), *((unsigned int *)v7 + 2));
        goto LABEL_7;
      }
      if ( (struct PDEV *)v8 == qword_1C0334158 )
      {
        v9 = *(_QWORD *)(v4 + 80);
        if ( !*(_DWORD *)(v9 + 8) )
        {
          UmfdTrueTypeFreeGlyphset(v9, *((unsigned int *)v7 + 2), v7[2]);
LABEL_7:
          (*this)[2] = 0LL;
          goto LABEL_8;
        }
      }
      if ( (*(_DWORD *)(v8 + 32) & 0x8000) != 0 && *(_QWORD *)(v8 + 3040) )
      {
        if ( *(_BYTE *)(v7[4] + 44) == 2 && (v10 = v7[2]) != 0 && (*(_DWORD *)(v10 + 4) & 0x10) != 0 )
        {
          Win32FreePool(v10, gppdevTrueType, v5);
        }
        else
        {
          v2 = (void *)v7[2];
          v3 = v7[3];
        }
        (*this)[2] = 0LL;
        if ( v2 )
        {
          v11 = *(_QWORD *)(v4 + 88);
          PDEVOBJ::Free((PDEVOBJ *)&v11, v2, v3);
        }
      }
    }
  }
LABEL_8:
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
}
