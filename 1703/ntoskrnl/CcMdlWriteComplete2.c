/*
 * XREFs of CcMdlWriteComplete2 @ 0x140036100
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x140456890 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x14045A440 (CcMdlWriteComplete.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  NTSTATUS v6; // esi
  struct _MDL *v7; // rdi
  bool v8; // bp
  __int64 v9; // r13
  struct _MDL *Next; // r15
  __int64 ByteCount; // rax
  PMDL v12; // r14
  struct _MDL *v13; // rbx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v15; // ecx
  int v16[4]; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+10h]
  PMDL Mdl; // [rsp+B0h] [rbp+18h]

  Mdl = (PMDL)a3;
  v4 = *a2;
  v18 = *a2;
  v6 = 0;
  v7 = (struct _MDL *)a3;
  v8 = (*(_BYTE *)(a3 + 10) & 2) != 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v19 = *(_QWORD *)(v9 + 528);
  do
  {
    Next = v7->Next;
    if ( v8 )
      MmUnlockPages(v7);
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), (unsigned int)&v18, v7->ByteCount, a4, (__int64)v16, 1);
      if ( v16[0] < 0 )
        v6 = v16[0];
    }
    else
    {
      CcSetDirtyInMask(v9, &v18, v7->ByteCount, 0LL);
    }
    ByteCount = v7->ByteCount;
    v7 = Next;
    v4 += ByteCount;
    v18 = v4;
  }
  while ( Next );
  v12 = Mdl;
  if ( v8 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 64), &LockHandle);
    CcDecrementOpenCount(v9);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( v6 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v6);
    v15 = -1073741591;
    if ( IsNtstatusExpected )
      v15 = v6;
    RtlRaiseStatus(v15);
  }
  do
  {
    v13 = v12->Next;
    IoFreeMdl(v12);
    v12 = v13;
  }
  while ( v13 );
}
