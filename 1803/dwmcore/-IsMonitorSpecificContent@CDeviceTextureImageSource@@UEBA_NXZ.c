/*
 * XREFs of ?IsMonitorSpecificContent@CDeviceTextureImageSource@@UEBA_NXZ @ 0x1802168E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureImageSource::IsMonitorSpecificContent(CDeviceTextureImageSource *this)
{
  return DisplayId::IsSpecific((CDeviceTextureImageSource *)((char *)this + 40));
}
