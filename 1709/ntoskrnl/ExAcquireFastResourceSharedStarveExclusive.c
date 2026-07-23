/*
 * XREFs of ExAcquireFastResourceSharedStarveExclusive @ 0x14013F0C0
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1402856A4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     KeAbPreWait @ 0x14005F870 (KeAbPreWait.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x14006B490 (ExpWaitForResource.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x1401270FC (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14012DBF4 (ExpPrepareToWaitForResourceShared.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14013F99C (ExpAddFastOwnerEntryToThreadList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceSharedStarveExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r15
  void **i; // rax
  ULONG_PTR *v15; // rcx
  _QWORD *v16; // rax
  char v17; // bp
  PRTL_BALANCED_NODE v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v27[40]; // [rsp+48h] [rbp-50h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = 2 - (a3 != 0);
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > v8 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v8, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v10->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v11 != v10 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v11, 0LL);
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 )
    KeBugCheckEx(0x1C6u, 2uLL, a2, v12, 0LL);
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  *(_BYTE *)(a2 + 17) &= ~4u;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    for ( i = (void **)CurrentThread[1].Spare21; i != &CurrentThread[1].Spare21; i = (void **)*i )
    {
      if ( i[3] == (void *)BugCheckParameter2 )
      {
        if ( !i )
          break;
        v15 = (ULONG_PTR *)i[6];
        v16 = i + 5;
        if ( (_QWORD *)*v15 != v16 )
          __fastfail(3u);
        *(_QWORD *)a2 = v16;
        v17 = 1;
        *(_QWORD *)(a2 + 8) = v15;
        *v15 = a2;
        v16[1] = a2;
        goto LABEL_17;
      }
    }
  }
  v19 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v7 = (unsigned __int64)v19;
  if ( v19 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * LOBYTE(v19[1].Children[0]) - 32) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v17 = ExpTryAcquireResourceSharedStarveExclusive(BugCheckParameter2);
  if ( v17 )
  {
    v20 = *(_QWORD **)(BugCheckParameter2 + 56);
    v21 = (_QWORD *)(a2 + 56);
    if ( *v20 != BugCheckParameter2 + 48 )
      __fastfail(3u);
    *v21 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v20;
    *v20 = v21;
    *(_QWORD *)(BugCheckParameter2 + 56) = v21;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v22, 0LL, a2);
    goto LABEL_17;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_17:
    __writecr8(v13);
    goto LABEL_18;
  }
  if ( v7 )
    KeAbPreWait(v7);
  v23 = *(_QWORD **)(BugCheckParameter2 + 56);
  v24 = (_QWORD *)(a2 + 56);
  if ( *v23 != BugCheckParameter2 + 48 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v23;
  *v24 = BugCheckParameter2 + 48;
  *v23 = v24;
  *(_QWORD *)(BugCheckParameter2 + 56) = v24;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, (__int64)v27);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v25, 0LL, a2);
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v27, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, (PRTL_BALANCED_NODE)v7, 0);
  v17 = 1;
LABEL_18:
  if ( v7 )
  {
    if ( v17 )
      *(_BYTE *)(v7 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v17;
}
