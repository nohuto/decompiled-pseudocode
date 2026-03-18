/*
 * XREFs of ExFreeLargePool @ 0x1400DCA30
 * Callers:
 *     MmFreeContiguousMemory @ 0x140123200 (MmFreeContiguousMemory.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14001E140 (ExpRemovePoolTrackerExpansion.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     MiClearNonPagedPtes @ 0x1400A7AB0 (MiClearNonPagedPtes.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400DD2E0 (MiInsertNonPagedPoolOnSlist.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiReturnPhysicalPoolPages @ 0x140125E80 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MmIsNonPagedPoolNx @ 0x14014FB58 (MmIsNonPagedPoolNx.c)
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeCheckForTimer @ 0x1401FE4D8 (KeCheckForTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     VerifierFreeTrackedPool @ 0x14021AAE8 (VerifierFreeTrackedPool.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpCheckForResource @ 0x14025C2B4 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x14025D348 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14025D678 (ExpCheckForWorker.c)
 *     MiSessionPoolVector @ 0x14051EA00 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140775864 (VfFreePoolNotification.c)
 */

void __fastcall ExFreeLargePool(ULONG_PTR BugCheckParameter2, int *a2, ULONG_PTR *a3, signed int a4)
{
  ULONG_PTR v4; // r13
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  int v8; // esi
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // bp
  int v11; // ett
  __int64 v12; // rdx
  volatile signed __int32 *v13; // r9
  unsigned __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // r12
  int *v17; // r10
  ULONG_PTR v18; // r15
  int v19; // edi
  unsigned int v20; // edi
  unsigned __int16 v21; // si
  __int64 v22; // rbx
  int v23; // r13d
  int v24; // r9d
  __int64 v25; // r11
  unsigned int v26; // eax
  int v27; // ecx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  ULONG_PTR v30; // r10
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v32; // rbp
  int v33; // r11d
  char v34; // al
  unsigned __int64 v35; // rsi
  int v36; // r8d
  __int64 v37; // r9
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // r8d
  ULONG_PTR v42; // rbx
  unsigned __int8 v43; // al
  _QWORD *v44; // rdx
  __int16 v45; // ax
  ULONG_PTR v46; // rcx
  ULONG_PTR v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // r12
  unsigned int inserted; // ebx
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rcx
  int v57; // r8d
  _BYTE *v58; // r9
  unsigned int i; // eax
  int v60; // r11d
  unsigned __int8 v61; // [rsp+30h] [rbp-78h]
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-74h]
  int BugCheckParameter3_4; // [rsp+38h] [rbp-70h]
  __int64 v64; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int64 *v65; // [rsp+48h] [rbp-60h]
  unsigned __int8 v66; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v71; // [rsp+C8h] [rbp+20h]

  v71 = a4;
  v4 = a4;
  BugCheckParameter3_4 = a4 & 1;
  v6 = PoolVector[a4 & 1];
  if ( a4 == 33 )
  {
    v6 = MiSessionPoolVector(0x140000000uLL, a2, a3);
  }
  else if ( (a4 & 1) == 0 )
  {
    v7 = MI_READ_PTE_LOCK_FREE(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (v7 & 0x80u) == 0LL )
      v7 = MI_READ_PTE_LOCK_FREE(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v7 < 0x8000000000000000uLL )
      v6 += 4416LL;
  }
  BugCheckParameter3 = 1;
  v8 = 1;
  v9 = 40543LL * (unsigned int)(BugCheckParameter2 >> 12);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v11 = ExpLargePoolTableLock & 0x7FFFFFFF;
    if ( v11 != _InterlockedCompareExchange(
                  &ExpLargePoolTableLock,
                  (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                  ExpLargePoolTableLock & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v12 = *(_QWORD *)(qword_14036C178 + 8128);
    v13 = (volatile signed __int32 *)(qword_14036C178 + 7992);
    v14 = *(_QWORD *)(qword_14036C178 + 8136);
  }
  else
  {
    v12 = PoolBigPageTable;
    v13 = &ExpPoolBigEntriesInUse;
    v14 = PoolBigPageTableSize;
  }
  v15 = (v14 - 1) & (v9 ^ ((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32));
  v16 = 0LL;
  while ( *(_QWORD *)(v12 + 24LL * v15) != BugCheckParameter2 )
  {
    if ( ++v15 >= v14 )
    {
      if ( v8 )
      {
        v15 = 0;
        v8 = 0;
      }
      else
      {
        if ( (v4 & 0x21) != 0
          || v12 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) == -1
          || (v12 = *(_QWORD *)(qword_14036C178 + 8128),
              v13 = (volatile signed __int32 *)(qword_14036C178 + 7992),
              v14 = *(_QWORD *)(qword_14036C178 + 8136),
              !v12)
          || !v14 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v4, 0LL);
        }
        v8 = 1;
        v15 = (v14 - 1) & (v9 ^ HIDWORD(v9));
      }
    }
  }
  v17 = a2;
  v18 = *(_QWORD *)(v12 + 24LL * v15 + 16);
  v19 = *(_DWORD *)(v12 + 24LL * v15 + 12) >> 8;
  *a2 = *(_DWORD *)(v12 + 24LL * v15 + 8);
  v20 = v19 & 0xFFF;
  if ( a3 )
    *a3 = v18;
  if ( v12 != PoolBigPageTable || *(_DWORD *)(v12 + 24LL * v15 + 8) == 1819242320 )
  {
    v61 = 0;
    v21 = 0;
  }
  else
  {
    v21 = (*(_DWORD *)(v12 + 24LL * v15 + 12) >> 20) & 0xFFF;
    v61 = *(_BYTE *)(v12 + 24LL * v15 + 12);
  }
  _InterlockedDecrement(v13);
  _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24LL * v15));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    v17 = a2;
  }
  else
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  __writecr8(CurrentIrql);
  if ( (v20 & 0x21) == 0x20 )
  {
    LODWORD(v4) = v20;
    v71 = v20;
  }
  v22 = (unsigned int)*v17;
  if ( (_DWORD)v22 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v4, v22, BugCheckParameter2, v18);
  v23 = v4 & 0x20;
  if ( v23 )
  {
    v25 = ExpSessionPoolTrackTable;
    v24 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v24 = PoolTrackTableMask;
    v25 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v26 = v24 & ((40543 * v22) ^ ((unsigned __int64)(40543 * v22) >> 32));
  while ( 1 )
  {
    v27 = *(_DWORD *)(v25 + 40LL * v26);
    v28 = 40LL * v26;
    if ( v27 == (_DWORD)v22 )
      break;
    if ( v27 || v23 || (v57 = *(_DWORD *)(v28 + PoolTrackTable)) == 0 )
    {
      v26 = v24 & (v26 + 1);
      if ( v26 == (v24 & ((40543 * (int)v22) ^ ((unsigned __int64)(40543 * v22) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v22, v18, v71);
        goto LABEL_36;
      }
    }
    else
    {
      *(_DWORD *)(v25 + 40LL * v26) = v57;
    }
  }
  v29 = -(__int64)v18;
  if ( (v71 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + v28 + 28));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + v28 + 32), v29);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + v28 + 8));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + v28 + 16), v29);
  }
LABEL_36:
  if ( (v20 & 0x40) != 0 )
    VerifierFreeTrackedPool(BugCheckParameter2, v18, v20, 0LL);
  v30 = BugCheckParameter2;
  BugCheckParameter4 = 0LL;
  LOBYTE(v32) = 0;
  if ( (v18 & 0xFFF) != 0 )
  {
    BugCheckParameter4 = v18 + BugCheckParameter2;
    if ( *(_QWORD *)(v18 + BugCheckParameter2 + 16) != v18 )
      KeBugCheckEx(0x19u, 0x21uLL, BugCheckParameter2, v18, *(_QWORD *)(v18 + BugCheckParameter2 + 16));
    v33 = BugCheckParameter3_4;
    v32 = *(unsigned __int8 *)(BugCheckParameter4 + 1);
    if ( BugCheckParameter3_4 )
    {
      if ( !v23 )
      {
        v6 = ExpPagedPoolDescriptor[v32];
        BugCheckParameter3 = ExpNumberOfPagedPools + 1;
      }
    }
    else if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      BugCheckParameter3 = ExpNumberOfNonPagedPools;
      v6 = ExpNonPagedPoolDescriptor[v32];
      if ( !(unsigned int)MmIsNonPagedPoolNx(v18 + BugCheckParameter2) )
        v6 += 4416LL;
    }
    if ( (unsigned int)v32 >= BugCheckParameter3 )
      KeBugCheckEx(0x19u, 0x24uLL, v32, BugCheckParameter3, BugCheckParameter4);
  }
  else
  {
    if ( v61 )
    {
      v58 = (_BYTE *)(BugCheckParameter2 + v18 - v21);
      for ( i = 0; i < v21; ++i )
      {
        if ( *v58 != v61 )
          KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, (ULONG_PTR)v58, v61);
        ++v58;
      }
    }
    v33 = BugCheckParameter3_4;
  }
  v34 = ExpPoolFlags;
  if ( (ExpPoolFlags & 0x217) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !v33 )
    {
      ExpCheckForLookaside(v30, v18);
      v34 = ExpPoolFlags;
      v30 = BugCheckParameter2;
    }
    if ( (v34 & 1) != 0 )
    {
      KeCheckForTimer(v30);
      v34 = ExpPoolFlags;
      v30 = BugCheckParameter2;
    }
    if ( (v34 & 4) != 0 )
    {
      ExpCheckForResource(v30, v18);
      v34 = ExpPoolFlags;
      v30 = BugCheckParameter2;
    }
    if ( (v34 & 2) != 0 )
    {
      ExpCheckForWorker(v30);
      v34 = ExpPoolFlags;
      v30 = BugCheckParameter2;
    }
    if ( (v34 & 0x10) != 0 )
      VfFreePoolNotification(v30, v18);
  }
  v35 = v18;
  if ( (v18 & 0xFFF) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 152), 0x20uLL);
    if ( PoolHitTag == 1734439494 )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      EtwTracePool(3618, v71, 1734439494, BugCheckParameter4, 32LL);
    if ( v23 )
    {
      v37 = ExpSessionPoolTrackTable;
      v36 = ExpSessionPoolTrackTableMask;
    }
    else
    {
      v36 = PoolTrackTableMask;
      v37 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    }
    v38 = v36 & 0x81B0A40E;
    while ( 1 )
    {
      v39 = *(_DWORD *)(v37 + 40 * v38);
      v40 = 40 * v38;
      if ( v39 == 1734439494 )
        break;
      if ( v39 || v23 || (v60 = *(_DWORD *)(v40 + PoolTrackTable)) == 0 )
      {
        v38 = v36 & (unsigned int)(v38 + 1);
        if ( (_DWORD)v38 == (v36 & 0x81B0A40E) )
        {
          ExpRemovePoolTrackerExpansion(1734439494, 32LL, v71);
          goto LABEL_55;
        }
      }
      else
      {
        *(_DWORD *)(v37 + 40 * v38) = v60;
      }
    }
    if ( (v71 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v37 + v40 + 28));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + v40 + 32), 0xFFFFFFFFFFFFFFE0uLL);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v37 + v40 + 8));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + v40 + 16), 0xFFFFFFFFFFFFFFE0uLL);
    }
LABEL_55:
    v41 = BugCheckParameter3_4;
    v42 = BugCheckParameter4 + 32;
    if ( BugCheckParameter3_4 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v6 + 8));
      PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
      v41 = BugCheckParameter3_4;
    }
    else
    {
      v65 = (volatile signed __int64 *)(v6 + 8);
      v64 = 0LL;
      v43 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v66 = v43;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v64, v6 + 8);
        v41 = BugCheckParameter3_4;
      }
      else
      {
        v44 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v6 + 8), (__int64)&v64);
        if ( v44 )
        {
          KxWaitForLockOwnerShip((__int64)&v64, v44);
          v41 = BugCheckParameter3_4;
        }
      }
    }
    v45 = *(_WORD *)(v42 + 2);
    v46 = v42 + 16LL * (unsigned __int8)v45;
    if ( !*(_BYTE *)(v42 + 3) )
    {
      if ( (_BYTE)v45 != 1 )
      {
        v44 = *(_QWORD **)(v42 + 16);
        v47 = v42 + 16;
        v48 = *(_QWORD **)(v47 + 8);
        if ( v44[1] != v47 || *v48 != v47 )
          __fastfail(3u);
        *v48 = v44;
        v44[1] = v48;
      }
      v42 = v46;
    }
    if ( (v42 & 0xFFF) != 0 )
    {
      v53 = v42 & 0xFFFFFFFFFFFFF000uLL;
      v54 = (__int64)(v42 - (v42 & 0xFFFFFFFFFFFFF000uLL)) >> 4;
      *(_WORD *)(v53 + 2) = (unsigned __int8)v54;
      *(_BYTE *)v53 = 0;
      *(_BYTE *)(v53 + 1) = v32;
      *(_DWORD *)(v53 + 4) = 1701147206;
      *(_BYTE *)v42 = v54;
      v44 = (_QWORD *)((v42 & 0xFFFFFFFFFFFFF000uLL) + 16);
      v55 = v6 + 16 * ((unsigned int)(unsigned __int8)*(_WORD *)((v42 & 0xFFFFFFFFFFFFF000uLL) + 2) - 1 + 20LL);
      v56 = *(_QWORD **)(v55 + 8);
      if ( *v56 != v55 )
        __fastfail(3u);
      *(_QWORD *)((v42 & 0xFFFFFFFFFFFFF000uLL) + 0x10) = v55;
      v18 &= 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)((v42 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = v56;
      *v56 = v44;
      *(_QWORD *)(v55 + 8) = v44;
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
    }
    if ( !v41 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v64, retaddr);
        goto LABEL_71;
      }
      _m_prefetchw(&v64);
      v49 = v64;
      if ( !v64 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v65, 0LL, (signed __int64)&v64) == &v64 )
        {
LABEL_71:
          __writecr8(v66);
          goto LABEL_72;
        }
        v49 = KxWaitForLockChainValid(&v64);
      }
      v64 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v49 + 8), 1uLL);
      goto LABEL_71;
    }
    LOBYTE(v44) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), (__int64)v44);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 8));
  }
LABEL_72:
  if ( v18 )
  {
    if ( !a3 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_14036D700[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 5 )
      {
        LOBYTE(v16) = (v18 & 0xFFF) != 0;
        v50 = (v18 >> 12) + v16;
        inserted = MiInsertNonPagedPoolOnSlist(BugCheckParameter2, v50);
        if ( inserted != 1 )
        {
          v52 = MiClearNonPagedPtes(BugCheckParameter2, v50);
          if ( v52 )
            MiReturnPhysicalPoolPages(v52);
          MiReturnNonPagedPoolVa(BugCheckParameter2, v50, inserted);
        }
      }
      else
      {
        MiFreePagedPoolPages(BugCheckParameter2, v18, *a2);
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 144), (int)(v18 >> 12));
  }
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 152), v35);
}
