/*
 * XREFs of CcNotifyExternalCaches @ 0x14015098C
 * Callers:
 *     CcQueueLazyWriteScanThread @ 0x14015E860 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     CcCalculatePagesToWrite @ 0x14011B094 (CcCalculatePagesToWrite.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcNotifyExternalCaches(unsigned int a1)
{
  KIRQL v2; // si
  __int64 v3; // r9
  unsigned __int64 v4; // rdi
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_14036F740;
  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_14036F740);
  v3 = (unsigned int)CcCalculatePagesToWrite(a1, (__int64)&qword_14036F9A0, qword_14036F9B8, 0);
  if ( v3 == 0xFFFFFFFFLL )
  {
    LODWORD(v4) = 100;
  }
  else if ( qword_14036F9A0 )
  {
    v4 = 100 * v3 / (unsigned __int64)qword_14036F9A0;
  }
  else
  {
    LODWORD(v4) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (_DWORD)v4 )
  {
    for ( i = (__int64 *)CcExternalCacheList; i != &CcExternalCacheList; i = (__int64 *)*i )
    {
      v7 = *(i - 3);
      if ( v7 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))*(i - 4))(
          i - 4,
          v7 * (unsigned __int64)(unsigned int)v4 / 0x64,
          a1);
    }
  }
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = v2;
  __writecr8(v2);
  return result;
}
