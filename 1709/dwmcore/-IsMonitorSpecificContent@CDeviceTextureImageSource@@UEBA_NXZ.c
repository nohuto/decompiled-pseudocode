/*
 * XREFs of ?IsMonitorSpecificContent@CDeviceTextureImageSource@@UEBA_NXZ @ 0x1801D4A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureImageSource::IsMonitorSpecificContent(CDeviceTextureImageSource *this)
{
  return DisplayId::IsSpecific((CDeviceTextureImageSource *)((char *)this + 40));
}
