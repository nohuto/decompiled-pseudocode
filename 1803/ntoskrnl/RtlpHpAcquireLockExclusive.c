/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x1400AC764
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x1400AB270 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpVsContextFree @ 0x1400AB428 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x1400AB668 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x1400ABBE8 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextAllocate @ 0x1400ABD80 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1400AC488 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpFixedVsFree @ 0x1400AC960 (RtlpHpFixedVsFree.c)
 *     RtlpHpHeapExtendContext @ 0x1402953E0 (RtlpHpHeapExtendContext.c)
 *     RtlpHpVaMgrAlloc @ 0x140296050 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402969E4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegLockAcquire @ 0x14029829C (RtlpHpSegLockAcquire.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140299490 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140299878 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140299C08 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14029BC78 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14029C8C8 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x14029CDCC (RtlpHpLfhSubsegmentLockOwner.c)
 *     RtlpHpLargeLockAcquire @ 0x14029ED0C (RtlpHpLargeLockAcquire.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

KIRQL __fastcall RtlpHpAcquireLockExclusive(volatile LONG *a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( (_DWORD)a2 )
    return ExAcquireSpinLockExclusive(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, a2);
  return -1;
}
