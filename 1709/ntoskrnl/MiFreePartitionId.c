/*
 * XREFs of MiFreePartitionId @ 0x1406E28F0
 * Callers:
 *     MiDeletePartition @ 0x14021F520 (MiDeletePartition.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388AB0, 0LL);
  _bittestandreset((signed __int32 *)qword_140388AD0->Buffer, v2);
  *(_QWORD *)(qword_140388AF0 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388AB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388AB0);
  KeAbPostRelease((ULONG_PTR)&qword_140388AB0);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
