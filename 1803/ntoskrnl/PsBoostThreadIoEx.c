/*
 * XREFs of PsBoostThreadIoEx @ 0x1400FE2D0
 * Callers:
 *     FsRtlReleaseEofLock @ 0x14007B940 (FsRtlReleaseEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x14007C42C (FsRtlpWaitForIoAtEof.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400880C0 (ExpSetResourceOwnerPointerEx.c)
 *     ExReinitializeResourceLite @ 0x1400AA920 (ExReinitializeResourceLite.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C8AF4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x1400C8BBC (FsRtlpDoBoost.c)
 *     KiAbThreadBoostIoPriority @ 0x1400CE508 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x1400D11C4 (KiAbThreadUnboostIoPriority.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400FDD20 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsEnterPriorityRegion @ 0x1400FE250 (PsEnterPriorityRegion.c)
 *     PsLeavePriorityRegion @ 0x1400FE280 (PsLeavePriorityRegion.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     IoBoostThreadIo @ 0x140155FB0 (IoBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1402B9FB0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x1402BA080 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAbThreadInsertList @ 0x1400C38F0 (KiAbThreadInsertList.c)
 *     RtlCaptureStackBackTrace @ 0x140130B00 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, void *a4)
{
  signed __int32 v4; // ebx
  KIRQL v5; // r13
  char v7; // bp
  PVOID *v10; // r12
  bool v11; // zf
  unsigned __int8 CurrentIrql; // di
  struct _KDPC *CurrentPrcb; // rbx
  PVOID *PoolWithTag; // rax
  __int64 **v15; // r14
  __int64 *v16; // rcx
  __int64 **v17; // r14
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  PVOID **v21; // rcx
  __int64 v22; // rax

  v4 = 0;
  v5 = 0;
  v7 = a3;
  v10 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v7 = 1;
  }
  else if ( !a3 )
  {
    goto LABEL_3;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    RtlCaptureStackBackTrace(1u, 0xAu, v10 + 2, 0LL);
    v10[12] = KeGetCurrentThread();
    v10[13] = a4;
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1848));
LABEL_3:
  if ( !a2 )
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1800));
    if ( !v7 )
      goto LABEL_13;
    if ( !v10 )
      goto LABEL_27;
    v20 = a1 + 1816;
    v21 = *(PVOID ***)(a1 + 1824);
    if ( *v21 != (PVOID *)(a1 + 1816) )
      __fastfail(3u);
    goto LABEL_34;
  }
  if ( *(_DWORD *)(a1 + 1800) )
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1800));
    if ( !v7 )
      goto LABEL_6;
    if ( !*(_DWORD *)(a1 + 1800) )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0x736F6F42u);
      v15 = (__int64 **)(a1 + 1816);
      while ( 1 )
      {
        v16 = *v15;
        if ( *v15 == (__int64 *)v15 )
          break;
        v19 = *v16;
        if ( (__int64 **)v16[1] != v15 || *(__int64 **)(v19 + 8) != v16 )
          __fastfail(3u);
        *v15 = (__int64 *)v19;
        *(_QWORD *)(v19 + 8) = v15;
        ExFreePoolWithTag(v16, 0x736F6F42u);
      }
      v17 = (__int64 **)(a1 + 1832);
      while ( 1 )
      {
        v18 = *v17;
        if ( *v17 == (__int64 *)v17 )
          break;
        v22 = *v18;
        if ( (__int64 **)v18[1] != v17 || *(__int64 **)(v22 + 8) != v18 )
          __fastfail(3u);
        *v17 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v17;
        ExFreePoolWithTag(v18, 0x736F6F42u);
      }
      goto LABEL_27;
    }
    if ( v10 )
    {
      v20 = a1 + 1832;
      v21 = *(PVOID ***)(a1 + 1840);
      if ( *v21 != (PVOID *)(a1 + 1832) )
        __fastfail(3u);
LABEL_34:
      *v10 = (PVOID)v20;
      v10[1] = v21;
      *v21 = v10;
      *(_QWORD *)(v20 + 8) = v10;
    }
  }
LABEL_27:
  if ( v7 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 1848));
    __writecr8(v5);
  }
LABEL_6:
  if ( !a2 )
  {
LABEL_13:
    v11 = v4 == 1;
    goto LABEL_8;
  }
  v11 = v4 == 0;
LABEL_8:
  if ( v11 && !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb[401].DpcData, (_QWORD *)(a1 + 1376)) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
}
