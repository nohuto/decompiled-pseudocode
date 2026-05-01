/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@AEBQEAVTouchKeyboardExperienceManager@@P84@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVTouchKeyboardExperienceManager@@$$QEAP84@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@6789@@Z@Z @ 0x1800A0B40
 * Callers:
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::operator() @ 0x1800A1BF0 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180149930 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_0a97fe44e3078a8968f920aa74da7f15___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_0a97fe44e3078a8968f920aa74da7f15___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_ @ 0x18023B8A4 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18023B8A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,TouchKeyboardExperienceManager * const &,long (TouchKeyboardExperienceManager::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>(
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
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::___Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_0a97fe44e3078a8968f920aa74da7f15___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_0a97fe44e3078a8968f920aa74da7f15___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_(
           v5,
           &v9);
    v7 = v4;
  }
  *a1 = v4;
  if ( !v7 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x4E, (unsigned int)"internal\\sdk\\inc\\wil\\wrl.h", v6);
    __debugbreak();
  }
  return a1;
}
