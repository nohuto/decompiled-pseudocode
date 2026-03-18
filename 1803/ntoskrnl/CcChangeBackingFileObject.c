/*
 * XREFs of CcChangeBackingFileObject @ 0x1400022F0
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x1400C5FC0 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
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
      ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
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
      ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
    v4 = -1073741637;
    goto LABEL_17;
  }
  v6 = (_QWORD *)(v5 + 96);
  v7 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( a1 )
  {
    if ( v7 != a1 )
    {
LABEL_15:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
      goto LABEL_17;
    }
  }
  ObFastReplaceObject(v6, a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
    ExfTryToWakePushLock(&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(v7, 0x746C6644u);
  return 0LL;
}
