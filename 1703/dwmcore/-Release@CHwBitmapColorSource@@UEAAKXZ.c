/*
 * XREFs of ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x180044120
 * Callers:
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ??$ReleaseInterface@VCHwTexturedColorSource@@@@YAXAEAPEAVCHwTexturedColorSource@@@Z @ 0x18004D69C (--$ReleaseInterface@VCHwTexturedColorSource@@@@YAXAEAPEAVCHwTexturedColorSource@@@Z.c)
 *     ?Release@CHwBitmapColorSource@@WGI@EAAKXZ @ 0x1800D6560 (-Release@CHwBitmapColorSource@@WGI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapColorSource::Release(CHwBitmapColorSource *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CHwBitmapColorSource *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  return v1;
}
