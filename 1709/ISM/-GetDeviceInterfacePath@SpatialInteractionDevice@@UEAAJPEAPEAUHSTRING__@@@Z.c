/*
 * XREFs of ?GetDeviceInterfacePath@SpatialInteractionDevice@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180074F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall SpatialInteractionDevice::GetDeviceInterfacePath(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[10], a2);
}
