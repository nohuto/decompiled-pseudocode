/*
 * XREFs of ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x140019750
 * Callers:
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$0 @ 0x140020920 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$0.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$0 @ 0x140037C2A (_CpuManager--RegisterDevice_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140019810 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@De.c)
 */

void __fastcall Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(__int64 *a1)
{
  __int64 v2; // rcx
  void (*v3)(void); // rax

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
    else
      v3();
  }
}
