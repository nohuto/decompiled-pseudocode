/*
 * XREFs of CcNotifyOfMappedWriteComplete @ 0x140015578
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 * Callees:
 *     CcIsFatalWriteError @ 0x1400140C8 (CcIsFatalWriteError.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     CcReleaseByteRangeFromWrite @ 0x14011A1E8 (CcReleaseByteRangeFromWrite.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcNotifyOfMappedWriteComplete(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rdi
  bool v5; // r14
  __int64 v6; // rsi
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = a3;
  v8 = *(_QWORD *)(v4 + 528);
  if ( (_UNKNOWN *)v8 != &CcSystemPartition )
    KeBugCheckEx(0x34u, 0x1187uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a4 < 0 )
    v5 = !CcIsFatalWriteError(v4, a4);
  v9 = *(_QWORD *)(v4 + 48);
  if ( a2 + v6 > v9 )
  {
    if ( a2 > v9 )
      goto LABEL_7;
    LODWORD(v6) = v9 - a2;
  }
  if ( (_DWORD)v6 )
    CcReleaseByteRangeFromWrite(v4, &v12, (unsigned int)v6, 0LL, v5);
LABEL_7:
  if ( *(_QWORD *)(v8 + 816) != v8 + 816 )
    CcPostDeferredWrites(v8);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 64), &LockHandle);
  --*(_DWORD *)(v4 + 516);
  CcDecrementOpenCount(v4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
