/*
 * XREFs of ??1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ @ 0x140049848
 * Callers:
 *     ??_GAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140049F20 (--_GAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::~AudioDeviceBrokerChangedEventArgs(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this)
{
  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>((__int64)this);
}
