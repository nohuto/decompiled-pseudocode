/*
 * XREFs of ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097F30 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C6EC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil.c)
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@$$T@Z @ 0x18009CCAC (--$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVAct.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1801DB408 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewShown(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int16 v14; // [rsp+54h] [rbp+Ch]
  int v15; // [rsp+60h] [rbp+18h] BYREF
  __int16 v16; // [rsp+64h] [rbp+1Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetCachedFeatureEnabledState(this, a2);
  LOBYTE(v14) = 0;
  v15 = 0;
  v16 = v14;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data,
    0x831913u,
    (const struct FEATURE_LOGGED_TRAITS *)&v15,
    0,
    3);
  if ( *((_DWORD *)this + 58) == 4 )
  {
    v3 = CExperienceManagerAnimationHelper::End((CActionCenterExperienceManager *)((char *)this + 312));
    if ( v3 >= 0 )
      goto LABEL_9;
    v4 = 1846LL;
  }
  else
  {
    v3 = CExperienceManagerAnimationHelper::End((CActionCenterExperienceManager *)((char *)this + 248));
    if ( v3 >= 0 )
      goto LABEL_9;
    v4 = 1850LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_9:
  v5 = *((_DWORD *)this + 58);
  if ( !v5 )
  {
    v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,std::nullptr_t>(
           (char *)this + 584,
           (char *)this - 104);
    if ( v6 >= 0 )
      goto LABEL_16;
    v7 = 1857LL;
    goto LABEL_15;
  }
  if ( v5 == 4 )
  {
    v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,std::nullptr_t>(
           (char *)this + 632,
           (char *)this - 104);
    if ( v6 < 0 )
    {
      v7 = 1861LL;
LABEL_15:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    }
  }
LABEL_16:
  v8 = CActionCenterExperienceManager::RaiseApplicationEvent(
         (CActionCenterExperienceManager *)((char *)this - 104),
         L"WindowVisibilityChanged",
         1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( (*((_DWORD *)this + 58) & 0xFFFFFFFB) != 0 )
      return 0LL;
    v11 = CActionCenterExperienceManager::RegisterWithLightDismiss((CActionCenterExperienceManager *)((char *)this - 104));
    v12 = v11;
    if ( v11 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x74D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x749,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
