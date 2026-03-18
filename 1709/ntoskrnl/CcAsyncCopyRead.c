/*
 * XREFs of CcAsyncCopyRead @ 0x140020890
 * Callers:
 *     <none>
 * Callees:
 *     CcPostWorkQueueAsyncRead @ 0x140020B14 (CcPostWorkQueueAsyncRead.c)
 *     IoReferenceIoAttributionFromThread @ 0x140020D8C (IoReferenceIoAttributionFromThread.c)
 *     CcAllocateWorkQueueEntry @ 0x140023330 (CcAllocateWorkQueueEntry.c)
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 *     CcScheduleReadAheadEx @ 0x1400625A0 (CcScheduleReadAheadEx.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  _SLIST_ENTRY *Next; // r12
  __int64 v12; // r15
  __int64 Partition; // r13
  struct _KTHREAD *CurrentThread; // rsi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v16; // rbx
  NTSTATUS v17; // r12d
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
  Partition = CcGetPartition(v12);
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x30FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && ((__int64)Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object);
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
  ++*(_DWORD *)(v12 + 536);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  _InterlockedAdd((volatile signed __int32 *)(v12 + 520), 1u);
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
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  *(_DWORD *)(v23 + 56) = PagePriorityThread;
  v24 = ListEntry;
  *((_QWORD *)&ListEntry[5].Next + 1) = KeGetCurrentThread()->ApcState.Process;
  v24[6].Next = (_SLIST_ENTRY *)CurrentThread;
  LOBYTE(v24[7].Next) = *(_BYTE *)(v21 + 24);
  HIDWORD(v24[7].Next) = *(_DWORD *)(v21 + 28);
  *((_QWORD *)&v24[6].Next + 1) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread);
  if ( *(_DWORD *)(v21 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x3A6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v24);
  return 1;
}
