/*
 * XREFs of MiDeleteZeroThreadContext @ 0x1401556D4
 * Callers:
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x1401370F0 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x140155660 (MiZeroLargePageThread.c)
 *     MiInitializePartitionThreads @ 0x1406E2988 (MiInitializePartitionThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraThreadContext @ 0x1400CF060 (MiDeleteUltraThreadContext.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     MiDecrementHugeContext @ 0x14015578C (MiDecrementHugeContext.c)
 */

void __fastcall MiDeleteZeroThreadContext(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 210) )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v2 = *(_QWORD *)(a1 + 216);
    if ( v2 )
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(qword_14038A0D0 + 8176 + 8256LL * *(unsigned int *)(v2 + 184)),
        &LockHandle);
      MiDecrementHugeContext(a1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
  }
  MiDeleteUltraThreadContext(a1 + 80);
  v3 = *(_QWORD *)(a1 + 224);
  if ( v3 && *(_DWORD *)(v3 + 52) && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 52), 0xFFFFFFFF) == 1 )
    KeSignalGate(v3, 1u);
}
