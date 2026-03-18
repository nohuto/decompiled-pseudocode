/*
 * XREFs of ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x180085030
 * Callers:
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x18008506C (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

char __fastcall CHwBitmapColorSource::IsOpaque(CHwBitmapColorSource *this)
{
  int v1; // eax
  __int64 v2; // rdx
  char v3; // cl

  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    return 0;
  if ( (*((_BYTE *)this + 92) & 1) != 0 )
    return 1;
  v1 = HasAlphaChannel(*((_DWORD *)this + 60));
  v3 = 0;
  if ( !v1 || *(_DWORD *)(v2 + 96) == 3 )
    return 1;
  return v3;
}
