/*
 * XREFs of CcDeleteSectionsForPartition @ 0x140220EE8
 * Callers:
 *     CcExitPartition @ 0x140221098 (CcExitPartition.c)
 * Callees:
 *     MmGetControlAreaPartition @ 0x14004DD2C (MmGetControlAreaPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeleteSectionsForPartition(_QWORD **a1, __int64 a2)
{
  _QWORD *i; // r8
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h] BYREF
  __int16 Object; // [rsp+50h] [rbp-20h] BYREF
  char v11; // [rsp+52h] [rbp-1Eh]
  int v12; // [rsp+54h] [rbp-1Ch]
  _QWORD v13[3]; // [rsp+58h] [rbp-18h] BYREF

LABEL_1:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v5 = i - 17;
    if ( (i[2] & 0x800) == 0 )
    {
      if ( MmGetControlAreaPartition(*(_QWORD *)((v5[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28)) != *(_QWORD *)(a2 + 8) )
        KeBugCheckEx(0x34u, 0x2CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v5[28] != v5 + 28 )
        goto LABEL_7;
      v6 = *((_DWORD *)v5 + 38);
      if ( (v6 & 0x8000) != 0 )
      {
        *((_DWORD *)v5 + 38) = v6 & 0xFFFF7FFF;
LABEL_7:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        goto LABEL_1;
      }
      if ( (v6 & 0x20) != 0 || *((_DWORD *)v5 + 1) || *((_DWORD *)v5 + 28) )
      {
        *((_DWORD *)v5 + 38) = v6 | 0x10000;
        Object = 0;
        v12 = 0;
        v13[1] = v13;
        v13[0] = v13;
        v11 = 6;
        v9 = v5[34];
        v5[34] = (char *)&v9 + 1;
        CcScheduleLazyWriteScan(a2, 1, 1);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
      else
      {
        CcDeleteSharedCacheMap((char *)v5, 0LL, &LockHandle, 0, 0LL);
      }
      goto LABEL_1;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
