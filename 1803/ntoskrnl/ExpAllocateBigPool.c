/*
 * XREFs of ExpAllocateBigPool @ 0x1400D8A60
 * Callers:
 *     ExInsertPoolTag @ 0x1400BE738 (ExInsertPoolTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 * Callees:
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     MiFindNonPagedPoolVa @ 0x1400D7730 (MiFindNonPagedPoolVa.c)
 *     ExAllocateHeapPages @ 0x1400D85A4 (ExAllocateHeapPages.c)
 *     ExpAddTagForBigPages @ 0x1400D9480 (ExpAddTagForBigPages.c)
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1400DC534 (MiReturnNonPagedPoolVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     ExFreeHeapPages @ 0x1400E17DC (ExFreeHeapPages.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     RtlpHpAllocateHeap @ 0x1402945C8 (RtlpHpAllocateHeap.c)
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 *     ExGetHeapFromType @ 0x1402BD650 (ExGetHeapFromType.c)
 *     ExDeferredFreePool @ 0x1402EA030 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x140592D80 (MiSessionPoolVector.c)
 */

ULONG_PTR __fastcall ExpAllocateBigPool(char *a1, signed int a2, unsigned __int64 a3, unsigned __int32 a4, char a5)
{
  ULONG_PTR v6; // rdx
  char v7; // bl
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r8
  __int64 v13; // r15
  unsigned int v14; // r12d
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r13
  unsigned __int64 v19; // rcx
  _SLIST_HEADER *v20; // rcx
  PSLIST_ENTRY v21; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v23; // rdi
  ULONG_PTR BugCheckParameter4; // rax
  __int64 Heap; // r13
  unsigned __int32 v26; // r10d
  __int64 v27; // rax
  int v28; // r11d
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r13
  unsigned int v32; // ebx
  unsigned int v33; // r8d
  __int64 v34; // r12
  int v35; // eax
  volatile signed __int32 *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  ULONG_PTR v39; // rdi
  unsigned int v40; // r14d
  int v41; // ecx
  __int64 v42; // r9
  __int64 v43; // r11
  __int64 v44; // rax
  unsigned int v45; // ebx
  int v46; // r10d
  __int64 v47; // rdx
  volatile signed __int32 *v48; // r12
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // r8d
  unsigned int v53; // ecx
  __int64 v54; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v58; // rdx
  __int64 **v59; // rax
  __int64 *v60; // rdi
  __int64 v61; // rax
  struct _KPRCB *v62; // rcx
  _DWORD *v63; // rdx
  __int64 v65; // r9
  int v66; // r8d
  unsigned int v67; // r9d
  __int64 v68; // r9
  volatile signed __int32 v69; // r8d
  unsigned int *HeapFromType; // rax
  volatile signed __int32 v71; // eax
  int v72; // eax
  int v73; // eax
  ULONG_PTR PagedPoolPages; // [rsp+30h] [rbp-71h]
  int v75; // [rsp+38h] [rbp-69h]
  unsigned int v76; // [rsp+3Ch] [rbp-65h]
  int v77; // [rsp+3Ch] [rbp-65h]
  __int64 v78; // [rsp+40h] [rbp-61h]
  int v79; // [rsp+48h] [rbp-59h] BYREF
  __int64 v80; // [rsp+50h] [rbp-51h]
  __int64 v81; // [rsp+58h] [rbp-49h]
  __int64 v82; // [rsp+60h] [rbp-41h] BYREF
  volatile signed __int64 *v83; // [rsp+68h] [rbp-39h]
  unsigned __int8 v84; // [rsp+70h] [rbp-31h]
  __int64 v85; // [rsp+78h] [rbp-29h]
  ULONG_PTR v86; // [rsp+80h] [rbp-21h] BYREF
  __int64 v87; // [rsp+88h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v89; // [rsp+A8h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+57h]
  char *v91; // [rsp+100h] [rbp+5Fh]
  char v92; // [rsp+100h] [rbp+5Fh]
  unsigned __int16 v93; // [rsp+110h] [rbp+6Fh]
  unsigned int v94; // [rsp+110h] [rbp+6Fh]

  v91 = a1;
  v85 = a3;
  v6 = 0LL;
  v7 = 0;
  v93 = 0;
  v8 = a3;
  v9 = (ULONG_PTR)a1;
  if ( a1 )
  {
    if ( (a5 & 2) != 0 )
    {
      a1 += a3;
      if ( ((unsigned __int16)a1 & 0xFFF) != 0 )
      {
        v93 = ((unsigned __int16)a1 & 0xF000) - (_WORD)a1 + 4096;
        v7 = MEMORY[0xFFFFF78000000320] | 1;
        memset(a1, MEMORY[0xFFFFF78000000320] | 1, v93);
        v6 = 0LL;
      }
    }
    if ( (a5 & 1) != 0 )
      v8 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (v8 & 0xFFF) - 1 > 0xFBF )
  {
    if ( v8 < v8 + 4095 )
    {
      v10 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_5;
    }
    return 0LL;
  }
  if ( v8 >= v8 + 63 )
    return 0LL;
  v10 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_5:
  v11 = a2 & 1;
  v12 = 0x140000000uLL;
  v75 = a2 & 1;
  if ( (a2 & 0x20) != 0 && (a2 & 1) != 0 )
  {
    v13 = MiSessionPoolVector(a1, 0LL, 0x140000000uLL);
  }
  else
  {
    v13 = PoolVector[v11];
    if ( (a2 & 1) == 0 && (a2 & 0x200) == 0 )
      v13 += 4416LL;
  }
  if ( v10 >= 0x10000 || (ExpPoolFlags & 0x20) != 0 )
  {
    if ( v10 >= v10 + 4095 )
      return 0LL;
    v10 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  v14 = a2 & 0x80000261;
  PagedPoolPages = v9;
  if ( v9 )
    goto LABEL_25;
  if ( ExpHeapBackedPoolEnabled )
  {
    HeapFromType = (unsigned int *)ExGetHeapFromType(v14, v6, v12);
    if ( HeapFromType )
    {
      if ( v10 >= HeapFromType[32] )
        Heap = RtlpHpAllocateHeap(HeapFromType);
      else
        Heap = RtlpHpSegAlloc((int)HeapFromType + 112, v10, v10, v10, v6);
      PagedPoolPages = Heap;
      goto LABEL_23;
    }
  }
  v15 = v6;
  LOBYTE(v15) = (v10 & 0xFFF) != 0;
  v16 = (v10 >> 12) + v15;
  if ( v16 >= 0x100000000LL )
  {
    PagedPoolPages = v6;
    Heap = v6;
    goto LABEL_22;
  }
  if ( (a2 & 1) != 0 )
  {
    PagedPoolPages = MiAllocatePagedPoolPages(v14, v10, v12);
    Heap = PagedPoolPages;
    goto LABEL_22;
  }
  v17 = *(_QWORD *)(*(_QWORD *)(v12 + 8LL * KeGetCurrentThread()->IdealProcessor + 4512512) + 192LL);
  v18 = *(unsigned __int16 *)(v17 + 146);
  v76 = *(unsigned __int16 *)(v17 + 146);
  if ( v16 <= 3 )
  {
    v19 = v16 + 25 * v18;
    if ( (a2 & 0x200) != 0 )
      v19 += 3LL;
    v20 = &qword_1403CB6A8[v19];
    if ( LOWORD(v20->Alignment) )
    {
      v21 = RtlpInterlockedPopEntrySList(v20);
      if ( v21 )
      {
        Next = (ULONG_PTR)v21[-1].Next;
        v23 = (ULONG_PTR)&v21[-1];
        PagedPoolPages = (ULONG_PTR)&v21[-1];
        BugCheckParameter4 = qword_1403CC500 ^ (unsigned __int64)&v21[-1];
        if ( Next != BugCheckParameter4 )
          KeBugCheckEx(0x1Au, 0x5200uLL, v23, Next, BugCheckParameter4);
LABEL_21:
        Heap = v23;
        goto LABEL_22;
      }
    }
  }
  PagedPoolPages = MiFindNonPagedPoolVa(v14, v16, v18, &v79);
  Heap = PagedPoolPages;
  if ( !PagedPoolPages )
  {
    MiFreeExcessSegments();
    PagedPoolPages = MiFindNonPagedPoolVa(v14, v16, v76, &v79);
    Heap = PagedPoolPages;
    if ( !PagedPoolPages )
    {
      ++dword_1403CB130;
      ++dword_1403CB154;
      MiFreeExcessSegments();
      PagedPoolPages = 0LL;
      goto LABEL_22;
    }
  }
  if ( v79 == 2 )
  {
    v67 = 4;
    v87 = Heap;
    v86 = v16 << 12;
    if ( (a2 & 0x200) == 0 )
      v67 = 64;
    if ( (int)MmAllocatePoolMemory((ULONG_PTR *)&v87, &v86, (v76 + 1) | 0x1000, v67, v14) < 0 )
    {
      ++dword_1403CB130;
      MiFreeExcessSegments();
      MiReturnNonPagedPoolVa(Heap, v16, v14);
      PagedPoolPages = 0LL;
      Heap = 0LL;
      goto LABEL_22;
    }
    v23 = PagedPoolPages;
    goto LABEL_21;
  }
LABEL_22:
  LODWORD(v11) = a2 & 1;
LABEL_23:
  if ( !Heap )
  {
    if ( (ExpPoolFlags & 0x100) == 0 )
      return 0LL;
    ExDeferredFreePool(v13, 0LL);
    PagedPoolPages = ExAllocateHeapPages(v14, v10);
    if ( !PagedPoolPages )
      return 0LL;
  }
  v9 = (ULONG_PTR)v91;
LABEL_25:
  if ( !(unsigned int)ExpAddTagForBigPages(PagedPoolPages, a4, v10, a2, v93, v7) )
  {
    if ( !v9 )
      ExFreeHeapPages(PagedPoolPages);
    return 0LL;
  }
  if ( (v10 & 0xFFF) == 0 )
  {
    v92 = 0;
    goto LABEL_31;
  }
  if ( !(_DWORD)v11 )
  {
    if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      v68 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
      v92 = v68;
      if ( (unsigned int)v68 >= ExpNumberOfNonPagedPools )
      {
        v68 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
        v92 = ExpNumberOfNonPagedPools - 1;
      }
      v13 = ExpNonPagedPoolDescriptor[v68];
      if ( (a2 & 0x200) == 0 )
        v13 += 4416LL;
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( (a2 & 0x20) != 0 )
  {
LABEL_29:
    v92 = 0;
    goto LABEL_30;
  }
  if ( a2 < 0 )
  {
    LODWORD(v65) = 0;
    v92 = 0;
  }
  else if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    LODWORD(v65) = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
    v92 = v65;
    if ( (unsigned int)v65 < ExpNumberOfPagedPools )
    {
      v92 = v65 + 1;
      v13 = ExpPagedPoolDescriptor[(unsigned int)(v65 + 1)];
      goto LABEL_30;
    }
  }
  else
  {
    LODWORD(v65) = 1;
    v92 = 1;
    if ( ExpNumberOfPagedPools != 1 )
    {
      v65 = (unsigned int)(ExpPoolIndex + 1);
      if ( (unsigned int)v65 > ExpNumberOfPagedPools )
        v65 = 1LL;
      v66 = v65;
      ExpPoolIndex = v65;
      do
      {
        if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v65] + 16) )
          break;
        v65 = (unsigned int)(v65 + 1);
        if ( (unsigned int)v65 > ExpNumberOfPagedPools )
          v65 = 1LL;
      }
      while ( (_DWORD)v65 != v66 );
      v92 = v65;
    }
  }
  v13 = ExpPagedPoolDescriptor[(unsigned int)v65];
LABEL_30:
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + 72));
LABEL_31:
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 80), (int)(v10 >> 12));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 88), v10);
  v26 = a4;
  if ( a4 == PoolHitTag )
    __debugbreak();
  v27 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v27 = EtwTracePool(3616, a2, a4, PagedPoolPages, v10);
    v26 = a4;
  }
  v28 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
  {
    v31 = ExpSessionPoolTrackTable;
    v29 = ExpSessionPoolTrackTableMask;
    v30 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v27) = KeGetPcr()->Prcb.Number;
    v29 = PoolTrackTableMask;
    v30 = PoolTrackTableSize;
    v31 = (__int64)*(&ExPoolTagTables + v27);
  }
  v81 = v30;
  v80 = v29;
  v32 = v29 & (((40543 * (unsigned __int64)v26) >> 32) ^ (40543 * v26));
  v33 = v32;
  v94 = v32;
  while ( 1 )
  {
    v34 = 56LL * v32;
    v35 = *(_DWORD *)(v34 + v31);
    v36 = (volatile signed __int32 *)(v34 + v31);
    if ( v35 == v26 )
      break;
    if ( v35 )
    {
LABEL_40:
      v32 = v29 & (v32 + 1);
      if ( v32 == v33 )
      {
        ExpInsertPoolTrackerExpansion(v26, v10, a2);
        goto LABEL_45;
      }
    }
    else
    {
      if ( v28 )
        goto LABEL_99;
      v69 = *(_DWORD *)(v34 + PoolTrackTable);
      if ( v69 )
      {
        *v36 = v69;
        v33 = v94;
      }
      else
      {
        v33 = v94;
LABEL_99:
        if ( v32 == v30 - 1 )
          goto LABEL_40;
        if ( v28 )
        {
          _InterlockedCompareExchange(v36, v26, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(v34 + PoolTrackTable) )
          {
            *(_DWORD *)(v34 + PoolTrackTable) = a4;
            *v36 = a4;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          LODWORD(v29) = v80;
          v33 = v94;
          v26 = a4;
          v30 = v81;
          v28 = a2 & 0x20;
        }
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v37 = 8LL;
    v38 = 10LL;
  }
  else
  {
    v37 = 2LL;
    v38 = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v36[v38]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v36[v37], v10);
LABEL_45:
  if ( (v85 & 0xFFF) != 0 && a2 < 0 )
    memset((void *)(PagedPoolPages + (v85 & 0xFFFFFFFFFFFFF000uLL)), 0, 0x1000uLL);
  if ( (v10 & 0xFFF) != 0 )
  {
    v39 = PagedPoolPages + v10;
    *(_BYTE *)(v39 + 1) = v92;
    v40 = a2 & 0x221 | 2;
    *(_BYTE *)(v39 + 2) = 2;
    *(_BYTE *)(v39 + 3) = v40;
    *(_BYTE *)v39 = 0;
    *(_DWORD *)(v39 + 4) = 1734439494;
    *(_QWORD *)(v39 + 16) = v10;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 88), 0x20uLL);
    if ( PoolHitTag == 1734439494 )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      EtwTracePool(3616, v40, 1734439494, PagedPoolPages + v10, 32LL);
    v41 = v40 & 0x20;
    if ( (v40 & 0x20) != 0 )
    {
      v44 = ExpSessionPoolTrackTable;
      v42 = ExpSessionPoolTrackTableMask;
      v43 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      v42 = PoolTrackTableMask;
      v43 = PoolTrackTableSize;
      v44 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
      v41 = v40 & 0x20;
    }
    v80 = v43;
    v45 = v42 & 0x81B0A40E;
    v81 = v42;
    v46 = v42 & 0x81B0A40E;
    v77 = v42 & 0x81B0A40E;
    v78 = v44;
    while ( 1 )
    {
      v47 = 56LL * v45;
      v85 = v47;
      v48 = (volatile signed __int32 *)(v47 + v44);
      v49 = *(_DWORD *)(v47 + v44);
      if ( v49 == 1734439494 )
      {
        if ( (v40 & 1) != 0 )
        {
          v50 = 8LL;
          v51 = 10LL;
        }
        else
        {
          v50 = 2LL;
          v51 = 4LL;
        }
        _InterlockedIncrement64((volatile signed __int64 *)&v48[v51]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v48[v50], 0x20uLL);
LABEL_59:
        v52 = v75;
        *(_BYTE *)(v39 + 35) = 0;
        *(_BYTE *)(v39 + 32) = 2;
        *(_DWORD *)(v39 + 36) = 1701147206;
        v53 = (4096 - (((_WORD)v10 + 32) & 0xFFFu)) >> 4;
        *(_BYTE *)(v39 + 34) = v53;
        *(_BYTE *)(v39 + 33) = v92;
        v54 = v13 + 16 * (v53 - 1 + 20LL);
        if ( v75 )
        {
          ExAcquireFastMutex((PFAST_MUTEX)(v13 + 8));
          PsBoostThreadIo(KeGetCurrentThread(), 0LL);
        }
        else
        {
          v83 = (volatile signed __int64 *)(v13 + 8);
          v82 = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v84 = CurrentIrql;
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v72 = SchedulerAssist[5];
              SchedulerAssist[5] = v72 + 1;
              if ( v72 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              {
                KiPerformUnboostKick(CurrentPrcb);
                v52 = 0;
              }
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
          {
            v58 = _InterlockedExchange64((volatile __int64 *)(v13 + 8), (__int64)&v82);
            if ( v58 )
            {
              KxWaitForLockOwnerShip(&v82);
              v52 = 0;
            }
LABEL_64:
            v59 = *(__int64 ***)(v54 + 8);
            v60 = (__int64 *)(v39 + 48);
            if ( *v59 != (__int64 *)v54 )
              __fastfail(3u);
            *v60 = v54;
            v60[1] = (__int64)v59;
            *v59 = v60;
            *(_QWORD *)(v54 + 8) = v60;
            if ( v52 )
            {
              LOBYTE(v58) = 1;
              PsBoostThreadIo(KeGetCurrentThread(), v58);
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v13 + 8));
              return PagedPoolPages;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v82, retaddr);
              goto LABEL_69;
            }
            _m_prefetchw(&v82);
            v61 = v82;
            if ( !v82 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64(v83, 0LL, (signed __int64)&v82) == &v82 )
              {
LABEL_69:
                v62 = KeGetCurrentPrcb();
                v63 = v62->SchedulerAssist;
                if ( v63 )
                {
                  if ( v62->NestingLevel <= 1u )
                  {
                    v73 = v63[5] - 1;
                    v63[5] = v73;
                    if ( !v73 && !*((_BYTE *)v63 + 25) && !*((_BYTE *)v63 + 27) )
                      KiPerformUnboostKick(v62);
                  }
                }
                __writecr8(v84);
                return PagedPoolPages;
              }
              v61 = KxWaitForLockChainValid(&v82);
            }
            v82 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v61 + 8), 1uLL);
            goto LABEL_69;
          }
          KiAcquireQueuedSpinLockInstrumented(&v82, v13 + 8);
        }
        v52 = v75;
        goto LABEL_64;
      }
      if ( v49 )
        goto LABEL_161;
      if ( !v41 )
      {
        v71 = *(_DWORD *)(v47 + PoolTrackTable);
        if ( v71 )
        {
          *v48 = v71;
          v44 = v78;
          continue;
        }
      }
      if ( v45 == v43 - 1 )
      {
LABEL_161:
        v44 = v78;
        v45 = v42 & (v45 + 1);
        if ( v45 == v46 )
        {
          ExpInsertPoolTrackerExpansion(0x67617246u, 0x20uLL, v40);
          goto LABEL_59;
        }
      }
      else if ( v41 )
      {
        _InterlockedCompareExchange(v48, 1734439494, 0);
        v44 = v78;
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v89);
        if ( !*(_DWORD *)(v85 + PoolTrackTable) )
        {
          *(_DWORD *)(v85 + PoolTrackTable) = 1734439494;
          *v48 = 1734439494;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v89);
        __writecr8(v89.OldIrql);
        v41 = v40 & 0x20;
        LODWORD(v42) = v81;
        v44 = v78;
        v46 = v77;
        v43 = v80;
      }
    }
  }
  return PagedPoolPages;
}
