/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64___::_)(IInspectable_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_e4930aad52d023ff94aaea99e79990d9___1_IInspectable_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64_::Invoke @ 0x18000C010
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800053F4 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18000BA30 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64___::___IInspectable_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_e4930aad52d023ff94aaea99e79990d9___1_IInspectable_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  volatile signed __int32 *v5; // rcx
  signed int v7; // ebx
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v5 = 0LL;
  v9 = 0LL;
  if ( v3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, volatile signed __int32 **))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0,
           &v9);
    if ( v7 < 0 )
      goto LABEL_5;
    v5 = v9;
  }
  v7 = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
LABEL_5:
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>::InternalRelease(&v9);
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v7);
  return (unsigned int)v7;
}
