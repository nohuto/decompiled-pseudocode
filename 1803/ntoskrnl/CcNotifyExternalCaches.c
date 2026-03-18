/*
 * XREFs of CcNotifyExternalCaches @ 0x14015BD90
 * Callers:
 *     CcQueueLazyWriteScanThread @ 0x140177AA0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     CcCalculatePagesToWrite @ 0x140045B2C (CcCalculatePagesToWrite.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcNotifyExternalCaches(unsigned int a1)
{
  __int64 v2; // rbx
  KIRQL v3; // si
  _QWORD *v4; // rdi
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)PspSystemPartition + 1);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 128));
  v4 = (_QWORD *)(v2 + 600);
  v5 = CcCalculatePagesToWrite(v2, a1, v2 + 600, (unsigned __int64 *)(v2 + 624), 0);
  if ( v5 == 0xFFFFFFFFLL )
  {
    LODWORD(v6) = 100;
  }
  else if ( *v4 )
  {
    v6 = 100 * (unsigned __int64)v5 / *v4;
  }
  else
  {
    LODWORD(v6) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (_DWORD)v6 )
  {
    for ( i = (__int64 *)CcExternalCacheList; i != &CcExternalCacheList; i = (__int64 *)*i )
    {
      v9 = *(i - 3);
      if ( v9 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))*(i - 4))(
          i - 4,
          v9 * (unsigned __int64)(unsigned int)v6 / 0x64,
          a1);
    }
  }
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = v3;
  __writecr8(v3);
  return result;
}
