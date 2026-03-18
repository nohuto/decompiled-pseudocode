/*
 * XREFs of ?GetCurrentRenderingRealization@CDeviceTextureImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18008EE50
 * Callers:
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CDeviceTextureImageSource::GetCurrentRenderingRealization(
        CDeviceTextureImageSource *this,
        struct IBitmapRealization **a2)
{
  *a2 = (struct IBitmapRealization *)(((unsigned __int64)this + 8) & -(__int64)(this != (CDeviceTextureImageSource *)16));
  CMILCOMBase::InternalAddRef((CDeviceTextureImageSource *)((char *)this - 16));
  return 0LL;
}
