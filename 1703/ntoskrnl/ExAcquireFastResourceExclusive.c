/*
 * XREFs of ExAcquireFastResourceExclusive @ 0x14014D420
 * Callers:
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14014D3C0 (ExpFastResourceLegacyAcquireExclusive.c)
 * Callees:
 *     ExpPrepareToWaitForResourceExclusive @ 0x1400271B4 (ExpPrepareToWaitForResourceExclusive.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x140090240 (ExpTryAcquireResourceExclusive.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14014D9F4 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14014E814 (ExpFindFastOwnerEntryForThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r12
  _KLOCK_ENTRY *v7; // rsi
  unsigned __int8 v8; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r15
  PRTL_BALANCED_NODE v14; // rax
  __int64 v15; // rdx
  char v16; // bp
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 FastOwnerEntryForThread; // rax
  ULONG_PTR *v25; // rcx
  __int64 v26; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v28[5]; // [rsp+48h] [rbp-50h] BYREF

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
      v25 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v26 = FastOwnerEntryForThread + 40;
      if ( *v25 != v26 )
        __fastfail(3u);
      *(_QWORD *)a2 = v26;
      v16 = 1;
      *(_QWORD *)(a2 + 8) = v25;
      *v25 = a2;
      *(_QWORD *)(v26 + 8) = a2;
      goto LABEL_14;
    }
  }
  v14 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v7 = (_KLOCK_ENTRY *)v14;
  if ( v14 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * (LOBYTE(v14[1].Children[0]) - 50)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v16 = ExpTryAcquireResourceExclusive(BugCheckParameter2);
  if ( v16 )
  {
    v17 = *(_QWORD **)(BugCheckParameter2 + 56);
    v18 = (_QWORD *)(a2 + 56);
    if ( *v17 != BugCheckParameter2 + 48 )
      __fastfail(3u);
    *v18 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v17;
    *v17 = v18;
    *(_QWORD *)(BugCheckParameter2 + 56) = v18;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v19, 0LL, a2);
    goto LABEL_14;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_14:
    __writecr8(v13);
    goto LABEL_15;
  }
  if ( v7 )
    KeAbPreWait((__int64)v7, v15);
  v21 = *(_QWORD **)(BugCheckParameter2 + 56);
  v22 = (_QWORD *)(a2 + 56);
  if ( *v21 != BugCheckParameter2 + 48 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v21;
  *v22 = BugCheckParameter2 + 48;
  *v21 = v22;
  *(_QWORD *)(BugCheckParameter2 + 56) = v22;
  *(_BYTE *)(a2 + 19) = 1;
  ExpPrepareToWaitForResourceExclusive(BugCheckParameter2, v28);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v23, 0LL, a2);
  __writecr8(v13);
  ExpWaitForResource((_DWORD *)BugCheckParameter2, (__int64)v28, 0x10224u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, &v7->TreeNode, 0);
  v16 = 1;
LABEL_15:
  if ( v7 )
  {
    if ( v16 )
      v7->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v16;
}
