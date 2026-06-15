/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001A5B0
 * Callers:
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x1400162EC (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??_E?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V_lambda_511023af88e174782ac1e7ddac964c62_@@$0?0PEAUIAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBroker@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14001A6D0 (--_E-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Wi.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D4E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release(
        __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10
  void (__fastcall *v3)(__int64, __int64); // rax
  __int64 v4; // rdx

  v1 = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 12));
  if ( !v1 )
  {
    if ( v2 )
    {
      v3 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL);
      v4 = v1 + 1;
      if ( (char *)v3 == (char *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBroker *>,Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>>::*)(Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_511023af88e174782ac1e7ddac964c62_,-1,Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>::`vector deleting destructor' )
        Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBroker *>,Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>>::*)(Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_511023af88e174782ac1e7ddac964c62_,-1,Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>::`vector deleting destructor'(
          v2,
          v4);
      else
        v3(v2, v4);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
