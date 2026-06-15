/*
 * XREFs of ?Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAKXZ @ 0x14004F5E0
 * Callers:
 *     ?Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@W7EAAKXZ @ 0x14001F9B0 (-Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001F9E0 (-Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
