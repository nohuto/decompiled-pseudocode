/*
 * XREFs of ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800F6278
 * Callers:
 *     ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x18000E8F0 (-StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AltF4CloseRequested@CAppManagerTelemetry@@MEAAXXZ @ 0x18010BDE0 (-StopActivity@AltF4CloseRequested@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x180124040 (-StopActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@MEAAXXZ @ 0x18012B100 (-StopActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800106C4 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
