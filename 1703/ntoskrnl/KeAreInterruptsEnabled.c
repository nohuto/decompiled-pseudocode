/*
 * XREFs of KeAreInterruptsEnabled @ 0x1400E2B84
 * Callers:
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     KeAreAllApcsDisabled @ 0x1400E2F30 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiRetryNonPagedAllocation @ 0x14010EB88 (MiRetryNonPagedAllocation.c)
 *     MiTrimAllSystemPagableMemory @ 0x140215758 (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x14076E534 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14076E700 (VfBeforeCallDriver.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1407778E0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140777970 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140778270 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407786F4 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x14077A280 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
