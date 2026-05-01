/*
 * XREFs of ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x1801A2E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801A5230 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV-$basic_string@GU-$char_traits@G@s.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1801A5378 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801A7D70 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@C.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *a3)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rcx
  int DefaultInputAppId; // eax
  __int64 v10; // rdx
  const unsigned __int16 *v11; // rdx
  __int64 v12; // rcx
  _BYTE v13[4]; // [rsp+30h] [rbp-50h] BYREF
  int v14; // [rsp+34h] [rbp-4Ch]
  __int16 v15; // [rsp+38h] [rbp-48h]
  int v16; // [rsp+3Ch] [rbp-44h] BYREF
  __int16 v17; // [rsp+40h] [rbp-40h]
  __int64 v18; // [rsp+48h] [rbp-38h]
  unsigned __int16 *v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v18 = -2LL;
  v13[0] = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *, _BYTE *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v13);
  if ( v5 < 0 )
  {
    v6 = 238LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v13[0] )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetCachedFeatureEnabledState();
    v14 = 0;
    LOBYTE(v15) = 3;
    v16 = 0;
    v17 = v15;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data,
      0xA4DD16u,
      (const struct FEATURE_LOGGED_TRAITS *)&v16,
      1,
      3);
    if ( *(_DWORD *)(*((_QWORD *)this + 7) + 480LL) == 1 && !*((_QWORD *)this + 29) )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v19[0]) = 0;
      DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(v8, v19);
      v5 = DefaultInputAppId;
      if ( DefaultInputAppId < 0 )
      {
        v10 = 245LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)DefaultInputAppId);
        std::wstring::~wstring((unsigned __int64 *)v19);
        return (unsigned int)v5;
      }
      v11 = (const unsigned __int16 *)v19;
      if ( si128.m128i_i64[1] >= 8uLL )
        v11 = v19[0];
      DefaultInputAppId = KeyboardHosting::TabTipAdapter::SetInputAppAUMID(this, v11);
      v5 = DefaultInputAppId;
      if ( DefaultInputAppId < 0 )
      {
        v10 = 250LL;
        goto LABEL_16;
      }
      std::wstring::~wstring((unsigned __int64 *)v19);
    }
  }
  v12 = *((_QWORD *)this + 5);
  if ( v12 )
  {
    LOBYTE(v4) = v13[0] != 0;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, v4);
    if ( v5 < 0 )
    {
      v6 = 256LL;
      goto LABEL_3;
    }
  }
  *((_BYTE *)this + 209) = v13[0];
  *(_BYTE *)(*((_QWORD *)this + 12) + 376LL) = 0;
  return 0LL;
}
