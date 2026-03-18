/*
 * XREFs of ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x180179990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmapCache::NotifyInvalidResource(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  CD2DBitmapCache::RemoveFromCache((CD2DBitmapCache *)((char *)this - 24), a2);
}
