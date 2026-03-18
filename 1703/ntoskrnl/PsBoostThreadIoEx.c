/*
 * XREFs of PsBoostThreadIoEx @ 0x14008D210
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x140019D84 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x140019E4C (FsRtlpDoBoost.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14001BAA0 (ExpSetResourceOwnerPointerEx.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140029248 (CcBoostLowPriorityWorkerThread.c)
 *     KiAbThreadUnboostIoPriority @ 0x14003AB10 (KiAbThreadUnboostIoPriority.c)
 *     PsEnterPriorityRegion @ 0x14008D1B0 (PsEnterPriorityRegion.c)
 *     PsLeavePriorityRegion @ 0x14008D1D0 (PsLeavePriorityRegion.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14008D660 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     CcApplyLowIoPriorityToThread @ 0x1400AB33C (CcApplyLowIoPriorityToThread.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     CcAcquireByteRangeForWrite @ 0x14011B330 (CcAcquireByteRangeForWrite.c)
 *     ExReinitializeResourceLite @ 0x14011C340 (ExReinitializeResourceLite.c)
 *     FsRtlReleaseEofLock @ 0x14011C930 (FsRtlReleaseEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x14011D258 (FsRtlpWaitForIoAtEof.c)
 *     KiAbThreadBoostIoPriority @ 0x14011F390 (KiAbThreadBoostIoPriority.c)
 *     IoBoostThreadIo @ 0x140131F40 (IoBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14025C060 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x14025C130 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KiAbThreadInsertList @ 0x1400309BC (KiAbThreadInsertList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, void *a4)
{
  signed __int32 v4; // ebx
  KIRQL v5; // r13
  char v7; // bp
  PVOID *v10; // r12
  bool v11; // zf
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  PVOID *PoolWithTag; // rax
  __int64 **v15; // r14
  __int64 **v16; // r14
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  PVOID **v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdx

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
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1840));
LABEL_3:
  if ( !a2 )
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1792));
    if ( !v7 )
      goto LABEL_13;
    if ( !v10 )
      goto LABEL_27;
    v19 = a1 + 1808;
    v20 = *(PVOID ***)(a1 + 1816);
    if ( *v20 != (PVOID *)(a1 + 1808) )
      __fastfail(3u);
    goto LABEL_34;
  }
  if ( *(_DWORD *)(a1 + 1792) )
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1792));
    if ( !v7 )
      goto LABEL_6;
    if ( !*(_DWORD *)(a1 + 1792) )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0x736F6F42u);
      v15 = (__int64 **)(a1 + 1808);
      while ( *v15 != (__int64 *)v15 )
      {
        v17 = *v15;
        v18 = **v15;
        if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v18 + 8) != v17 )
          __fastfail(3u);
        *v15 = (__int64 *)v18;
        *(_QWORD *)(v18 + 8) = v15;
        ExFreePoolWithTag(v17, 0x736F6F42u);
      }
      v16 = (__int64 **)(a1 + 1824);
      while ( *v16 != (__int64 *)v16 )
      {
        v21 = *v16;
        v22 = **v16;
        if ( (__int64 **)(*v16)[1] != v16 || *(__int64 **)(v22 + 8) != v21 )
          __fastfail(3u);
        *v16 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v16;
        ExFreePoolWithTag(v21, 0x736F6F42u);
      }
      goto LABEL_27;
    }
    if ( v10 )
    {
      v19 = a1 + 1824;
      v20 = *(PVOID ***)(a1 + 1832);
      if ( *v20 != (PVOID *)(a1 + 1824) )
        __fastfail(3u);
LABEL_34:
      *v10 = (PVOID)v19;
      v10[1] = v20;
      *v20 = v10;
      *(_QWORD *)(v19 + 8) = v10;
    }
  }
LABEL_27:
  if ( v7 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 1840));
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
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList.Next, (_QWORD *)(a1 + 1376)) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
}
