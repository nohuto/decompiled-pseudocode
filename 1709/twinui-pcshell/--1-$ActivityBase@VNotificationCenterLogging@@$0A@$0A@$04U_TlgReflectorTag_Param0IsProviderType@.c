/*
 * XREFs of ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094B10
 * Callers:
 *     ??1EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180091034 (--1EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180091584 (--1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ??1EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180091B24 (--1EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@.c)
 *     ??1EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180092084 (--1EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180092604 (--1EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180092B54 (--1EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 *     ??1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180093094 (--1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1800935D4 (--1EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?OnCriticalNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096684 (-OnCriticalNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096878 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097220 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180097B4C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180097FD0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800985E0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ChangeDisplayContext@CActionCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18009A4EC (-ChangeDisplayContext@CActionCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shel.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180094C6C (--1-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
