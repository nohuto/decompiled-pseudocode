/*
 * XREFs of ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180010140
 * Callers:
 *     ?StopActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x18000CE70 (-StopActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ @ 0x18000D420 (-StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ @ 0x18000D610 (-StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ @ 0x18000D800 (-StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x18000D9F0 (-StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ @ 0x18000E2B0 (-StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x18000E700 (-StopActivity@PresentWindow@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetViewPosition@CImmersiveAppTelemetry@@MEAAXXZ @ 0x18000F810 (-StopActivity@SetViewPosition@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnShellHookMessage@IamTraceLogging@@MEAAXXZ @ 0x1800102B0 (-StopActivity@OnShellHookMessage@IamTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ @ 0x1800104C0 (-StopActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CloseHungApp@CAppManagerTelemetry@@MEAAXXZ @ 0x18010C130 (-StopActivity@CloseHungApp@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@MEAAXXZ @ 0x18010C490 (-StopActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ConsolidateView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x180123100 (-StopActivity@ConsolidateView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x180124390 (-StopActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1801246F0 (-StopActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SplitView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x180124A50 (-StopActivity@SplitView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ @ 0x180124DB0 (-StopActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowProvided@CAppViewManagerTelemetry@@MEAAXXZ @ 0x180125110 (-StopActivity@WindowProvided@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@DeleteWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180130D70 (-StopActivity@DeleteWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x1801310D0 (-StopActivity@SetApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180131430 (-StopActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UnpresentWindow@CFramePresentationTelemetry@@MEAAXXZ @ 0x1801378A0 (-StopActivity@UnpresentWindow@CFramePresentationTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v3);
  v2 = v3;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
