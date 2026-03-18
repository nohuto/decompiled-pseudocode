/*
 * XREFs of MiFreeMdlTracker @ 0x140215D30
 * Callers:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiValidateMdlTracker @ 0x1402162C4 (MiValidateMdlTracker.c)
 */

__int64 __fastcall MiFreeMdlTracker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  PEPROCESS v2; // rsi
  __int64 v5; // rdi
  void *v6; // r14
  _QWORD *v7; // rbx
  ULONG_PTR v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(PEPROCESS *)(BugCheckParameter2 + 16);
  if ( !v2 )
    v2 = PsInitialSystemProcess;
  v5 = *(_QWORD *)&v2[1].ThreadSeed[6];
  if ( v5 )
  {
    v6 = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 24), &LockHandle);
    v7 = *(_QWORD **)v5;
    while ( v7 )
    {
      v8 = v7[3];
      if ( BugCheckParameter2 < v8 )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( BugCheckParameter2 <= v8 )
        {
          v6 = v7;
          MiValidateMdlTracker((ULONG_PTR)v7);
          RtlAvlRemoveNode((unsigned __int64 *)v5, (__int64)v7);
          *(_QWORD *)(v5 + 16) -= a2;
          break;
        }
        v7 = (_QWORD *)v7[1];
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v6 )
    {
      ExFreeToNPagedLookasideList(&stru_140388E80, v6);
    }
    else if ( *(_DWORD *)(v5 + 32) )
    {
      KeBugCheckEx(0x76u, 1uLL, BugCheckParameter2, v2[1].Affinity.Bitmap[14], *(_QWORD *)&v2[1].ThreadSeed[6]);
    }
  }
  return 1LL;
}
