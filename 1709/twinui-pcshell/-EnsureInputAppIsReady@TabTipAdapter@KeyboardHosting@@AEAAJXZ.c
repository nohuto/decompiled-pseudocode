/*
 * XREFs of ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A50C4
 * Callers:
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z @ 0x1801A4AA0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1801A5518 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x180199B24 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1801A4510 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801A5230 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV-$basic_string@GU-$char_traits@G@s.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1801A5378 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801A7D70 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@C.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(TouchKeyboardExperienceManager **this)
{
  __int64 v2; // rcx
  int DefaultInputAppId; // eax
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int16 *v7; // rdx
  int IsActivated; // eax
  __int16 v10; // [rsp+34h] [rbp-3Ch]
  int v11; // [rsp+38h] [rbp-38h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-34h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  unsigned __int16 *v14[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  unsigned __int64 v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v13 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetCachedFeatureEnabledState();
  LOBYTE(v10) = 3;
  v11 = 0;
  v12 = v10;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data,
    0xA4DD16u,
    (const struct FEATURE_LOGGED_TRAITS *)&v11,
    1,
    3);
  if ( this[29] )
  {
    IsActivated = TouchKeyboardExperienceManager::EnsureInputAppIsActivated(this[7]);
    v5 = IsActivated;
    if ( IsActivated < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x35F,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)IsActivated);
      return v5;
    }
  }
  else
  {
    v15 = 0LL;
    v16 = 7LL;
    LOWORD(v14[0]) = 0;
    DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(v2, v14);
    v5 = DefaultInputAppId;
    if ( DefaultInputAppId < 0 )
    {
      v6 = 845LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)DefaultInputAppId);
      std::wstring::~wstring((unsigned __int64 *)v14);
      return v5;
    }
    if ( v15 )
    {
      v7 = (unsigned __int16 *)v14;
      if ( this[5] )
      {
        if ( v16 >= 8 )
          v7 = v14[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::SetInputAppAUMID((KeyboardHosting::TabTipAdapter *)this, v7);
        v5 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v6 = 851LL;
          goto LABEL_16;
        }
      }
      else
      {
        if ( v16 >= 8 )
          v7 = v14[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
                              (KeyboardHosting::TabTipAdapter *)this,
                              v7,
                              v4);
        v5 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v6 = 855LL;
          goto LABEL_16;
        }
      }
    }
    std::wstring::~wstring((unsigned __int64 *)v14);
  }
  return 0LL;
}
