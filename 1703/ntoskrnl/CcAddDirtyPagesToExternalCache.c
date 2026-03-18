/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x1401512C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcChargeDirtyPages @ 0x1400AD3C8 (CcChargeDirtyPages.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 */

__int64 __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v4 = v2;
      if ( v2 > 0xFFFFFFFF )
        v4 = -1;
      v2 -= v4;
      KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
      if ( !*(_QWORD *)(a1 + 8) )
        CcScheduleLazyWriteScan((__int64)&CcSystemPartition, 0, 0);
      *(_QWORD *)(a1 + 8) += v4;
      CcChargeDirtyPages(0LL, 0LL, 0LL, v4);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = LockHandle.OldIrql;
      __writecr8(LockHandle.OldIrql);
    }
    while ( v2 );
  }
  return result;
}
