/*
 * XREFs of ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004AC8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18008CA2C (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x1800997C0 (-SetZBand@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C6EC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActionCenterAcrylicBackground@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C97C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ActionCenterAcrylicBackgroun.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801D0D98 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z @ 0x1801DB16C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnViewUncloaking(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v4; // rdi
  int v5; // eax
  HRESULT v6; // eax
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  LANGID ThreadUILanguage; // ax
  bool v12; // di
  wil::details_abi *v13; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v15; // r8
  unsigned int v16; // edi
  DWORD v17; // eax
  ExperienceManagerUtils *v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int16 v22; // [rsp+34h] [rbp-75h]
  __int16 v23; // [rsp+3Ch] [rbp-6Dh]
  __int16 v24; // [rsp+44h] [rbp-65h]
  int v25; // [rsp+48h] [rbp-61h] BYREF
  __int16 v26; // [rsp+4Ch] [rbp-5Dh]
  int v27; // [rsp+50h] [rbp-59h] BYREF
  __int16 v28; // [rsp+54h] [rbp-55h]
  int v29; // [rsp+58h] [rbp-51h] BYREF
  __int16 v30; // [rsp+5Ch] [rbp-4Dh]
  unsigned int *v31; // [rsp+60h] [rbp-49h] BYREF
  void **v32; // [rsp+68h] [rbp-41h] BYREF
  struct wil::details_abi::ThreadLocalData *v33; // [rsp+70h] [rbp-39h]
  int v34; // [rsp+78h] [rbp-31h]
  int v35; // [rsp+7Ch] [rbp-2Dh]
  _QWORD *v36; // [rsp+80h] [rbp-29h]
  int v37; // [rsp+88h] [rbp-21h]
  _QWORD v38[2]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v39[3]; // [rsp+A0h] [rbp-9h] BYREF
  __int16 v40; // [rsp+B8h] [rbp+Fh]
  __int64 v41; // [rsp+C0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  INT32 result; // [rsp+110h] [rbp+67h] BYREF
  int LCData; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v45; // [rsp+120h] [rbp+77h] BYREF
  int v46; // [rsp+128h] [rbp+7Fh]

  v41 = -2LL;
  v4 = ExperienceManagerUtils::WindowFromViewWrapper(
         a2[3],
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  v5 = CActionCenterExperienceManager::SetZBand((__int64)this - 104, *((_DWORD *)this + 58));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6E2,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  result = 0;
  v6 = WindowsCompareStringOrdinal(*((HSTRING *)this + 51), 0LL, &result);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  if ( result )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 51), 0LL);
    if ( !SetWindowTextW(v4, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x6E6,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        v8);
  }
  if ( (*((_DWORD *)this + 58) & 0xFFFFFFFB) != 0 )
  {
    v9 = CSingleViewShellExperience::ShowBorder((char *)this + 16, 0LL, 0LL, 0LL, 0LL);
    if ( v9 >= 0 )
      goto LABEL_28;
    v10 = 1809LL;
    goto LABEL_27;
  }
  v46 = 0;
  ThreadUILanguage = GetThreadUILanguage();
  v12 = 0;
  if ( GetLocaleInfoW(ThreadUILanguage, 0x20000070u, (LPWSTR)&LCData, 2) > 0 )
    v12 = LCData == 1;
  v31 = &v45;
  v39[0] = retaddr;
  v39[1] = "pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp";
  v39[2] = 0LL;
  v40 = 1775;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ActionCenterAcrylicBackground>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ActionCenterAcrylicBackground>::GetCachedFeatureEnabledState();
  LOBYTE(v22) = 3;
  v25 = 2;
  v26 = v22;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_ActionCenterAcrylicBackground>::GetFeaturePropertyCache'::`2'::data,
    0xAFF790u,
    (const struct FEATURE_LOGGED_TRAITS *)&v25,
    1,
    3);
  v38[0] = off_180201438;
  v38[1] = &v31;
  v32 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v13) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v13);
  v33 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v35 = *((_DWORD *)ThreadLocalDataCache + 4);
    v34 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v34;
  }
  v36 = v39;
  v37 = 11532176;
  wil::details::RunFunctor((wil::details *)v38, (struct wil::details::IFunctor *)&v32, v15);
  if ( v33 )
    *((_DWORD *)v33 + 4) = v35;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ActionCenterAcrylicBackground>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ActionCenterAcrylicBackground>::GetCachedFeatureEnabledState();
  LOBYTE(v23) = 3;
  v27 = 2;
  v28 = v23;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_ActionCenterAcrylicBackground>::GetFeaturePropertyCache'::`2'::data,
    0xAFF790u,
    (const struct FEATURE_LOGGED_TRAITS *)&v27,
    1,
    3);
  v16 = v12 ? 4 : 1;
  v17 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v17 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v17 == 119 || *((_DWORD *)this + 58) == 4 )
    v16 |= 2u;
  v9 = CSingleViewShellExperience::ShowBorder((char *)this + 16, v16, v45, 0LL, 0LL);
  if ( v9 < 0 )
  {
    v10 = 1805LL;
LABEL_27:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  }
LABEL_28:
  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetCachedFeatureEnabledState();
  LOBYTE(v24) = 0;
  v29 = 0;
  v30 = v24;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetFeaturePropertyCache'::`2'::data,
    0x831913u,
    (const struct FEATURE_LOGGED_TRAITS *)&v29,
    0,
    3);
  v18 = a2[3];
  if ( *((_DWORD *)this + 58) == 4 )
  {
    v19 = CExperienceManagerAnimationHelper::Begin((char *)this + 312, v18, 2097231LL);
    if ( v19 < 0 )
    {
      v20 = 1819LL;
LABEL_35:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
    }
  }
  else
  {
    v19 = CExperienceManagerAnimationHelper::Begin((char *)this + 248, v18, 2097194LL);
    if ( v19 < 0 )
    {
      v20 = 1825LL;
      goto LABEL_35;
    }
  }
  return 0LL;
}
