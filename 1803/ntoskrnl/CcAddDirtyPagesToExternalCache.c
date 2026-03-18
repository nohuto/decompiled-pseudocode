/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x14015BC70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcChargeDirtyPages @ 0x1400E3214 (CcChargeDirtyPages.c)
 */

void __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rax
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
      v6 = *(_QWORD *)(a1 + 8);
      if ( !v6 )
      {
        CcScheduleLazyWriteScan(v4, 0, 0);
        v6 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v5 + v6;
      CcChargeDirtyPages(0LL, 0LL, 0LL, v5);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    while ( v2 );
  }
}
