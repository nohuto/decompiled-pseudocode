/*
 * XREFs of CcChangeBackingFileObject @ 0x14014A840
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x14014A800 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartitionFromFileObject @ 0x1400AB504 (CcGetPartitionFromFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2)
{
  KSPIN_LOCK *PartitionFromFileObject; // r15
  volatile signed __int64 *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  volatile __int64 *v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  PartitionFromFileObject = (KSPIN_LOCK *)CcGetPartitionFromFileObject((__int64)a2);
  v5 = (volatile signed __int64 *)(PartitionFromFileObject + 32);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(PartitionFromFileObject + 32), 0LL);
  KeAcquireInStackQueuedSpinLock(PartitionFromFileObject + 8, &LockHandle);
  if ( a1 && a1[5] != a2[5] )
    goto LABEL_12;
  v6 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v6 )
    goto LABEL_15;
  if ( (*(_DWORD *)(v6 + 152) & 0x100000) == 0 )
  {
    v7 = (_QWORD *)(*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !a1 || v7 == a1 )
    {
      if ( PartitionFromFileObject != *(KSPIN_LOCK **)(v6 + 528)
        || CcGetPartitionFromFileObject(*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL) != PartitionFromFileObject )
      {
LABEL_12:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5);
        KeAbPostRelease((ULONG_PTR)v5);
        return 3221225712LL;
      }
      ObFastReplaceObject(v8, (__int64)a2);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      ObDereferenceObjectDeferDeleteWithTag(v7, 0x746C6644u);
      return 0LL;
    }
LABEL_15:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    return 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return 3221225659LL;
}
