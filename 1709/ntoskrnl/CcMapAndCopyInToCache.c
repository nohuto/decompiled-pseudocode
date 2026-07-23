/*
 * XREFs of CcMapAndCopyInToCache @ 0x14001C320
 * Callers:
 *     CcCopyWriteEx @ 0x14001C190 (CcCopyWriteEx.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x14000A344 (MmUpdateSectionIoAttribution.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     CcFreeWorkQueueEntry @ 0x1400232C4 (CcFreeWorkQueueEntry.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     CcCanIWriteStream @ 0x140064730 (CcCanIWriteStream.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400F1C30 (KeReleaseInStackQueuedSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1401E0844 (CcCopyReadExceptionFilter.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9)
{
  int v12; // esi
  __int64 v13; // r10
  bool v14; // r8
  int v15; // r15d
  char v16; // bl
  __int64 v17; // r14
  __int64 v18; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int32 v20; // edx
  ULONG_PTR *v21; // r12
  ULONG_PTR *v22; // rbx
  struct _KTHREAD *v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rbx
  unsigned __int8 v29; // r14
  signed __int32 v30; // edx
  _SLIST_ENTRY *v31; // rbx
  struct _KTHREAD *v32; // r14
  _QWORD *Object; // rbx
  _KPROCESS *Process; // r14
  int v35; // r14d
  unsigned __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // r12
  __int64 VirtualAddress; // rax
  unsigned int v41; // r14d
  unsigned int v42; // r12d
  __int64 v43; // rcx
  unsigned int v44; // r14d
  int v45; // eax
  int v46; // ebx
  int v47; // eax
  NTSTATUS v48; // eax
  __int64 v49; // rdx
  struct _KEVENT *v50; // rcx
  NTSTATUS v51; // eax
  int v52; // eax
  unsigned int v53; // ecx
  struct _KTHREAD *v54; // rdx
  struct _KTHREAD *v55; // rax
  NTSTATUS v56; // r15d
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v58; // ecx
  BOOLEAN v59; // al
  NTSTATUS v60; // ecx
  unsigned int v61; // ecx
  struct _KTHREAD *v62; // rdx
  unsigned int v64; // r8d
  NTSTATUS v65; // ebx
  unsigned __int64 v66; // r14
  KIRQL v67; // di
  __int64 v68; // rcx
  struct _KEVENT *v69; // rcx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v71; // rax
  bool v72; // zf
  signed __int32 v73; // eax
  signed __int32 v74; // eax
  BOOLEAN v75; // al
  NTSTATUS v76; // ecx
  char v77; // [rsp+58h] [rbp-138h]
  char v78; // [rsp+59h] [rbp-137h]
  char v79; // [rsp+5Ah] [rbp-136h]
  char v80; // [rsp+5Bh] [rbp-135h]
  char v81; // [rsp+5Ch] [rbp-134h]
  char v82; // [rsp+5Dh] [rbp-133h] BYREF
  char v83; // [rsp+5Eh] [rbp-132h]
  int v84; // [rsp+60h] [rbp-130h]
  char v85; // [rsp+64h] [rbp-12Ch]
  char v86; // [rsp+65h] [rbp-12Bh]
  unsigned int v87; // [rsp+68h] [rbp-128h]
  KIRQL v88; // [rsp+6Ch] [rbp-124h]
  NTSTATUS Exception; // [rsp+70h] [rbp-120h]
  unsigned int v90; // [rsp+74h] [rbp-11Ch] BYREF
  __int64 v91; // [rsp+78h] [rbp-118h] BYREF
  __int64 v92; // [rsp+80h] [rbp-110h]
  __int64 v93; // [rsp+88h] [rbp-108h] BYREF
  unsigned int v94; // [rsp+90h] [rbp-100h]
  BOOL v95; // [rsp+94h] [rbp-FCh]
  int v96; // [rsp+98h] [rbp-F8h]
  int v97; // [rsp+9Ch] [rbp-F4h]
  unsigned int v98; // [rsp+A0h] [rbp-F0h]
  int v99; // [rsp+A4h] [rbp-ECh] BYREF
  int v100; // [rsp+A8h] [rbp-E8h] BYREF
  int v101; // [rsp+ACh] [rbp-E4h]
  __int64 v102; // [rsp+B0h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-D8h]
  unsigned int v104; // [rsp+C0h] [rbp-D0h]
  int v105; // [rsp+C4h] [rbp-CCh]
  unsigned int v106; // [rsp+C8h] [rbp-C8h]
  __int64 v107; // [rsp+D0h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-B8h] BYREF
  unsigned __int64 v109; // [rsp+F0h] [rbp-A0h]
  NTSTATUS Status[6]; // [rsp+F8h] [rbp-98h] BYREF
  __int64 v111; // [rsp+110h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v112; // [rsp+118h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v113; // [rsp+138h] [rbp-58h] BYREF
  void *retaddr; // [rsp+190h] [rbp+0h]
  int v116; // [rsp+1A8h] [rbp+18h]

  v116 = (int)a3;
  v98 = a4;
  v12 = 0;
  v87 = 0;
  v13 = a6;
  v14 = (*(_DWORD *)(a6 + 80) & 0x10) != 0;
  v77 = v14;
  v106 = a4;
  v94 = *a3 & 0xFFF;
  v93 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v84 = 0;
  v83 = 0;
  v79 = 0;
  v82 = 1;
  v78 = 0;
  v81 = 0;
  v91 = *(_QWORD *)a3;
  v97 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v105 = v97;
  v16 = v14;
  v80 = v14;
  v86 = v14;
  if ( v14 )
  {
    v21 = &MiSystemPartition;
    v25 = a4;
    goto LABEL_22;
  }
  v80 = 0;
  if ( !a1 )
  {
    v17 = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_164;
  }
  v17 = *(_QWORD *)(a1 + 528);
  if ( !*(_QWORD *)(a1 + 168) )
  {
LABEL_164:
    v21 = &MiSystemPartition;
    goto LABEL_15;
  }
  v18 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, CurrentIrql);
    v13 = a6;
  }
  else
  {
    v99 = 0;
    if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
    {
      v99 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, CurrentIrql);
      v13 = a6;
    }
    v20 = dword_140388100;
    if ( (dword_140388100 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v20 & 0x40000000) == 0 )
        {
          v73 = _InterlockedCompareExchange(&dword_140388100, v20 | 0x40000000, v20);
          v72 = v20 == v73;
          v20 = v73;
          if ( !v72 )
            continue;
        }
        KeYieldProcessorEx(&v99);
        v20 = dword_140388100;
      }
      while ( (v20 & 0xBFFFFFFF) != 0x80000000 );
      v13 = a6;
    }
    v15 = v84;
  }
  v21 = &MiSystemPartition;
  if ( *(_QWORD *)v18 )
    v22 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v18 + 60LL) & 0x3FF));
  else
    v22 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
    v13 = a6;
  }
  else
  {
    dword_140388100 = 0;
  }
  __writecr8(CurrentIrql);
  if ( v17 != *(_QWORD *)(v22[21] + 8) )
    KeBugCheckEx(0x34u, 0x1292uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v16 = 0;
LABEL_15:
  if ( (*(_DWORD *)(v13 + 80) & 0x1000000) != 0 )
  {
    v25 = a4;
    if ( !(unsigned __int8)CcCanIWriteStream(v17, v13, a4, 0, 0) )
    {
LABEL_123:
      v16 = 1;
      v80 = 1;
      if ( (*(_DWORD *)(a1 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 128), &v113);
        *(_DWORD *)(a1 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v113);
        __writecr8(v113.OldIrql);
      }
      goto LABEL_21;
    }
    v13 = a6;
  }
  v23 = KeGetCurrentThread();
  v24 = (*((_DWORD *)&v23[1].SwapListEntry + 2) >> 9) & 7;
  if ( (v23->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v24 = 0;
  if ( (v24 >= 2 || v23 != KeGetCurrentThread() || !v23[1].Timer.DueTime.LowPart)
    && !v24
    && (*(_DWORD *)(v13 + 80) & 0x8000) == 0 )
  {
    v25 = a4;
    v15 = v84;
    goto LABEL_123;
  }
  v25 = a4;
  v15 = v84;
LABEL_21:
  v86 = v16;
LABEL_22:
  if ( v16 && !a8 )
    return 0;
  v26 = 6;
  if ( a8 )
    v26 = 4;
  v104 = v26;
  v27 = *(_QWORD *)(a1 + 528);
  v92 = v27;
  if ( *(_QWORD *)(a1 + 168) )
  {
    v28 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    v29 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, v29);
      v27 = v92;
    }
    else
    {
      v100 = 0;
      if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
      {
        v100 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, v29);
        v27 = v92;
      }
      v30 = dword_140388100;
      if ( (dword_140388100 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v30 & 0x40000000) == 0 )
          {
            v74 = _InterlockedCompareExchange(&dword_140388100, v30 | 0x40000000, v30);
            v72 = v30 == v74;
            v30 = v74;
            if ( !v72 )
              continue;
          }
          KeYieldProcessorEx(&v100);
          v30 = dword_140388100;
        }
        while ( (v30 & 0xBFFFFFFF) != 0x80000000 );
        v27 = v92;
      }
      v15 = v84;
      v25 = a4;
    }
    if ( *(_QWORD *)v28 )
      v21 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v28 + 60LL) & 0x3FF));
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
      v27 = v92;
    }
    else
    {
      dword_140388100 = 0;
    }
    __writecr8(v29);
    if ( v27 != *(_QWORD *)(v21[21] + 8) )
      KeBugCheckEx(0x34u, 0x1292uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v111 = v27;
  if ( v77 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v27 + 128), &LockHandle);
    if ( (*(_DWORD *)(a1 + 152) & 0x20) != 0 )
    {
      v112.LockQueue.Lock = (unsigned __int64 *volatile)(v92 + 192);
      v112.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&v112);
      v31 = *(_SLIST_ENTRY **)(a1 + 496);
      if ( !v31 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v112);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v31->Next;
      v71 = (_SLIST_ENTRY **)*((_QWORD *)&v31->Next + 1);
      if ( *(&v31->Next->Next + 1) != v31 || *v71 != v31 )
        __fastfail(3u);
      *v71 = Next;
      *((_QWORD *)&Next->Next + 1) = v71;
      *((_QWORD *)&v31->Next + 1) = 0LL;
      v31->Next = 0LL;
      *(_QWORD *)(a1 + 496) = 0LL;
      *(_DWORD *)(a1 + 152) &= ~0x20u;
      v79 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v112);
    }
    else
    {
      v31 = 0LL;
    }
    ++*(_DWORD *)(a1 + 516);
    v83 = 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    v31 = 0LL;
  }
  if ( v31 )
    CcFreeWorkQueueEntry(v31);
  v32 = a9;
  if ( !a9 )
  {
    v32 = KeGetCurrentThread();
    a9 = v32;
    v25 = a4;
    v15 = v84;
  }
  Object = v32[1].WaitBlock[1].Object;
  v101 = 0;
  if ( !Object )
    goto LABEL_43;
  if ( v32 != KeGetCurrentThread() )
  {
    v67 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = v32[1].WaitBlock[1].Object;
    if ( Object )
    {
      ObfReferenceObjectWithTag(v32[1].WaitBlock[1].Object, 0x746C6644u);
      v101 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    __writecr8(v67);
  }
  v15 = v84;
  v25 = a4;
  if ( Object )
    Process = (_KPROCESS *)Object[68];
  else
LABEL_43:
    Process = v32->Process;
  if ( *(_QWORD *)&Process[2].ThreadSeed[16] )
  {
    v88 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v66 = *(_QWORD *)&Process[2].ThreadSeed[16];
    if ( v66 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v66 + 32)) <= 1 )
        __fastfail(0xEu);
      v36 = v66;
      v109 = v66;
      v25 = a4;
      v15 = v84;
    }
    else
    {
      v36 = v109;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    __writecr8(v88);
    if ( v66 )
      v35 = 0;
    else
      v35 = -1073741275;
  }
  else
  {
    v35 = -1073741275;
    v36 = v109;
  }
  if ( v101 )
    ObDereferenceObjectDeferDelete(Object);
  if ( v35 >= 0 )
  {
    MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v36);
    IoDiskIoAttributionDereference(v36);
  }
  v37 = v93;
  v38 = (__int64)a9;
  LODWORD(v39) = v87;
  while ( v25 )
  {
    v87 = 0;
    VirtualAddress = CcGetVirtualAddress(a1, v91, (unsigned int)&v93, (unsigned int)&v90, 0, 0);
    v102 = VirtualAddress;
    v41 = v90;
    if ( v90 > v25 )
    {
      v41 = v25;
      v90 = v25;
    }
    v87 = v41;
    v25 -= v41;
    v42 = v94;
    v43 = VirtualAddress - v94;
    v102 = v43;
    v44 = v94 + v41;
    v90 = v44;
    v45 = 1;
    v96 = 1;
    HIDWORD(v107) = HIDWORD(v91);
    v46 = v91 - v94;
    LODWORD(v107) = v91 - v94;
    v78 = 0;
    while ( 1 )
    {
      v82 = 1;
      v95 = v44 > 0x1000;
      Status[4] = v95;
      Exception = 0;
      if ( (v45 & a5) != 0 )
      {
        if ( v107 >= *a7 )
        {
          v15 |= 1u;
          v84 = v15;
        }
        if ( (*(_DWORD *)(a1 + 152) & 0x40) != 0 )
        {
          v15 |= 2u;
          v84 = v15;
        }
        if ( v44 > 0x1000 )
          v47 = 4096;
        else
          v47 = v44;
        v48 = MmCopyToCachedPage(v43, a2, v42, v47 - v42, v15);
        Exception = v48;
        if ( v48 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v48);
          v58 = -1073741592;
          if ( IsNtstatusExpected )
            v58 = Exception;
          RtlRaiseStatus(v58);
        }
        v78 = 1;
      }
      else
      {
        if ( v44 > 0x1000 && (a5 & 4) != 0 )
        {
          v55 = CurrentThread;
          BYTE4(CurrentThread[1].Queue) = 1;
          if ( !LODWORD(v55[1].WaitListEntry.Flink) )
            LODWORD(v55[1].WaitListEntry.Flink) = 1;
        }
        v51 = MmCheckCachedPageStates(v43, 1LL, v104, &v82);
        Status[5] = v51;
        if ( !v82 && !a8 )
        {
          v85 = 0;
          v37 = v93;
          v38 = (__int64)a9;
          LODWORD(v39) = v87;
          goto LABEL_103;
        }
        if ( v51 < 0 )
          RtlRaiseStatus(v51);
        v52 = v95 ? 4096 : v44;
        memmove((void *)(v102 + v42), a2, v52 - v42);
        v78 = 1;
        v53 = v97;
        v54 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v97 & 3;
        LODWORD(v54[1].WaitListEntry.Flink) = v53 >> 2;
      }
      a2 += 4096 - v42;
      v42 = 0;
      v94 = 0;
      if ( !v95 )
        break;
      v43 = v102 + 4096;
      v102 += 4096LL;
      v44 -= 4096;
      v90 = v44;
      v46 += 4096;
      LODWORD(v107) = v46;
      if ( v25 )
      {
        v45 = 2;
      }
      else
      {
        v45 = 4;
        if ( v44 > 0x1000 )
          v45 = 2;
      }
      v96 = v45;
    }
    v78 = 0;
    v49 = *(_QWORD *)(v93 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v93 + 16)) )
    {
      v50 = *(struct _KEVENT **)(v49 + 184);
      if ( v50 )
        KeSetEvent(v50, 0, 0);
    }
    v37 = 0LL;
    v93 = 0LL;
    v38 = (__int64)a9;
    v39 = v87;
    CcSetDirtyInMask(a1, &v91, v87, a9);
    if ( v98 - v25 > 0x1000000 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), (unsigned int)&v91, v39, 0, v77, (__int64)Status);
      v56 = Status[0];
      if ( Status[0] < 0 )
      {
        v59 = FsRtlIsNtstatusExpected(Status[0]);
        v60 = -1073741591;
        if ( v59 )
          v60 = v56;
        RtlRaiseStatus(v60);
      }
    }
    if ( v25 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v91 += v39;
    v15 = v84;
  }
  v85 = 1;
LABEL_103:
  v61 = v97;
  v62 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v97 & 3;
  LODWORD(v62[1].WaitListEntry.Flink) = v61 >> 2;
  if ( v37 )
  {
    v68 = *(_QWORD *)(v37 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v37 + 16)) )
    {
      v69 = *(struct _KEVENT **)(v68 + 184);
      if ( v69 )
        KeSetEvent(v69, 0, 0);
    }
    LODWORD(v39) = v87;
  }
  if ( v78 && (_DWORD)v39 )
    CcSetDirtyInMask(a1, &v91, (unsigned int)v39, v38);
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
    && !v77
    && *(_DWORD *)(a1 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v79 = 1;
    v81 = 1;
  }
  if ( v80 || v81 )
  {
    v64 = 0;
    if ( !v79 )
    {
      v64 = v98;
      v12 = v116;
    }
    CcFlushCachePriv(*(_QWORD *)(a6 + 40), v12, v64, 0, v77, (__int64)Status);
    if ( v83 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v92 + 128), &LockHandle);
      --*(_DWORD *)(a1 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    v65 = Status[0];
    if ( Status[0] < 0 )
    {
      v75 = FsRtlIsNtstatusExpected(Status[0]);
      v76 = -1073741591;
      if ( v75 )
        v76 = v65;
      RtlRaiseStatus(v76);
    }
  }
  return v85;
}
