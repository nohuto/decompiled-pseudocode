/*
 * XREFs of CcAsyncCopyRead @ 0x1401392C0
 * Callers:
 *     <none>
 * Callees:
 *     CcAllocateWorkQueueEntry @ 0x1400437A8 (CcAllocateWorkQueueEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 *     CcScheduleReadAheadEx @ 0x1401357B0 (CcScheduleReadAheadEx.c)
 *     IoReferenceIoAttributionFromThread @ 0x140137A70 (IoReferenceIoAttributionFromThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x1401394C4 (CcPostWorkQueueAsyncRead.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  _SLIST_ENTRY *Next; // r15
  __int64 v12; // r12
  __int64 Partition; // r13
  struct _KTHREAD *CurrentThread; // rsi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v16; // rbx
  NTSTATUS v17; // r15d
  volatile signed __int64 *v18; // rcx
  PSLIST_ENTRY v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rbx
  int PagePriorityThread; // eax
  __int64 v23; // rdx
  PSLIST_ENTRY v24; // rbp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v28; // [rsp+88h] [rbp+10h]

  v28 = a2;
  Next = Object[3].Next;
  v12 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
  Partition = CcGetPartition((_QWORD *)v12, (__int64)a2);
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x387uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && ((__int64)Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object, a2, a3, a7);
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x73416343u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  PoolWithTag->Next = 0LL;
  v17 = CcAllocateWorkQueueEntry(Partition, &ListEntry);
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v16, 0x73416343u);
    RtlRaiseStatus(v17);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  v18 = (volatile signed __int64 *)CurrentThread->Process[2].ActiveProcessors.Bitmap[8];
  if ( v18 )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(v18, (a3 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(v18 + 2, 1uLL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  ++*(_DWORD *)(v12 + 4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 520));
  v19 = ListEntry;
  v20 = v28;
  *((_BYTE *)&ListEntry[7].Next + 8) = 5;
  v19[1].Next = (_SLIST_ENTRY *)v12;
  v19[2].Next = Object;
  *((_QWORD *)&v19[1].Next + 1) = *v20;
  *((_DWORD *)&v19[2].Next + 2) = a3;
  v19[3].Next = v16;
  v21 = a8;
  v19[4].Next = *(_SLIST_ENTRY **)(a8 + 16);
  *((_QWORD *)&v19[4].Next + 1) = a6;
  v19[5].Next = (_SLIST_ENTRY *)v21;
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  *(_DWORD *)(v23 + 56) = PagePriorityThread;
  v24 = ListEntry;
  *((_QWORD *)&ListEntry[5].Next + 1) = KeGetCurrentThread()->ApcState.Process;
  v24[6].Next = (_SLIST_ENTRY *)CurrentThread;
  LOBYTE(v24[7].Next) = *(_BYTE *)(v21 + 24);
  HIDWORD(v24[7].Next) = *(_DWORD *)(v21 + 28);
  *((_QWORD *)&v24[6].Next + 1) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread, (__int64)(&v24[6].Next + 1));
  if ( *(_DWORD *)(v21 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x420uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v24);
  return 1;
}
