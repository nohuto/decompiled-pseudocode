/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180150370
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008B158 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800C4C6C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x1801501AC (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  CRenderTargetBitmap *v4; // rcx

  if ( *((_BYTE *)this + 152) )
  {
    v4 = (CRenderTargetBitmap *)((char *)this - 24);
  }
  else
  {
    if ( CD2DBitmapCache::RemoveFromCache((CRenderTargetBitmap *)((char *)this - 24), a2) )
      return;
    v4 = (CRenderTargetBitmap *)((char *)this - 24);
  }
  CRenderTargetBitmap::ReleaseRenderTargetBitmap(v4);
  CDeviceResource::NotifyInvalid((CRenderTargetBitmap *)((char *)this + 64), a2);
}
