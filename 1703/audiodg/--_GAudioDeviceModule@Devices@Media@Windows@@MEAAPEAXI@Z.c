/*
 * XREFs of ??_GAudioDeviceModule@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140049F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14002F4E4 (--1-$RuntimeClass@U-$InterfaceList@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Wi.c)
 */

Windows::Media::Devices::AudioDeviceModule *__fastcall Windows::Media::Devices::AudioDeviceModule::`scalar deleting destructor'(
        Windows::Media::Devices::AudioDeviceModule *this,
        char a2)
{
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModule::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
  WindowsDeleteString(*((HSTRING *)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
