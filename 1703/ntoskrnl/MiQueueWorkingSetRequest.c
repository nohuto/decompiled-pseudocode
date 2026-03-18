/*
 * XREFs of MiQueueWorkingSetRequest @ 0x1401400FC
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1401400E0 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x140214E74 (MiEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x140215BB0 (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 5544);
  if ( v2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
    if ( !*(_DWORD *)(v2 + 40) )
      KeResetEvent((PRKEVENT)v2);
    *(_DWORD *)(v2 + 40) |= a2;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    KeSetEvent((PRKEVENT)(v2 + 104), 0, 0);
    return KeWaitForSingleObject((PVOID)v2, WrVirtualMemory, 0, 0, 0LL);
  }
  return result;
}
