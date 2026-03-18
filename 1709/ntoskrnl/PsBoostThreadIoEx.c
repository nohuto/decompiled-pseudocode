/*
 * XREFs of PsBoostThreadIoEx @ 0x1400813D0
 * Callers:
 *     ExReinitializeResourceLite @ 0x14001F1C0 (ExReinitializeResourceLite.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14007D3F0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     PsLeavePriorityRegion @ 0x140081740 (PsLeavePriorityRegion.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400F1580 (ExpSetResourceOwnerPointerEx.c)
 *     FsRtlpWaitForIoAtEof @ 0x140100900 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlReleaseEofLock @ 0x140100BE0 (FsRtlReleaseEofLock.c)
 *     PsEnterPriorityRegion @ 0x14010EDD0 (PsEnterPriorityRegion.c)
 *     KiAbThreadBoostIoPriority @ 0x14010F8BC (KiAbThreadBoostIoPriority.c)
 *     FsRtlpModifyThreadPriorities @ 0x140127258 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x140127320 (FsRtlpDoBoost.c)
 *     KiAbThreadUnboostIoPriority @ 0x14012F5D0 (KiAbThreadUnboostIoPriority.c)
 *     IoBoostThreadIo @ 0x1401F9280 (IoBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x140285980 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x140285A50 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140124280 (KiAbThreadInsertList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, void *a4)
{
  signed __int32 v4; // edi
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
  _QWORD *v19; // rax
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
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1848));
LABEL_3:
  if ( !a2 )
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1800));
    if ( !v7 )
      goto LABEL_13;
    if ( !v10 )
      goto LABEL_27;
    v19 = (_QWORD *)(a1 + 1816);
    v20 = *(PVOID ***)(a1 + 1824);
    if ( *v20 != (PVOID *)(a1 + 1816) )
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
      v16 = (__int64 **)(a1 + 1832);
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
      v19 = (_QWORD *)(a1 + 1832);
      v20 = *(PVOID ***)(a1 + 1840);
      if ( *v20 != (PVOID *)(a1 + 1832) )
        __fastfail(3u);
LABEL_34:
      *v10 = v19;
      v10[1] = v20;
      *v20 = v10;
      v19[1] = v10;
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
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 1376) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
}
