/*
 * XREFs of CcChangeBackingFileObject @ 0x14015618C
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140156140 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  volatile __int64 *v6; // rcx
  _QWORD *v7; // rsi
  char v8; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v4 = 0;
  if ( a1 && a1[5] != a2[5] )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v4 = -1073741584;
LABEL_17:
    KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
    return v4;
  }
  v5 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v5 )
    goto LABEL_15;
  if ( (*(_DWORD *)(v5 + 152) & 0x100000) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v4 = -1073741637;
    goto LABEL_17;
  }
  v6 = (volatile __int64 *)(v5 + 96);
  v7 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( a1 )
  {
    if ( v7 != a1 )
    {
LABEL_15:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
      goto LABEL_17;
    }
  }
  ObFastReplaceObject(v6, (__int64)a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(v7, 0x746C6644u);
  return 0LL;
}
