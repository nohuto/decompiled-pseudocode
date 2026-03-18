/*
 * XREFs of CcDeleteSectionsForPartition @ 0x1401DE4E4
 * Callers:
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 */

__int64 __fastcall CcDeleteSectionsForPartition(__int64 **a1, __int16 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  KIRQL v7; // bp
  ULONG_PTR *v8; // rbx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  v4 = *a1;
  while ( v4 != (__int64 *)a1 )
  {
    v5 = (__int64)(v4 - 17);
    if ( (v4[2] & 0x820) != 0
      || ((v6 = *(_QWORD *)((*(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28),
           v7 = ExAcquireSpinLockExclusive(&dword_14036BE00),
           *(_QWORD *)v6)
        ? (v8 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)v6 + 60LL) & 0x3FF)))
        : (v8 = &MiSystemPartition),
          (ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00), __writecr8(v7), *(_WORD *)v8 != a2)
       || *(_DWORD *)(v5 + 4)) )
    {
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)*v4;
      *((_DWORD *)v4 + 4) |= 0x20u;
      ++*((_DWORD *)v4 - 6);
      CcDeleteSharedCacheMap(v5, &LockHandle, 0, 0LL);
      KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
      *((_DWORD *)v4 + 4) &= ~0x20u;
      --*((_DWORD *)v4 - 6);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
