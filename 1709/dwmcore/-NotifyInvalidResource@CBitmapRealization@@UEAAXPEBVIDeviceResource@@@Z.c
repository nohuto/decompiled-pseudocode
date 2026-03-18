/*
 * XREFs of ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180150210
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D1C50 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D3FF0 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18008A6CC (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008B158 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800C4C6C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x1801501AC (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CBitmapRealization::NotifyInvalidResource(CBitmapRealization *this, const struct IDeviceResource *a2)
{
  __int64 v4; // rbx

  if ( !CD2DBitmapCache::RemoveFromCache((CBitmapRealization *)((char *)this - 24), a2) )
  {
    CD2DBitmapCache::ClearCache((CBitmapRealization *)((char *)this - 24));
    v4 = *((_QWORD *)this + 45);
    if ( v4 )
    {
      CRenderTargetBitmap::ReleaseRenderTargetBitmap(*((CRenderTargetBitmap **)this + 45));
      *(_BYTE *)(v4 + 205) = 0;
    }
    CDeviceResource::NotifyInvalid((CBitmapRealization *)((char *)this + 64), a2);
  }
}
