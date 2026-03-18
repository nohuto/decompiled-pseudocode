/*
 * XREFs of CcMdlWriteComplete2 @ 0x1400CB7B4
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x140579D10 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x14057F0C0 (CcMdlWriteComplete.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x1400E1380 (MmFlushSection.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3, int a4)
{
  __int64 v4; // rbx
  CSHORT MdlFlags; // bp
  struct _MDL *v7; // rdi
  NTSTATUS v8; // esi
  struct _MDL *v9; // r14
  __int16 v10; // bp
  __int64 v11; // r12
  struct _MDL *Next; // r15
  __int64 ByteCount; // r8
  __int64 v14; // rax
  __int64 Partition; // rax
  struct _MDL *v16; // rbx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v18; // ecx
  int v19[4]; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF

  v4 = *a2;
  MdlFlags = a3->MdlFlags;
  v7 = a3;
  v21 = *a2;
  v8 = 0;
  v9 = a3;
  v10 = MdlFlags & 2;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  do
  {
    Next = v9->Next;
    if ( v10 )
      MmUnlockPages(v9);
    ByteCount = v9->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), (unsigned int)&v21, ByteCount, a4, (__int64)v19, 1);
      if ( v19[0] < 0 )
        v8 = v19[0];
    }
    else
    {
      CcSetDirtyInMask(v11, &v21, ByteCount, 0LL);
    }
    v14 = v9->ByteCount;
    v9 = Next;
    v4 += v14;
    v21 = v4;
  }
  while ( Next );
  if ( v10 )
  {
    Partition = CcGetPartition(v11);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount(v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( v8 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v8);
    v18 = -1073741591;
    if ( IsNtstatusExpected )
      v18 = v8;
    RtlRaiseStatus(v18);
  }
  do
  {
    v16 = v7->Next;
    IoFreeMdl(v7);
    v7 = v16;
  }
  while ( v16 );
}
