/*
 * XREFs of ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B480
 * Callers:
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A07C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006C0CC (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z @ 0x180076630 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180076630.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007BF04 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18007ECD0 (-StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ??1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18007EDB4 (--1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086230 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CAX_NW.c)
 *     ?IsHighContrast@@YAHXZ @ 0x180095C04 (-IsHighContrast@@YAHXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnViewUncloaking(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rbx
  HSTRING v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  LANGID ThreadUILanguage; // ax
  bool v10; // bl
  _BOOL8 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  int v19; // [rsp+20h] [rbp-178h]
  _QWORD v20[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    v20,
    "EM_ViewUncloakingActivity");
  v20[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v20);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4);
  v6 = (HSTRING)*((_QWORD *)this + 38);
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x3C9,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        v8);
  }
  ThreadUILanguage = GetThreadUILanguage();
  v10 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
  v11 = (unsigned int)IsHighContrast() != 0;
  v12 = v10 ? 4 : 1;
  v13 = v12 | 2;
  if ( !*((_BYTE *)this + 313) )
    v13 = v12;
  v14 = CSingleViewShellExperience::ShowBorder((__int64)this + 16, v13, v11, 0LL, 0LL);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3D9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v14,
      v19);
  v15 = CActionCenterExperienceManager::RegisterWithLightDismiss((CActionCenterExperienceManager *)((char *)this - 104));
  v16 = retaddr;
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3DA,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v15,
      v19);
  wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::ReportUsageToService(v16);
  v17 = CExperienceManagerAnimationHelper::Begin((__int64)this + 232, a2[3], 2097194);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3E0,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v17,
      v19);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20, 0LL);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v20);
  return 0LL;
}
