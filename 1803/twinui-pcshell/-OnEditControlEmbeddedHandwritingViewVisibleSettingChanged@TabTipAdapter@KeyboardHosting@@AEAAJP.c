/*
 * XREFs of ?OnEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs@45678@@Z @ 0x180060160
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs_____ptr64___::_)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs_____ptr64___lambda_09673e9268745349de13969df6310f17___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs_____ptr64_::Invoke @ 0x180093560 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180093560.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18030B910 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlEmbeddedHandwritingViewVisibleSettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *a3)
{
  int v4; // eax
  bool v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rax
  bool v8; // bl
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h]

  v12 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v12);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4,
      -2);
  }
  else
  {
    v7 = *((_QWORD *)this + 12);
    v13 = 0LL;
    v8 = v12 != 0;
    *(_BYTE *)(v7 + 502) = v12 != 0;
    if ( v8 )
      IhmNotification::SendKeyboardSetVisible(0LL, 0, v5);
    if ( 2 * v8 == 2
      && (v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8), v6 = v10, v10 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19A,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v10,
        -2);
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
