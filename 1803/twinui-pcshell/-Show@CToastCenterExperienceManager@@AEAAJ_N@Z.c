/*
 * XREFs of ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801667D4
 * Callers:
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801640F0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 * Callees:
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x1800697EC (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??1EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801623FC (--1EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?NoOp_AlreadyVisible@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801637FC (-NoOp_AlreadyVisible@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180166908 (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowingInHolographic@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180166AA8 (-ShowingInHolographic@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?StartActivity@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAX_N@Z @ 0x180167448 (-StartActivity@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAX_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Show(CToastCenterExperienceManager *this, bool a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v8,
    (__int64)"EM_ShowActivity");
  v8[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity *)v8,
    a2);
  if ( *((_DWORD *)this + 34) == 2 )
  {
    if ( a2 )
      CSingleViewShellExperience::BringToForeground((CToastCenterExperienceManager *)((char *)this + 96));
    else
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::NoOp_AlreadyVisible((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity *)v8);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 68)
    || *((_DWORD *)this + 138) != 1
    || (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::ShowingInHolographic((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity *)v8),
        v4 = CToastCenterExperienceManager::ShowInHolographic(this),
        v5 = v4,
        v4 >= 0) )
  {
    v4 = CSingleViewShellExperience::Show(
           (__int64)this + 96,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)!a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 699LL;
      goto LABEL_8;
    }
LABEL_12:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8, 0);
    v5 = 0;
    goto LABEL_13;
  }
  v6 = 692LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_13:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity::~EM_ShowActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowActivity *)v8);
  return v5;
}
