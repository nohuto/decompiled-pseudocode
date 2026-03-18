/*
 * XREFs of ?NotifyInvalidResource@CBitmapOfDeviceBitmaps@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801E97A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x1801799BC (-NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::NotifyInvalidResource(
        CBitmapOfDeviceBitmaps *this,
        const struct IDeviceResource *a2)
{
  CDeviceResource::NotifyInvalid((CBitmapOfDeviceBitmaps *)((char *)this - 56), a2);
  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)((char *)this - 280));
}
