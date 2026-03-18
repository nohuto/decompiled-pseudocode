/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x14014B8C0
 * Callers:
 *     <none>
 * Callees:
 *     CcChargeDirtyPages @ 0x14001BBB4 (CcChargeDirtyPages.c)
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 )
  {
    v2 = a2;
    v4 = *((_QWORD *)PspSystemPartition + 1);
    do
    {
      v5 = v2;
      if ( v2 > 0xFFFFFFFF )
        v5 = -1;
      v2 -= v5;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
      if ( !*(_QWORD *)(a1 + 8) )
        CcScheduleLazyWriteScan(v4, 0, 0);
      *(_QWORD *)(a1 + 8) += v5;
      CcChargeDirtyPages(0LL, 0LL, 0LL, v5);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = LockHandle.OldIrql;
      __writecr8(LockHandle.OldIrql);
    }
    while ( v2 );
  }
  return result;
}
