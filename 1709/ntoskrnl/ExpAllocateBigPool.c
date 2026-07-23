/*
 * XREFs of ExpAllocateBigPool @ 0x1400C0CC0
 * Callers:
 *     ExInsertPoolTag @ 0x140119970 (ExInsertPoolTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     MiFindNonPagedPoolPages @ 0x140089100 (MiFindNonPagedPoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     ExpAddTagForBigPages @ 0x1400C1690 (ExpAddTagForBigPages.c)
 *     MiFindNonPagedPoolVa @ 0x1400C193C (MiFindNonPagedPoolVa.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400C38C0 (MiAssignNonPagedPoolPtes.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     EtwTracePool @ 0x14017D2D8 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExDeferredFreePool @ 0x1402B2010 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x1405096C0 (MiSessionPoolVector.c)
 */

unsigned __int64 __fastcall ExpAllocateBigPool(unsigned __int64 a1, int a2, unsigned __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rdx
  char v7; // bl
  int v8; // r12d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  unsigned int v15; // edi
  __int64 v16; // r13
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  _SLIST_HEADER *v21; // rcx
  PSLIST_ENTRY v22; // rax
  ULONG_PTR *PagedPoolPages; // r12
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int32 v25; // r10d
  __int64 v26; // rax
  int v27; // r9d
  int v28; // r13d
  __int64 v29; // r8
  __int64 v30; // r12
  unsigned int v31; // ebx
  unsigned int v32; // edx
  __int64 v33; // rdi
  int v34; // eax
  unsigned __int64 v35; // rbx
  unsigned int v36; // r14d
  __int64 v37; // r8
  __int64 v38; // r11
  __int64 v39; // r9
  unsigned int v40; // edi
  int v41; // r10d
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // rdi
  int v46; // ecx
  __int64 v47; // rdi
  unsigned __int8 CurrentIrql; // al
  _QWORD *v49; // rdx
  __int64 **v50; // rax
  __int64 *v51; // rbx
  __int64 v52; // rax
  __int64 v54; // r8
  unsigned int v55; // r8d
  unsigned int v56; // edx
  unsigned __int64 NonPagedPoolVa; // rax
  __int64 NonPagedPoolPages; // rax
  int v59; // edx
  int v60; // eax
  __int64 v61; // rcx
  void *v62; // rcx
  unsigned __int64 BugCheckParameter2; // [rsp+30h] [rbp-61h]
  int v64; // [rsp+38h] [rbp-59h]
  unsigned int v65; // [rsp+40h] [rbp-51h]
  __int64 v66; // [rsp+40h] [rbp-51h]
  __int64 v67; // [rsp+48h] [rbp-49h]
  int v68; // [rsp+50h] [rbp-41h] BYREF
  __int64 v69; // [rsp+58h] [rbp-39h]
  __int64 v70; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int64 *v71; // [rsp+68h] [rbp-29h]
  unsigned __int8 v72; // [rsp+70h] [rbp-21h]
  __int64 v73; // [rsp+78h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v75; // [rsp+98h] [rbp+7h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+57h]
  char v78; // [rsp+F0h] [rbp+5Fh]
  unsigned __int16 v79; // [rsp+100h] [rbp+6Fh]
  unsigned int v80; // [rsp+100h] [rbp+6Fh]
  int v81; // [rsp+100h] [rbp+6Fh]
  unsigned __int32 v82; // [rsp+108h] [rbp+77h]

  v82 = a4;
  v73 = a3;
  v6 = 0LL;
  v7 = 0;
  v79 = 0;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  if ( a1 )
  {
    if ( (a5 & 2) != 0 )
    {
      v62 = (void *)(a3 + a1);
      if ( ((unsigned __int16)v62 & 0xFFF) != 0 )
      {
        v79 = ((unsigned __int16)v62 & 0xF000) - (_WORD)v62 + 4096;
        v7 = MEMORY[0xFFFFF78000000320] | 1;
        memset(v62, MEMORY[0xFFFFF78000000320] | 1, v79);
        v6 = 0LL;
      }
    }
    if ( (a5 & 1) != 0 )
      v9 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (v9 & 0xFFF) - 1 > 0xFBF )
  {
    if ( v9 < v9 + 4095 )
    {
      v11 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_5;
    }
    return 0LL;
  }
  if ( v9 >= v9 + 63 )
    return 0LL;
  v11 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_5:
  v12 = a2 & 1;
  v13 = 0x140000000uLL;
  v64 = a2 & 1;
  if ( (a2 & 0x20) != 0 && (a2 & 1) != 0 )
  {
    v14 = MiSessionPoolVector(v12, 0LL, 0x140000000uLL);
  }
  else
  {
    v14 = PoolVector[v12];
    if ( (a2 & 1) == 0 && (a2 & 0x200) == 0 )
      v14 += 4416LL;
  }
  if ( v11 >= 0x10000 || (ExpPoolFlags & 0x20) != 0 )
  {
    if ( v11 >= v11 + 4095 )
      return 0LL;
    v11 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  BugCheckParameter2 = v10;
  v15 = a2 & 0x80000261;
  if ( v10 )
    goto LABEL_22;
  if ( (a2 & 1) != 0 )
  {
    PagedPoolPages = (ULONG_PTR *)MiAllocatePagedPoolPages(v15, v11, v13, a4);
    BugCheckParameter2 = (unsigned __int64)PagedPoolPages;
LABEL_20:
    if ( PagedPoolPages )
    {
      v8 = v82;
      goto LABEL_22;
    }
    goto LABEL_143;
  }
  v16 = v6;
  LOBYTE(v16) = (v11 & 0xFFF) != 0;
  v17 = (v11 >> 12) + v16;
  v18 = *(_QWORD *)(*(_QWORD *)(v13 + 8LL * KeGetCurrentThread()->IdealProcessor + 4204864) + 192LL);
  v19 = *(unsigned __int16 *)(v18 + 146);
  v65 = *(unsigned __int16 *)(v18 + 146);
  if ( v17 <= 3 )
  {
    v20 = 25 * v19;
    if ( (a2 & 0x200) != 0 )
      v20 += 3LL;
    v21 = &qword_140388510[v17 + v20];
    if ( LOWORD(v21->Alignment) )
    {
      v22 = RtlpInterlockedPopEntrySList(v21);
      if ( v22 )
      {
        BugCheckParameter2 = (unsigned __int64)&v22[-1];
        PagedPoolPages = (ULONG_PTR *)&v22[-1];
        BugCheckParameter4 = qword_140389280 ^ (unsigned __int64)&v22[-1];
        if ( *PagedPoolPages != BugCheckParameter4 )
          KeBugCheckEx(0x1Au, 0x5200uLL, (ULONG_PTR)PagedPoolPages, *PagedPoolPages, BugCheckParameter4);
LABEL_19:
        v10 = a1;
        goto LABEL_20;
      }
      LODWORD(v19) = v65;
    }
  }
  if ( v17 < 0x100000000LL )
  {
    NonPagedPoolVa = MiFindNonPagedPoolVa(v15, v17, (unsigned int)v19, &v68);
    BugCheckParameter2 = NonPagedPoolVa;
    if ( NonPagedPoolVa
      || (MiFreeExcessSegments(),
          NonPagedPoolVa = MiFindNonPagedPoolVa(v15, v17, v65, &v68),
          (BugCheckParameter2 = NonPagedPoolVa) != 0) )
    {
      PagedPoolPages = (ULONG_PTR *)BugCheckParameter2;
      if ( *(char *)(((NonPagedPoolVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >= 0 )
      {
        if ( v68 == 2 )
          MiFlushTbAsNeeded(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v17, 0LL);
        NonPagedPoolPages = MiFindNonPagedPoolPages(v65, v17);
        if ( !NonPagedPoolPages )
        {
          ++dword_140388030;
          MiFreeExcessSegments();
          MiReturnNonPagedPoolVa(BugCheckParameter2, v17, v15);
LABEL_143:
          v8 = v82;
          goto LABEL_144;
        }
        MiAssignNonPagedPoolPtes(BugCheckParameter2, v17, v15, NonPagedPoolPages);
      }
      goto LABEL_19;
    }
    ++dword_140388030;
    ++dword_140388054;
    MiFreeExcessSegments();
  }
LABEL_144:
  if ( (ExpPoolFlags & 0x100) == 0 )
    return 0LL;
  ExDeferredFreePool(v14, 0LL);
  BugCheckParameter2 = MiAllocatePoolPages(v15, v11);
  if ( !BugCheckParameter2 )
    return 0LL;
  v10 = a1;
LABEL_22:
  if ( !(unsigned int)ExpAddTagForBigPages(BugCheckParameter2, v8, v11, a2, v79, v7) )
  {
    if ( !v10 )
      MiFreePoolPages(BugCheckParameter2, v11);
    return 0LL;
  }
  if ( (v11 & 0xFFF) == 0 )
  {
    v78 = 0;
    goto LABEL_28;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      v54 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
      v78 = v54;
      if ( (unsigned int)v54 >= ExpNumberOfNonPagedPools )
      {
        v54 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
        v78 = ExpNumberOfNonPagedPools - 1;
      }
      v14 = ExpNonPagedPoolDescriptor[v54];
      if ( (a2 & 0x200) == 0 )
        v14 += 4416LL;
    }
    else
    {
      v78 = 0;
    }
    goto LABEL_27;
  }
  if ( (a2 & 0x20) != 0 )
  {
    v78 = 0;
    goto LABEL_27;
  }
  if ( a2 < 0 )
  {
    v55 = 0;
    v78 = 0;
  }
  else if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v55 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
    v78 = v55;
    if ( v55 < ExpNumberOfPagedPools )
    {
      v78 = v55 + 1;
      v14 = ExpPagedPoolDescriptor[v55 + 1];
      goto LABEL_27;
    }
  }
  else
  {
    v55 = 1;
    v78 = 1;
    if ( ExpNumberOfPagedPools != 1 )
    {
      v55 = ExpPoolIndex + 1;
      if ( ExpPoolIndex + 1 > (unsigned int)ExpNumberOfPagedPools )
        v55 = 1;
      v56 = v55;
      ExpPoolIndex = v55;
      do
      {
        if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v55] + 16) )
          break;
        if ( ++v55 > ExpNumberOfPagedPools )
          v55 = 1;
      }
      while ( v55 != v56 );
      v78 = v55;
    }
  }
  v14 = ExpPagedPoolDescriptor[v55];
LABEL_27:
  _InterlockedIncrement64((volatile signed __int64 *)(v14 + 72));
LABEL_28:
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 80), (int)(v11 >> 12));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 88), v11);
  v25 = v82;
  if ( v82 == PoolHitTag )
    __debugbreak();
  v26 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v26 = EtwTracePool(3616, a2, v82, BugCheckParameter2, v11);
    v25 = v82;
  }
  v27 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
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
  v69 = v29;
  v31 = v28 & ((40543 * v25) ^ ((40543 * (unsigned __int64)v25) >> 32));
  v32 = v31;
  v80 = v31;
  while ( 1 )
  {
    v33 = 56LL * v31;
    v34 = *(_DWORD *)(v30 + v33);
    if ( v34 == v25 )
      break;
    if ( v34 )
    {
LABEL_37:
      v31 = v28 & (v31 + 1);
      if ( v31 == v32 )
      {
        ExpInsertPoolTrackerExpansion(v25, v11, (unsigned int)a2);
        goto LABEL_41;
      }
    }
    else
    {
      if ( v27 )
        goto LABEL_99;
      v59 = *(_DWORD *)(v33 + PoolTrackTable);
      if ( v59 )
      {
        *(_DWORD *)(v30 + 56LL * v31) = v59;
        v32 = v80;
      }
      else
      {
        v32 = v80;
LABEL_99:
        if ( v31 == v29 - 1 )
          goto LABEL_37;
        if ( v27 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v30 + v33), v25, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(PoolTrackTable + 56LL * v31) )
          {
            *(_DWORD *)(PoolTrackTable + 56LL * v31) = v82;
            *(_DWORD *)(v30 + 56LL * v31) = v82;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v25 = v82;
          v32 = v80;
          v29 = v69;
          v27 = a2 & 0x20;
        }
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v30 + v33 + 40));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + v33 + 32), v11);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v30 + v33 + 16));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + v33 + 8), v11);
  }
LABEL_41:
  if ( (v73 & 0xFFF) != 0 && a2 < 0 )
    memset((void *)(BugCheckParameter2 + (v73 & 0xFFFFFFFFFFFFF000uLL)), 0, 0x1000uLL);
  if ( (v11 & 0xFFF) == 0 )
    return BugCheckParameter2;
  v35 = BugCheckParameter2 + v11;
  *(_BYTE *)(v35 + 1) = v78;
  v36 = a2 & 0x221 | 2;
  *(_BYTE *)(v35 + 2) = 2;
  *(_BYTE *)(v35 + 3) = v36;
  *(_BYTE *)v35 = 0;
  *(_DWORD *)(v35 + 4) = 1734439494;
  *(_QWORD *)(v35 + 16) = v11;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 88), 0x20uLL);
  if ( PoolHitTag == 1734439494 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, v36, 1734439494, v35, 32LL);
  if ( (v36 & 0x20) != 0 )
  {
    v39 = ExpSessionPoolTrackTable;
    v37 = ExpSessionPoolTrackTableMask;
    v38 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    v37 = PoolTrackTableMask;
    v38 = PoolTrackTableSize;
    v39 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v66 = v38;
  v40 = v37 & 0x81B0A40E;
  v69 = v37;
  v41 = v37 & 0x81B0A40E;
  v81 = v37 & 0x81B0A40E;
  v67 = v39;
  while ( 1 )
  {
    v42 = 56LL * v40;
    v73 = v42;
    v43 = *(_DWORD *)(v42 + v39);
    if ( v43 == 1734439494 )
      break;
    if ( v43 )
      goto LABEL_150;
    if ( (v36 & 0x20) == 0 )
    {
      v60 = *(_DWORD *)(v42 + PoolTrackTable);
      if ( v60 )
      {
        *(_DWORD *)(v42 + v39) = v60;
        continue;
      }
    }
    if ( v40 == v38 - 1 )
    {
LABEL_150:
      v40 = v37 & (v40 + 1);
      if ( v40 == v41 )
      {
        ExpInsertPoolTrackerExpansion(1734439494LL, 32LL, v36);
        goto LABEL_54;
      }
    }
    else if ( (v36 & 0x20) != 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v42 + v39), 1734439494, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v75);
      v61 = v73;
      if ( !*(_DWORD *)(v73 + PoolTrackTable) )
      {
        *(_DWORD *)(v73 + PoolTrackTable) = 1734439494;
        *(_DWORD *)(v61 + v67) = 1734439494;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v75);
      __writecr8(v75.OldIrql);
      LODWORD(v37) = v69;
      v39 = v67;
      v41 = v81;
      v38 = v66;
    }
  }
  if ( (v36 & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v42 + v39 + 40));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + v39 + 32), 0x20uLL);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v42 + v39 + 16));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + v39 + 8), 0x20uLL);
  }
LABEL_54:
  *(_BYTE *)(v35 + 35) = 0;
  *(_BYTE *)(v35 + 32) = 2;
  *(_DWORD *)(v35 + 36) = 1701147206;
  v44 = (4096 - (((_WORD)v11 + 32) & 0xFFFu)) >> 4;
  *(_BYTE *)(v35 + 34) = v44;
  *(_BYTE *)(v35 + 33) = v78;
  v45 = v44 - 1;
  v46 = v64;
  v47 = v14 + 16 * (v45 + 20);
  if ( v64 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v14 + 8));
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    v46 = v64;
  }
  else
  {
    v71 = (volatile signed __int64 *)(v14 + 8);
    v70 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v72 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v70, v14 + 8);
      v46 = 0;
    }
    else
    {
      v49 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v14 + 8), (__int64)&v70);
      if ( v49 )
      {
        KxWaitForLockOwnerShip((__int64)&v70, v49);
        v46 = 0;
      }
    }
  }
  v50 = *(__int64 ***)(v47 + 8);
  v51 = (__int64 *)(v35 + 48);
  if ( *v50 != (__int64 *)v47 )
    __fastfail(3u);
  *v51 = v47;
  v51[1] = (__int64)v50;
  *v50 = v51;
  *(_QWORD *)(v47 + 8) = v51;
  if ( v46 )
  {
    LOBYTE(v49) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), (__int64)v49);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v14 + 8));
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v70, retaddr);
    }
    else
    {
      _m_prefetchw(&v70);
      v52 = v70;
      if ( !v70 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v71, 0LL, (signed __int64)&v70) == &v70 )
          goto LABEL_63;
        v52 = KxWaitForLockChainValid(&v70);
      }
      v70 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v52 + 8), 1uLL);
    }
LABEL_63:
    __writecr8(v72);
  }
  return BugCheckParameter2;
}
