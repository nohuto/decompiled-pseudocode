/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x140131770
 * Callers:
 *     CcSetPrivateWriteFile @ 0x1401DE2BC (CcSetPrivateWriteFile.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     CcPerfLogWorkItemEnqueue @ 0x140023B2C (CcPerfLogWorkItemEnqueue.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x1400AFA58 (CcAllocateWorkQueueEntry.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  __int64 v0; // rcx
  NTSTATUS result; // eax
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY *v3; // rax
  __int16 Object; // [rsp+30h] [rbp-30h] BYREF
  char v5; // [rsp+32h] [rbp-2Eh]
  int v6; // [rsp+34h] [rbp-2Ch]
  _QWORD v7[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  PSLIST_ENTRY v9; // [rsp+70h] [rbp+10h] BYREF

  result = CcAllocateWorkQueueEntry(v0, &v9);
  if ( result >= 0 )
  {
    v2 = v9;
    *((_BYTE *)&v9[7].Next + 8) = 4;
    Object = 0;
    v6 = 0;
    v7[1] = v7;
    v7[0] = v7;
    v5 = 6;
    v2[1].Next = (_SLIST_ENTRY *)&Object;
    v2[8].Next = (_SLIST_ENTRY *)&CcSystemPartition;
    if ( (xmmword_1403E4010 & 0x20000) != 0 )
      CcPerfLogWorkItemEnqueue((__int64)&unk_14036F858, (__int64)v2, 0, 0);
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    v3 = (PSLIST_ENTRY *)qword_14036F860;
    if ( *(_UNKNOWN **)qword_14036F860 != &unk_14036F858 )
      __fastfail(3u);
    v2->Next = (_SLIST_ENTRY *)&unk_14036F858;
    *((_QWORD *)&v2->Next + 1) = v3;
    *v3 = v2;
    qword_14036F860 = (__int64)v2;
    byte_14036F999 = 1;
    _InterlockedIncrement(dword_14036F884);
    CcScheduleLazyWriteScan((__int64)&CcSystemPartition, 1, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    _InterlockedDecrement(dword_14036F884);
  }
  return result;
}
