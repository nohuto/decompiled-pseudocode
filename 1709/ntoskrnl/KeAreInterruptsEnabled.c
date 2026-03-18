/*
 * XREFs of KeAreInterruptsEnabled @ 0x140088EB8
 * Callers:
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     KeAreAllApcsDisabled @ 0x1400890C0 (KeAreAllApcsDisabled.c)
 *     MiRetryNonPagedAllocation @ 0x140089300 (MiRetryNonPagedAllocation.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     MiTrimAllSystemPagableMemory @ 0x14021E570 (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x1407B0324 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1407B0514 (VfBeforeCallDriver.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1407B8974 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1407B9430 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1407B94F0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1407B97A0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1407B9830 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1407BA150 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407BA5E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x1407BC164 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
