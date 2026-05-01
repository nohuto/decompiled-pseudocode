/*
 * XREFs of ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B1780
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C834 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x1800B2078 (-GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801D0D98 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1801DB1A4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1801DB1A4.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewUncloaking(
        CPeopleBarJumpViewExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v3; // rax
  HSTRING v4; // rcx
  HWND v5; // rbx
  HRESULT v6; // eax
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int v16; // ecx
  int v17; // ecx
  int MonitorWorkArea; // eax
  __int64 v19; // rdx
  INT32 result; // [rsp+40h] [rbp-30h] BYREF
  __int16 v22; // [rsp+44h] [rbp-2Ch]
  int v23; // [rsp+48h] [rbp-28h] BYREF
  __int16 v24; // [rsp+4Ch] [rbp-24h]
  struct tagRECT v25; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v3 = ExperienceManagerUtils::WindowFromViewWrapper(
         a2[3],
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  v4 = (HSTRING)*((_QWORD *)this + 38);
  result = 0;
  v5 = v3;
  v6 = WindowsCompareStringOrdinal(v4, 0LL, &result);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    JUMPOUT(0x1800B195DLL);
  }
  if ( result )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 38), 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xB6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        v8);
  }
  v9 = *((_DWORD *)this + 63);
  v10 = 15LL;
  if ( v9 )
  {
    v11 = v9 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          v10 = 7LL;
      }
      else
      {
        v10 = 11LL;
      }
    }
    else
    {
      v10 = 13LL;
    }
  }
  else
  {
    v10 = 14LL;
  }
  v13 = CSingleViewShellExperience::ShowBorder((char *)this + 8, v10, 1LL, 0LL, 0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  v14 = *((_DWORD *)this + 63);
  v15 = 92;
  if ( v14 )
  {
    v16 = v14 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
          v15 = 90;
      }
      else
      {
        v15 = 88;
      }
    }
    else
    {
      v15 = 91;
    }
  }
  else
  {
    v15 = 89;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
  LOBYTE(v22) = 0;
  v23 = 0;
  v24 = v22;
  result = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
    0x7A7F42u,
    (const struct FEATURE_LOGGED_TRAITS *)&v23,
    0,
    3);
  MonitorWorkArea = CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea(
                      (CPeopleBarJumpViewExperienceManager *)((char *)this - 48),
                      &v25);
  if ( MonitorWorkArea < 0 )
  {
    v19 = 206LL;
LABEL_29:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorWorkArea);
    return 0LL;
  }
  MonitorWorkArea = CExperienceManagerAnimationHelper::Begin((char *)this + 312, *((_QWORD *)this + 4), v15 | 0x200000u);
  if ( MonitorWorkArea < 0 )
  {
    v19 = 209LL;
    goto LABEL_29;
  }
  return 0LL;
}
