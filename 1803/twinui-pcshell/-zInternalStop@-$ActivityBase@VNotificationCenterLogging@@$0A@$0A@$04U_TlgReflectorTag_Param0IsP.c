/*
 * XREFs of ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007CC5C
 * Callers:
 *     ?StopActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007CD90 (-StopActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ?StopActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007D540 (-StopActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?StopActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007D980 (-StopActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?StopActivity@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007E830 (-StopActivity@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007E960 (-StopActivity@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?StopActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007EBA0 (-StopActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?StopActivity@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007EDE0 (-StopActivity@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@ME.c)
 *     ?StopActivity@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007F020 (-StopActivity@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@M.c)
 *     ?StopActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x180155980 (-StopActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ?StopActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x180155CE0 (-StopActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?StopActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x1801679E0 (-StopActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?StopActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x180167D40 (-StopActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?StopActivity@EM_DisplaySettingsChangeActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x1801680A0 (-StopActivity@EM_DisplaySettingsChangeActivity@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?StopActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x180168750 (-StopActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAX.c)
 *     ?StopActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x180168AB0 (-StopActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ?StopActivity@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x180169160 (-StopActivity@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  PSRWLOCK *p_SRWLock; // rax
  char v4; // bl
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v6; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  v2 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v2 )
  {
    v2 += 31;
    AcquireSRWLockExclusive(v2);
    p_SRWLock = &v6;
    v6 = v2;
    v4 = 1;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v4 = 2;
  }
  *p_SRWLock = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 && v6 )
    ReleaseSRWLockExclusive(v6);
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
