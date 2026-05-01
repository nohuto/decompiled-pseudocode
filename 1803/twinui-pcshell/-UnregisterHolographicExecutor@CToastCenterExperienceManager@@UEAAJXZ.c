/*
 * XREFs of ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x180169E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180161C24 (--0-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18016244C (--1EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801626B8 (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 *     ?StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801676EC (-StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180167838 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::UnregisterHolographicExecutor(CToastCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"EM_UnregisterHolographicExecutor");
  v5[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor *)v5);
  if ( !*((_QWORD *)this + 61) )
    goto LABEL_5;
  RtlUnsubscribeWnfNotificationWaitForCompletion(*((_QWORD *)this + 41));
  *((_QWORD *)this + 41) = 0LL;
  v2 = CToastCenterExperienceManager::ChangeDisplayContext((__int64)this - 56, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 63);
LABEL_5:
    wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5);
    v3 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5B8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_6:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor::~EM_UnregisterHolographicExecutor((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_UnregisterHolographicExecutor *)v5);
  return v3;
}
