/*
 * XREFs of ?GetRuntimeClassName@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x14004C1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::AudioDeviceModulesManager::GetRuntimeClassName(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.AudioDeviceModulesManager", 0x2Fu, a2);
}
