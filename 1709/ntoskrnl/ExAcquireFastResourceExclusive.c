/*
 * XREFs of ExAcquireFastResourceExclusive @ 0x14013F3D0
 * Callers:
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14013F370 (ExpFastResourceLegacyAcquireExclusive.c)
 * Callees:
 *     KeAbPreWait @ 0x14005F870 (KeAbPreWait.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x14006B490 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceExclusive @ 0x140080760 (ExpTryAcquireResourceExclusive.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x14011AD10 (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14013F99C (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpFindFastOwnerEntryForThread @ 0x140140868 (ExpFindFastOwnerEntryForThread.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r15
  PRTL_BALANCED_NODE v14; // rax
  char v15; // bp
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 FastOwnerEntryForThread; // rax
  ULONG_PTR *v24; // rcx
  __int64 v25; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v27[5]; // [rsp+48h] [rbp-50h] BYREF

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
  *(_BYTE *)(a2 + 17) |= 4u;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( *(char *)(BugCheckParameter2 + 26) < 0 )
  {
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v24 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v25 = FastOwnerEntryForThread + 40;
      if ( *v24 != v25 )
        __fastfail(3u);
      *(_QWORD *)a2 = v25;
      v15 = 1;
      *(_QWORD *)(a2 + 8) = v24;
      *v24 = a2;
      *(_QWORD *)(v25 + 8) = a2;
      goto LABEL_27;
    }
  }
  v14 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v7 = (unsigned __int64)v14;
  if ( v14 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * LOBYTE(v14[1].Children[0]) - 32) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v15 = ExpTryAcquireResourceExclusive(BugCheckParameter2);
  if ( v15 )
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
    goto LABEL_27;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_27:
    __writecr8(v13);
    goto LABEL_21;
  }
  if ( v7 )
    KeAbPreWait(v7);
  v16 = *(_QWORD **)(BugCheckParameter2 + 56);
  v17 = (_QWORD *)(a2 + 56);
  if ( *v16 != BugCheckParameter2 + 48 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v16;
  *v17 = BugCheckParameter2 + 48;
  *v16 = v17;
  *(_QWORD *)(BugCheckParameter2 + 56) = v17;
  *(_BYTE *)(a2 + 19) = 1;
  ExpPrepareToWaitForResourceExclusive(BugCheckParameter2, v27);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v18, 0LL, a2);
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v27, 0x10224u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, (PRTL_BALANCED_NODE)v7, 0);
  v15 = 1;
LABEL_21:
  if ( v7 )
  {
    if ( v15 )
      *(_BYTE *)(v7 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v15;
}
