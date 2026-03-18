/*
 * XREFs of CcCompleteAsyncRead @ 0x14002887C
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140023674 (CcPostWorkQueueAsyncRead.c)
 *     CcCompleteAsyncReadWorker @ 0x140028770 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1401340C0 (CcAsyncReadWorker.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x140044894 (PsSetPagePriorityThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CcCopyReadExceptionFilter @ 0x1401DD8D4 (CcCopyReadExceptionFilter.c)
 *     CcMapAndCopyFromCache @ 0x1405141C0 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r8
  int v8; // r9d
  int v9; // edx
  PVOID MappedSystemVa; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned int PagePriorityThread; // [rsp+44h] [rbp-B4h]
  unsigned int v14; // [rsp+48h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-90h]
  PMDL MemoryDescriptorList; // [rsp+78h] [rbp-80h]
  int v17[2]; // [rsp+80h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-68h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-50h]
  __int64 v20; // [rsp+110h] [rbp+18h] BYREF
  int v21; // [rsp+118h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  LODWORD(v20) = 0;
  v19 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v17 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v21 = *(_DWORD *)(a1 + 40);
  v14 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 104);
  PsSetPagePriorityThread(v7, v14);
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)7;
  if ( *(int *)v4 >= 0 )
  {
    *(_DWORD *)v4 = 0;
    v9 = v21;
    *(_QWORD *)(v4 + 8) = (unsigned int)v21;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      v9 = v21;
    }
    if ( MappedSystemVa )
    {
      LOBYTE(v8) = 1;
      CcMapAndCopyFromCache(v17[0], v3, v9, v8, MappedSystemVa, (__int64)&v20, v14, v6);
    }
    else
    {
      *(_DWORD *)v4 = -1073741670;
    }
  }
  if ( v6 )
    IoDiskIoAttributionDereference(v6);
  if ( (_DWORD)v20 )
    ++CcNumberAsyncReadRefaulted;
  if ( v5 && *(_QWORD *)v5 )
    (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v5 + 8));
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
  PsSetPagePriorityThread(CurrentThread, PagePriorityThread);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 520));
  v11 = *(_QWORD *)(a1 + 128);
  if ( v11 != *(_QWORD *)(v2 + 528) )
    KeBugCheckEx(0x34u, 0x1AB7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 64), &LockHandle);
  CcDecrementOpenCount(v2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
