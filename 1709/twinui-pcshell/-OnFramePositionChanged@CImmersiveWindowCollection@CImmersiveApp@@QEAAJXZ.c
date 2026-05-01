/*
 * XREFs of ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C148
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x180055060 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180059F38 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18005953C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005A9A8 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?GetViewData@CImmersiveWindowCollection@CImmersiveApp@@QEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x18005B40C (-GetViewData@CImmersiveWindowCollection@CImmersiveApp@@QEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x18005BBE0 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18005BC24 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005D8F8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char v2; // al
  int v3; // eax
  int v4; // edi
  __m128i v5; // xmm2
  int ViewData; // eax
  int v7; // eax
  _BYTE v9[4]; // [rsp+38h] [rbp-49h] BYREF
  int v10; // [rsp+3Ch] [rbp-45h]
  __int16 v11; // [rsp+40h] [rbp-41h]
  int v12; // [rsp+44h] [rbp-3Dh] BYREF
  __int16 v13; // [rsp+48h] [rbp-39h]
  __int128 v14; // [rsp+58h] [rbp-29h] BYREF
  int v15; // [rsp+74h] [rbp-Dh]
  __int64 v16; // [rsp+78h] [rbp-9h]
  _BYTE v17[24]; // [rsp+A8h] [rbp+27h] BYREF
  int v18; // [rsp+C0h] [rbp+3Fh]
  int v19; // [rsp+C4h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 216LL))(*((_QWORD *)this + 17));
  if ( v2 != *((_BYTE *)this + 185) )
  {
    *((_BYTE *)this + 185) = v2;
    if ( v2 )
      CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(this, 0, 0);
    else
      CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(this, 0);
    CImmersiveApp::_UpdateAppStateAndSendNotifications(*((CImmersiveApp **)this + 18));
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 17) + 112LL))(*((_QWORD *)this + 17), v17);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A9C,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_13;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
  LOBYTE(v11) = 3;
  v12 = 0;
  v13 = v11;
  v10 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
    0x8DFABCu,
    (const struct FEATURE_LOGGED_TRAITS *)&v12,
    1,
    3);
  v5 = *(__m128i *)((char *)this + 84);
  v14 = *(_OWORD *)((char *)this + 68);
  v16 = *(_QWORD *)((char *)this + 100);
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
  ViewData = CImmersiveApp::CImmersiveWindowCollection::GetViewData(this, (struct IMMAPP_APPLICATION_VIEW_DATA *)&v14);
  v4 = ViewData;
  if ( ViewData >= 0 )
  {
    v19 = v15;
LABEL_12:
    v4 = 0;
    goto LABEL_13;
  }
  if ( ViewData == -2147023728 )
    goto LABEL_12;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AB1,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)ViewData);
LABEL_13:
  if ( v4 >= 0 )
  {
    if ( (*(int (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 17) + 240LL))(*((_QWORD *)this + 17), v9) >= 0
      && v9[0] != *((_BYTE *)this + 186) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 232LL))(
             *((_QWORD *)this + 17),
             (unsigned int)-(v9[0] == 0));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1CD3,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v7);
      *((_BYTE *)this + 186) = v9[0];
    }
    CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(
      (__int64)this,
      (__int64)v17,
      ((*((_DWORD *)this + 49) & 2) != 0) + 1);
  }
  return (unsigned int)v4;
}
