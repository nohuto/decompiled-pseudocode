/*
 * XREFs of GreDeleteObject @ 0x1C001F4A0
 * Callers:
 *     DeleteMaybeSpecialRgn @ 0x1C001F480 (DeleteMaybeSpecialRgn.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0063C84 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0063CAC (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyMonitor @ 0x1C0071210 (DestroyMonitor.c)
 *     UserSetDCVisRgn @ 0x1C007B3E0 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C0084DA0 (UserValidateCopyRgn.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C009B88C (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteRegion @ 0x1C001F530 (bDeleteRegion.c)
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 *     bDeletePalette @ 0x1C006ECD0 (bDeletePalette.c)
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
    return bDeleteSurface(a1);
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
