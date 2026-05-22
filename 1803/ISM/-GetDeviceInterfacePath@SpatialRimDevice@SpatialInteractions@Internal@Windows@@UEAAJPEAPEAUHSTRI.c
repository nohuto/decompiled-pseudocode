/*
 * XREFs of ?GetDeviceInterfacePath@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180075870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::GetDeviceInterfacePath(
        HSTRING *this,
        HSTRING *a2)
{
  return WindowsDuplicateString(this[8], a2);
}
