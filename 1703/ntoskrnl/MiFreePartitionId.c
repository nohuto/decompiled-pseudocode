/*
 * XREFs of MiFreePartitionId @ 0x1406B619C
 * Callers:
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C8B8, 0LL);
  _bittestandreset((signed __int32 *)qword_14036C8D8->Buffer, v2);
  *(_QWORD *)(qword_14036C8F8 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036C8B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036C8B8);
  KeAbPostRelease((ULONG_PTR)&qword_14036C8B8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
