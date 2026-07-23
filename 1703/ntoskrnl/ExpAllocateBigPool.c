/*
 * XREFs of ExpAllocateBigPool @ 0x14008C2B0
 * Callers:
 *     ExInsertPoolTag @ 0x14012435C (ExInsertPoolTag.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExpAddTagForBigPages @ 0x14008CCA0 (ExpAddTagForBigPages.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiFindNonPagedPoolVa @ 0x1400AD2B4 (MiFindNonPagedPoolVa.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400B2F20 (MiAssignNonPagedPoolPtes.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 *     MiFlushTbAsNeeded @ 0x1400F9A20 (MiFlushTbAsNeeded.c)
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiFreeExcessSegments @ 0x140126A94 (MiFreeExcessSegments.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     MiTrimSegmentCache @ 0x140167B80 (MiTrimSegmentCache.c)
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExDeferredFreePool @ 0x140285C90 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14051EA00 (MiSessionPoolVector.c)
 */

ULONG_PTR __fastcall ExpAllocateBigPool(ULONG_PTR a1, int a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  int v5; // esi
  __int64 v6; // r12
  __int64 v7; // rdx
  char v8; // bl
  unsigned __int64 v9; // rdi
  unsigned __int16 v11; // r15
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r8
  unsigned int v14; // edi
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rcx
  _SLIST_HEADER *v19; // rcx
  PSLIST_ENTRY v20; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v22; // rsi
  ULONG_PTR BugCheckParameter4; // rax
  __int64 PagedPoolPages; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // edx
  int v28; // esi
  __int64 v29; // r8
  __int64 v30; // r15
  unsigned int v31; // ebx
  __int64 v32; // rdi
  int v33; // eax
  __int16 v34; // r10
  unsigned __int64 v35; // rbx
  int v36; // r10d
  int v37; // r14d
  int v38; // r15d
  __int64 v39; // r8
  __int64 v40; // r13
  __int64 v41; // rdi
  unsigned int v42; // edx
  __int64 v43; // r12
  int v44; // eax
  __int16 v45; // ax
  volatile __int64 *v46; // rsi
  unsigned int v47; // ecx
  __int64 v48; // rdi
  int v49; // ecx
  __int64 v50; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v52; // rdx
  __int64 **v53; // rax
  __int64 *v54; // rbx
  __int64 v55; // rax
  __int64 v57; // r8
  int v58; // edx
  unsigned __int64 NonPagedPoolVa; // rax
  __int64 NonPagedPoolPages; // rax
  __int64 v61; // r8
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  int v64; // edx
  int v65; // r9d
  void *v66; // rcx
  ULONG_PTR PoolPages; // [rsp+30h] [rbp-61h]
  int v68; // [rsp+38h] [rbp-59h]
  __int64 v69; // [rsp+40h] [rbp-51h]
  int v70; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v71; // [rsp+50h] [rbp-41h]
  __int64 v72; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int64 *v73; // [rsp+60h] [rbp-31h]
  unsigned __int8 v74; // [rsp+68h] [rbp-29h]
  unsigned __int64 v75; // [rsp+70h] [rbp-21h]
  unsigned __int64 v76; // [rsp+78h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v78; // [rsp+98h] [rbp+7h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+57h]
  unsigned __int16 v80; // [rsp+F0h] [rbp+5Fh]
  char v81; // [rsp+F0h] [rbp+5Fh]
  unsigned int v83; // [rsp+F8h] [rbp+67h]
  int v84; // [rsp+100h] [rbp+6Fh]

  v5 = a2;
  v6 = a4;
  v7 = 0LL;
  v76 = a3;
  v8 = 0;
  v80 = 0;
  v9 = a3;
  v11 = 0;
  if ( a1 )
  {
    if ( (a5 & 2) != 0 )
    {
      v66 = (void *)(a3 + a1);
      if ( ((unsigned __int16)v66 & 0xFFF) != 0 )
      {
        v11 = ((unsigned __int16)v66 & 0xF000) - (_WORD)v66 + 4096;
        v8 = MEMORY[0xFFFFF78000000320] | 1;
        v80 = v11;
        memset(v66, MEMORY[0xFFFFF78000000320] | 1, v11);
        v7 = 0LL;
      }
    }
    v5 = a2;
    if ( (a5 & 1) != 0 )
      v9 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (v9 & 0xFFF) - 1 > 0xFBF )
  {
    if ( v9 >= v9 + 4095 )
      return 0LL;
    v12 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    if ( v9 >= v9 + 63 )
      return 0LL;
    v12 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v75 = v12;
  v13 = 0x140000000uLL;
  v84 = v5 & 1;
  v68 = v5 & 0x20;
  if ( (v5 & 0x20) != 0 && (v5 & 1) != 0 )
  {
    v62 = MiSessionPoolVector(v5 & 1, 0LL, 0x140000000uLL);
LABEL_102:
    v69 = v62;
    goto LABEL_8;
  }
  v69 = PoolVector[v5 & 1];
  if ( (v5 & 1) == 0 && (v5 & 0x200) == 0 )
  {
    v62 = PoolVector[v5 & 1] + 4416;
    goto LABEL_102;
  }
LABEL_8:
  if ( v12 >= 0x10000 || (ExpPoolFlags & 0x20) != 0 )
  {
    v63 = v12 + 4095;
    if ( v12 < v12 + 4095 )
    {
      v12 = v63 & 0xFFFFFFFFFFFFF000uLL;
      v75 = v63 & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_10;
    }
    return 0LL;
  }
LABEL_10:
  PoolPages = a1;
  v14 = v5 & 0x80000261;
  if ( a1 )
    goto LABEL_20;
  if ( (v5 & 1) != 0 )
  {
    PagedPoolPages = MiAllocatePagedPoolPages(v14, v12, v13);
    PoolPages = PagedPoolPages;
  }
  else
  {
    v15 = v7;
    LOBYTE(v15) = (v12 & 0xFFF) != 0;
    v16 = v15 + (v12 >> 12);
    v17 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8LL * KeGetCurrentThread()->IdealProcessor + 4084032)
                                          + 192LL)
                              + 146LL);
    if ( v16 > 3 )
      goto LABEL_89;
    v18 = 25 * v17;
    if ( (v14 & 0x200) != 0 )
      v18 += 3LL;
    v19 = &qword_14036C1C8[v16 + v18];
    if ( LOWORD(v19->Alignment) && (v20 = RtlpInterlockedPopEntrySList(v19)) != 0LL )
    {
      Next = (ULONG_PTR)v20[-1].Next;
      v22 = (ULONG_PTR)&v20[-1];
      PoolPages = (ULONG_PTR)&v20[-1];
      BugCheckParameter4 = qword_14036CFC0 ^ (unsigned __int64)&v20[-1];
      if ( Next != BugCheckParameter4 )
        KeBugCheckEx(0x1Au, 0x5200uLL, v22, Next, BugCheckParameter4);
    }
    else
    {
LABEL_89:
      if ( v16 >= 0x100000000LL )
        goto LABEL_142;
      NonPagedPoolVa = MiFindNonPagedPoolVa(v14, v16, (unsigned int)v17, &v70);
      PoolPages = NonPagedPoolVa;
      if ( !NonPagedPoolVa )
      {
        MiFreeExcessSegments(1LL);
        NonPagedPoolVa = MiFindNonPagedPoolVa(v14, v16, (unsigned int)v17, &v70);
        PoolPages = NonPagedPoolVa;
        if ( !NonPagedPoolVa )
        {
          ++dword_14036BD30;
          ++dword_14036BD54;
          MiTrimSegmentCache();
          goto LABEL_142;
        }
      }
      if ( *(char *)(((NonPagedPoolVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >= 0 )
      {
        if ( v70 == 2 )
          MiFlushTbAsNeeded(((PoolPages >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        NonPagedPoolPages = MiFindNonPagedPoolPages((unsigned int)v17, v16);
        if ( !NonPagedPoolPages )
        {
          ++dword_14036BD30;
          MiTrimSegmentCache();
          MiReturnNonPagedPoolVa(PoolPages, v16, v14);
          goto LABEL_142;
        }
        MiAssignNonPagedPoolPtes(PoolPages, v16, v14, NonPagedPoolPages);
      }
    }
    v5 = a2;
    v11 = v80;
    PagedPoolPages = PoolPages;
  }
  if ( PagedPoolPages )
    goto LABEL_20;
LABEL_142:
  if ( (ExpPoolFlags & 0x100) == 0 )
    return 0LL;
  ExDeferredFreePool(v69, 0LL);
  PoolPages = MiAllocatePoolPages(v14, v12);
  if ( !PoolPages )
    return 0LL;
  v5 = a2;
  v11 = v80;
LABEL_20:
  if ( !(unsigned int)ExpAddTagForBigPages(PoolPages, v6, v12, v5, v11, v8) )
  {
    if ( !a1 )
      MiFreePoolPages(PoolPages);
    return 0LL;
  }
  if ( (v12 & 0xFFF) == 0 )
  {
    v25 = v69;
    v81 = 0;
    goto LABEL_27;
  }
  if ( !v84 )
  {
    if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      v61 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
      v81 = v61;
      if ( (unsigned int)v61 >= ExpNumberOfNonPagedPools )
      {
        v61 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
        v81 = ExpNumberOfNonPagedPools - 1;
      }
      v25 = ExpNonPagedPoolDescriptor[v61];
      v69 = v25;
      if ( (v5 & 0x200) == 0 )
      {
        v25 += 4416LL;
        v69 = v25;
      }
      goto LABEL_26;
    }
    v81 = 0;
    goto LABEL_25;
  }
  if ( v68 )
  {
    v81 = 0;
LABEL_25:
    v25 = v69;
    goto LABEL_26;
  }
  if ( v5 < 0 )
  {
    LODWORD(v57) = 0;
    v81 = 0;
  }
  else if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    LODWORD(v57) = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
    v81 = v57;
    if ( (unsigned int)v57 < ExpNumberOfPagedPools )
    {
      v81 = v57 + 1;
      v25 = ExpPagedPoolDescriptor[(unsigned int)(v57 + 1)];
      v69 = v25;
      goto LABEL_26;
    }
  }
  else
  {
    LODWORD(v57) = 1;
    v81 = 1;
    if ( ExpNumberOfPagedPools != 1 )
    {
      v57 = (unsigned int)(ExpPoolIndex + 1);
      if ( (unsigned int)v57 > ExpNumberOfPagedPools )
        v57 = 1LL;
      v58 = v57;
      ExpPoolIndex = v57;
      do
      {
        if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v57] + 16) )
          break;
        v57 = (unsigned int)(v57 + 1);
        if ( (unsigned int)v57 > ExpNumberOfPagedPools )
          v57 = 1LL;
      }
      while ( (_DWORD)v57 != v58 );
      v81 = v57;
    }
  }
  v25 = ExpPagedPoolDescriptor[(unsigned int)v57];
  v69 = v25;
LABEL_26:
  _InterlockedIncrement64((volatile signed __int64 *)(v25 + 72));
LABEL_27:
  _InterlockedIncrement((volatile signed __int32 *)(v25 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 80), (int)(v12 >> 12));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 88), v12);
  if ( (_DWORD)v6 == PoolHitTag )
    __debugbreak();
  v26 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v26 = EtwTracePool(3616, v5, v6, PoolPages, v12);
  v27 = v68;
  if ( v68 )
  {
    v30 = ExpSessionPoolTrackTable;
    v28 = ExpSessionPoolTrackTableMask;
    v29 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v26) = KeGetPcr()->Prcb.Number;
    v28 = PoolTrackTableMask;
    v29 = PoolTrackTableSize;
    v30 = (__int64)*(&ExPoolTagTables + v26);
  }
  v71 = v29;
  v31 = v28 & ((40543 * v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
  while ( 1 )
  {
    v32 = 40LL * v31;
    v33 = *(_DWORD *)(v30 + v32);
    if ( v33 == (_DWORD)v6 )
      break;
    if ( v33 )
    {
LABEL_36:
      v31 = v28 & (v31 + 1);
      if ( v31 == (v28 & ((40543 * (int)v6) ^ ((unsigned __int64)(40543 * v6) >> 32))) )
      {
        ExpInsertPoolTrackerExpansion((unsigned int)v6, v12, (unsigned int)a2);
        goto LABEL_40;
      }
    }
    else
    {
      if ( v27 )
        goto LABEL_84;
      v64 = *(_DWORD *)(v32 + PoolTrackTable);
      if ( v64 )
      {
        *(_DWORD *)(v30 + 40LL * v31) = v64;
        v27 = v68;
      }
      else
      {
        v27 = v68;
LABEL_84:
        if ( v31 == v29 - 1 )
          goto LABEL_36;
        if ( v27 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v30 + v32), v6, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(v32 + PoolTrackTable) )
          {
            *(_DWORD *)(v32 + PoolTrackTable) = v6;
            *(_DWORD *)(v30 + 40LL * v31) = v6;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v29 = v71;
          v27 = v68;
        }
      }
    }
  }
  if ( v84 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v30 + v32 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + v32 + 32), v12);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v30 + v32 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + v32 + 16), v12);
  }
LABEL_40:
  v34 = a2;
  if ( (v76 & 0xFFF) != 0 && a2 < 0 )
  {
    memset((void *)(PoolPages + (v76 & 0xFFFFFFFFFFFFF000uLL)), 0, 0x1000uLL);
    v34 = a2;
  }
  if ( (v12 & 0xFFF) == 0 )
    return PoolPages;
  v35 = v12 + PoolPages;
  v36 = v34 & 0x221 | 2;
  v83 = v36;
  *(_BYTE *)(v35 + 1) = v81;
  *(_BYTE *)(v35 + 3) = v36;
  *(_BYTE *)(v35 + 2) = 2;
  *(_BYTE *)v35 = 0;
  *(_DWORD *)(v35 + 4) = 1734439494;
  *(_QWORD *)(v35 + 16) = v12;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 88), 0x20uLL);
  if ( PoolHitTag == 1734439494 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    EtwTracePool(3616, v36, 1734439494, v35, 32LL);
    LOBYTE(v36) = v83;
  }
  v37 = v36 & 0x20;
  if ( (v36 & 0x20) != 0 )
  {
    v40 = ExpSessionPoolTrackTable;
    v38 = ExpSessionPoolTrackTableMask;
    v39 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    v38 = PoolTrackTableMask;
    v39 = PoolTrackTableSize;
    v40 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v71 = v39;
  v41 = v38 & 0x81B0A40E;
  v42 = v38 & 0x81B0A40E;
  while ( 1 )
  {
    v43 = 40 * v41;
    v44 = *(_DWORD *)(40 * v41 + v40);
    if ( v44 == 1734439494 )
      break;
    if ( v44 )
      goto LABEL_148;
    if ( !v37 )
    {
      v65 = *(_DWORD *)(v43 + PoolTrackTable);
      if ( v65 )
      {
        *(_DWORD *)(v43 + v40) = v65;
        continue;
      }
    }
    if ( (unsigned int)v41 == v39 - 1 )
    {
LABEL_148:
      v41 = v38 & (unsigned int)(v41 + 1);
      if ( (_DWORD)v41 == v42 )
      {
        ExpInsertPoolTrackerExpansion(1734439494LL, 32LL, v83);
        goto LABEL_53;
      }
    }
    else if ( v37 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v43 + v40), 1734439494, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v78);
      if ( !*(_DWORD *)(v43 + PoolTrackTable) )
      {
        *(_DWORD *)(v43 + PoolTrackTable) = 1734439494;
        *(_DWORD *)(v43 + v40) = 1734439494;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v78);
      __writecr8(v78.OldIrql);
      v42 = v38 & 0x81B0A40E;
      v39 = v71;
    }
  }
  if ( (v83 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v43 + v40 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + v40 + 32), 0x20uLL);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v43 + v40 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + v40 + 16), 0x20uLL);
  }
LABEL_53:
  v45 = v75 + 32;
  *(_BYTE *)(v35 + 35) = 0;
  *(_BYTE *)(v35 + 32) = 2;
  *(_DWORD *)(v35 + 36) = 1701147206;
  v46 = (volatile __int64 *)(v69 + 8);
  v47 = (4096 - (v45 & 0xFFFu)) >> 4;
  *(_BYTE *)(v35 + 34) = v47;
  *(_BYTE *)(v35 + 33) = v81;
  v48 = v47 - 1;
  v49 = v84;
  v50 = v69 + 16 * (v48 + 20);
  if ( v84 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v69 + 8));
    PsBoostThreadIo(KeGetCurrentThread(), 0LL);
    v49 = v84;
  }
  else
  {
    v73 = (volatile signed __int64 *)(v69 + 8);
    v72 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v74 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v72, v69 + 8);
      v49 = 0;
    }
    else
    {
      v52 = _InterlockedExchange64(v46, (__int64)&v72);
      if ( v52 )
      {
        KxWaitForLockOwnerShip(&v72);
        v49 = 0;
      }
    }
  }
  v53 = *(__int64 ***)(v50 + 8);
  v54 = (__int64 *)(v35 + 48);
  if ( *v53 != (__int64 *)v50 )
    __fastfail(3u);
  *v54 = v50;
  v54[1] = (__int64)v53;
  *v53 = v54;
  *(_QWORD *)(v50 + 8) = v54;
  if ( v49 )
  {
    LOBYTE(v52) = 1;
    PsBoostThreadIo(KeGetCurrentThread(), v52);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v46);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v72, retaddr);
    }
    else
    {
      _m_prefetchw(&v72);
      v55 = v72;
      if ( !v72 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v73, 0LL, (signed __int64)&v72) == &v72 )
          goto LABEL_62;
        v55 = KxWaitForLockChainValid(&v72);
      }
      v72 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v55 + 8), 1uLL);
    }
LABEL_62:
    __writecr8(v74);
  }
  return PoolPages;
}
