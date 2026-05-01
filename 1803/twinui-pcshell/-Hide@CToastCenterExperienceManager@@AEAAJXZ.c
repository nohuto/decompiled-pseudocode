/*
 * XREFs of ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x18007E13C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::Invoke @ 0x18007E0B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18007E0B0.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801640F0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180164B38 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?NoOp_AlreadyHidden@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18007E680 (-NoOp_AlreadyHidden@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?StartActivity@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18007E71C (-StartActivity@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXX.c)
 *     ??1EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18007E800 (--1EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180162FFC (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?HidingInHolographic@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180163110 (-HidingInHolographic@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Hide(CToastCenterExperienceManager *this)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rdx
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v6,
    (__int64)"EM_HideActivity");
  v6[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *)v6);
  if ( *((_DWORD *)this + 34) == 2 )
  {
    if ( *((_QWORD *)this + 68)
      && (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::HidingInHolographic((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *)v6),
          v4 = CToastCenterExperienceManager::HideInHolographic(this),
          v2 = v4,
          v4 < 0) )
    {
      v5 = 727LL;
    }
    else
    {
      v4 = CSingleViewShellExperience::Hide((__int64)this + 96, 0LL);
      v2 = v4;
      if ( v4 >= 0 )
        goto LABEL_3;
      v5 = 730LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      -2);
    goto LABEL_4;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::NoOp_AlreadyHidden((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *)v6);
LABEL_3:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, 0);
  v2 = 0;
LABEL_4:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::~EM_HideActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *)v6);
  return v2;
}
