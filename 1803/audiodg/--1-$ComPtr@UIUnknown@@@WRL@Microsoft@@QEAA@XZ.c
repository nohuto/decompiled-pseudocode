/*
 * XREFs of ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x1400165E0
 * Callers:
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$0 @ 0x14001F6BC (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$0.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$0 @ 0x1400361E5 (_CpuManager--RegisterDevice_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140015C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
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
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::FtmBase>::Release(v2);
    else
      v3();
  }
}
