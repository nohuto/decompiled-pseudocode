/*
 * XREFs of MiFreePartitionId @ 0x14074D688
 * Callers:
 *     MiDeletePartition @ 0x14025B0C0 (MiDeletePartition.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 *Buffer; // rdx

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CBD48, 0LL);
  Buffer = (signed __int32 *)qword_1403CBD68->Buffer;
  _bittestandreset(Buffer, v2);
  *(_QWORD *)(qword_1403CBD88 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CBD48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CBD48, (__int64)Buffer, v3, v4);
  KeAbPostRelease((ULONG_PTR)&qword_1403CBD48);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
