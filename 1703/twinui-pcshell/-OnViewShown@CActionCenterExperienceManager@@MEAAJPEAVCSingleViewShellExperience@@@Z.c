/*
 * XREFs of ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180092944 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180093630 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180096474 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil.c)
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@$$T@Z @ 0x180096EC8 (--$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVAct.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18018C2BC (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewShown(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  int v8; // eax
  unsigned int v9; // ebx
  __int16 v10; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int16 v13; // [rsp+54h] [rbp+Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetCachedFeatureEnabledState(this, a2);
  LOBYTE(v10) = 0;
  v12 = 0;
  v13 = v10;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data,
    0x831913u,
    (const struct FEATURE_LOGGED_TRAITS *)&v12,
    0,
    3);
  v3 = CExperienceManagerAnimationHelper::End((CActionCenterExperienceManager *)((char *)this + 240));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x64A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !*((_DWORD *)this + 58) )
  {
    v4 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,std::nullptr_t>(
           (char *)this + 464,
           (char *)this - 96);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x650,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = CActionCenterExperienceManager::RaiseApplicationEvent(
         (CActionCenterExperienceManager *)((char *)this - 96),
         L"WindowVisibilityChanged",
         1);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)this + 58) )
      return 0LL;
    v8 = CActionCenterExperienceManager::RegisterWithLightDismiss((CActionCenterExperienceManager *)((char *)this - 96));
    v9 = v8;
    if ( v8 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x658,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x654,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
