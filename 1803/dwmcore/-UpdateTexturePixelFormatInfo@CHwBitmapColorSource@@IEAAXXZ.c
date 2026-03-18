/*
 * XREFs of ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x1800CDD5C
 * Callers:
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x1800CDDAC (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801EFC8C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180021540 (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x1800CDD20 (-IsOpaque@CHwBitmapColorSource@@UEBA_NXZ.c)
 */

void __fastcall CHwBitmapColorSource::UpdateTexturePixelFormatInfo(CHwBitmapColorSource *this)
{
  char IsOpaque; // al
  CD3DTexture *v3; // rcx
  bool v4; // zf
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+24h] [rbp-14h]

  v5 = *((_DWORD *)this + 60);
  v6 = 0LL;
  IsOpaque = CHwBitmapColorSource::IsOpaque(this);
  v3 = (CD3DTexture *)*((_QWORD *)this + 21);
  v4 = *((_DWORD *)this + 25) == 2;
  LODWORD(v6) = IsOpaque != 0 ? 3 : 1;
  HIDWORD(v6) = v4;
  CD3DTexture::UpdatePixelFormatInfo(v3, (const struct PixelFormatInfo *)&v5);
}
