/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x1800BEF2C
 * Callers:
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x180085890 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18008E788 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@W4DXGI_ALPHA_MODE@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1801B68CC (-CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, enum ColorSpace *a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v2 = 0;
  if ( a1 <= 61 )
  {
    if ( a1 != 61 )
    {
      v4 = a1 - 2;
      if ( !v4 || (v5 = v4 - 8) == 0 )
      {
        *(_DWORD *)a2 = 2;
        return v2;
      }
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 13;
        if ( v7 )
        {
          v8 = v7 - 4;
          if ( v8 )
          {
            if ( v8 != 21 )
              return (unsigned int)-2003292344;
          }
        }
      }
    }
  }
  else if ( a1 != 65 && (a1 <= 86 || a1 > 88 && a1 != 91 && a1 != 103 && (unsigned int)(a1 - 106) > 1) )
  {
    return (unsigned int)-2003292344;
  }
  *(_DWORD *)a2 = 1;
  return v2;
}
