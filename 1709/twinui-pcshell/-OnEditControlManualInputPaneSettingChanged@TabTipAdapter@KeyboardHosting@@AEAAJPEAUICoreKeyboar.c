/*
 * XREFs of ?OnEditControlManualInputPaneSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlManualInputPaneSettingChangedEventArgs@45678@@Z @ 0x1801A30B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlManualInputPaneSettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlManualInputPaneSettingChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlManualInputPaneSettingChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v11);
  if ( v6 < 0 )
  {
    v7 = 281LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    LOBYTE(v5) = v11 != 0;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, v5);
    if ( v6 < 0 )
    {
      v7 = 285LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
