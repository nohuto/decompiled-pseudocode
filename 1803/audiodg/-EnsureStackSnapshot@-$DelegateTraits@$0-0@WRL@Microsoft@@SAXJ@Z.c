/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x14004A2F0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___::_)(Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64_::Invoke @ 0x14004C8D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14002F07C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v3);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v3) >= 0 )
    SetRestrictedErrorInfo(v3);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v3);
}
