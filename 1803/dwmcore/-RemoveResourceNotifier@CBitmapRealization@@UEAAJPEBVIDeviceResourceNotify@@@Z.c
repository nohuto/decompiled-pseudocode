/*
 * XREFs of ?RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18000C800
 * Callers:
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180082BA8 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CBitmapRealization::RemoveResourceNotifier(
        CBitmapRealization *this,
        const struct IDeviceResourceNotify *a2)
{
  return CDeviceResource::RemoveResourceNotifier(this, a2);
}
