/*
 * XREFs of ?GetCurrentRenderingRealization@CDeviceTextureImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800130F0
 * Callers:
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CDeviceTextureImageSource::GetCurrentRenderingRealization(
        CDeviceTextureImageSource *this,
        struct IBitmapRealization **a2)
{
  *a2 = (struct IBitmapRealization *)(((unsigned __int64)this + 8) & -(__int64)(this != (CDeviceTextureImageSource *)16));
  CMILCOMBase::InternalAddRef((CDeviceTextureImageSource *)((char *)this - 16));
  return 0LL;
}
