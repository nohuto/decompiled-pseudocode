/*
 * XREFs of CcCompleteAsyncRead @ 0x1400C1278
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x1400C11B0 (CcCompleteAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x1401394C4 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x140178110 (CcAsyncReadWorker.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x140043C14 (PsSetPagePriorityThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CcCopyReadExceptionFilter @ 0x14021FE44 (CcCopyReadExceptionFilter.c)
 *     CcMapAndCopyFromCache @ 0x1405B6B00 (CcMapAndCopyFromCache.c)
 */

__int64 __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r8
  PVOID MappedSystemVa; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+44h] [rbp-A4h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-90h]
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-80h]
  int v13[2]; // [rsp+78h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-60h] BYREF
  __int64 v15; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+100h] [rbp+18h]
  int PagePriorityThread; // [rsp+108h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  LODWORD(v15) = 0;
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v13 = *(_QWORD *)(a1 + 32);
  v16 = *(_DWORD *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 104);
  PsSetPagePriorityThread(v6, v10);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v3 >= 0 )
  {
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = v16;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( MappedSystemVa )
      CcMapAndCopyFromCache(v13[0], MappedSystemVa, (__int64)&v15, v10, v5);
    else
      *(_DWORD *)v3 = -1073741670;
  }
  if ( v5 )
    IoDiskIoAttributionDereference(v5);
  if ( (_DWORD)v15 )
    ++CcNumberAsyncReadRefaulted;
  if ( v4 && *(_QWORD *)v4 )
    (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v4 + 8));
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 520));
  v8 = *(_QWORD *)(a1 + 128);
  if ( v8 != *(_QWORD *)(v2 + 528) )
    KeBugCheckEx(0x34u, 0x643uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 128), &LockHandle);
  CcDecrementOpenCount(v2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
