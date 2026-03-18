/*
 * XREFs of CcNotifyOfMappedWriteComplete @ 0x1400D0618
 * Callers:
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 * Callees:
 *     MmGetControlAreaPartition @ 0x14004DD2C (MmGetControlAreaPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcIsFatalWriteError @ 0x1400C52EC (CcIsFatalWriteError.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E22D8 (CcReleaseByteRangeFromWrite.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcNotifyOfMappedWriteComplete(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  bool v9; // r15
  __int64 Partition; // r14
  __int64 v11; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+88h] [rbp+10h] BYREF

  v14 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v6 = a3;
  v9 = 0;
  Partition = CcGetPartition(v4);
  if ( Partition != *(_QWORD *)(MmGetControlAreaPartition(a1) + 8) )
    KeBugCheckEx(0x34u, 0x12AFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a4 < 0 )
    v9 = !CcIsFatalWriteError(v4, a4);
  v11 = *(_QWORD *)(v4 + 48);
  if ( a2 + v6 > v11 )
  {
    if ( a2 > v11 )
      goto LABEL_7;
    LODWORD(v6) = v11 - a2;
  }
  if ( (_DWORD)v6 )
    CcReleaseByteRangeFromWrite(v4, &v14, (unsigned int)v6, 0LL, v9);
LABEL_7:
  if ( *(_QWORD *)(Partition + 744) != Partition + 744 )
    CcPostDeferredWrites(Partition);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  --*(_DWORD *)(v4 + 516);
  CcDecrementOpenCount(v4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
