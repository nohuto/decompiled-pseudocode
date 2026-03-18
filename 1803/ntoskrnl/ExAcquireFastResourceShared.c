/*
 * XREFs of ExAcquireFastResourceShared @ 0x140158E80
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14005F800 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x14005F990 (SeSecurityAttributePresent.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1400A5810 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400FDD20 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1401018A0 (SepMandatoryIntegrityCheck.c)
 * Callees:
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpPrepareToWaitForResourceShared @ 0x1400CF664 (ExpPrepareToWaitForResourceShared.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x1400F3F20 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceShared @ 0x140159394 (ExpTryAcquireResourceShared.c)
 *     ExpFindFastOwnerEntryForThread @ 0x1401593C4 (ExpFindFastOwnerEntryForThread.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140159474 (ExpAddFastOwnerEntryToThreadList.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
  __int64 v15; // rax
  char v16; // bp
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  _QWORD *p_Spare21; // rax
  struct _KTHREAD **Spare21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rdx
  ULONG_PTR *v25; // rcx
  __int64 v26; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v28[40]; // [rsp+48h] [rbp-50h] BYREF

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
      v25 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v26 = FastOwnerEntryForThread + 40;
      if ( *v25 != v26 )
        __fastfail(3u);
      *(_QWORD *)a2 = v26;
      v16 = 1;
      *(_QWORD *)(a2 + 8) = v25;
      *v25 = a2;
      *(_QWORD *)(v26 + 8) = a2;
      goto LABEL_18;
    }
  }
  v15 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v7 = (_KLOCK_ENTRY *)v15;
  if ( v15 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * *(_BYTE *)(v15 + 24) - 32) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v16 = ExpTryAcquireResourceShared(BugCheckParameter2);
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
    KeAbPreWait((__int64)v7);
  v22 = *(_QWORD **)(BugCheckParameter2 + 56);
  v23 = (_QWORD *)(a2 + 56);
  if ( *v22 != BugCheckParameter2 + 48 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v22;
  *v23 = BugCheckParameter2 + 48;
  *v22 = v23;
  *(_QWORD *)(BugCheckParameter2 + 56) = v23;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, (__int64)v28);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v24, 0LL, a2);
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v28, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, (__int64)v7, 0);
  v16 = 1;
LABEL_19:
  if ( v7 )
  {
    if ( v16 )
      v7->AcquiredByte |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v16;
}
