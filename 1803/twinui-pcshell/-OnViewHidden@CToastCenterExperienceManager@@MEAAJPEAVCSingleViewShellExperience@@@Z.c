/*
 * XREFs of ?OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180164F90
 * Callers:
 *     <none>
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180076654 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18007AE68 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18007F150 (-StartActivity@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ??1EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18007F234 (--1EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086230 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CAX_NW.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x1801652DC (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewHidden(
        struct _TP_TIMER **this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  _QWORD v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v8,
    (__int64)"EM_ViewHiddenActivity");
  v8[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewHiddenActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewHiddenActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewHiddenActivity *)v8);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 52,
    0LL);
  wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::ReportUsageToService(v4, v3, v5);
  v6 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(this + 31));
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1282LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  CToastCenterExperienceManager::OnVisibilityChanged((CToastCenterExperienceManager *)(this - 10));
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewHiddenActivity::~EM_ViewHiddenActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewHiddenActivity *)v8);
  return 0LL;
}
