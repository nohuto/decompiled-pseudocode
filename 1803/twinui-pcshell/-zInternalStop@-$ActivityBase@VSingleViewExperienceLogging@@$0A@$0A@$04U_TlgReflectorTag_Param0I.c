/*
 * XREFs of ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006E38C
 * Callers:
 *     ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18006D94C (-Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18006DC2C (-Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18006E830 (-StopActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18006EA20 (-StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18006F490 (-StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18006F698 (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18006F894 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StopActivity@LaunchCompleted@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180070D60 (-StopActivity@LaunchCompleted@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180071290 (-StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18008AD30 (-StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x18008BBB0 (-StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180093F80 (-StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1803080D0 (-StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180308420 (-StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180308770 (-StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180308AC0 (-StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180019194 (-LockExclusive@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
