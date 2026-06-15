/*
 * XREFs of ?Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAKXZ @ 0x14004DD70
 * Callers:
 *     ?Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@W7EAAKXZ @ 0x14001EB70 (-Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001EB80 (-Release@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
