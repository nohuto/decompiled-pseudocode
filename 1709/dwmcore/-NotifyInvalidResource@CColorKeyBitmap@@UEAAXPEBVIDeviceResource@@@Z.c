/*
 * XREFs of ?NotifyInvalidResource@CColorKeyBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D1AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800C4C6C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CColorKeyBitmap::NotifyInvalidResource(CColorKeyBitmap *this, const struct IDeviceResource *a2)
{
  CD2DBitmapCache::RemoveFromCache((CColorKeyBitmap *)((char *)this - 24), a2);
  CDeviceResource::NotifyInvalid((CColorKeyBitmap *)((char *)this + 64), a2);
}
