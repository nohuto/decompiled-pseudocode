/*
 * XREFs of MiAllocatePartitionId @ 0x14074D568
 * Callers:
 *     MmCreatePartition @ 0x140184450 (MmCreatePartition.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiExpandPartitionIds @ 0x140757314 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdx
  __int64 ClearBitsAndSet; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CBD48, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_1403CBD68, 1u, 0);
  if ( ClearBitsAndSet == 0xFFFFFFFFLL )
  {
    while ( (unsigned int)MiExpandPartitionIds() )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(qword_1403CBD68, 1u, 0);
      if ( ClearBitsAndSet != 0xFFFFFFFFLL )
        goto LABEL_4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CBD48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CBD48, v7, v8, v9);
    KeAbPostRelease((ULONG_PTR)&qword_1403CBD48);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  else
  {
LABEL_4:
    byte_1403CBD9C = 1;
    *(_QWORD *)(qword_1403CBD88 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CBD48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CBD48, v3, v5, v6);
    KeAbPostRelease((ULONG_PTR)&qword_1403CBD48);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned __int16)ClearBitsAndSet;
  }
}
