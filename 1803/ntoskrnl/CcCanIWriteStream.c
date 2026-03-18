/*
 * XREFs of CcCanIWriteStream @ 0x140133A34
 * Callers:
 *     CcShouldLazyWriteCacheMap @ 0x140042794 (CcShouldLazyWriteCacheMap.c)
 *     CcForceWriteThrough @ 0x140098ED0 (CcForceWriteThrough.c)
 *     CcCopyWriteWontFlush @ 0x1400AB0D0 (CcCopyWriteWontFlush.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcNotifyOfMappedWrite @ 0x140133730 (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadEx @ 0x1401357B0 (CcScheduleReadAheadEx.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmEnoughMemoryForWrite @ 0x140133C18 (MmEnoughMemoryForWrite.c)
 */

bool __fastcall CcCanIWriteStream(KSPIN_LOCK *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  char v5; // r12
  bool v6; // r15
  unsigned int v8; // eax
  int v9; // ebp
  KSPIN_LOCK *v10; // rdi
  unsigned int v11; // esi
  unsigned int v12; // ebp
  KSPIN_LOCK v13; // r9
  KSPIN_LOCK v14; // rdx
  bool v15; // si
  __int64 v16; // rbp
  bool v17; // bl
  __int64 v18; // rcx
  unsigned int v19; // edx
  int v21; // eax
  KSPIN_LOCK v22; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  KSPIN_LOCK v24; // [rsp+80h] [rbp+8h]
  unsigned int v26; // [rsp+90h] [rbp+18h]

  v5 = 0;
  v6 = 0;
  v8 = 0x1000000;
  v9 = 0;
  v10 = a1 + 16;
  v11 = (a4 >> 12) + ((a4 & 0xFFF) != 0);
  if ( a3 <= 0x1000000 )
    v8 = a3;
  LOBYTE(v9) = (v8 & 0xFFF) != 0;
  v12 = (v8 >> 12) + v9;
  v26 = v12;
  if ( (a5 & 8) == 0 )
    KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
  v13 = a1[78];
  v22 = v13;
  v14 = v11 + v12 + a1[75];
  v24 = v14;
  v15 = v14 >= v13;
  if ( (a5 & 8) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v14 = v24;
    v13 = v22;
  }
  v16 = 0LL;
  v17 = v15;
  if ( a2 )
  {
    if ( (a5 & 0xA) != 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 4LL) & 4) != 0 || (v17 = v15, v14 >= v13) )
    {
      if ( (a5 & 8) == 0 )
        KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
      v17 = v15;
      v16 = *(_QWORD *)(a2 + 40);
      if ( v16 )
      {
        v18 = *(_QWORD *)(v16 + 8);
        if ( v18 )
        {
          v19 = *(_DWORD *)(v18 + 264);
          if ( v19 )
          {
            v21 = *(_DWORD *)(v18 + 112);
            if ( v21 )
              v6 = v26 + v21 > v19;
          }
          v17 = v15;
          if ( *(_QWORD *)(*(_QWORD *)(v18 + 504) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages )
            v17 = (a5 & 4) != 0 && v15;
        }
        v5 = MmEnoughMemoryForWrite(*(_QWORD *)(a2 + 40));
      }
      if ( (a5 & 8) == 0 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
      if ( v6 )
        return 0;
    }
  }
  if ( v17 )
    return 0;
  if ( !v16 )
    v5 = MmEnoughMemoryForWrite(0LL);
  return v5 != 0;
}
