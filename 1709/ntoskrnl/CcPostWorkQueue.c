/*
 * XREFs of CcPostWorkQueue @ 0x140022504
 * Callers:
 *     CcLazyWriteScan @ 0x140021D88 (CcLazyWriteScan.c)
 *     CcScheduleReadAheadEx @ 0x1400625A0 (CcScheduleReadAheadEx.c)
 *     CcNotifyOfMappedWrite @ 0x1400EF1C8 (CcNotifyOfMappedWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x140148AC0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1401E2C38 (CcPerfLogWorkItemEnqueue.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rsi
  _QWORD *v8; // rax
  ULONG_PTR *v9; // rcx
  ULONG_PTR v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  v5 = 0LL;
  if ( (xmmword_140401150 & 0x20000) != 0 )
  {
    if ( ((*(_BYTE *)(a1 + 120) - 2) & 0xFD) != 0 )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 192), &LockHandle);
  if ( *(_BYTE *)(a1 + 120) == 3 && *(_QWORD *)(v4 + 256) != v4 + 256 )
  {
    v12 = *(_QWORD *)(v4 + 600);
    if ( (v12 >= *(_QWORD *)(v4 + 624) >> 2 || v12 > *(_QWORD *)(**(_QWORD **)(v4 + 8) + 5952LL) >> 1)
      && *(_DWORD *)(v4 + 896) >= *(_DWORD *)(v4 + 200) )
    {
      *(_BYTE *)(v4 + 736) = 1;
    }
  }
  v8 = *(_QWORD **)(a2 + 8);
  if ( *v8 != a2 )
    __fastfail(3u);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( !*(_BYTE *)(v4 + 312) )
  {
    v9 = (ULONG_PTR *)(v4 + 208);
    if ( (ULONG_PTR *)*v9 != v9
      && (*(_BYTE *)(a1 + 120) != 2 || (unsigned int)(*(_DWORD *)(v4 + 328) + 1) <= *(_DWORD *)(v4 + 896)) )
    {
      v5 = *v9;
      if ( *(ULONG_PTR **)(*v9 + 8) != v9 || (v10 = *(_QWORD *)v5, *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5) )
        __fastfail(3u);
      *v9 = v10;
      *(_QWORD *)(v10 + 8) = v9;
      ++*(_DWORD *)(v4 + 204);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 904)) <= 1 )
        __fastfail(0xEu);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v5 )
  {
    *(_QWORD *)v5 = 0LL;
    return ExQueueWorkItemToPartition(v5);
  }
  return result;
}
