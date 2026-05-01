/*
 * XREFs of ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x1800608A0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlFocusChangedEventArgs_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs_____ptr64___::_)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlFocusChangedEventArgs_____ptr64___lambda_bb4ea7857b68352f6ee21255c8a86b9f___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager_____ptr64_Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs_____ptr64_::Invoke @ 0x180060A50 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180060A50.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18023DC00 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XAMLKeyboardDesktop@@@wil@@C.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18024942C (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@AEAAJAEAV-$basic_string@GU-$char_traits@G@s.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024D448 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *a3)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct wil_details_RecordUsageResult *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  int DefaultInputAppId; // eax
  const unsigned __int16 *v15; // rdx
  int v16; // [rsp+28h] [rbp-69h]
  _BYTE v17[8]; // [rsp+58h] [rbp-39h] BYREF
  int v18; // [rsp+60h] [rbp-31h] BYREF
  __int16 v19; // [rsp+64h] [rbp-2Dh]
  int v20; // [rsp+68h] [rbp-29h] BYREF
  __int16 v21; // [rsp+6Ch] [rbp-25h]
  __int64 v22; // [rsp+70h] [rbp-21h]
  unsigned __int16 *v23[2]; // [rsp+78h] [rbp-19h] BYREF
  __m128i si128; // [rsp+88h] [rbp-9h]
  _QWORD v25[2]; // [rsp+98h] [rbp+7h] BYREF
  int v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+ACh] [rbp+1Bh]
  __int128 v28; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v22 = -2LL;
  v17[0] = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *, _BYTE *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v17);
  if ( v5 < 0 )
  {
    v12 = 286LL;
  }
  else
  {
    if ( v17[0] )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetCachedFeatureEnabledState();
      LOBYTE(v19) = 3;
      v20 = 0;
      v21 = v19;
      v18 = 3;
      v9 = wil_details_RecordUsageInPropertyCache(
             (__int64)v23,
             (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data,
             2,
             0,
             1u);
      v28 = *(_OWORD *)v9;
      v29 = *(_QWORD *)(v9 + 16);
      if ( g_wil_details_recordFeatureUsage )
      {
        if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
          wil::details::RecordFeatureUsageCallback(
            (wil::details *)0xA4DD16,
            (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data,
            (union wil_details_FeaturePropertyCache *)&v28,
            v11);
        else
          g_wil_details_recordFeatureUsage(
            0xA4DD16u,
            (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data,
            (struct wil_details_RecordUsageResult *)&v28);
        v10 = `wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data;
        if ( (`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
        {
          v25[0] = 0LL;
          v26 = 0;
          v25[1] = 2LL;
          v27 = (`wil::Feature<__WilFeatureTraits_Feature_XAMLKeyboardDesktop>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
          ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10804502LL, 0LL, v25);
        }
      }
      if ( !(_DWORD)v29 && g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xA4DD16u,
          (const struct FEATURE_LOGGED_TRAITS *)&v20,
          0LL,
          1,
          (const enum wil_ReportingKind *)&v18,
          0LL,
          0,
          1uLL);
      if ( *(_DWORD *)(*((_QWORD *)this + 7) + 512LL) == 1 && !*((_QWORD *)this + 35) )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v23[0]) = 0;
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(v10, v23);
        v5 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v13 = 293LL;
          goto LABEL_19;
        }
        v15 = (const unsigned __int16 *)v23;
        if ( si128.m128i_i64[1] >= 8uLL )
          v15 = v23[0];
        DefaultInputAppId = KeyboardHosting::TabTipAdapter::SetInputAppAUMID(this, v15);
        v5 = DefaultInputAppId;
        if ( DefaultInputAppId < 0 )
        {
          v13 = 298LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)DefaultInputAppId,
            v16);
          std::wstring::_Tidy_deallocate(v23);
          return (unsigned int)v5;
        }
        std::wstring::_Tidy_deallocate(v23);
      }
    }
    v6 = *((_QWORD *)this + 5);
    if ( !v6
      || (LOBYTE(v4) = v17[0] != 0,
          v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, v4),
          v5 >= 0) )
    {
      v7 = *((_QWORD *)this + 12);
      *(_BYTE *)(v7 + 503) = v17[0] != 0;
      *(_BYTE *)(v7 + 408) = 0;
      return 0LL;
    }
    v12 = 304LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5,
    v16);
  return (unsigned int)v5;
}
