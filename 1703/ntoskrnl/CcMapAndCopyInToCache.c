/*
 * XREFs of CcMapAndCopyInToCache @ 0x14009EF20
 * Callers:
 *     CcCopyWriteEx @ 0x14009D530 (CcCopyWriteEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     MmUpdateSectionIoAttribution @ 0x140029EBC (MmUpdateSectionIoAttribution.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartitionFromFileObject @ 0x1400AB504 (CcGetPartitionFromFileObject.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     CcCanIWriteStream @ 0x1400AE444 (CcCanIWriteStream.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14012B570 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1401DD8D4 (CcCopyReadExceptionFilter.c)
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
  _QWORD *v10; // rsi
  __int64 v11; // r12
  int v12; // edx
  bool v13; // r10
  _SLIST_ENTRY *v14; // rbx
  char v15; // r9
  struct _KTHREAD *v16; // r8
  int v17; // eax
  unsigned int v18; // r15d
  __int64 v19; // r14
  struct _KTHREAD *v20; // r13
  _QWORD *Object; // rbx
  _KPROCESS *Process; // rdi
  int v23; // edi
  unsigned __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // r14
  char v27; // r12
  __int64 VirtualAddress; // rax
  unsigned int v29; // r14d
  unsigned int v30; // r12d
  ULONG_PTR v31; // r13
  unsigned int v32; // r14d
  int v33; // eax
  int v34; // ebx
  int v35; // ecx
  NTSTATUS v36; // eax
  NTSTATUS v37; // r13d
  __int64 v38; // rdx
  struct _KEVENT *v39; // rcx
  NTSTATUS v40; // eax
  int v41; // eax
  struct _KTHREAD *v42; // rdx
  struct _KTHREAD *v43; // rax
  NTSTATUS v44; // edi
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v46; // ecx
  BOOLEAN v47; // al
  NTSTATUS v48; // ecx
  unsigned int v49; // ecx
  struct _KTHREAD *v50; // rdx
  KIRQL v52; // r12
  unsigned __int64 v53; // rdi
  unsigned int v54; // eax
  NTSTATUS v55; // ebx
  __int64 PartitionFromFileObject; // rax
  __int64 v57; // rcx
  struct _KEVENT *v58; // rcx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v60; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  KIRQL v63; // di
  BOOLEAN v64; // al
  NTSTATUS v65; // ecx
  char v66; // [rsp+58h] [rbp-128h]
  char v67; // [rsp+59h] [rbp-127h]
  char v68; // [rsp+5Ah] [rbp-126h]
  char v69; // [rsp+5Bh] [rbp-125h]
  char v70; // [rsp+5Ch] [rbp-124h]
  char v71; // [rsp+5Dh] [rbp-123h]
  char v72; // [rsp+5Eh] [rbp-122h] BYREF
  char v73; // [rsp+5Fh] [rbp-121h]
  char v74; // [rsp+60h] [rbp-120h]
  unsigned int v75; // [rsp+64h] [rbp-11Ch]
  NTSTATUS Exception; // [rsp+6Ch] [rbp-114h]
  int v77; // [rsp+70h] [rbp-110h]
  unsigned int v78; // [rsp+74h] [rbp-10Ch] BYREF
  __int64 v79; // [rsp+78h] [rbp-108h] BYREF
  __int64 v80; // [rsp+80h] [rbp-100h] BYREF
  unsigned int v81; // [rsp+88h] [rbp-F8h]
  int v82; // [rsp+8Ch] [rbp-F4h]
  unsigned int v83; // [rsp+90h] [rbp-F0h]
  unsigned int v84; // [rsp+94h] [rbp-ECh]
  int v85; // [rsp+98h] [rbp-E8h]
  int v86; // [rsp+9Ch] [rbp-E4h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-E0h]
  unsigned int v88; // [rsp+A8h] [rbp-D8h]
  unsigned int v89; // [rsp+ACh] [rbp-D4h]
  ULONG_PTR v90; // [rsp+B0h] [rbp-D0h]
  __int64 v91; // [rsp+B8h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-C0h] BYREF
  unsigned __int64 v93; // [rsp+D8h] [rbp-A8h]
  NTSTATUS Status[6]; // [rsp+E0h] [rbp-A0h] BYREF
  __int64 v95; // [rsp+F8h] [rbp-88h]
  __int64 v96; // [rsp+100h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v97; // [rsp+108h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v98; // [rsp+128h] [rbp-58h] BYREF

  v84 = a4;
  v10 = 0LL;
  v75 = 0;
  v11 = a6;
  v12 = *(_DWORD *)(a6 + 80);
  v13 = (v12 & 0x10) != 0;
  v66 = v13;
  v89 = a4;
  v81 = *a3 & 0xFFF;
  v86 = 4;
  v80 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v77 = 0;
  v71 = 0;
  v67 = 0;
  v14 = 0LL;
  v68 = 0;
  v70 = 0;
  v79 = *(_QWORD *)a3;
  v83 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v88 = v83;
  v15 = v13;
  v69 = v13;
  v74 = v13;
  if ( (v12 & 0x10) == 0 )
  {
    v69 = 0;
    if ( (v12 & 0x1000000) != 0 )
    {
      v18 = a4;
      if ( !(unsigned __int8)CcCanIWriteStream(a6, a4, 0LL, 0LL) )
      {
LABEL_100:
        v69 = 1;
        PartitionFromFileObject = CcGetPartitionFromFileObject(a6);
        if ( (*(_DWORD *)(a1 + 152) & 0x400) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PartitionFromFileObject + 64), &v98);
          *(_DWORD *)(a1 + 152) |= 0x400u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v98);
          __writecr8(v98.OldIrql);
          v15 = 1;
        }
        goto LABEL_7;
      }
      v15 = 0;
    }
    v16 = KeGetCurrentThread();
    v17 = (*((_DWORD *)&v16[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v16->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v17 = 0;
    }
    else if ( ((*((_DWORD *)&v16[1].SwapListEntry + 2) >> 9) & 7u) >= 2 )
    {
LABEL_5:
      if ( v17 <= 0 && (*(_DWORD *)(a6 + 80) & 0x8000) == 0 )
      {
        v18 = a4;
        goto LABEL_100;
      }
LABEL_6:
      v18 = a4;
LABEL_7:
      v74 = v15;
      v13 = 0;
      goto LABEL_8;
    }
    if ( v16 == KeGetCurrentThread() && v16[1].Timer.DueTime.LowPart )
      goto LABEL_6;
    goto LABEL_5;
  }
  v18 = a4;
LABEL_8:
  if ( v15 )
  {
    if ( !a8 )
      return 0;
  }
  else if ( !a8 )
  {
    v86 = 6;
  }
  v19 = *(_QWORD *)(a1 + 528);
  v95 = v19;
  v96 = v19;
  if ( v13 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 64), &LockHandle);
    if ( (*(_DWORD *)(a1 + 152) & 0x20) != 0 )
    {
      v97.LockQueue.Lock = (unsigned __int64 *volatile)(v19 + 128);
      v97.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&v97);
      v14 = *(_SLIST_ENTRY **)(a1 + 496);
      if ( !v14 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v97);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v14->Next;
      v60 = (_SLIST_ENTRY **)*((_QWORD *)&v14->Next + 1);
      if ( *(&v14->Next->Next + 1) != v14 || *v60 != v14 )
        __fastfail(3u);
      *v60 = Next;
      *((_QWORD *)&Next->Next + 1) = v60;
      *((_QWORD *)&v14->Next + 1) = 0LL;
      v14->Next = 0LL;
      *(_QWORD *)(a1 + 496) = 0LL;
      *(_DWORD *)(a1 + 152) &= ~0x20u;
      v67 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v97);
    }
    ++*(_DWORD *)(a1 + 516);
    v71 = 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( v14 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[6].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[6].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v14);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v14);
    }
    v18 = a4;
  }
  v20 = a9;
  if ( !a9 )
  {
    v20 = KeGetCurrentThread();
    a9 = v20;
    v18 = a4;
  }
  Object = v20[1].WaitBlock[1].Object;
  v85 = 0;
  if ( !Object )
    goto LABEL_16;
  if ( v20 != KeGetCurrentThread() )
  {
    v63 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = v20[1].WaitBlock[1].Object;
    if ( Object )
    {
      ObfReferenceObjectWithTag(v20[1].WaitBlock[1].Object, 0x746C6644u);
      v85 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    __writecr8(v63);
  }
  v18 = a4;
  if ( Object )
    Process = (_KPROCESS *)Object[68];
  else
LABEL_16:
    Process = v20->Process;
  if ( *(_QWORD *)&Process[2].ThreadSeed[10] )
  {
    v52 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v53 = *(_QWORD *)&Process[2].ThreadSeed[10];
    if ( v53 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v53 + 32)) <= 1 )
        __fastfail(0xEu);
      v24 = v53;
      v93 = v53;
      v18 = a4;
    }
    else
    {
      v24 = v93;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    __writecr8(v52);
    v11 = a6;
    if ( v53 )
      v23 = 0;
    else
      v23 = -1073741275;
  }
  else
  {
    v23 = -1073741275;
    v24 = v93;
  }
  if ( v85 )
    ObDereferenceObjectDeferDelete(Object);
  if ( v23 >= 0 )
  {
    MmUpdateSectionIoAttribution(*(_QWORD *)(v11 + 40), v24);
    IoDiskIoAttributionDereference(v24);
  }
  v25 = v80;
  LODWORD(v26) = v75;
  v27 = v66;
  while ( v18 )
  {
    v75 = 0;
    VirtualAddress = CcGetVirtualAddress(a1, v79, &v80, &v78, 0, 0);
    v90 = VirtualAddress;
    v29 = v78;
    if ( v78 > v18 )
    {
      v29 = v18;
      v78 = v18;
    }
    v75 = v29;
    v18 -= v29;
    v30 = v81;
    v31 = VirtualAddress - v81;
    v90 = v31;
    v32 = v81 + v29;
    v78 = v32;
    v33 = 1;
    v82 = 1;
    HIDWORD(v91) = HIDWORD(v79);
    v34 = v79 - v81;
    LODWORD(v91) = v79 - v81;
    v68 = 0;
    while ( 1 )
    {
      v72 = 1;
      Status[4] = v32 > 0x1000;
      Exception = 0;
      if ( (v33 & a5) != 0 )
      {
        v35 = v77;
        if ( v91 >= *a7 )
        {
          v35 = v77 | 1;
          v77 |= 1u;
        }
        if ( (*(_DWORD *)(a1 + 152) & 0x40) != 0 )
        {
          v35 |= 2u;
          v77 = v35;
        }
        v36 = MmCopyToCachedPage(v31, v35);
        v37 = v36;
        Exception = v36;
        if ( v36 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v36);
          v46 = -1073741592;
          if ( IsNtstatusExpected )
            v46 = v37;
          RtlRaiseStatus(v46);
        }
        v68 = 1;
        v31 = v90;
      }
      else
      {
        if ( v32 > 0x1000 && (a5 & 4) != 0 )
        {
          v43 = CurrentThread;
          BYTE4(CurrentThread[1].Queue) = 1;
          if ( !LODWORD(v43[1].WaitListEntry.Flink) )
            LODWORD(v43[1].WaitListEntry.Flink) = 1;
        }
        v40 = MmCheckCachedPageStates(v31, 1LL, v86, &v72);
        Status[5] = v40;
        if ( !v72 && !a8 )
        {
          v73 = 0;
          v25 = v80;
          v20 = a9;
          LODWORD(v26) = v75;
          v27 = v66;
          goto LABEL_72;
        }
        if ( v40 < 0 )
          RtlRaiseStatus(v40);
        v41 = v32 > 0x1000 ? 4096 : v32;
        memmove((void *)(v31 + v30), a2, v41 - v30);
        v68 = 1;
        v42 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v83 & 3;
        LODWORD(v42[1].WaitListEntry.Flink) = v83 >> 2;
      }
      a2 += 4096 - v30;
      v30 = 0;
      v81 = 0;
      if ( v32 <= 0x1000 )
        break;
      v31 += 4096LL;
      v90 = v31;
      v32 -= 4096;
      v78 = v32;
      v34 += 4096;
      LODWORD(v91) = v34;
      if ( v18 )
      {
        v33 = 2;
      }
      else
      {
        v33 = 4;
        if ( v32 > 0x1000 )
          v33 = 2;
      }
      v82 = v33;
    }
    v68 = 0;
    v38 = *(_QWORD *)(v80 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v80 + 16)) )
    {
      v39 = *(struct _KEVENT **)(v38 + 184);
      if ( v39 )
        KeSetEvent(v39, 0, 0);
    }
    v25 = 0LL;
    v80 = 0LL;
    v20 = a9;
    v26 = v75;
    CcSetDirtyInMask(a1, &v79, v75, a9);
    v27 = v66;
    if ( v84 - v18 > 0x1000000 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), &v79, v26, 0LL, v66, (unsigned int *)Status);
      v44 = Status[0];
      if ( Status[0] < 0 )
      {
        v47 = FsRtlIsNtstatusExpected(Status[0]);
        v48 = -1073741591;
        if ( v47 )
          v48 = v44;
        RtlRaiseStatus(v48);
      }
    }
    if ( v18 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v79 += v26;
  }
  v73 = 1;
LABEL_72:
  v49 = v83;
  v50 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v83 & 3;
  LODWORD(v50[1].WaitListEntry.Flink) = v49 >> 2;
  if ( v25 )
  {
    v57 = *(_QWORD *)(v25 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v25 + 16)) )
    {
      v58 = *(struct _KEVENT **)(v57 + 184);
      if ( v58 )
        KeSetEvent(v58, 0, 0);
    }
    LODWORD(v26) = v75;
  }
  if ( v68 && (_DWORD)v26 )
    CcSetDirtyInMask(a1, &v79, (unsigned int)v26, v20);
  if ( CcRemoteFileDPInlineFlushThreshold != -1
    && (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
    && !v27
    && *(_DWORD *)(a1 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v67 = 1;
    v70 = 1;
  }
  if ( v69 || v70 )
  {
    if ( v67 )
      v54 = 0;
    else
      v54 = v84;
    if ( !v67 )
      v10 = a3;
    CcFlushCachePriv(*(_QWORD *)(a6 + 40), v10, v54, 0LL, v27, (unsigned int *)Status);
    if ( v71 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v95 + 64), &LockHandle);
      --*(_DWORD *)(a1 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    v55 = Status[0];
    if ( Status[0] < 0 )
    {
      v64 = FsRtlIsNtstatusExpected(Status[0]);
      v65 = -1073741591;
      if ( v64 )
        v65 = v55;
      RtlRaiseStatus(v65);
    }
  }
  return v73;
}
