/*
 * XREFs of CcCanIWriteStream @ 0x1400AE444
 * Callers:
 *     CcCopyWriteWontFlush @ 0x1400138E0 (CcCopyWriteWontFlush.c)
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     CcScheduleReadAheadEx @ 0x14004D5C0 (CcScheduleReadAheadEx.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcShouldLazyWriteCacheMap @ 0x1400AF50C (CcShouldLazyWriteCacheMap.c)
 *     CcNotifyOfMappedWrite @ 0x1400B00A8 (CcNotifyOfMappedWrite.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartitionFromFileObject @ 0x1400AB504 (CcGetPartitionFromFileObject.c)
 *     MmEnoughMemoryForWrite @ 0x1400AE5C4 (MmEnoughMemoryForWrite.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

bool __fastcall CcCanIWriteStream(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  char v4; // r14
  bool v5; // r13
  unsigned int v7; // eax
  int v8; // r11d
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  KSPIN_LOCK *PartitionFromFileObject; // rsi
  KSPIN_LOCK v12; // r8
  KSPIN_LOCK v13; // rdx
  bool v14; // di
  __int64 v15; // rbp
  bool v16; // bl
  int v17; // r12d
  __int64 v18; // rcx
  unsigned int v19; // edx
  int v21; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+10h]
  char v24; // [rsp+A8h] [rbp+20h]

  v24 = a4;
  v4 = 0;
  v5 = 0;
  v7 = 0x1000000;
  v8 = 0;
  v9 = (a3 >> 12) + ((a3 & 0xFFF) != 0);
  if ( a2 <= 0x1000000 )
    v7 = a2;
  LOBYTE(v8) = (v7 & 0xFFF) != 0;
  v10 = (v7 >> 12) + v8;
  v23 = v10;
  if ( a1 )
    PartitionFromFileObject = (KSPIN_LOCK *)CcGetPartitionFromFileObject(a1);
  else
    PartitionFromFileObject = (KSPIN_LOCK *)&CcSystemPartition;
  v12 = PartitionFromFileObject[87];
  v13 = v9 + v10 + PartitionFromFileObject[84];
  v14 = v13 >= v12;
  v15 = 0LL;
  v16 = v13 >= v12;
  if ( a1 )
  {
    if ( (a4 & 3) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 4) != 0 || (v16 = v13 >= v12) )
    {
      v17 = a4 & 1;
      if ( (a4 & 1) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(PartitionFromFileObject + 8, &LockHandle);
        a4 = v24;
        v10 = v23;
      }
      v15 = *(_QWORD *)(a1 + 40);
      v16 = v14;
      if ( v15 )
      {
        v18 = *(_QWORD *)(v15 + 8);
        if ( v18 )
        {
          if ( PartitionFromFileObject != *(KSPIN_LOCK **)(v18 + 528) )
            KeBugCheckEx(0x34u, 0x769uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          v19 = *(_DWORD *)(v18 + 264);
          if ( v19 )
          {
            v21 = *(_DWORD *)(v18 + 112);
            if ( v21 )
              v5 = v10 + v21 > v19;
          }
          v16 = v14;
          if ( *(_QWORD *)(*(_QWORD *)(v18 + 504) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages )
          {
            v16 = v14;
            if ( (a4 & 4) == 0 )
              v16 = 0;
          }
        }
        v4 = MmEnoughMemoryForWrite(*(_QWORD *)(a1 + 40));
      }
      if ( !v17 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
      if ( v5 )
        return 0;
    }
  }
  if ( v16 )
    return 0;
  if ( !v15 )
    v4 = MmEnoughMemoryForWrite(0LL);
  return v4 != 0;
}
