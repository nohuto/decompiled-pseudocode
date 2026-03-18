/*
 * XREFs of MiQueueWorkingSetRequest @ 0x14021DD3C
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14021CEB8 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x14021D424 (MiEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14021EC88 (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

NTSTATUS __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 5680);
  if ( v2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
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
