/*
 * XREFs of ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801626B8
 * Callers:
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x180164088 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x180169E90 (-UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CA54 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007CAF0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXAEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801619F4 (--$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_Disp.c)
 *     ??1EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18016230C (--1EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180162B68 (-DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@NotificationCenterTelemetry@.c)
 *     ?DisplayContextChangedToMonitor@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180162C58 (-DisplayContextChangedToMonitor@EM_DisplayContextChanged@NotificationCenterTelemetry@Notificatio.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180162FFC (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ @ 0x180163604 (-MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180163688 (-MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180166908 (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180166CD0 (-StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::ChangeDisplayContext(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-168h] BYREF
  __int64 v9; // [rsp+28h] [rbp-160h]
  _QWORD v10[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v9 = -2LL;
  v8 = a2;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v10,
    (__int64)"EM_DisplayContextChanged");
  v10[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v10);
  if ( !*(_QWORD *)(a1 + 120) || !*(_QWORD *)(a1 + 560) || !*(_QWORD *)(a1 + 544) || *(_DWORD *)(a1 + 552) == a2 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::NoChangeToDisplayContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext &>(
      (__int64)v10,
      &v8);
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 552) = a2;
  if ( a2 != 1 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToMonitor((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v10);
    v4 = CToastCenterExperienceManager::MoveToastCenterViewToDesktop((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1422LL;
      goto LABEL_15;
    }
    v4 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1424LL;
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToHeadMountedDisplay((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v10);
  v4 = CToastCenterExperienceManager::MoveToastCenterViewToHolographic((CToastCenterExperienceManager *)a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 136) == 2 )
    {
      v4 = CToastCenterExperienceManager::ShowInHolographic((CToastCenterExperienceManager *)a1);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1415LL;
        goto LABEL_15;
      }
    }
LABEL_17:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v10, 0);
    v5 = 0;
    goto LABEL_18;
  }
  v6 = 1410LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::~EM_DisplayContextChanged((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v10);
  return v5;
}
