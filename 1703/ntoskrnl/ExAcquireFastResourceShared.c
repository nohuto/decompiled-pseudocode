/*
 * XREFs of ExAcquireFastResourceShared @ 0x14014E540
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x140089630 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x14008A320 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14008D660 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x14008E320 (SepMandatoryIntegrityCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140090B30 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 * Callees:
 *     ExpPrepareToWaitForResourceShared @ 0x14003ABE0 (ExpPrepareToWaitForResourceShared.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 *     ExpTryAcquireResourceShared @ 0x140143838 (ExpTryAcquireResourceShared.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14014D9F4 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14014E814 (ExpFindFastOwnerEntryForThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r13
  _KLOCK_ENTRY *v7; // rsi
  unsigned __int8 v8; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r15
  __int64 FastOwnerEntryForThread; // rax
  PRTL_BALANCED_NODE v15; // rax
  __int64 v16; // rdx
  char v17; // bp
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  _QWORD *p_Spare21; // rax
  struct _KTHREAD **Spare21; // rcx
  ULONG_PTR *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v29[40]; // [rsp+48h] [rbp-50h] BYREF

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
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v23 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v24 = FastOwnerEntryForThread + 40;
      if ( *v23 != v24 )
        __fastfail(3u);
      *(_QWORD *)a2 = v24;
      v17 = 1;
      *(_QWORD *)(a2 + 8) = v23;
      *v23 = a2;
      *(_QWORD *)(v24 + 8) = a2;
      goto LABEL_18;
    }
  }
  v15 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v7 = (_KLOCK_ENTRY *)v15;
  if ( v15 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * (LOBYTE(v15[1].Children[0]) - 50)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v17 = ExpTryAcquireResourceShared(BugCheckParameter2);
  if ( v17 )
  {
    v18 = *(_QWORD **)(BugCheckParameter2 + 56);
    v19 = (_QWORD *)(a2 + 56);
    if ( *v18 != BugCheckParameter2 + 48 )
      __fastfail(3u);
    *v19 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v18;
    *v18 = v19;
    *(_QWORD *)(BugCheckParameter2 + 56) = v19;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    *(_BYTE *)(a2 + 18) = 1;
    *(_QWORD *)(a2 + 48) = a2 + 40;
    *(_QWORD *)(a2 + 40) = a2 + 40;
    p_Spare21 = &CurrentThread[1].Spare21;
    Spare21 = (struct _KTHREAD **)CurrentThread[1].Spare21;
    if ( Spare21[1] != (struct _KTHREAD *)&CurrentThread[1].Spare21 )
      __fastfail(3u);
    *(_QWORD *)a2 = Spare21;
    *(_QWORD *)(a2 + 8) = p_Spare21;
    Spare21[1] = (struct _KTHREAD *)a2;
    *p_Spare21 = a2;
    goto LABEL_18;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_18:
    __writecr8(v13);
    goto LABEL_19;
  }
  if ( v7 )
    KeAbPreWait((__int64)v7, v16);
  v25 = *(_QWORD **)(BugCheckParameter2 + 56);
  v26 = (_QWORD *)(a2 + 56);
  if ( *v25 != BugCheckParameter2 + 48 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v25;
  *v26 = BugCheckParameter2 + 48;
  *v25 = v26;
  *(_QWORD *)(BugCheckParameter2 + 56) = v26;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, (__int64)v29);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList((__int64)CurrentThread, v27, 0, a2);
  __writecr8(v13);
  ExpWaitForResource((_DWORD *)BugCheckParameter2, (__int64)v29, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, &v7->TreeNode, 0);
  v17 = 1;
LABEL_19:
  if ( v7 )
  {
    if ( v17 )
      v7->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v17;
}
