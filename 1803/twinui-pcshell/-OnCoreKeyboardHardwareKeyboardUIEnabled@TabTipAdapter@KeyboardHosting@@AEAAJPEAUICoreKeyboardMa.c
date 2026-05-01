/*
 * XREFs of ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x18024A380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18023CF18 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248C98 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x18024D640 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardHardwareKeyboardUIEnabled(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int IsReady; // edi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v10; // rax
  bool v11; // dl
  int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v15; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v15 = 0;
  IsReady = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *, char *))(v3 + 48))(
              a3,
              &v15);
  if ( IsReady < 0 )
  {
    v8 = 471LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)IsReady);
    return (unsigned int)IsReady;
  }
  *(_BYTE *)(*((_QWORD *)this + 12) + 500LL) = v15 != 0;
  v10 = *((_QWORD *)this + 12);
  if ( *(_BYTE *)(v10 + 500) )
  {
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((RTL_SRWLOCK **)this, v5, v7);
    if ( IsReady < 0 )
    {
      v8 = 477LL;
      goto LABEL_3;
    }
    IsReady = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(*((RTL_SRWLOCK **)this + 7));
    if ( IsReady < 0 )
    {
      v8 = 478LL;
      goto LABEL_3;
    }
    v12 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v11, 1);
    if ( v12 < 0 )
    {
      v13 = 480LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
  }
  else if ( !*(_BYTE *)(v10 + 512) )
  {
    v12 = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v5, 0);
    if ( v12 < 0 )
    {
      v13 = 486LL;
      goto LABEL_11;
    }
  }
  return 0LL;
}
