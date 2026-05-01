/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewUniversalPropertyChangedEventArgs@2345@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIAppViewUniversalPropertyChangedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewUniversalPropertyChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewUniversalPropertyChangedEventArgs@6789@@Z@Z @ 0x1801E886C
 * Callers:
 *     _lambda_5507c52a3c96750a474d626313f63385_::operator() @ 0x1801EABE8 (_lambda_5507c52a3c96750a474d626313f63385_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180149930 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewUniversalPropertyChangedEventArgs_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs_____ptr64___::_)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewUniversalPropertyChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_c71b74a9f24bfa6a83be8bdb732cb75d___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewUniversalPropertyChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_c71b74a9f24bfa6a83be8bdb732cb75d___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs_____ptr64_ @ 0x1801E9C24 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801E9C24.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::AppViewUniversalPropertyChangedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *)>(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rbx
  void *v5; // rax
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = *a2;
  v10 = *a3;
  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v5 )
  {
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ApplicationModel::WindowManagement::AppViewUniversalPropertyChangedEventArgs_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs_____ptr64___::___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewUniversalPropertyChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_c71b74a9f24bfa6a83be8bdb732cb75d___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewUniversalPropertyChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_c71b74a9f24bfa6a83be8bdb732cb75d___1_Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs_____ptr64_(
           v5,
           &v9);
    v7 = v4;
  }
  *a1 = v4;
  if ( !v7 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, 78LL, (__int64)"internal\\sdk\\inc\\wil\\wrl.h", v6);
    __debugbreak();
  }
  return a1;
}
