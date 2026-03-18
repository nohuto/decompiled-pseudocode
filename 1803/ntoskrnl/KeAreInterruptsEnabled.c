/*
 * XREFs of KeAreInterruptsEnabled @ 0x1400F0B30
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     MiRetryNonPagedAllocation @ 0x1400F0A50 (MiRetryNonPagedAllocation.c)
 *     KeAreAllApcsDisabled @ 0x1400F0AD0 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiTrimAllSystemPagableMemory @ 0x14025A32C (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x14081D4D4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14081D6C4 (VfBeforeCallDriver.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140825C04 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x140826710 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1408267D0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x140826A80 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140826B10 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKfRaiseIrql @ 0x140827090 (VerifierKfRaiseIrql.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1408274B0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14082782C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x140827980 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x140829524 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
