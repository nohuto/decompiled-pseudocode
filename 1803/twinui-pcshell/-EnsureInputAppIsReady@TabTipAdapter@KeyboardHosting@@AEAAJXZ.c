/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248C98
 * Callers:
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x18024A380 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18024B940 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z @ 0x18024BAE0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x18024BDAC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18023CF18 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18024161C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@CAX_NW4Re.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18024942C (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV-$basic_string@GU-$char_traits@G@s.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024AB14 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024D448 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(RTL_SRWLOCK **this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int DefaultInputAppId; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  const unsigned __int16 *v8; // rdx
  int IsActivated; // eax
  unsigned __int16 *v11[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  unsigned __int64 v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::ReportUsageToService((__int64)this, 3u, a3);
  if ( this[35] )
  {
    IsActivated = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(this[7]);
    v6 = IsActivated;
    if ( IsActivated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45B,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)IsActivated);
      return v6;
    }
  }
  else
  {
    v12 = 0LL;
    v13 = 7LL;
    LOWORD(v11[0]) = 0;
    DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(v4, v11);
    v6 = DefaultInputAppId;
    if ( DefaultInputAppId < 0 )
    {
      v7 = 1097LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)DefaultInputAppId);
      std::wstring::_Tidy_deallocate((__int64)v11);
      return v6;
    }
    if ( v12 )
    {
      v8 = (const unsigned __int16 *)v11;
      if ( this[5] )
      {
        if ( v13 >= 8 )
          v8 = v11[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::SetInputAppAUMID((KeyboardHosting::TabTipAdapter *)this, v8);
        v6 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v7 = 1103LL;
          goto LABEL_14;
        }
      }
      else
      {
        if ( v13 >= 8 )
          v8 = v11[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
                              (KeyboardHosting::TabTipAdapter *)this,
                              v8);
        v6 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v7 = 1107LL;
          goto LABEL_14;
        }
      }
    }
    std::wstring::_Tidy_deallocate((__int64)v11);
  }
  return 0LL;
}
