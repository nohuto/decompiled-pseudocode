/*
 * XREFs of ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B0C4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke @ 0x18001AE90 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceDispatcher_____ptr64__Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64___lambda_2ece1860f81236f256546f74fbbd71d4___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____ptr64_::Invoke @ 0x180069530 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180069530.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18009E680 (wistd--_Func_impl_wistd--_Callable_obj__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0__ea_18009E680.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_8794f5c9d84be05553a61fbcf7abc168__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1801590C0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_8794f5c9d84be05553a61fbcf7abc168__0__ea_1801590C0.c)
 *     ?GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z @ 0x180188748 (-GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z.c)
 *     ?HandleChainLinkEventInternal@ModalLink@@EEAAXPEAUIChainLink@Chaining@Shell@Internal@Windows@@W4ChainLinkEventTypeInternal@?$ChainLink@VObjectWithSrwLock@@@3456@@Z @ 0x1801BEC90 (-HandleChainLinkEventInternal@ModalLink@@EEAAXPEAUIChainLink@Chaining@Shell@Internal@Windows@@W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::WeakRef::InternalResolve(
        Microsoft::WRL::Details::WeakReferenceImpl **this,
        const struct _GUID *a2,
        struct IInspectable **a3)
{
  Microsoft::WRL::Details::WeakReferenceImpl *v3; // rcx
  __int64 (__fastcall *v4)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **); // rax

  *a3 = 0LL;
  v3 = *this;
  if ( !v3 )
    return 0LL;
  v4 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v3 + 24LL);
  if ( v4 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
    return Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v3, a2, a3);
  else
    return ((__int64 (__fastcall *)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *))v4)(v3, a2);
}
