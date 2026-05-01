/*
 * XREFs of ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2F8
 * Callers:
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x1801AA5D8 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemProperty.c)
 *     _lambda_3378446419ebfa0963e7071fa8055ae8_::__lambda_3378446419ebfa0963e7071fa8055ae8_ @ 0x1801ACB68 (_lambda_3378446419ebfa0963e7071fa8055ae8_--__lambda_3378446419ebfa0963e7071fa8055ae8_.c)
 *     ??1?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1801ACD30 (--1-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@QEAA@XZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_3378446419ebfa0963e7071fa8055ae8__0__wistd::details::function_allocator_wistd::_Func_class_long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::__Func_impl_wistd::_Callable_obj__lambda_3378446419ebfa0963e7071fa8055ae8__0__wistd::details::function_allocator_wistd::_Func_class_long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_ @ 0x1801ACDF8 (wistd--_Func_impl_wistd--_Callable_obj__lambda_3378446419ebfa0963e7071fa8055ae8__0__wistd--detai.c)
 *     ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1801B2DA0 (-_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VI.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CCD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1801CCD40.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::Release(v1);
  }
  return result;
}
