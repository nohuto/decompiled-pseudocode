/*
 * XREFs of ExFreeLargePool @ 0x1400DB3B0
 * Callers:
 *     MmFreeContiguousMemory @ 0x1400C9790 (MmFreeContiguousMemory.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 * Callees:
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400A4600 (ExpRemovePoolTrackerExpansion.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400DBD80 (MiInsertNonPagedPoolOnSlist.c)
 *     MiReturnNonPagedPoolVa @ 0x1400DC534 (MiReturnNonPagedPoolVa.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MmIsNonPagedPoolNx @ 0x14015AE40 (MmIsNonPagedPoolNx.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeCheckForTimer @ 0x140241F58 (KeCheckForTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     VerifierFreeTrackedPool @ 0x140260484 (VerifierFreeTrackedPool.c)
 *     RtlpHpFreeHeap @ 0x140294A24 (RtlpHpFreeHeap.c)
 *     ExpCheckForResource @ 0x1402BA204 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x1402BB130 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x1402BB594 (ExpCheckForWorker.c)
 *     ExGetHeapFromVA @ 0x1402BD6B4 (ExGetHeapFromVA.c)
 *     MiSessionPoolVector @ 0x140592D80 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140824840 (VfFreePoolNotification.c)
 */

void __fastcall ExFreeLargePool(ULONG_PTR BugCheckParameter2, int *a2, ULONG_PTR *a3, int a4)
{
  ULONG_PTR v4; // r13
  __int64 v7; // rdi
  ULONG_PTR v8; // r8
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v13; // ett
  __int64 v14; // r9
  volatile signed __int32 *v15; // r11
  unsigned __int64 v16; // r10
  int v17; // esi
  unsigned int v18; // r8d
  __int64 v19; // rcx
  ULONG_PTR v20; // r14
  int v21; // esi
  int v22; // esi
  int v23; // r12d
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rbx
  int v27; // r11d
  int v28; // r10d
  __int64 v29; // r9
  unsigned int v30; // ecx
  __int64 v31; // r8
  int v32; // eax
  _DWORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  ULONG_PTR v36; // rbx
  ULONG_PTR v37; // r15
  int v38; // r12d
  unsigned int v39; // r10d
  unsigned __int64 v40; // r13
  int v41; // r9d
  __int64 v42; // r10
  unsigned int v43; // ecx
  __int64 v44; // r8
  int v45; // eax
  _DWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // r8d
  __int64 v50; // rbx
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  unsigned __int64 *v57; // rax
  __int64 v58; // rax
  struct _KPRCB *v59; // rcx
  _DWORD *v60; // rdx
  int v61; // esi
  ULONG_PTR v62; // rbx
  unsigned int inserted; // ebx
  unsigned __int64 v64; // r12
  ULONG_PTR v65; // r15
  unsigned __int64 v66; // rsi
  int v67; // ecx
  __int64 v68; // r9
  ULONG_PTR v69; // r9
  ULONG_PTR v70; // r10
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  unsigned __int64 *v73; // rcx
  int v74; // r11d
  int v75; // eax
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r8
  int v79; // eax
  int v80; // eax
  unsigned int v81; // eax
  _BYTE *i; // r9
  int v83; // eax
  int v84; // eax
  __int64 HeapFromVA; // rax
  unsigned __int8 v86; // [rsp+30h] [rbp-78h]
  int v87; // [rsp+34h] [rbp-74h]
  int v88; // [rsp+38h] [rbp-70h]
  ULONG_PTR v89; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR v90; // [rsp+48h] [rbp-60h] BYREF
  __int64 v91; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int64 *v92; // [rsp+58h] [rbp-50h]
  unsigned __int8 v93; // [rsp+60h] [rbp-48h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v98; // [rsp+C8h] [rbp+20h]

  v98 = a4;
  v4 = a4;
  v88 = a4 & 1;
  v7 = PoolVector[a4 & 1];
  if ( a4 == 33 )
  {
    v7 = MiSessionPoolVector(0x140000000uLL, 0xFFFFF6FB40000000uLL, a3);
  }
  else if ( (a4 & 1) == 0 )
  {
    v8 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v9 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v76 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v76 )
      {
        v77 = *(_QWORD *)(v76 + 8 * ((v8 >> 3) & 0x1FF));
        v78 = v9 | 0x20;
        if ( (v77 & 0x20) == 0 )
          v78 = v9;
        v9 = v78;
        if ( (v77 & 0x42) != 0 )
          v9 = v78 | 0x42;
      }
    }
    if ( (v9 & 0x80u) == 0LL )
      v9 = MI_READ_PTE_LOCK_FREE(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v9 >= 0 )
      v7 += 4416LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v79 = SchedulerAssist[5];
        SchedulerAssist[5] = v79 + 1;
        if ( v79 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    _m_prefetchw(&ExpLargePoolTableLock);
    v13 = ExpLargePoolTableLock & 0x7FFFFFFF;
    if ( v13 != _InterlockedCompareExchange(
                  &ExpLargePoolTableLock,
                  (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                  ExpLargePoolTableLock & 0x7FFFFFFF) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
    }
  }
  if ( (v4 & 0x20) != 0 )
  {
    v14 = *(_QWORD *)(qword_1403CB640 + 8248);
    v15 = (volatile signed __int32 *)(qword_1403CB640 + 8120);
    v16 = *(_QWORD *)(qword_1403CB640 + 8256);
  }
  else
  {
    v14 = PoolBigPageTable;
    v15 = &ExpPoolBigEntriesInUse;
    v16 = PoolBigPageTableSize;
  }
LABEL_14:
  v17 = 1;
  v18 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter2 >> 12))) & (v16 - 1);
  while ( *(_QWORD *)(v14 + 24LL * v18) != BugCheckParameter2 )
  {
    if ( ++v18 >= v16 )
    {
      if ( !v17 )
      {
LABEL_149:
        if ( (v4 & 0x21) != 0
          || v14 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) == -1
          || (v14 = *(_QWORD *)(qword_1403CB640 + 8248),
              v15 = (volatile signed __int32 *)(qword_1403CB640 + 8120),
              v16 = *(_QWORD *)(qword_1403CB640 + 8256),
              !v14)
          || !v16 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v4, 0LL);
        }
        goto LABEL_14;
      }
      v18 = 0;
      v17 = 0;
    }
  }
  v19 = v14 + 24LL * v18;
  if ( !v19 )
    goto LABEL_149;
  v20 = *(_QWORD *)(v19 + 16);
  v21 = *(_DWORD *)(v19 + 12) >> 8;
  *a2 = *(_DWORD *)(v19 + 8);
  v22 = v21 & 0xFFF;
  if ( a3 )
    *a3 = v20;
  if ( v14 != PoolBigPageTable || *(_DWORD *)(v19 + 8) == 1819242320 )
  {
    v86 = 0;
    LOWORD(v23) = 0;
  }
  else
  {
    v86 = *(_BYTE *)(v19 + 12);
    v23 = *(_DWORD *)(v19 + 12) >> 20;
  }
  _InterlockedDecrement(v15);
  _InterlockedIncrement64((volatile signed __int64 *)v19);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 )
  {
    if ( v24->NestingLevel <= 1u )
    {
      v80 = v25[5] - 1;
      v25[5] = v80;
      if ( !v80 && !*((_BYTE *)v25 + 25) && !*((_BYTE *)v25 + 27) )
        KiPerformUnboostKick(v24);
    }
  }
  __writecr8(CurrentIrql);
  if ( (v22 & 0x21) == 0x20 )
  {
    LODWORD(v4) = v22;
    v98 = v22;
  }
  v26 = (unsigned int)*a2;
  if ( (_DWORD)v26 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v4, v26, BugCheckParameter2, v20);
  v27 = v4 & 0x20;
  v87 = v27;
  if ( (v4 & 0x20) != 0 )
  {
    v29 = ExpSessionPoolTrackTable;
    v28 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v28 = PoolTrackTableMask;
    v29 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v30 = v28 & (((unsigned __int64)(40543 * v26) >> 32) ^ (40543 * v26));
  while ( 1 )
  {
    v31 = 56LL * v30;
    v32 = *(_DWORD *)(v31 + v29);
    v33 = (_DWORD *)(v31 + v29);
    if ( v32 == (_DWORD)v26 )
      break;
    if ( v32 || v27 )
      goto LABEL_89;
    v74 = *(_DWORD *)(v31 + PoolTrackTable);
    if ( v74 )
    {
      *v33 = v74;
      v27 = v4 & 0x20;
    }
    else
    {
      v27 = v4 & 0x20;
LABEL_89:
      v30 = v28 & (v30 + 1);
      if ( v30 == (v28 & (((unsigned __int64)(40543 * v26) >> 32) ^ (unsigned int)(40543 * v26))) )
      {
        ExpRemovePoolTrackerExpansion(v26, v20, v4);
        v27 = v4 & 0x20;
        goto LABEL_38;
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v34 = 8LL;
    v35 = 12LL;
  }
  else
  {
    v34 = 2LL;
    v35 = 6LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v33[v35]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v33[v34], -(__int64)v20);
LABEL_38:
  if ( (v22 & 0x40) != 0 )
  {
    VerifierFreeTrackedPool(BugCheckParameter2, v20);
    v27 = v4 & 0x20;
  }
  v36 = 0LL;
  LOBYTE(v37) = 0;
  if ( (v20 & 0xFFF) != 0 )
  {
    v36 = v20 + BugCheckParameter2;
    if ( *(_QWORD *)(v20 + BugCheckParameter2 + 16) != v20 )
      KeBugCheckEx(0x19u, 0x21uLL, BugCheckParameter2, v20, *(_QWORD *)(v20 + BugCheckParameter2 + 16));
    v38 = v88;
    v37 = *(unsigned __int8 *)(v36 + 1);
    if ( v88 )
    {
      if ( v27 )
      {
LABEL_44:
        v39 = 1;
      }
      else
      {
        v7 = ExpPagedPoolDescriptor[v37];
        v39 = ExpNumberOfPagedPools + 1;
      }
    }
    else
    {
      if ( (unsigned int)ExpNumberOfNonPagedPools <= 1 )
        goto LABEL_44;
      v7 = ExpNonPagedPoolDescriptor[v37];
      if ( !(unsigned int)MmIsNonPagedPoolNx(v20 + BugCheckParameter2) )
        v7 += 4416LL;
    }
    if ( (unsigned int)v37 >= v39 )
      KeBugCheckEx(0x19u, 0x24uLL, v37, v39, v20 + BugCheckParameter2);
  }
  else
  {
    if ( v86 )
    {
      v81 = 0;
      for ( i = (_BYTE *)(BugCheckParameter2 + v20 - (unsigned __int16)v23); v81 < (unsigned __int16)v23; ++v81 )
      {
        if ( *i != v86 )
          KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, (ULONG_PTR)i, v86);
        ++i;
      }
    }
    v38 = v88;
  }
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !v38 )
    {
      ExpCheckForLookaside(BugCheckParameter2, v20);
      v27 = v4 & 0x20;
    }
    if ( (ExpPoolFlags & 1) != 0 )
    {
      KeCheckForTimer(BugCheckParameter2);
      v27 = v4 & 0x20;
    }
    if ( (ExpPoolFlags & 4) != 0 )
    {
      ExpCheckForResource(BugCheckParameter2, v20);
      v27 = v4 & 0x20;
    }
    if ( (ExpPoolFlags & 2) != 0 )
    {
      ExpCheckForWorker(BugCheckParameter2);
      v27 = v4 & 0x20;
    }
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
  {
    VfFreePoolNotification(BugCheckParameter2, v20);
    v27 = v4 & 0x20;
  }
  v40 = v20;
  if ( (v20 & 0xFFF) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 152), 0x20uLL);
    if ( PoolHitTag == 1734439494 )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    {
      EtwTracePool(3618, v98, 1734439494, v36, 32LL);
      v27 = v87;
    }
    if ( v27 )
    {
      v42 = ExpSessionPoolTrackTable;
      v41 = ExpSessionPoolTrackTableMask;
    }
    else
    {
      v41 = PoolTrackTableMask;
      v42 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    }
    v43 = v41 & 0x81B0A40E;
    while ( 1 )
    {
      v44 = 56LL * v43;
      v45 = *(_DWORD *)(v44 + v42);
      v46 = (_DWORD *)(v44 + v42);
      if ( v45 == 1734439494 )
        break;
      if ( v45 || v87 || (v75 = *(_DWORD *)(v44 + PoolTrackTable)) == 0 )
      {
        v43 = v41 & (v43 + 1);
        if ( v43 == (v41 & 0x81B0A40E) )
        {
          ExpRemovePoolTrackerExpansion(1734439494, 32LL, v98);
          goto LABEL_61;
        }
      }
      else
      {
        *v46 = v75;
      }
    }
    if ( (v98 & 1) != 0 )
    {
      v47 = 8LL;
      v48 = 12LL;
    }
    else
    {
      v47 = 2LL;
      v48 = 6LL;
    }
    _InterlockedIncrement64((volatile signed __int64 *)&v46[v48]);
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v46[v47], 0xFFFFFFFFFFFFFFE0uLL);
LABEL_61:
    v49 = v88;
    v50 = v36 + 32;
    if ( v88 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v7 + 8));
      PsBoostThreadIo(KeGetCurrentThread(), 0LL);
    }
    else
    {
      v92 = (volatile signed __int64 *)(v7 + 8);
      v91 = 0LL;
      v51 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v93 = v51;
      v52 = KeGetCurrentPrcb();
      v53 = v52->SchedulerAssist;
      if ( v53 )
      {
        if ( v52->NestingLevel <= 1u )
        {
          v83 = v53[5];
          v53[5] = v83 + 1;
          if ( v83 == -1 )
          {
            if ( !*((_BYTE *)v53 + 25) && !*((_BYTE *)v53 + 27) )
              KiPerformUnboostKick(v52);
            v49 = v88;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
      {
        if ( _InterlockedExchange64((volatile __int64 *)(v7 + 8), (__int64)&v91) )
        {
          KxWaitForLockOwnerShip(&v91);
          v49 = v88;
        }
LABEL_66:
        v54 = *(unsigned __int16 *)(v50 + 2);
        v55 = v50 + 16LL * (unsigned __int8)v54;
        if ( !BYTE1(v54) )
        {
          if ( (_BYTE)v54 != 1 )
          {
            v54 = *(_QWORD *)(v50 + 16);
            v56 = v50 + 16;
            v57 = *(unsigned __int64 **)(v56 + 8);
            if ( *(_QWORD *)(v54 + 8) != v56 || *v57 != v56 )
              __fastfail(3u);
            *v57 = v54;
            *(_QWORD *)(v54 + 8) = v57;
          }
          v50 = v55;
        }
        if ( (v50 & 0xFFF) != 0 )
        {
          v71 = v50 & 0xFFFFFFFFFFFFF000uLL;
          *(_WORD *)(v71 + 2) = (unsigned __int8)(v50 >> 4);
          *(_BYTE *)v71 = 0;
          *(_BYTE *)(v71 + 1) = v37;
          *(_DWORD *)(v71 + 4) = 1701147206;
          *(_BYTE *)v50 = v50 >> 4;
          v54 = (v50 & 0xFFFFFFFFFFFFF000uLL) + 16;
          v72 = v7 + 16 * ((unsigned int)(unsigned __int8)*(_WORD *)((v50 & 0xFFFFFFFFFFFFF000uLL) + 2) - 1 + 20LL);
          v73 = *(unsigned __int64 **)(v72 + 8);
          if ( *v73 != v72 )
            __fastfail(3u);
          *(_QWORD *)((v50 & 0xFFFFFFFFFFFFF000uLL) + 0x10) = v72;
          v20 &= 0xFFFFFFFFFFFFF000uLL;
          *(_QWORD *)((v50 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = v73;
          *v73 = v54;
          *(_QWORD *)(v72 + 8) = v54;
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v7 + 136));
        }
        if ( v49 )
        {
          LOBYTE(v54) = 1;
          PsBoostThreadIo(KeGetCurrentThread(), v54);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 8));
          goto LABEL_80;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&v91, retaddr);
          goto LABEL_78;
        }
        _m_prefetchw(&v91);
        v58 = v91;
        if ( !v91 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(v92, 0LL, (signed __int64)&v91) == &v91 )
          {
LABEL_78:
            v59 = KeGetCurrentPrcb();
            v60 = v59->SchedulerAssist;
            if ( v60 )
            {
              if ( v59->NestingLevel <= 1u )
              {
                v84 = v60[5] - 1;
                v60[5] = v84;
                if ( !v84 && !*((_BYTE *)v60 + 25) && !*((_BYTE *)v60 + 27) )
                  KiPerformUnboostKick(v59);
              }
            }
            __writecr8(v93);
            goto LABEL_80;
          }
          v58 = KxWaitForLockChainValid(&v91);
        }
        v91 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v58 + 8), 1uLL);
        goto LABEL_78;
      }
      KiAcquireQueuedSpinLockInstrumented(&v91, v7 + 8);
    }
    v49 = v88;
    goto LABEL_66;
  }
LABEL_80:
  if ( v20 )
  {
    if ( !a3 )
    {
      v61 = *a2;
      if ( ExpHeapBackedPoolEnabled && (HeapFromVA = ExGetHeapFromVA(BugCheckParameter2)) != 0 )
      {
        RtlpHpFreeHeap(HeapFromVA, BugCheckParameter2, 0LL, 0LL, 0LL);
      }
      else
      {
        v62 = (v20 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v89 = v62;
        if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
          && byte_1403CCF90[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 5 )
        {
          inserted = MiInsertNonPagedPoolOnSlist(BugCheckParameter2, v62 >> 12);
          if ( inserted != 1 )
          {
            v64 = v89;
            v90 = BugCheckParameter2;
            v65 = (((v89 + BugCheckParameter2 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v66 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            if ( v66 <= v65 )
            {
              v67 = BugCheckParameter2;
              do
              {
                v68 = v64;
                if ( v64 > 0x200000 - (unsigned __int64)(v67 & 0x1FFFFF) )
                  v68 = 0x200000LL - (v67 & 0x1FFFFF);
                v89 = v68;
                if ( (MI_READ_PTE_LOCK_FREE(v66) & 0x80u) == 0LL )
                {
                  MmFreePoolMemory(&v90, &v89);
                  v69 = v89;
                  v70 = v90;
                }
                MiReturnNonPagedPoolVa(v70, v69 >> 12, inserted);
                v66 += 8LL;
                v64 -= v89;
                v67 = v89 + v90;
                v90 += v89;
              }
              while ( v66 <= v65 );
            }
          }
        }
        else
        {
          MiFreePagedPoolPages(BugCheckParameter2, v62, v61, 0);
        }
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 144), (int)(v20 >> 12));
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 128));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 152), v40);
}
