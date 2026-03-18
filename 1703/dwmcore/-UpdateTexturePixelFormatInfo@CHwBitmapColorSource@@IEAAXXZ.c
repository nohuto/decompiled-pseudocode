/*
 * XREFs of ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x18004428C
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180044D38 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 * Callees:
 *     ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x180044250 (-IsOpaque@CHwBitmapColorSource@@UEBA_NXZ.c)
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180045644 (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwBitmapColorSource::UpdateTexturePixelFormatInfo(CHwBitmapColorSource *this)
{
  char IsOpaque; // al
  int v3; // ecx
  int v4; // r8d
  int v5; // ecx
  CD3DTexture *v6; // rcx
  int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+24h] [rbp-14h]

  v7 = *((_DWORD *)this + 58);
  v8 = 0LL;
  IsOpaque = CHwBitmapColorSource::IsOpaque(this);
  v3 = *((_DWORD *)this + 25);
  v4 = 1;
  v8 = IsOpaque != 0 ? 3 : 1;
  v5 = v3 - 1;
  if ( !v5 || v5 != 1 )
    v4 = 0;
  v6 = (CD3DTexture *)*((_QWORD *)this + 20);
  HIDWORD(v8) = v4;
  CD3DTexture::UpdatePixelFormatInfo(v6, (const struct PixelFormatInfo *)&v7);
}
