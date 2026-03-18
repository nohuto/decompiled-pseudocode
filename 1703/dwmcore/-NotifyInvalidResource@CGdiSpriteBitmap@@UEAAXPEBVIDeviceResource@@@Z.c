/*
 * XREFs of ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180163830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::NotifyInvalidResource(CGdiSpriteBitmap *this, const struct IDeviceResource *a2)
{
  CGdiSpriteBitmap::ReleaseDeviceBitmapResources((CGdiSpriteBitmap *)((char *)this - 96));
}
