/*
 * XREFs of ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059790
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x180052DE0 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x1800578EC (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180056F30 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800582E8 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x18005938C (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x1800593D0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005AF04 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char v2; // al
  int v3; // eax
  int v4; // edi
  int v5; // eax
  _BYTE v7[4]; // [rsp+38h] [rbp-19h] BYREF
  int v8; // [rsp+3Ch] [rbp-15h] BYREF
  __int16 v9; // [rsp+40h] [rbp-11h]
  int v10; // [rsp+44h] [rbp-Dh]
  __int16 v11; // [rsp+48h] [rbp-9h]
  _BYTE v12[24]; // [rsp+78h] [rbp+27h] BYREF
  int v13; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

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
  v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 17) + 112LL))(*((_QWORD *)this + 17), v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
    LOBYTE(v11) = 3;
    v8 = 0;
    v9 = v11;
    v10 = 0;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
      0x8DFABCu,
      (const struct FEATURE_LOGGED_TRAITS *)&v8,
      1,
      3);
    v4 = 0;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)this + 84), 8));
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A6F,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v4 >= 0 )
  {
    if ( (*(int (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 17) + 240LL))(*((_QWORD *)this + 17), v7) >= 0
      && v7[0] != *((_BYTE *)this + 186) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 232LL))(
             *((_QWORD *)this + 17),
             (unsigned int)-(v7[0] == 0));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C9A,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v5);
      *((_BYTE *)this + 186) = v7[0];
    }
    CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(
      (__int64)this,
      (__int64)v12,
      2 - ((*((_DWORD *)this + 49) & 2) == 0));
  }
  return (unsigned int)v4;
}
