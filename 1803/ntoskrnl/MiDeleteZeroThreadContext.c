/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14017B574
 * Callers:
 *     MiZeroNodePages @ 0x14016FC80 (MiZeroNodePages.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiZeroLargePageThread @ 0x14017B500 (MiZeroLargePageThread.c)
 *     MiInitializePartitionThreads @ 0x14074D720 (MiInitializePartitionThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraThreadContext @ 0x14013A5C4 (MiDeleteUltraThreadContext.c)
 *     MiDecrementHugeContext @ 0x14017C0A4 (MiDecrementHugeContext.c)
 *     MiReleaseLargeZeroingVa @ 0x140266E48 (MiReleaseLargeZeroingVa.c)
 */

__int64 __fastcall MiDeleteZeroThreadContext(__int64 a1)
{
  unsigned int *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 210) )
  {
    v2 = *(unsigned int **)(a1 + 216);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(1984LL * v2[46] + qword_1403CDF50 + 1904), &LockHandle);
      if ( (unsigned int)MiDecrementHugeContext(v2) )
        MiReleaseLargeZeroingVa(a1, 1LL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
  }
  result = MiDeleteUltraThreadContext(a1 + 80);
  v4 = *(_QWORD *)(a1 + 224);
  if ( v4 )
  {
    result = *(unsigned int *)(v4 + 52);
    if ( (_DWORD)result )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 52), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return KeSignalGate(v4, 1);
    }
  }
  return result;
}
