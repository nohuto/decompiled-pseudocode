/*
 * XREFs of CcCanIWriteStream @ 0x140064730
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     CcShouldLazyWriteCacheMap @ 0x1400223FC (CcShouldLazyWriteCacheMap.c)
 *     CcScheduleReadAheadEx @ 0x1400625A0 (CcScheduleReadAheadEx.c)
 *     CcNotifyOfMappedWrite @ 0x1400EF1C8 (CcNotifyOfMappedWrite.c)
 *     CcCopyWriteWontFlush @ 0x14010A520 (CcCopyWriteWontFlush.c)
 *     CcForceWriteThrough @ 0x14012D540 (CcForceWriteThrough.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmEnoughMemoryForWrite @ 0x140064904 (MmEnoughMemoryForWrite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

bool __fastcall CcCanIWriteStream(KSPIN_LOCK *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v5; // rsi
  char v6; // di
  unsigned int v9; // ebx
  unsigned int v10; // r12d
  unsigned __int64 *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  bool v13; // bl
  bool v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // edx
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0LL;
  v6 = 0;
  v9 = ((a4 & 0xFFF) != 0) + (a4 >> 12);
  if ( a3 > 0x1000000 )
    a3 = 0x1000000;
  v10 = (a3 >> 12) + ((a3 & 0xFFF) != 0);
  if ( (a5 & 8) == 0 )
  {
    v11 = a1 + 16;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v11;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
  }
  v13 = v9 + v10 + a1[75] >= a1[78];
  if ( (a5 & 8) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( a2 )
  {
    if ( (a5 & 0xA) == 0 && (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 4LL) & 4) == 0 && !v13 )
    {
LABEL_13:
      v6 = MmEnoughMemoryForWrite(0LL);
      return v6 != 0;
    }
    if ( (a5 & 8) == 0 )
      KeAcquireInStackQueuedSpinLock(a1 + 16, &LockHandle);
    v5 = *(_QWORD *)(a2 + 40);
    v15 = 0;
    if ( v5 )
    {
      v16 = *(_QWORD *)(v5 + 8);
      if ( v16 )
      {
        v17 = *(_DWORD *)(v16 + 264);
        if ( v17 )
        {
          v18 = *(_DWORD *)(v16 + 112);
          if ( v18 )
            v15 = v10 + v18 > v17;
        }
        if ( *(_QWORD *)(*(_QWORD *)(v16 + 504) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages
          && (a5 & 4) == 0 )
        {
          v13 = 0;
        }
      }
      v6 = MmEnoughMemoryForWrite(*(_QWORD *)(a2 + 40));
    }
    if ( (a5 & 8) == 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    if ( v15 )
      return 0;
  }
  if ( v13 )
    return 0;
  if ( !v5 )
    goto LABEL_13;
  return v6 != 0;
}
