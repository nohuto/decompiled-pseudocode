/*
 * XREFs of MiQueueWorkingSetRequest @ 0x14016D3A0
 * Callers:
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14016D378 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1402597C0 (MiEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14025AAD8 (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

void __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v4; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 6768);
  if ( v2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
    v4 = *(_DWORD *)(v2 + 40);
    if ( !v4 )
    {
      KeResetEvent((PRKEVENT)v2);
      v4 = *(_DWORD *)(v2 + 40);
    }
    *(_DWORD *)(v2 + 40) = a2 | v4;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    KeSetEvent((PRKEVENT)(v2 + 104), 0, 0);
    KeWaitForSingleObject((PVOID)v2, WrVirtualMemory, 0, 0, 0LL);
  }
}
