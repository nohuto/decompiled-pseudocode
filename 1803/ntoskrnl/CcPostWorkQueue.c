/*
 * XREFs of CcPostWorkQueue @ 0x1400428A8
 * Callers:
 *     CcLazyWriteScan @ 0x140042058 (CcLazyWriteScan.c)
 *     CcNotifyOfMappedWrite @ 0x140133730 (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadEx @ 0x1401357B0 (CcScheduleReadAheadEx.c)
 *     CcQueueLazyWriteScanThread @ 0x140177AA0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14017D810 (CcPerfLogWorkItemEnqueue.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  v5 = 0LL;
  if ( (xmmword_14044C2D0 & 0x20000) != 0 )
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
    v13 = *(_QWORD *)(v4 + 600);
    if ( (v13 >= *(_QWORD *)(v4 + 624) >> 2 || v13 > *(_QWORD *)(**(_QWORD **)(v4 + 8) + 7040LL) >> 1)
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
    v9 = (_QWORD *)(v4 + 208);
    v10 = *(_QWORD **)(v4 + 208);
    if ( v10 != (_QWORD *)(v4 + 208)
      && (*(_BYTE *)(a1 + 120) != 2 || (unsigned int)(*(_DWORD *)(v4 + 328) + 1) <= *(_DWORD *)(v4 + 896)) )
    {
      v5 = *(_QWORD **)(v4 + 208);
      if ( (_QWORD *)v10[1] != v9 || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
        __fastfail(3u);
      *v9 = v11;
      *(_QWORD *)(v11 + 8) = v9;
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
    *v5 = 0LL;
    return ExQueueWorkItemToPartition((ULONG_PTR)v5);
  }
  return result;
}
