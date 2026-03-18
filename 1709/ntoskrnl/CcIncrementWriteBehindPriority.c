/*
 * XREFs of CcIncrementWriteBehindPriority @ 0x1401E032C
 * Callers:
 *     CcLazyWriteScan @ 0x140021D88 (CcLazyWriteScan.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall CcIncrementWriteBehindPriority(__int64 a1)
{
  __int64 v1; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  unsigned __int64 *v8; // rdx
  ULONG_PTR *v9; // rax
  ULONG_PTR v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 496);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 528);
  if ( v1 && (v1 & 1) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v3 + 192);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v3 + 192));
    v5 = *(_QWORD *)(a1 + 496);
    if ( v5 )
    {
      *(_QWORD *)(a1 + 496) = v5 | 1;
      v6 = *(_QWORD *)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)(v5 + 8), *v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)v5 = 0LL;
      v8 = *(unsigned __int64 **)(v3 + 232);
      if ( *v8 != v3 + 224 )
        __fastfail(3u);
      *(_QWORD *)v5 = v3 + 224;
      *(_QWORD *)(v5 + 8) = v8;
      *v8 = v5;
      *(_QWORD *)(v3 + 232) = v5;
      if ( !*(_BYTE *)(v3 + 312) )
      {
        v9 = (ULONG_PTR *)(v3 + 208);
        if ( (ULONG_PTR *)*v9 != v9 )
        {
          v2 = *v9;
          if ( *(ULONG_PTR **)(*v9 + 8) != v9 || (v10 = *(_QWORD *)v2, *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2) )
            __fastfail(3u);
          *v9 = v10;
          *(_QWORD *)(v10 + 8) = v9;
          ++*(_DWORD *)(v3 + 204);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 904)) <= 1 )
            __fastfail(0xEu);
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v2 )
      {
        *(_QWORD *)v2 = 0LL;
        ExQueueWorkItemToPartition(v2, 0, 0xFFFFFFFF, *(_QWORD *)(v3 + 8));
      }
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
}
