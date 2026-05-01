/*
 * XREFs of ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180094954 (-SetZBand@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180096474 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800965B8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097AAC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801816D8 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z @ 0x18018C040 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewUncloaking(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v4; // rdi
  int v5; // eax
  HSTRING v6; // rcx
  HRESULT v7; // eax
  const WCHAR *StringRawBuffer; // rax
  const char *v9; // r9
  LSTATUS ValueW; // eax
  signed int v11; // ecx
  int v12; // r14d
  LANGID ThreadUILanguage; // ax
  bool v14; // di
  unsigned int v15; // esi
  DWORD v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int16 v22; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  INT32 result; // [rsp+90h] [rbp+40h] BYREF
  __int16 v25; // [rsp+94h] [rbp+44h]
  DWORD pcbData; // [rsp+98h] [rbp+48h] BYREF
  __int16 v27; // [rsp+9Ch] [rbp+4Ch]

  v4 = ExperienceManagerUtils::WindowFromViewWrapper(
         a2[3],
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  v5 = CActionCenterExperienceManager::SetZBand((__int64)this - 96, *((_DWORD *)this + 58));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x60D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = (HSTRING)*((_QWORD *)this + 41);
  result = 0;
  v7 = WindowsCompareStringOrdinal(v6, 0LL, &result);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    JUMPOUT(0x180094DF3LL);
  }
  if ( result )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 41), 0LL);
    if ( !SetWindowTextW(v4, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x611,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        v9);
  }
  if ( *((_DWORD *)this + 58) )
  {
    v18 = CSingleViewShellExperience::ShowBorder((char *)this + 16, 0LL, 0LL, 0LL, 0LL);
    if ( v18 >= 0 )
      goto LABEL_31;
    v19 = 1584LL;
    goto LABEL_30;
  }
  result = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"EnableTransparency",
             0x10u,
             0LL,
             &result,
             &pcbData);
  v11 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v11 = ValueW;
  if ( v11 < 0 || result )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
    LOBYTE(v22) = 0;
    pcbData = 0;
    v27 = v22;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
      0x7A7F42u,
      (const struct FEATURE_LOGGED_TRAITS *)&pcbData,
      0,
      3);
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  ThreadUILanguage = GetThreadUILanguage();
  v14 = 0;
  if ( GetLocaleInfoW(ThreadUILanguage, 0x20000070u, (LPWSTR)&pcbData, 2) > 0 )
    v14 = pcbData == 1;
  v15 = v12 ^ 1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetCachedFeatureEnabledState();
  LOBYTE(v22) = 0;
  pcbData = 0;
  v27 = v22;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data,
    0x831913u,
    (const struct FEATURE_LOGGED_TRAITS *)&pcbData,
    0,
    3);
  v16 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( v12 )
    v15 = 3;
  v17 = v14 ? 4 : 1;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v16 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v16 == 119 )
    v17 |= 2u;
  v18 = CSingleViewShellExperience::ShowBorder((char *)this + 16, v17, v15, 0LL, 0LL);
  if ( v18 < 0 )
  {
    v19 = 1580LL;
LABEL_30:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
  }
LABEL_31:
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetCachedFeatureEnabledState();
  LOBYTE(v22) = 0;
  result = 0;
  v25 = v22;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data,
    0x831913u,
    (const struct FEATURE_LOGGED_TRAITS *)&result,
    0,
    3);
  v20 = CExperienceManagerAnimationHelper::Begin((char *)this + 240, a2[3], 2097194LL);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x637,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
  return 0LL;
}
