/*
 * XREFs of CcWaitForCurrentLazyWriterActivityInternal @ 0x14015A53C
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityHelper @ 0x14015A510 (CcWaitForCurrentLazyWriterActivityHelper.c)
 *     CcSetPrivateWriteFile @ 0x1401E1390 (CcSetPrivateWriteFile.c)
 *     CcExitPartition @ 0x1401E2488 (CcExitPartition.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     CcAllocateWorkQueueEntry @ 0x140023330 (CcAllocateWorkQueueEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1401E2C38 (CcPerfLogWorkItemEnqueue.c)
 */

int __fastcall CcWaitForCurrentLazyWriterActivityInternal(__int64 a1)
{
  int result; // eax
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY *v4; // rcx
  __int16 Object; // [rsp+30h] [rbp-30h] BYREF
  char v6; // [rsp+32h] [rbp-2Eh]
  int v7; // [rsp+34h] [rbp-2Ch]
  _QWORD v8[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  PSLIST_ENTRY v10; // [rsp+78h] [rbp+18h] BYREF

  result = CcAllocateWorkQueueEntry(a1, &v10);
  if ( result >= 0 )
  {
    v3 = v10;
    *((_BYTE *)&v10[7].Next + 8) = 4;
    Object = 0;
    v7 = 0;
    v8[1] = v8;
    v8[0] = v8;
    v6 = 6;
    v3[1].Next = (_SLIST_ENTRY *)&Object;
    if ( (xmmword_140401150 & 0x20000) != 0 )
      CcPerfLogWorkItemEnqueue(a1 + 272, v3, 0LL, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v4 = *(PSLIST_ENTRY **)(a1 + 280);
    if ( *v4 != (PSLIST_ENTRY)(a1 + 272) )
      __fastfail(3u);
    v3->Next = (_SLIST_ENTRY *)(a1 + 272);
    *((_QWORD *)&v3->Next + 1) = v4;
    *v4 = v3;
    *(_QWORD *)(a1 + 280) = v3;
    *(_BYTE *)(a1 + 593) = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 316));
    CcScheduleLazyWriteScan(a1, 1, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 316));
  }
  return result;
}
