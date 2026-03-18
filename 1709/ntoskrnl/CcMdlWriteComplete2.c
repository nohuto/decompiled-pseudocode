/*
 * XREFs of CcMdlWriteComplete2 @ 0x14012F234
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x14059ACA0 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x14059D840 (CcMdlWriteComplete.c)
 * Callees:
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3)
{
  __int64 v3; // rbx
  CSHORT MdlFlags; // r14
  struct _MDL *v6; // rsi
  NTSTATUS v7; // ebp
  struct _MDL *v8; // rdi
  __int16 v9; // r14
  _QWORD *v10; // r12
  struct _MDL *Next; // r15
  __int64 ByteCount; // rax
  __int64 Partition; // rax
  struct _MDL *v14; // rbx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v16; // ecx
  int v17; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF

  v3 = *a2;
  MdlFlags = a3->MdlFlags;
  v6 = a3;
  v19 = *a2;
  v7 = 0;
  v8 = a3;
  v9 = MdlFlags & 2;
  v10 = *(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
  do
  {
    Next = v8->Next;
    if ( v9 )
      MmUnlockPages(v8);
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), (va_list)&v19, v8->ByteCount);
      if ( v17 < 0 )
        v7 = v17;
    }
    else
    {
      CcSetDirtyInMask((__int64)v10, &v19, v8->ByteCount, 0LL);
    }
    ByteCount = v8->ByteCount;
    v8 = Next;
    v3 += ByteCount;
    v19 = v3;
  }
  while ( Next );
  if ( v9 )
  {
    Partition = CcGetPartition(v10);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount((__int64)v10);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( v7 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v7);
    v16 = -1073741591;
    if ( IsNtstatusExpected )
      v16 = v7;
    RtlRaiseStatus(v16);
  }
  do
  {
    v14 = v6->Next;
    IoFreeMdl(v6);
    v6 = v14;
  }
  while ( v14 );
}
