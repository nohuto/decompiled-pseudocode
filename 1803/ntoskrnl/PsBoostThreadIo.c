/*
 * XREFs of PsBoostThreadIo @ 0x1400FE2B0
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140042A4C (CcApplyLowIoPriorityToThread.c)
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14009B00C (CcBoostLowPriorityWorkerThread.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     CcAcquireByteRangeForWrite @ 0x1400E0910 (CcAcquireByteRangeForWrite.c)
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExDeferredFreePool @ 0x1402EA030 (ExDeferredFreePool.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     CmpReleaseWriteQueue @ 0x14049A59C (CmpReleaseWriteQueue.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     CmpBoostActiveHiveWriter @ 0x140566B44 (CmpBoostActiveHiveWriter.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall PsBoostThreadIo(__int64 a1, __int64 a2)
{
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
