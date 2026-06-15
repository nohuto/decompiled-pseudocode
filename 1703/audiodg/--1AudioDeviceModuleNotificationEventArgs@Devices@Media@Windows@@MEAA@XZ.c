/*
 * XREFs of ??1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ @ 0x140049888
 * Callers:
 *     ??_EAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140049FD0 (--_EAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::~AudioDeviceModuleNotificationEventArgs(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this)
{
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>((__int64)this);
}
