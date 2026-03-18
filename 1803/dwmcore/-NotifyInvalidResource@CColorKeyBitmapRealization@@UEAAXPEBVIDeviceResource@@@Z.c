/*
 * XREFs of ?NotifyInvalidResource@CColorKeyBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802139F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x180179C58 (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CColorKeyBitmapRealization::NotifyInvalidResource(
        CColorKeyBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  CD2DBitmapCache::RemoveFromCache((CColorKeyBitmapRealization *)((char *)this - 24), a2);
  CDeviceResource::NotifyInvalid((CColorKeyBitmapRealization *)((char *)this + 64), a2);
}
