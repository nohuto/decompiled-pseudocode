/*
 * XREFs of CcAsyncCopyRead @ 0x140023470
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     CcPostWorkQueueAsyncRead @ 0x140023674 (CcPostWorkQueueAsyncRead.c)
 *     IoReferenceIoAttributionFromThread @ 0x140023A10 (IoReferenceIoAttributionFromThread.c)
 *     CcScheduleReadAheadEx @ 0x14004D5C0 (CcScheduleReadAheadEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x1400AFA58 (CcAllocateWorkQueueEntry.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  __int64 v8; // rax
  _SLIST_ENTRY *Next; // rcx
  __int64 v13; // r13
  struct _KTHREAD *CurrentThread; // rsi
  _SLIST_ENTRY *PoolWithTag; // rax
  __int64 v16; // rcx
  _SLIST_ENTRY *v17; // rbx
  NTSTATUS v18; // r15d
  volatile signed __int64 *v19; // rcx
  _SLIST_ENTRY *v20; // r15
  PSLIST_ENTRY v21; // rdx
  __int64 v22; // rbx
  int PagePriorityThread; // eax
  __int64 v24; // rdx
  PSLIST_ENTRY v25; // rbp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+80h] [rbp+8h] BYREF
  __int64 v29; // [rsp+88h] [rbp+10h]

  v8 = *((_QWORD *)&Object[2].Next + 1);
  Next = Object[3].Next;
  v13 = *(_QWORD *)(v8 + 8);
  v29 = *(_QWORD *)(v13 + 528);
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v13 + 8) )
    KeBugCheckEx(0x34u, 0x428uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && ((__int64)Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object);
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x73416343u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  PoolWithTag->Next = 0LL;
  v18 = CcAllocateWorkQueueEntry(v16, &ListEntry);
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v17, 0x73416343u);
    RtlRaiseStatus(v18);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  v19 = (volatile signed __int64 *)CurrentThread->Process[2].ActiveProcessors.Bitmap[8];
  if ( v19 )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(v19, (a3 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(v19 + 2, 1uLL);
  }
  v20 = (_SLIST_ENTRY *)v29;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v29 + 64), &LockHandle);
  ++*(_DWORD *)(v13 + 4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 520));
  v21 = ListEntry;
  ListEntry[8].Next = v20;
  *((_BYTE *)&v21[7].Next + 8) = 5;
  v21[1].Next = (_SLIST_ENTRY *)v13;
  v21[2].Next = Object;
  *((_QWORD *)&v21[1].Next + 1) = *a2;
  *((_DWORD *)&v21[2].Next + 2) = a3;
  v21[3].Next = v17;
  v22 = a8;
  v21[4].Next = *(_SLIST_ENTRY **)(a8 + 16);
  *((_QWORD *)&v21[4].Next + 1) = a6;
  v21[5].Next = (_SLIST_ENTRY *)v22;
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  *(_DWORD *)(v24 + 56) = PagePriorityThread;
  v25 = ListEntry;
  *((_QWORD *)&ListEntry[5].Next + 1) = KeGetCurrentThread()->ApcState.Process;
  v25[6].Next = (_SLIST_ENTRY *)CurrentThread;
  LOBYTE(v25[7].Next) = *(_BYTE *)(v22 + 24);
  HIDWORD(v25[7].Next) = *(_DWORD *)(v22 + 28);
  *((_QWORD *)&v25[6].Next + 1) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread);
  if ( *(_DWORD *)(v22 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x4C2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v25);
  return 1;
}
