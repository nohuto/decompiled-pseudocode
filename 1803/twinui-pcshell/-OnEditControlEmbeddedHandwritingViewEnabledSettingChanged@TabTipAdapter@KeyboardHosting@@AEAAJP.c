/*
 * XREFs of ?OnEditControlEmbeddedHandwritingViewEnabledSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs@45678@@Z @ 0x180060850
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs_____ptr64___::_)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs_____ptr64___lambda_306fe1e87ae590cac884d84378111dfd___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs_____ptr64_::Invoke @ 0x180093510 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180093510.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlEmbeddedHandwritingViewEnabledSettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x186,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5,
      v8);
    return v6;
  }
  else
  {
    *(_BYTE *)(*((_QWORD *)this + 12) + 501LL) = v10 != 0;
    return 0LL;
  }
}
