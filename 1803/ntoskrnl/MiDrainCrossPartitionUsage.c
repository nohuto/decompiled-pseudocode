/*
 * XREFs of MiDrainCrossPartitionUsage @ 0x14026EF90
 * Callers:
 *     MiDeletePartition @ 0x14025B0C0 (MiDeletePartition.c)
 * Callees:
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140006980 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     MiDecrementControlAreaCount @ 0x14004B160 (MiDecrementControlAreaCount.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementCloneHeaderCount @ 0x1400ADB28 (MiDecrementCloneHeaderCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     CcExitPartition @ 0x140221098 (CcExitPartition.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x14024F768 (MiMakeUnusedSegmentDeleteOnClose.c)
 */

void __fastcall MiDrainCrossPartitionUsage(__int64 a1)
{
  KIRQL v2; // si
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v5; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  LOWORD(Object.Header.Lock) = 0;
  Object.Header.SignalState = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.Size = 6;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  KeAcquireInStackQueuedSpinLock(&qword_1403CBD40, &LockHandle);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
  *(_DWORD *)(a1 + 4) |= 1u;
  *(_QWORD *)(a1 + 2048) = &Object;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1296));
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1288));
  MiMakeUnusedSegmentDeleteOnClose(a1);
  CcExitPartition(*(_QWORD **)(a1 + 168), 0);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v3 = (_QWORD *)(a1 + 1816);
  v4 = 0LL;
  while ( !*v3 )
  {
    ++v4;
    v3 += 4;
    if ( v4 >= 7 )
      goto LABEL_6;
  }
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2040) = &Object;
LABEL_6:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
  __writecr8(v2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2056) = &Object;
  MiDecrementCloneHeaderCount(a1);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v5 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2064);
  if ( v5 )
    ExWaitForRundownProtectionReleaseCacheAware(v5);
}
