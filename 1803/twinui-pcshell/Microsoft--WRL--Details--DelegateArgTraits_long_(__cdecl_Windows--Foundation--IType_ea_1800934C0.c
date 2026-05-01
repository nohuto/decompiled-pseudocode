/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64___::_)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64___lambda_9ee6a61792864bbc3d2878fd681bade2___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64_::Invoke @ 0x1800934C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEditControlReadOnlySettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@45678@@Z @ 0x180060800 (-OnEditControlReadOnlySettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManage.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64___::___Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64___lambda_9ee6a61792864bbc3d2878fd681bade2___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *a3)
{
  __int64 (__fastcall *v3)(KeyboardHosting::TabTipAdapter *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *); // r9
  KeyboardHosting::TabTipAdapter *v4; // rcx
  int OnlySettingChanged; // eax
  unsigned int v6; // ebx

  v3 = *(__int64 (__fastcall **)(KeyboardHosting::TabTipAdapter *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *))(a1 + 24);
  v4 = (KeyboardHosting::TabTipAdapter *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  if ( v3 == KeyboardHosting::TabTipAdapter::OnEditControlReadOnlySettingChanged )
    OnlySettingChanged = KeyboardHosting::TabTipAdapter::OnEditControlReadOnlySettingChanged(v4, a2, a3);
  else
    OnlySettingChanged = ((__int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *))v3)(v4);
  v6 = OnlySettingChanged;
  if ( OnlySettingChanged < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)OnlySettingChanged);
  return v6;
}
