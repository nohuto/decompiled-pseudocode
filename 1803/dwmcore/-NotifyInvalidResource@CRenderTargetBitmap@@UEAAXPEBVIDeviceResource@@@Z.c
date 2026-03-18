/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180179B80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008A0FC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x1801799BC (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x180179C58 (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  if ( *((_BYTE *)this + 152) || !CD2DBitmapCache::RemoveFromCache((CRenderTargetBitmap *)((char *)this - 24), a2) )
  {
    CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)((char *)this - 24));
    CDeviceResource::NotifyInvalid((CRenderTargetBitmap *)((char *)this + 64), a2);
  }
}
