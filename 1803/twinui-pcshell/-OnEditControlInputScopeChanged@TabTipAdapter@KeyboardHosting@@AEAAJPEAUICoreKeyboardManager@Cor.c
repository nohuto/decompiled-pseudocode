/*
 * XREFs of ?OnEditControlInputScopeChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlInputScopeChangedEventArgs@45678@@Z @ 0x180060A00
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64___::_)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64___lambda_a6a9921dc8f8f80747a233ab6b04198d___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs_____ptr64_::Invoke @ 0x180093A00 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180093A00.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlInputScopeChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v11 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlInputScopeChangedEventArgs *, unsigned int *))(v3 + 48))(
         a3,
         &v11);
  if ( v5 < 0 )
  {
    v8 = 315LL;
  }
  else
  {
    v6 = *((_QWORD *)this + 5);
    if ( !v6 )
      return 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, v11);
    if ( v5 >= 0 )
      return 0LL;
    v8 = 319LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5,
    v9);
  return (unsigned int)v5;
}
