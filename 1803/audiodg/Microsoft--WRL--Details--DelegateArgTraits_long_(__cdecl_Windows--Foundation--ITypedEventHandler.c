/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___::_)(Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64_::Invoke @ 0x14004C8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x14004A2F0 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___::___Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64_::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
