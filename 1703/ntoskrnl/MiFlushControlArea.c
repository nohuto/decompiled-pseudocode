/*
 * XREFs of MiFlushControlArea @ 0x14020A348
 * Callers:
 *     MiDeleteCachedSegment @ 0x140209CC8 (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x14020A790 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x1400150EC (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x140015158 (MmIsWriteErrorFatal.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     MiDeleteControlArea @ 0x140118FDC (MiDeleteControlArea.c)
 *     MiRemoveWakeListEntry @ 0x14020AC48 (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404C6C34 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MiFlushControlArea(__int64 a1, unsigned __int8 a2, __int64 *a3, struct _FILE_OBJECT **a4)
{
  int v4; // r12d
  unsigned __int64 v5; // rbx
  volatile LONG *v7; // r13
  struct _FILE_OBJECT *v8; // r14
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  BOOL v10; // r15d
  KIRQL v11; // si
  signed __int64 v12; // rcx
  NTSTATUS v13; // r15d
  ULONG Characteristics; // r12d
  KIRQL v15; // al
  __int64 inserted; // rsi
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdi
  _QWORD *v20; // [rsp+40h] [rbp-29h]
  unsigned int v21[4]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v22; // [rsp+58h] [rbp-11h] BYREF
  __int64 v23; // [rsp+60h] [rbp-9h]
  __int16 v24; // [rsp+68h] [rbp-1h]
  char v25; // [rsp+6Ah] [rbp+1h]
  int v26; // [rsp+6Ch] [rbp+3h]
  _QWORD v27[10]; // [rsp+70h] [rbp+7h] BYREF
  BOOL v28; // [rsp+D0h] [rbp+67h]
  KIRQL v29; // [rsp+D8h] [rbp+6Fh]

  *(_DWORD *)(a1 + 56) |= 0x100u;
  v4 = 0;
  v27[1] = v27;
  v5 = a2;
  v27[0] = v27;
  v22 = *(_QWORD *)(a1 + 80);
  *a4 = 0LL;
  *(_QWORD *)(a1 + 80) = &v22;
  *a3 = 0LL;
  v23 = 4LL;
  v24 = 263;
  v25 = 6;
  v26 = 0;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 112), 1uLL);
  v20 = (_QWORD *)(a1 + 64);
  v7 = (volatile LONG *)(a1 + 72);
  v8 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  __writecr8(v5);
  PoolWithTag = 0LL;
  v10 = (int)FsRtlAcquireFileForCcFlushEx(v8) >= 0;
  v28 = v10;
  v11 = ExAcquireSpinLockExclusive(v7);
  v29 = v11;
  v12 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 112));
  if ( !v10 || (*(_DWORD *)(a1 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 56) &= ~0x100u;
    HIDWORD(v23) = 1;
    if ( !v12 )
    {
      MiRemoveWakeListEntry(a1, &v22);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      __writecr8(v11);
      if ( v10 )
        FsRtlReleaseFileForCcFlush(v8);
      MiDeleteControlArea(a1);
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      return 0LL;
    }
    v13 = 0;
  }
  else
  {
    ++*(_DWORD *)(a1 + 76);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v11);
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
    v13 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 128), 0LL, 0LL, 2, v21);
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    if ( v13 < 0 )
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
    Characteristics = v8->DeviceObject->Characteristics;
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~0x100u;
    v29 = v15;
    v4 = (Characteristics >> 4) & 1;
    *a3 = MiDecrementModifiedWriteCount(a1, 1);
  }
  inserted = 0LL;
  MiRemoveWakeListEntry(a1, &v22);
  v17 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(a1 + 40) | *(_DWORD *)(a1 + 56) & 1;
  if ( v17 )
    goto LABEL_20;
  if ( !HIDWORD(v23) || !*(_QWORD *)(a1 + 32) )
  {
    if ( v13 >= 0 || !*(_QWORD *)(a1 + 32) )
      goto LABEL_17;
    if ( v13 != -1073740749 && (unsigned int)MmIsWriteErrorFatal(1, v4, v13) )
    {
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)ObFastReferenceObjectLocked(v20);
        LODWORD(PoolWithTag[1].List.Blink) = v13;
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
LABEL_17:
      result = 1LL;
      *a4 = v8;
      return result;
    }
  }
  inserted = MiInsertUnusedSegment(a1, v17);
  if ( !inserted )
LABEL_20:
    v19 = 0LL;
  else
    v19 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  __writecr8(v29);
  if ( v28 )
    FsRtlReleaseFileForCcFlush(v8);
  ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v19, 1LL, inserted);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
