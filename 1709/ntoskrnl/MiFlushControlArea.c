/*
 * XREFs of MiFlushControlArea @ 0x140210EB8
 * Callers:
 *     MiDeleteCachedSegment @ 0x14021083C (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     MiDecrementModifiedWriteCount @ 0x1400EFE28 (MiDecrementModifiedWriteCount.c)
 *     MmIsWriteErrorFatal @ 0x1400EFE94 (MmIsWriteErrorFatal.c)
 *     MiRemoveWakeListEntry @ 0x140211AC4 (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MiFlushControlArea(char *P, unsigned __int8 a2, __int64 **a3, struct _FILE_OBJECT **a4)
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
  __int64 result; // rax
  __int64 v18; // rdi
  _QWORD *v19; // [rsp+40h] [rbp-29h]
  _DWORD v20[4]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v21; // [rsp+58h] [rbp-11h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h]
  __int16 v23; // [rsp+68h] [rbp-1h]
  char v24; // [rsp+6Ah] [rbp+1h]
  int v25; // [rsp+6Ch] [rbp+3h]
  _QWORD v26[10]; // [rsp+70h] [rbp+7h] BYREF
  BOOL v27; // [rsp+D0h] [rbp+67h]
  KIRQL v28; // [rsp+D8h] [rbp+6Fh]

  *((_DWORD *)P + 14) |= 0x100u;
  v4 = 0;
  v26[1] = v26;
  v5 = a2;
  v26[0] = v26;
  v21 = *((_QWORD *)P + 10);
  *a4 = 0LL;
  *((_QWORD *)P + 10) = &v21;
  *a3 = 0LL;
  v22 = 4LL;
  v23 = 263;
  v24 = 6;
  v25 = 0;
  _InterlockedAdd64((volatile signed __int64 *)P + 14, 1uLL);
  v19 = P + 64;
  v7 = (volatile LONG *)(P + 72);
  v8 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked((_QWORD *)P + 8);
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  __writecr8(v5);
  PoolWithTag = 0LL;
  v10 = (int)FsRtlAcquireFileForCcFlushEx(v8) >= 0;
  v27 = v10;
  v11 = ExAcquireSpinLockExclusive(v7);
  v28 = v11;
  v12 = _InterlockedDecrement64((volatile signed __int64 *)P + 14);
  if ( !v10 || (*((_DWORD *)P + 14) & 1) != 0 )
  {
    *((_DWORD *)P + 14) &= ~0x100u;
    HIDWORD(v22) = 1;
    if ( !v12 )
    {
      MiRemoveWakeListEntry(P, &v21);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
      __writecr8(v11);
      if ( v10 )
        FsRtlReleaseFileForCcFlush(v8);
      MiDeleteControlArea(P);
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      return 0LL;
    }
    v13 = 0;
  }
  else
  {
    ++*((_DWORD *)P + 19);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
    __writecr8(v11);
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    v13 = MiFlushSectionInternal(0LL, 0LL, (_QWORD *)P + 16, 0LL, 0LL, 2, v20);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( v13 < 0 )
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
    Characteristics = v8->DeviceObject->Characteristics;
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
    *((_DWORD *)P + 14) &= ~0x100u;
    v28 = v15;
    v4 = (Characteristics >> 4) & 1;
    *a3 = MiDecrementModifiedWriteCount((__int64)P, 1);
  }
  inserted = 0LL;
  MiRemoveWakeListEntry(P, &v21);
  if ( *((_QWORD *)P + 3) | *((_QWORD *)P + 5) | *((_DWORD *)P + 14) & 1 )
    goto LABEL_20;
  if ( !HIDWORD(v22) || !*((_QWORD *)P + 4) )
  {
    if ( v13 >= 0 || !*((_QWORD *)P + 4) )
      goto LABEL_17;
    if ( v13 != -1073740749 && (unsigned int)MmIsWriteErrorFatal(1, v4, v13) )
    {
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)ObFastReferenceObjectLocked(v19);
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
  inserted = MiInsertUnusedSegment((__int64)P);
  if ( !inserted )
LABEL_20:
    v18 = 0LL;
  else
    v18 = *(_QWORD *)(qword_140388AF0 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  __writecr8(v28);
  if ( v27 )
    FsRtlReleaseFileForCcFlush(v8);
  ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v18, 1LL, inserted);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
