/*
 * XREFs of CcMapAndCopyInToCache @ 0x140112290
 * Callers:
 *     CcCopyWriteEx @ 0x1400AABC0 (CcCopyWriteEx.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x1400C0444 (MmUpdateSectionIoAttribution.c)
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     CcCanIWriteStream @ 0x140133A34 (CcCanIWriteStream.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x14021FE44 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x140220198 (CcLockSystemCacheBuffer.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     HviCopyMemory @ 0x140294178 (HviCopyMemory.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        __int64 *a3,
        NTSTATUS a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9)
{
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // r11
  bool v14; // r8
  int v15; // r12d
  _SLIST_ENTRY *v16; // r14
  char v17; // si
  __int64 v18; // r14
  __int64 v19; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v23; // edx
  ULONG_PTR *v24; // r13
  ULONG_PTR *v25; // rbx
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  struct _KTHREAD *v28; // r8
  unsigned int v29; // edx
  unsigned int v30; // r15d
  int v31; // eax
  __int64 v32; // r11
  __int64 v33; // rbx
  unsigned __int8 v34; // si
  struct _KPRCB *v35; // r10
  _DWORD *v36; // rcx
  signed __int32 v37; // edx
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  struct _KTHREAD *v40; // r14
  _QWORD *Object; // rbx
  _KPROCESS *Process; // rsi
  int v43; // esi
  unsigned __int64 v44; // r14
  __int64 v45; // rbx
  __int64 VirtualAddress; // rax
  unsigned int v47; // r13d
  unsigned int v48; // r14d
  ULONG_PTR v49; // r10
  unsigned int v50; // r13d
  int v51; // eax
  int v52; // ebx
  unsigned int v53; // ecx
  BOOL v54; // esi
  NTSTATUS v55; // eax
  __int64 v56; // rdx
  struct _KEVENT *v57; // rcx
  NTSTATUS v58; // eax
  __int64 v59; // rax
  int v60; // eax
  unsigned int v61; // ecx
  struct _KTHREAD *v62; // rdx
  struct _KTHREAD *v63; // rax
  NTSTATUS v64; // esi
  BOOLEAN v65; // al
  NTSTATUS v66; // ecx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v68; // ecx
  __int64 v69; // r8
  int v70; // r8d
  unsigned int v71; // ecx
  struct _KTHREAD *v72; // rdx
  char v73; // al
  KIRQL v75; // r13
  unsigned __int64 v76; // rsi
  unsigned int v77; // r8d
  NTSTATUS v78; // ebx
  KIRQL v79; // si
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v81; // rax
  __int64 v82; // rcx
  struct _KEVENT *v83; // rcx
  int v84; // eax
  bool v85; // zf
  signed __int32 v86; // eax
  int v87; // eax
  int v88; // eax
  signed __int32 v89; // eax
  int v90; // eax
  BOOLEAN v91; // al
  NTSTATUS v92; // ecx
  char v93; // [rsp+58h] [rbp-148h]
  char v94; // [rsp+5Ah] [rbp-146h]
  bool v95; // [rsp+5Bh] [rbp-145h]
  char v96; // [rsp+5Ch] [rbp-144h]
  char v97; // [rsp+5Dh] [rbp-143h]
  char v98; // [rsp+5Fh] [rbp-141h]
  int v99; // [rsp+64h] [rbp-13Ch]
  unsigned int v100; // [rsp+68h] [rbp-138h]
  NTSTATUS Exception; // [rsp+70h] [rbp-130h]
  unsigned int v102; // [rsp+74h] [rbp-12Ch] BYREF
  __int64 v103; // [rsp+78h] [rbp-128h] BYREF
  __int64 v104; // [rsp+80h] [rbp-120h]
  __int64 v105; // [rsp+88h] [rbp-118h] BYREF
  unsigned int v106; // [rsp+90h] [rbp-110h]
  int v107; // [rsp+94h] [rbp-10Ch]
  int v108; // [rsp+98h] [rbp-108h]
  NTSTATUS v109; // [rsp+9Ch] [rbp-104h]
  int v110; // [rsp+A0h] [rbp-100h] BYREF
  int v111; // [rsp+A4h] [rbp-FCh] BYREF
  int v112; // [rsp+A8h] [rbp-F8h]
  ULONG_PTR v113; // [rsp+B0h] [rbp-F0h]
  PMDL MemoryDescriptorList; // [rsp+B8h] [rbp-E8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-E0h]
  unsigned int v116; // [rsp+C8h] [rbp-D8h]
  NTSTATUS v117[3]; // [rsp+CCh] [rbp-D4h] BYREF
  __int64 v118; // [rsp+D8h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE v119; // [rsp+E0h] [rbp-C0h] BYREF
  unsigned __int64 v120; // [rsp+F8h] [rbp-A8h]
  NTSTATUS Status[6]; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v122; // [rsp+118h] [rbp-88h]
  __int64 v123; // [rsp+120h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v124; // [rsp+128h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+148h] [rbp-58h] BYREF
  void *retaddr; // [rsp+1A0h] [rbp+0h]

  v109 = a4;
  v11 = a1;
  v12 = 0LL;
  v13 = a6;
  v14 = (*(_DWORD *)(a6 + 80) & 0x10) != 0;
  v93 = v14;
  v117[2] = a4;
  v106 = *(_DWORD *)a3 & 0xFFF;
  v105 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v99 = 0;
  v98 = 0;
  v94 = 0;
  v16 = 0LL;
  v97 = 0;
  v95 = (*(_DWORD *)(a1 + 152) & 0x1000) != 0;
  v103 = *a3;
  v108 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v117[1] = v108;
  v17 = v14;
  v96 = v14;
  if ( v14 )
  {
    v24 = &MiSystemPartition;
    v30 = a4;
    goto LABEL_21;
  }
  v96 = 0;
  v18 = *(_QWORD *)(a1 + 528);
  if ( !*(_QWORD *)(a1 + 168) )
  {
    v24 = &MiSystemPartition;
    goto LABEL_15;
  }
  v19 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, CurrentIrql);
  }
  else
  {
    v110 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v84 = SchedulerAssist[5];
        SchedulerAssist[5] = v84 + 1;
        if ( v84 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&dword_1403CB280, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      v110 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CB280, CurrentIrql);
      v13 = a6;
    }
    v23 = dword_1403CB280;
    if ( (dword_1403CB280 & 0xBFFFFFFF) == 0x80000000 )
      goto LABEL_8;
    do
    {
      if ( (v23 & 0x40000000) == 0 )
      {
        v86 = _InterlockedCompareExchange(&dword_1403CB280, v23 | 0x40000000, v23);
        v85 = v23 == v86;
        v23 = v86;
        if ( !v85 )
          continue;
      }
      KeYieldProcessorEx(&v110);
      v23 = dword_1403CB280;
    }
    while ( (v23 & 0xBFFFFFFF) != 0x80000000 );
  }
  v13 = a6;
LABEL_8:
  v24 = &MiSystemPartition;
  if ( *(_QWORD *)v19 )
    v25 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v19 + 60LL) & 0x3FF));
  else
    v25 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
    v13 = a6;
  }
  else
  {
    dword_1403CB280 = 0;
  }
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      v87 = v27[5] - 1;
      v27[5] = v87;
      if ( !v87 && !*((_BYTE *)v27 + 25) && !*((_BYTE *)v27 + 27) )
        KiPerformUnboostKick(v26);
    }
  }
  __writecr8(CurrentIrql);
  if ( v18 != *(_QWORD *)(v25[21] + 8) )
    KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v15 = 0;
  v11 = a1;
  v17 = 0;
LABEL_15:
  if ( (*(_DWORD *)(v13 + 80) & 0x1000000) != 0 )
  {
    v30 = a4;
    if ( !(unsigned __int8)CcCanIWriteStream(v18, v13, a4, 0, 0) )
    {
LABEL_126:
      v17 = 1;
      v96 = 1;
      if ( (*(_DWORD *)(v11 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 128), &LockHandle);
        *(_DWORD *)(v11 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
      goto LABEL_20;
    }
    v13 = a6;
  }
  v28 = KeGetCurrentThread();
  v29 = (*((_DWORD *)&v28[1].SwapListEntry + 2) >> 9) & 7;
  if ( (v28->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v29 = 0;
    goto LABEL_121;
  }
  if ( v29 < 2 )
  {
LABEL_121:
    if ( v28 == KeGetCurrentThread() && v28[1].Timer.DueTime.LowPart )
      goto LABEL_19;
  }
  if ( !v29 && (*(_DWORD *)(v13 + 80) & 0x8000) == 0 )
  {
    v30 = a4;
    v15 = 0;
    goto LABEL_126;
  }
LABEL_19:
  v30 = a4;
  v15 = 0;
LABEL_20:
  v16 = 0LL;
  v14 = v93;
LABEL_21:
  if ( v17 && !a8 )
    return 0;
  v31 = 6;
  if ( a8 )
    v31 = 4;
  v116 = v31;
  v32 = *(_QWORD *)(v11 + 528);
  v104 = v32;
  if ( *(_QWORD *)(v11 + 168) )
  {
    v33 = *(_QWORD *)((*(_QWORD *)(v11 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    v34 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1403CB280, v34);
    }
    else
    {
      v111 = 0;
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      if ( v36 )
      {
        if ( v35->NestingLevel <= 1u )
        {
          v88 = v36[5];
          v36[5] = v88 + 1;
          if ( v88 == -1 && !*((_BYTE *)v36 + 25) && !*((_BYTE *)v36 + 27) )
            KiPerformUnboostKick(v35);
        }
      }
      if ( _interlockedbittestandset(&dword_1403CB280, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount((__int64)v35, 0);
        v111 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_1403CB280, v34);
        v32 = v104;
      }
      v37 = dword_1403CB280;
      if ( (dword_1403CB280 & 0xBFFFFFFF) == 0x80000000 )
        goto LABEL_30;
      do
      {
        if ( (v37 & 0x40000000) == 0 )
        {
          v89 = _InterlockedCompareExchange(&dword_1403CB280, v37 | 0x40000000, v37);
          v85 = v37 == v89;
          v37 = v89;
          if ( !v85 )
            continue;
        }
        KeYieldProcessorEx(&v111);
        v37 = dword_1403CB280;
      }
      while ( (v37 & 0xBFFFFFFF) != 0x80000000 );
    }
    v32 = v104;
LABEL_30:
    if ( *(_QWORD *)v33 )
      v24 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v33 + 60LL) & 0x3FF));
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1403CB280, retaddr);
      v32 = v104;
    }
    else
    {
      dword_1403CB280 = 0;
    }
    v38 = KeGetCurrentPrcb();
    v39 = v38->SchedulerAssist;
    if ( v39 )
    {
      if ( v38->NestingLevel <= 1u )
      {
        v90 = v39[5] - 1;
        v39[5] = v90;
        if ( !v90 && !*((_BYTE *)v39 + 25) && !*((_BYTE *)v39 + 27) )
          KiPerformUnboostKick(v38);
      }
    }
    __writecr8(v34);
    if ( v32 != *(_QWORD *)(v24[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v30 = a4;
    v15 = 0;
    v11 = a1;
    v14 = v93;
  }
  v123 = v32;
  if ( v14 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 128), &v119);
    if ( (*(_DWORD *)(v11 + 152) & 0x20) != 0 )
    {
      v124.LockQueue.Lock = (unsigned __int64 *volatile)(v104 + 192);
      v124.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v124, (volatile __int64 *)(v104 + 192));
      v16 = *(_SLIST_ENTRY **)(v11 + 496);
      if ( !v16 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v124);
        KeReleaseInStackQueuedSpinLock(&v119);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v16->Next;
      v81 = (_SLIST_ENTRY **)*((_QWORD *)&v16->Next + 1);
      if ( *(&v16->Next->Next + 1) != v16 || *v81 != v16 )
        __fastfail(3u);
      *v81 = Next;
      *((_QWORD *)&Next->Next + 1) = v81;
      *((_QWORD *)&v16->Next + 1) = 0LL;
      v16->Next = 0LL;
      *(_QWORD *)(v11 + 496) = 0LL;
      *(_DWORD *)(v11 + 152) &= ~0x20u;
      v94 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v124);
    }
    ++*(_DWORD *)(v11 + 516);
    v98 = 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v119);
    __writecr8(v119.OldIrql);
  }
  if ( v16 )
    CcFreeWorkQueueEntry(v16);
  v40 = a9;
  if ( !a9 )
  {
    v40 = KeGetCurrentThread();
    a9 = v40;
    v30 = a4;
    v15 = 0;
  }
  Object = v40[1].WaitBlock[1].Object;
  v112 = 0;
  if ( !Object )
    goto LABEL_43;
  if ( v40 != KeGetCurrentThread() )
  {
    v79 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = v40[1].WaitBlock[1].Object;
    if ( Object )
    {
      ObfReferenceObjectWithTag(v40[1].WaitBlock[1].Object, 0x746C6644u);
      v112 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    __writecr8(v79);
  }
  v15 = 0;
  v30 = a4;
  if ( Object )
    Process = (_KPROCESS *)Object[68];
  else
LABEL_43:
    Process = v40->Process;
  if ( *(_QWORD *)&Process[2].ThreadSeed[16] )
  {
    v75 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v76 = *(_QWORD *)&Process[2].ThreadSeed[16];
    if ( v76 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v76 + 32)) <= 1 )
        __fastfail(0xEu);
      v44 = v76;
      v120 = v76;
      v30 = a4;
      v15 = 0;
    }
    else
    {
      v44 = v120;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    __writecr8(v75);
    if ( v76 )
      v43 = 0;
    else
      v43 = -1073741275;
  }
  else
  {
    v43 = -1073741275;
    v44 = v120;
  }
  if ( v112 )
    ObDereferenceObjectDeferDelete(Object);
  if ( v43 >= 0 )
  {
    MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v44);
    IoDiskIoAttributionDereference(v44);
  }
  v45 = v105;
  while ( v30 )
  {
    if ( v95 )
      a5 = 0;
    VirtualAddress = CcGetVirtualAddress(a1, v103, (unsigned int)&v105, (unsigned int)&v102, 0, 0);
    v113 = VirtualAddress;
    v47 = v102;
    if ( v102 > v30 )
    {
      v47 = v30;
      v102 = v30;
    }
    v100 = v47;
    v30 -= v47;
    v48 = v106;
    v49 = VirtualAddress - v106;
    v113 = v49;
    v50 = v106 + v47;
    v102 = v50;
    v51 = 1;
    v107 = 1;
    HIDWORD(v118) = HIDWORD(v103);
    v52 = v103 - v106;
    LODWORD(v118) = v103 - v106;
    v53 = v50;
    while ( 1 )
    {
      v54 = v53 > 0x1000;
      Status[4] = v54;
      if ( (v51 & a5) != 0 )
      {
        if ( v118 >= *a7 )
        {
          v15 |= 1u;
          v99 = v15;
        }
        if ( (*(_DWORD *)(a1 + 152) & 0x40) != 0 )
        {
          v15 |= 2u;
          v99 = v15;
        }
        v55 = MmCopyToCachedPage(v49, v15);
        Exception = v55;
        if ( v55 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v55);
          v68 = -1073741592;
          if ( IsNtstatusExpected )
            v68 = Exception;
          RtlRaiseStatus(v68);
        }
      }
      else
      {
        if ( v53 > 0x1000 && (a5 & 4) != 0 )
        {
          v63 = CurrentThread;
          BYTE4(CurrentThread[1].Queue) = 1;
          if ( !LODWORD(v63[1].WaitListEntry.Flink) )
            LODWORD(v63[1].WaitListEntry.Flink) = 1;
        }
        v58 = MmCheckCachedPageStates(v49, 1LL, v116);
        Status[5] = v58;
        MemoryDescriptorList = 0LL;
        if ( v58 < 0 )
          RtlRaiseStatus(v58);
        if ( v95 )
        {
          v69 = v50;
          if ( v54 )
            v69 = 4096LL;
          v59 = CcLockSystemCacheBuffer(v113, &MemoryDescriptorList, v69, 1LL, v117);
          v122 = v59;
          if ( !v59 )
            RtlRaiseStatus(v117[0]);
        }
        else
        {
          v59 = v122;
        }
        if ( v95 )
        {
          v70 = 4096;
          if ( !v54 )
            v70 = v50;
          HviCopyMemory(v59 + v48, a2, v70 - v48);
        }
        else
        {
          v60 = v54 ? 4096 : v50;
          memmove((void *)(v113 + v48), a2, v60 - v48);
        }
        if ( MemoryDescriptorList )
        {
          MmUnlockPages(MemoryDescriptorList);
          IoFreeMdl(MemoryDescriptorList);
          MemoryDescriptorList = 0LL;
        }
        v61 = v108;
        v62 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v108 & 3;
        LODWORD(v62[1].WaitListEntry.Flink) = v61 >> 2;
      }
      a2 += 4096 - v48;
      v48 = 0;
      v106 = 0;
      if ( !v54 )
        break;
      v49 = v113 + 4096;
      v113 += 4096LL;
      v50 -= 4096;
      v53 = v50;
      v102 = v50;
      v52 += 4096;
      LODWORD(v118) = v52;
      if ( v30 )
      {
        v51 = 2;
      }
      else
      {
        v51 = 4;
        if ( v50 > 0x1000 )
          v51 = 2;
      }
      v107 = v51;
    }
    v56 = *(_QWORD *)(v105 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v105 + 16)) )
    {
      v57 = *(struct _KEVENT **)(v56 + 184);
      if ( v57 )
        KeSetEvent(v57, 0, 0);
    }
    v45 = 0LL;
    v105 = 0LL;
    CcSetDirtyInMask(a1, &v103, v100, a9);
    if ( v109 - v30 > 0x1000000 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), &v103, v100, 0LL, v93, (unsigned int *)Status);
      v64 = Status[0];
      if ( Status[0] < 0 )
      {
        v65 = FsRtlIsNtstatusExpected(Status[0]);
        v66 = -1073741591;
        if ( v65 )
          v66 = v64;
        RtlRaiseStatus(v66);
      }
    }
    if ( v30 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v103 += v100;
    v15 = v99;
  }
  v71 = v108;
  v72 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v108 & 3;
  LODWORD(v72[1].WaitListEntry.Flink) = v71 >> 2;
  if ( v45 )
  {
    v82 = *(_QWORD *)(v45 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v45 + 16)) )
    {
      v83 = *(struct _KEVENT **)(v82 + 184);
      if ( v83 )
        KeSetEvent(v83, 0, 0);
    }
  }
  if ( CcRemoteFileDPInlineFlushThreshold == -1 )
  {
    v73 = v93;
  }
  else
  {
    v73 = v93;
    if ( (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
      && !v93
      && *(_DWORD *)(a1 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
    {
      v94 = 1;
      v97 = 1;
    }
  }
  if ( v96 || v97 )
  {
    v77 = 0;
    if ( !v94 )
    {
      v77 = v109;
      v12 = a3;
    }
    CcFlushCachePriv(*(_QWORD *)(a6 + 40), v12, v77, 0LL, v73, (unsigned int *)Status);
    if ( v98 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v104 + 128), &v119);
      --*(_DWORD *)(a1 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v119);
      __writecr8(v119.OldIrql);
    }
    v78 = Status[0];
    if ( Status[0] < 0 )
    {
      v91 = FsRtlIsNtstatusExpected(Status[0]);
      v92 = -1073741591;
      if ( v91 )
        v92 = v78;
      RtlRaiseStatus(v92);
    }
  }
  return 1;
}
