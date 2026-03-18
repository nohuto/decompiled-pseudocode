/*
 * XREFs of MiAllocatePartitionId @ 0x1406B607C
 * Callers:
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiExpandPartitionIds @ 0x1406BCBCC (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ClearBitsAndSet; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C8B8, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_14036C8D8, 1u, 0);
  if ( ClearBitsAndSet == 0xFFFFFFFFLL )
  {
    while ( (unsigned int)MiExpandPartitionIds() )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(qword_14036C8D8, 1u, 0);
      if ( ClearBitsAndSet != 0xFFFFFFFFLL )
        goto LABEL_4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C8B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C8B8);
    KeAbPostRelease((ULONG_PTR)&qword_14036C8B8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  else
  {
LABEL_4:
    byte_14036C90C = 1;
    *(_QWORD *)(qword_14036C8F8 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C8B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C8B8);
    KeAbPostRelease((ULONG_PTR)&qword_14036C8B8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned __int16)ClearBitsAndSet;
  }
}
