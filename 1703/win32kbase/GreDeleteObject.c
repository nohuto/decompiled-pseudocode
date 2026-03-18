/*
 * XREFs of GreDeleteObject @ 0x1C0041C00
 * Callers:
 *     UserSetDCVisRgn @ 0x1C002B840 (UserSetDCVisRgn.c)
 *     DeleteMaybeSpecialRgn @ 0x1C00435C0 (DeleteMaybeSpecialRgn.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0078B10 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0078B38 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C0078BB4 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     DestroyMonitor @ 0x1C0078C20 (DestroyMonitor.c)
 *     UserValidateCopyRgn @ 0x1C007FB20 (UserValidateCopyRgn.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeletePalette @ 0x1C0059240 (bDeletePalette.c)
 */

__int64 __fastcall GreDeleteObject(HBRUSH a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v8; // eax
  unsigned int v9; // ecx

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 3;
  if ( !v3 )
    return bDeleteRegion((HRGN)a1);
  v4 = v3 - 1;
  if ( !v4 )
    return bDeleteSurface((unsigned int)a1);
  v5 = v4 - 3;
  if ( !v5 )
    return bDeletePalette((HPALETTE)a1);
  v6 = v5 - 2;
  if ( v6 )
  {
    if ( v6 != 6 )
      return 0LL;
    return bDeleteBrush(a1);
  }
  else
  {
    v8 = IsbDeleteFontSupported();
    v9 = 0;
    if ( v8 >= 0 )
      return (unsigned int)bDeleteFont(a1, 0LL);
    return v9;
  }
}
