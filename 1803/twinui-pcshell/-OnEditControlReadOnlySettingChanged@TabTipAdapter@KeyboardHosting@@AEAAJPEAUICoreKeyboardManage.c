/*
 * XREFs of ?OnEditControlReadOnlySettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@45678@@Z @ 0x180060800
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64___::_)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64___lambda_9ee6a61792864bbc3d2878fd681bade2___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs_____ptr64_::Invoke @ 0x1800934C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800934C0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlReadOnlySettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v12 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v12);
  if ( v6 < 0 )
  {
    v9 = 377LL;
  }
  else
  {
    v7 = *((_QWORD *)this + 5);
    if ( !v7 )
      return 0LL;
    LOBYTE(v5) = v12 != 0;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL))(v7, v5);
    if ( v6 >= 0 )
      return 0LL;
    v9 = 381LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6,
    v10);
  return (unsigned int)v6;
}
