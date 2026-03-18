/*
 * XREFs of ViTargetIncrementCounter @ 0x14082234C
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool @ 0x1408130C0 (VerifierExAllocatePool.c)
 *     VfCheckImageCompliance @ 0x140814F64 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140815260 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140815308 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1408153AC (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x14081F6B0 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViFaultsInjectionNotification @ 0x14082549C (ViFaultsInjectionNotification.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140825C04 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140825CDC (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140825DC4 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140825EC4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140825F80 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x140826510 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140826CC0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140826D40 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140826DD0 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x140827090 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140827120 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1408271B0 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1408274B0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x140827980 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 *     VfDriverIsKernelImageAddress @ 0x140815EBC (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x1408225F8 (ViTargetUpdateTreeAllowed.c)
 */

char __fastcall ViTargetIncrementCounter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int updated; // eax
  unsigned __int64 v4; // r8
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)a2;
  updated = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( updated )
  {
    updated = VfDriverIsKernelImageAddress(v4);
    if ( !updated )
    {
      VfAvlInitializeLockContext((__int64)v10, 1);
      v7 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v10, v6, v5);
      if ( v7 )
      {
        v8 = v7[7];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      LOBYTE(updated) = VfAvlCleanupLockContext((__int64)v10);
    }
  }
  return updated;
}
