/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004F1B0
 * Callers:
 *     ?QueryInterface@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F720 (-QueryInterface@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@W7EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F730 (-QueryInterface@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
