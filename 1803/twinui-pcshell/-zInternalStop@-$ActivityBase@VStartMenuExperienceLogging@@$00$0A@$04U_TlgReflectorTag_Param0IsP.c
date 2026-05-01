/*
 * XREFs of ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800F6804
 * Callers:
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x18000DE54 (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x1800180D0 (-StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@.c)
 *     ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x180073DDC (-Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z.c)
 *     ?StopActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800740C0 (-StopActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ @ 0x1800762E0 (-StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetImmersiveMonitor@StartWindowTelemetry@@MEAAXXZ @ 0x180078590 (-StopActivity@GetImmersiveMonitor@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AppFrameHostStartup@CAppManagerTelemetry@@MEAAXXZ @ 0x18012ADB0 (-StopActivity@AppFrameHostStartup@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@MEAAXXZ @ 0x180137550 (-StopActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180187B40 (-StopActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@MEAAXX.c)
 *     ?StopActivity@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@MEAAXXZ @ 0x180187EA0 (-StopActivity@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PerformDelayedInitialization@StartWindowTelemetry@@MEAAXXZ @ 0x180229480 (-StopActivity@PerformDelayedInitialization@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SubscribeToServices@StartWindowTelemetry@@MEAAXXZ @ 0x1802297E0 (-StopActivity@SubscribeToServices@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UnsubscribeFromServices@StartWindowTelemetry@@MEAAXXZ @ 0x180229B40 (-StopActivity@UnsubscribeFromServices@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x180232324 (-Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z.c)
 *     ?StopActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ @ 0x1802326D0 (-StopActivity@ActivateHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CreateHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ @ 0x180232A30 (-StopActivity@CreateHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ @ 0x180232D90 (-StopActivity@DestroyHoldingTankWindow@StartWindowTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
