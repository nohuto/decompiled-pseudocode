/*
 * XREFs of CcCanIWrite @ 0x140089AA0
 * Callers:
 *     FsRtlCopyWrite @ 0x140714110 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140714B20 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExInterlockedInsertHeadList @ 0x1400B1F00 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1400B1F80 (ExInterlockedInsertTailList.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400E3DD0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MmEnoughMemoryForWrite @ 0x140133C18 (MmEnoughMemoryForWrite.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 *     CcPerfLogCanWriteFail @ 0x1402212DC (CcPerfLogCanWriteFail.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  char v4; // r14
  UCHAR v5; // r12
  ULONG v6; // r13d
  _KSPIN_LOCK_QUEUE *BugCheckParameter4; // r11
  unsigned int v9; // r15d
  BOOLEAN v10; // di
  unsigned __int64 v11; // r8
  ULONG Flags; // eax
  KSPIN_LOCK *v13; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _QWORD *SharedCacheMap; // rax
  __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned __int8 v21; // r14
  struct _KPRCB *v22; // r10
  _DWORD *v23; // rcx
  signed __int32 v24; // edx
  ULONG_PTR *v25; // rdi
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  __int64 v28; // rax
  struct _KPRCB *v29; // rcx
  _LIST_ENTRY *v30; // rdi
  char v31; // di
  int v32; // r13d
  unsigned int v33; // r13d
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  bool v37; // r15
  __int64 Next; // rax
  struct _KPRCB *v39; // rcx
  PSECTION_OBJECT_POINTERS v40; // r13
  signed __int64 v41; // rax
  bool v42; // cc
  signed __int64 v43; // rax
  unsigned __int16 **v45; // r10
  int v46; // eax
  int v47; // eax
  bool v48; // zf
  signed __int32 v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  bool v54; // r12
  _DWORD *v55; // rcx
  unsigned int v56; // r8d
  int v57; // edx
  unsigned __int16 *v58; // r11
  unsigned int v59; // r15d
  KSPIN_LOCK *v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rdx
  int v63; // [rsp+34h] [rbp-95h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-91h] BYREF
  _KSPIN_LOCK_QUEUE *v65; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int64 *v66; // [rsp+58h] [rbp-71h]
  unsigned __int8 v67; // [rsp+60h] [rbp-69h]
  unsigned int v68; // [rsp+68h] [rbp-61h]
  __int16 Object; // [rsp+70h] [rbp-59h] BYREF
  char v70; // [rsp+72h] [rbp-57h]
  int v71; // [rsp+74h] [rbp-55h]
  _QWORD v72[2]; // [rsp+78h] [rbp-51h] BYREF
  struct _KLOCK_QUEUE_HANDLE v73; // [rsp+88h] [rbp-41h] BYREF
  int v74; // [rsp+A0h] [rbp-29h]
  PFILE_OBJECT v75; // [rsp+A8h] [rbp-21h]
  ULONG v76; // [rsp+B0h] [rbp-19h]
  _LIST_ENTRY ListEntry; // [rsp+B8h] [rbp-11h] BYREF
  __int16 *p_Object; // [rsp+C8h] [rbp-1h]
  __int64 v79; // [rsp+E8h] [rbp+1Fh]
  void *retaddr; // [rsp+128h] [rbp+5Fh]
  ULONG v81; // [rsp+138h] [rbp+6Fh]

  v81 = BytesToWrite;
  v4 = 0;
  v5 = Retrying;
  v6 = BytesToWrite;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  BugCheckParameter4 = 0LL;
  v9 = 0x1000000;
  v10 = 1;
  v11 = 2LL;
  if ( !FileObject )
  {
    v19 = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_28;
  }
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
    return v10;
  v13 = &CcMasterLock;
  v65 = 0LL;
  v66 = (volatile signed __int64 *)&CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v67 = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v46 = SchedulerAssist[5];
      SchedulerAssist[5] = v46 + 1;
      if ( v46 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v65, v13);
    goto LABEL_55;
  }
  if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v65) )
  {
    KxWaitForLockOwnerShip(&v65);
LABEL_55:
    BugCheckParameter4 = 0LL;
  }
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( !SectionObjectPointer || (SharedCacheMap = SectionObjectPointer->SharedCacheMap) == 0LL )
  {
    v19 = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_22;
  }
  v19 = SharedCacheMap[66];
  if ( !SharedCacheMap[21] )
    goto LABEL_22;
  v20 = *(_QWORD *)((SharedCacheMap[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
  v21 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, v21);
  }
  else
  {
    v22 = KeGetCurrentPrcb();
    v63 = (int)BugCheckParameter4;
    v23 = v22->SchedulerAssist;
    if ( v23 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v47 = v23[5];
        v23[5] = v47 + 1;
        if ( v47 == -1 && !*((_BYTE *)v23 + 25) && !*((_BYTE *)v23 + 27) )
          KiPerformUnboostKick(v22);
      }
    }
    if ( _interlockedbittestandset(&dword_1403CB280, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(v22, 0LL);
      v63 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CB280, v21);
      BugCheckParameter4 = 0LL;
    }
    v24 = dword_1403CB280;
    if ( (dword_1403CB280 & 0xBFFFFFFF) == 0x80000000 )
      goto LABEL_16;
    do
    {
      if ( (v24 & 0x40000000) == 0 )
      {
        v49 = _InterlockedCompareExchange(&dword_1403CB280, v24 | 0x40000000, v24);
        v48 = v24 == v49;
        v24 = v49;
        if ( !v48 )
          continue;
      }
      KeYieldProcessorEx(&v63);
      v24 = dword_1403CB280;
    }
    while ( (v24 & 0xBFFFFFFF) != 0x80000000 );
  }
  BugCheckParameter4 = 0LL;
LABEL_16:
  if ( *(_QWORD *)v20 )
    v25 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v20 + 60LL) & 0x3FF));
  else
    v25 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
    BugCheckParameter4 = 0LL;
  }
  else
  {
    dword_1403CB280 = (int)BugCheckParameter4;
  }
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      v50 = v27[5] - 1;
      v27[5] = v50;
      if ( !v50 && !*((_BYTE *)v27 + 25) && !*((_BYTE *)v27 + 27) )
        KiPerformUnboostKick(v26);
    }
  }
  __writecr8(v21);
  if ( v19 != *(_QWORD *)(v25[21] + 8) )
    KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, (ULONG_PTR)BugCheckParameter4);
LABEL_22:
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v19 + 904)) <= 1 )
    __fastfail(0xEu);
  v4 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v65, retaddr);
    BugCheckParameter4 = 0LL;
  }
  else
  {
    _m_prefetchw(&v65);
    v28 = (__int64)v65;
    if ( !v65 )
    {
      if ( (_KSPIN_LOCK_QUEUE **)_InterlockedCompareExchange64(
                                   v66,
                                   (signed __int64)BugCheckParameter4,
                                   (signed __int64)&v65) == &v65 )
        goto LABEL_26;
      v28 = KxWaitForLockChainValid((__int64 *)&v65);
      BugCheckParameter4 = 0LL;
    }
    v65 = BugCheckParameter4;
    _InterlockedXor64((volatile signed __int64 *)(v28 + 8), 1uLL);
  }
LABEL_26:
  v29 = KeGetCurrentPrcb();
  *(_QWORD *)&BytesToWrite = v29->SchedulerAssist;
  if ( *(_QWORD *)&BytesToWrite )
  {
    if ( v29->NestingLevel <= 1u )
    {
      v51 = *(_DWORD *)(*(_QWORD *)&BytesToWrite + 20LL) - 1;
      *(_DWORD *)(*(_QWORD *)&BytesToWrite + 20LL) = v51;
      if ( !v51 && !*(_BYTE *)(*(_QWORD *)&BytesToWrite + 25LL) && !*(_BYTE *)(*(_QWORD *)&BytesToWrite + 27LL) )
        KiPerformUnboostKick(v29);
    }
  }
  __writecr8(v67);
  v11 = 2LL;
LABEL_28:
  if ( !v5 )
  {
    v30 = (_LIST_ENTRY *)(v19 + 744);
    if ( v30->Flink != v30 )
      goto LABEL_127;
  }
  v31 = 0;
  LockHandle.LockQueue.Next = BugCheckParameter4;
  if ( v6 <= 0x1000000 )
    v9 = v6;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v19 + 128);
  v32 = (int)BugCheckParameter4;
  LOBYTE(v32) = (v9 & 0xFFF) != 0;
  v33 = (v9 >> 12) + v32;
  v68 = v33;
  v34 = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = v34;
  v35 = KeGetCurrentPrcb();
  v36 = v35->SchedulerAssist;
  if ( v36 )
  {
    if ( v35->NestingLevel <= 1u )
    {
      v52 = v36[5];
      v36[5] = v52 + 1;
      if ( v52 == -1 )
      {
        v11 = *((unsigned __int8 *)v36 + 27);
        if ( !*((_BYTE *)v36 + 25) && !(_BYTE)v11 )
          KiPerformUnboostKick(v35);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v19 + 128);
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)(v19 + 128), (__int64)&LockHandle) )
      goto LABEL_35;
    KxWaitForLockOwnerShip(&LockHandle);
  }
  BugCheckParameter4 = 0LL;
LABEL_35:
  v37 = *(_QWORD *)(v19 + 600) + (unsigned __int64)v33 >= *(_QWORD *)(v19 + 624);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    BugCheckParameter4 = 0LL;
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           (signed __int64)BugCheckParameter4,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_38;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      BugCheckParameter4 = 0LL;
    }
    LockHandle.LockQueue.Next = BugCheckParameter4;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_38:
  v39 = KeGetCurrentPrcb();
  *(_QWORD *)&BytesToWrite = v39->SchedulerAssist;
  if ( *(_QWORD *)&BytesToWrite )
  {
    if ( v39->NestingLevel <= 1u )
    {
      v53 = *(_DWORD *)(*(_QWORD *)&BytesToWrite + 20LL) - 1;
      *(_DWORD *)(*(_QWORD *)&BytesToWrite + 20LL) = v53;
      if ( !v53 )
      {
        v11 = *(unsigned __int8 *)(*(_QWORD *)&BytesToWrite + 27LL);
        if ( !*(_BYTE *)(*(_QWORD *)&BytesToWrite + 25LL) && !(_BYTE)v11 )
          KiPerformUnboostKick(v39);
      }
    }
  }
  __writecr8(LockHandle.OldIrql);
  v40 = (PSECTION_OBJECT_POINTERS)BugCheckParameter4;
  if ( !FileObject )
    goto LABEL_118;
  if ( (*((_BYTE *)FileObject->FsContext + 4) & 4) == 0 && !v37 )
  {
LABEL_42:
    v11 = qword_1403CFAC0;
    v31 = 0;
    *(_QWORD *)&BytesToWrite = 450LL;
    if ( (_BYTE)dword_14044B190 )
      *(_QWORD *)&BytesToWrite = 0x4000LL;
    if ( (unsigned __int64)qword_1403CFAC0 < *(_QWORD *)&BytesToWrite )
    {
      v45 = (unsigned __int16 **)&unk_1403CEF68;
      while ( 1 )
      {
        v58 = *v45;
        v59 = 0;
        if ( dword_1403CB6DC )
          break;
LABEL_124:
        if ( (__int64)++v45 > (__int64)&qword_1403CEF70 )
        {
          if ( qword_1403CFC40 < (unsigned __int64)(qword_1403CFCB0 + 800) )
            v31 = (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, 80LL) != 0;
          goto LABEL_46;
        }
      }
      while ( 1 )
      {
        v11 += *v58;
        if ( v11 >= *(_QWORD *)&BytesToWrite )
          break;
        ++v59;
        v58 += 8;
        if ( v59 >= dword_1403CB6DC )
          goto LABEL_124;
      }
    }
    v31 = 1;
LABEL_46:
    if ( v31 )
      goto LABEL_47;
    goto LABEL_60;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 128), &LockHandle);
  v40 = FileObject->SectionObjectPointer;
  v54 = 0;
  if ( v40 )
  {
    v55 = v40->SharedCacheMap;
    if ( v55 )
    {
      v56 = v55[66];
      if ( v56 )
      {
        v57 = v55[28];
        if ( v57 )
          v54 = v57 + v68 > v56;
      }
      if ( *(_QWORD *)(*((_QWORD *)v55 + 63) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages )
        v37 = 0;
    }
    v31 = MmEnoughMemoryForWrite(FileObject->SectionObjectPointer);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !v54 )
  {
LABEL_118:
    if ( !v37 )
    {
      if ( v40 )
        goto LABEL_46;
      goto LABEL_42;
    }
  }
LABEL_60:
  v5 = Retrying;
  v30 = (_LIST_ENTRY *)(v19 + 744);
  v6 = v81;
LABEL_127:
  if ( (xmmword_14044C2D0 & 0x20000) != 0 )
    CcPerfLogCanWriteFail(FileObject, v6, *(_QWORD *)(v19 + 600), *(_QWORD *)(v19 + 624));
  LOBYTE(BytesToWrite) = 1;
  CcAdjustWriteBehindThreadPoolIfNeeded(v19, *(_QWORD *)&BytesToWrite, v11);
  if ( !Wait )
  {
    v10 = 0;
    goto LABEL_48;
  }
  Object = 0;
  v71 = 0;
  v72[1] = v72;
  v72[0] = v72;
  p_Object = &Object;
  v60 = (KSPIN_LOCK *)(v19 + 768);
  v70 = 6;
  v79 = v19;
  v74 = 5243644;
  v75 = FileObject;
  v76 = v6;
  if ( v5 )
    ExInterlockedInsertHeadList(v30, &ListEntry, v60);
  else
    ExInterlockedInsertTailList(v30, &ListEntry, v60);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 128), &v73);
  LOBYTE(v61) = 1;
  CcScheduleLazyWriteScan(v19, v61, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
LABEL_134:
  __writecr8(v73.OldIrql);
  while ( 1 )
  {
    CcPostDeferredWrites(v19);
    if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
      break;
    if ( *(_BYTE *)(v19 + 900) || *(_BYTE *)(v19 + 140) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 128), &v73);
      LOBYTE(v62) = 1;
      CcScheduleLazyWriteScan(v19, v62, 0LL);
      if ( *(_BYTE *)(v19 + 140) )
        *(_BYTE *)(v19 + 140) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
      goto LABEL_134;
    }
  }
LABEL_47:
  v10 = 1;
LABEL_48:
  if ( v4 )
  {
    v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 904), 0xFFFFFFFFFFFFFFFFuLL);
    v42 = v41 <= 1;
    v43 = v41 - 1;
    if ( v42 )
    {
      if ( v43 )
        __fastfail(0xEu);
      KeSetEvent((PRKEVENT)(v19 + 936), 0, 0);
    }
  }
  return v10;
}
