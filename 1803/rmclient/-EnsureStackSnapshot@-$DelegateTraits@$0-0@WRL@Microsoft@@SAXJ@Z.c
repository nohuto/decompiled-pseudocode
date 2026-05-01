/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18000AF00
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable_____ptr64__Microsoft::WRL::FtmBase___lambda_02a86428158461f4dc557e8a6d2b58da___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x18000B470 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_18000B470.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64___::_)(IInspectable_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_19c629caca3fc168e565f554a8149559___1_IInspectable_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64_::Invoke @ 0x18000B500 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_18000B500.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180006908 (-InternalRelease@-$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease(&v3);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v3) >= 0 )
    SetRestrictedErrorInfo(v3);
  return Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease(&v3);
}
