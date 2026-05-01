/*
 * XREFs of ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007F4BC
 * Callers:
 *     ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18007F6E8 (--1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180153708 (--1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180155820 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?SetStopResult@?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180074418 (-SetStopResult@-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StopActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18007F540 (-StopActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEA.c)
 *     ?reset@?$shared_object@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800961D8 (-reset@-$shared_object@V-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTa_ea_1800961D8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *this)
{
  _QWORD *v1; // rdi
  _DWORD *v3; // rcx
  char v4; // si
  int v5; // edx
  void (__fastcall *v6)(NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *__hidden); // rax
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)((char *)this + 304);
  if ( !*((_QWORD *)this + 38) )
    goto LABEL_2;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v4 )
  {
LABEL_2:
    v3 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v3 == 1 )
    {
      v5 = -2147024322;
      if ( (int)v3[21] < 0 )
        v5 = v3[21];
      wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        (__int64)v3,
        v5,
        (int *)SRWLock);
      v6 = *(void (__fastcall **)(NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *__hidden))(*(_QWORD *)this + 8LL);
      if ( v6 == NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StopActivity )
        NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StopActivity(this);
      else
        v6(this);
    }
  }
}
