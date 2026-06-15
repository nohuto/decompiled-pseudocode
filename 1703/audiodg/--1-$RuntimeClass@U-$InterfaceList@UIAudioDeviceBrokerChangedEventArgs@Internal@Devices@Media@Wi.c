/*
 * XREFs of ??1?$RuntimeClass@U?$InterfaceList@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14002F4E4
 * Callers:
 *     ??1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ @ 0x140049848 (--1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ @ 0x140049888 (--1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ @ 0x1400498D0 (--1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140049DD0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIAudioDeviceBroker@Internal@Devices@.c)
 *     ??_GAudioDeviceModule@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140049F50 (--_GAudioDeviceModule@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004E2E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 32));
}
