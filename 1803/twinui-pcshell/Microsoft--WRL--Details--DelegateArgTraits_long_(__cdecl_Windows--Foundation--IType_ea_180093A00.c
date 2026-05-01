/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64___::_)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64___lambda_a6a9921dc8f8f80747a233ab6b04198d___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64_::Invoke @ 0x180093A00
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEditControlInputScopeChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlInputScopeChangedEventArgs@45678@@Z @ 0x180060A00 (-OnEditControlInputScopeChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Cor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64___::___Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64___lambda_a6a9921dc8f8f80747a233ab6b04198d___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs *a3)
{
  __int64 (__fastcall *v3)(KeyboardHosting::TabTipAdapter *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs *); // r9
  KeyboardHosting::TabTipAdapter *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *(__int64 (__fastcall **)(KeyboardHosting::TabTipAdapter *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs *))(a1 + 24);
  v4 = (KeyboardHosting::TabTipAdapter *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  if ( v3 == KeyboardHosting::TabTipAdapter::OnEditControlInputScopeChanged )
    v5 = KeyboardHosting::TabTipAdapter::OnEditControlInputScopeChanged(v4, a2, a3);
  else
    v5 = ((__int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *))v3)(v4);
  v6 = v5;
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return v6;
}
