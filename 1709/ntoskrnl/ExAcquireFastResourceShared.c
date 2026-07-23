/*
 * XREFs of ExAcquireFastResourceShared @ 0x14013FBD0
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1400180F0 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x140018280 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14007D3F0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14007D4E0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x14007EFF0 (SepMandatoryIntegrityCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 * Callees:
 *     KeAbPreWait @ 0x14005F870 (KeAbPreWait.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x14006B490 (ExpWaitForResource.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14012DBF4 (ExpPrepareToWaitForResourceShared.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14013F99C (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpTryAcquireResourceShared @ 0x14013FED8 (ExpTryAcquireResourceShared.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // rdi
  unsigned __int8 v8; // cl
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v10; // r8
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r12
  void **Spare21; // rcx
  PRTL_BALANCED_NODE v15; // rax
  unsigned __int8 v16; // bp
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *p_Spare21; // rax
  struct _KTHREAD **v20; // rcx
  ULONG_PTR *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v28[80]; // [rsp+48h] [rbp-50h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = (a3 == 0) + 1;
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
  *(_BYTE *)(a2 + 17) &= ~4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    Spare21 = (void **)CurrentThread[1].Spare21;
    if ( Spare21 != &CurrentThread[1].Spare21 )
    {
      while ( Spare21[3] != (void *)BugCheckParameter2 )
      {
        Spare21 = (void **)*Spare21;
        if ( Spare21 == &CurrentThread[1].Spare21 )
          goto LABEL_12;
      }
      if ( Spare21 )
      {
        v22 = (ULONG_PTR *)Spare21[6];
        v23 = Spare21 + 5;
        if ( (_QWORD *)*v22 != v23 )
          __fastfail(3u);
        *(_QWORD *)a2 = v23;
        v16 = 1;
        *(_QWORD *)(a2 + 8) = v22;
        *v22 = a2;
        v23[1] = a2;
        goto LABEL_18;
      }
    }
  }
LABEL_12:
  v15 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v7 = (unsigned __int64)v15;
  if ( v15 )
    *(_BYTE *)(a2 + 16) = (2 * ((char)(16 * LOBYTE(v15[1].Children[0]) - 32) / 96)) | 1;
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
    v20 = (struct _KTHREAD **)CurrentThread[1].Spare21;
    if ( v20[1] != (struct _KTHREAD *)&CurrentThread[1].Spare21 )
      __fastfail(3u);
    *(_QWORD *)a2 = v20;
    *(_QWORD *)(a2 + 8) = p_Spare21;
    v20[1] = (struct _KTHREAD *)a2;
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
    KeAbPreWait(v7);
  v24 = *(_QWORD **)(BugCheckParameter2 + 56);
  v25 = (_QWORD *)(a2 + 56);
  if ( *v24 != BugCheckParameter2 + 48 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v24;
  *v25 = BugCheckParameter2 + 48;
  *v24 = v25;
  *(_QWORD *)(BugCheckParameter2 + 56) = v25;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, (__int64)v28);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList((__int64)CurrentThread, v26, 0, a2);
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v28, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, (PRTL_BALANCED_NODE)v7, 0);
  v16 = 1;
LABEL_19:
  if ( v7 )
  {
    if ( v16 )
      *(_BYTE *)(v7 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v16;
}
