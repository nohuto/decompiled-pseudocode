/*
 * XREFs of ?get_DisplayName@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x140050780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::AudioDeviceModule::get_DisplayName(HSTRING *this, HSTRING *a2)
{
  if ( a2 )
    return WindowsDuplicateString(this[12], a2);
  else
    return -2147467261;
}
