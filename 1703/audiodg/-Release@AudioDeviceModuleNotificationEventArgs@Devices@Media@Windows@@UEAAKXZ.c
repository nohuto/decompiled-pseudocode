/*
 * XREFs of ?Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAKXZ @ 0x14004E380
 * Callers:
 *     ?Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@W7EAAKXZ @ 0x14001FCD0 (-Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001FCE0 (-Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
