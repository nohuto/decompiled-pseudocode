/*
 * XREFs of ExFreeLargePool @ 0x14002E0E0
 * Callers:
 *     MmFreeContiguousMemory @ 0x140118130 (MmFreeContiguousMemory.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 * Callees:
 *     MiInsertNonPagedPoolOnSlist @ 0x14002EE40 (MiInsertNonPagedPoolOnSlist.c)
 *     MiLockNonPagedPoolPte @ 0x14002F5F4 (MiLockNonPagedPoolPte.c)
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiReturnPhysicalPoolPages @ 0x1400C0230 (MiReturnPhysicalPoolPages.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140103540 (ExpRemovePoolTrackerExpansion.c)
 *     MmIsNonPagedPoolNx @ 0x140145AF0 (MmIsNonPagedPoolNx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     EtwTracePool @ 0x14017D2D8 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeCheckForTimer @ 0x140204778 (KeCheckForTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1402213A4 (MiLogNonPagedPoolReleaseEvent.c)
 *     VerifierFreeTrackedPool @ 0x140227388 (VerifierFreeTrackedPool.c)
 *     ExpCheckForResource @ 0x140285BD4 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x140286E60 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x140287298 (ExpCheckForWorker.c)
 *     MiSessionPoolVector @ 0x1405096C0 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x1407B7624 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExFreeLargePool(ULONG_PTR BugCheckParameter2, unsigned int *a2, ULONG_PTR *a3, int a4)
{
  ULONG_PTR v4; // r15
  ULONG_PTR v6; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 *v11; // rcx
  __int64 PteShadow; // rax
  __int64 *v13; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v15; // ett
  __int64 v16; // r11
  volatile signed __int32 *v17; // rdi
  unsigned __int64 v18; // r10
  int v19; // r9d
  unsigned int v20; // edx
  __int64 v21; // r8
  ULONG_PTR v22; // r13
  int v23; // esi
  unsigned __int8 v24; // r15
  int v25; // r12d
  unsigned int v26; // r14d
  __int64 v27; // rdi
  int v28; // r14d
  ULONG_PTR v29; // r9
  __int64 v30; // r10
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // eax
  __int64 i; // rcx
  int v35; // edx
  unsigned int v36; // eax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v40; // r13
  int v41; // r14d
  ULONG_PTR v42; // r12
  unsigned int v43; // edi
  __int64 v44; // r15
  int v45; // r15d
  unsigned int j; // eax
  bool v47; // zf
  __int64 v48; // r14
  unsigned int v49; // edi
  int v50; // r9d
  __int64 v51; // r10
  unsigned int v52; // ecx
  __int64 v53; // r8
  int v54; // eax
  __int64 k; // rdx
  int v56; // r8d
  struct _FAST_MUTEX *v57; // rdi
  __int64 v58; // rsi
  unsigned __int8 v59; // al
  _QWORD *v60; // rdx
  __int16 v61; // ax
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  _QWORD *v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // r12
  int v68; // r14d
  ULONG_PTR v69; // rsi
  int v70; // eax
  __int64 v71; // r13
  unsigned __int64 v72; // r15
  unsigned __int64 v73; // r14
  unsigned __int64 v74; // rdi
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r14
  __int64 v79; // rdi
  ULONG_PTR v80; // r9
  __int64 v81; // rax
  char v82; // al
  unsigned __int8 v83; // al
  __int64 v84; // rax
  __int64 updated; // rax
  __int64 v86; // rdx
  signed __int32 v88[8]; // [rsp+0h] [rbp-100h] BYREF
  int v89; // [rsp+30h] [rbp-D0h]
  unsigned int v90; // [rsp+34h] [rbp-CCh]
  char v91[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v95; // [rsp+58h] [rbp-A8h]
  __int64 v96; // [rsp+60h] [rbp-A0h]
  __int64 v97; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int64 *v98; // [rsp+70h] [rbp-90h]
  unsigned __int8 v99; // [rsp+78h] [rbp-88h]
  ULONG_PTR *v100; // [rsp+80h] [rbp-80h]
  unsigned int *v101; // [rsp+88h] [rbp-78h]
  unsigned __int64 v102; // [rsp+90h] [rbp-70h]
  int v103; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v104; // [rsp+A4h] [rbp-5Ch]
  __int64 v105; // [rsp+A8h] [rbp-58h]
  __int64 v106; // [rsp+B0h] [rbp-50h]
  __int64 v107; // [rsp+B8h] [rbp-48h]
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v4 = a4;
  BugCheckParameter2a = BugCheckParameter2;
  v6 = a4 & 1;
  v100 = a3;
  v90 = v4;
  v101 = a2;
  v95 = v6;
  v8 = PoolVector[v6];
  v96 = v8;
  v9 = 0xFFFFF6FB7DBED000uLL;
  v10 = 0xFFFFF68000000000uLL;
  if ( (_DWORD)v4 == 33 )
  {
    v96 = MiSessionPoolVector(0x140000000uLL, a2, 0xFFFFF6FB7DBED7F8uLL);
  }
  else if ( !(_DWORD)v6 )
  {
    v11 = (__int64 *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v11;
    if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v11, *v11);
    if ( (PteShadow & 0x80u) == 0LL )
    {
      v13 = (__int64 *)(v10 + ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL));
      PteShadow = *v13;
      if ( (unsigned __int64)v13 >= v9 && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v13, *v13);
    }
    if ( PteShadow >= 0 )
      v96 = v8 + 4416;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v15 = ExpLargePoolTableLock & 0x7FFFFFFF;
    if ( v15 != _InterlockedCompareExchange(
                  &ExpLargePoolTableLock,
                  (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                  ExpLargePoolTableLock & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v16 = *(_QWORD *)(qword_1403884B8 + 8128);
    v17 = (volatile signed __int32 *)(qword_1403884B8 + 7992);
    v18 = *(_QWORD *)(qword_1403884B8 + 8136);
  }
  else
  {
    v16 = PoolBigPageTable;
    v17 = &ExpPoolBigEntriesInUse;
    v18 = PoolBigPageTableSize;
  }
LABEL_20:
  v19 = 1;
  v20 = ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32)) & (v18 - 1);
  while ( 1 )
  {
    v21 = v16 + 24LL * v20;
    if ( *(_QWORD *)v21 == BugCheckParameter2 )
      break;
    if ( ++v20 >= v18 )
    {
      if ( !v19 )
      {
LABEL_26:
        if ( (v4 & 0x21) != 0
          || v16 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) == -1
          || (v16 = *(_QWORD *)(qword_1403884B8 + 8128),
              v17 = (volatile signed __int32 *)(qword_1403884B8 + 7992),
              v18 = *(_QWORD *)(qword_1403884B8 + 8136),
              !v16)
          || !v18 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v4, 0LL);
        }
        goto LABEL_20;
      }
      v20 = 0;
      v19 = 0;
    }
  }
  if ( !v21 )
    goto LABEL_26;
  *a2 = *(_DWORD *)(v21 + 8);
  v22 = *(_QWORD *)(v21 + 16);
  v23 = (*(_DWORD *)(v21 + 12) >> 8) & 0xFFF;
  BugCheckParameter3 = v22;
  if ( v100 )
    *v100 = v22;
  if ( v16 != PoolBigPageTable || *(_DWORD *)(v21 + 8) == 1819242320 )
  {
    v24 = 0;
    LOWORD(v25) = 0;
  }
  else
  {
    v24 = *(_BYTE *)(v21 + 12);
    v25 = *(_DWORD *)(v21 + 12) >> 20;
  }
  _InterlockedDecrement(v17);
  _InterlockedIncrement64((volatile signed __int64 *)v21);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  __writecr8(CurrentIrql);
  v26 = v90;
  if ( (v23 & 0x21) == 0x20 )
    v26 = v23;
  v90 = v26;
  v27 = *v101;
  if ( (_DWORD)v27 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v26, v27, BugCheckParameter2a, v22);
  v28 = v26 & 0x20;
  v89 = v28;
  if ( v28 )
  {
    v30 = ExpSessionPoolTrackTable;
    v29 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v29 = PoolTrackTableMask;
    v30 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v31 = (unsigned int)v29 & ((40543 * (int)v27) ^ ((unsigned __int64)(40543 * v27) >> 32));
  v32 = 56LL * (unsigned int)v31;
  v33 = *(_DWORD *)(v32 + v30);
  for ( i = v32 + v30; v33 != (_DWORD)v27; i = v32 + v30 )
  {
    if ( v33 || v28 || (v35 = *(_DWORD *)(v32 + PoolTrackTable)) == 0 )
    {
      v36 = v29 & (v31 + 1);
      v31 = v36;
      if ( v36 == ((unsigned int)v29 & ((40543 * (int)v27) ^ ((unsigned __int64)(40543 * v27) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion((unsigned int)v27, v22, v90);
        v37 = BugCheckParameter3;
        goto LABEL_61;
      }
    }
    else
    {
      *(_DWORD *)i = v35;
    }
    v32 = 56LL * (unsigned int)v31;
    v33 = *(_DWORD *)(v32 + v30);
  }
  v37 = BugCheckParameter3;
  v38 = -(__int64)BugCheckParameter3;
  if ( (v90 & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(i + 48));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 32), v38);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(i + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 8), v38);
  }
LABEL_61:
  if ( (v23 & 0x40) != 0 )
    VerifierFreeTrackedPool(BugCheckParameter2a, v37);
  BugCheckParameter4 = 0LL;
  LOBYTE(v40) = 0;
  v41 = v37 & 0xFFF;
  if ( (v37 & 0xFFF) != 0 )
  {
    v42 = BugCheckParameter2a;
    BugCheckParameter4 = BugCheckParameter2a + v37;
    if ( *(_QWORD *)(BugCheckParameter2a + v37 + 16) != v37 )
      KeBugCheckEx(0x19u, 0x21uLL, BugCheckParameter2a, v37, *(_QWORD *)(BugCheckParameter2a + v37 + 16));
    v43 = 1;
    v40 = *(unsigned __int8 *)(BugCheckParameter4 + 1);
    if ( (_DWORD)v95 )
    {
      v45 = v89;
      if ( !v89 )
      {
        v43 = ExpNumberOfPagedPools + 1;
        v96 = ExpPagedPoolDescriptor[v40];
      }
    }
    else
    {
      if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
      {
        v43 = ExpNumberOfNonPagedPools;
        v44 = ExpNonPagedPoolDescriptor[v40];
        v96 = v44;
        if ( !(unsigned int)MmIsNonPagedPoolNx(BugCheckParameter4) )
          v96 = v44 + 4416;
      }
      v45 = v89;
    }
    if ( (unsigned int)v40 >= v43 )
      KeBugCheckEx(0x19u, 0x24uLL, v40, v43, BugCheckParameter4);
    v37 = BugCheckParameter3;
  }
  else if ( v24 )
  {
    v29 = v37 + BugCheckParameter2a - (unsigned __int16)v25;
    for ( j = 0; j < (unsigned __int16)v25; ++j )
    {
      if ( *(_BYTE *)v29 != v24 )
        KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2a, v29, v24);
      ++v29;
    }
    v45 = v89;
    v42 = BugCheckParameter2a;
  }
  else
  {
    v45 = v89;
    v42 = BugCheckParameter2a;
  }
  if ( (ExpPoolFlags & 0x217) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !(_DWORD)v95 )
      ExpCheckForLookaside(v42, v37, v31, v29);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(v42);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(v42, v37, v31, v29);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(v42);
    if ( (ExpPoolFlags & 0x10) != 0 )
      VfFreePoolNotification(v42, v37, v31, v29);
  }
  v47 = v41 == 0;
  v102 = v37;
  v48 = v96;
  if ( v47 )
    goto LABEL_141;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v96 + 152), 0x20uLL);
  if ( PoolHitTag == 1734439494 )
    __debugbreak();
  v49 = v90;
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v90, 1734439494, BugCheckParameter4, 32LL);
  if ( v45 )
  {
    v51 = ExpSessionPoolTrackTable;
    v50 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v50 = PoolTrackTableMask;
    v51 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v52 = v50 & 0x81B0A40E;
  v53 = 56LL * (v50 & 0x81B0A40E);
  v54 = *(_DWORD *)(v53 + v51);
  for ( k = v53 + v51; v54 != 1734439494; k = v53 + v51 )
  {
    if ( v54 || v45 || (v56 = *(_DWORD *)(v53 + PoolTrackTable)) == 0 )
    {
      v52 = v50 & (v52 + 1);
      if ( v52 == (v50 & 0x81B0A40E) )
      {
        ExpRemovePoolTrackerExpansion(1734439494LL, 32LL, v49);
        goto LABEL_112;
      }
    }
    else
    {
      *(_DWORD *)k = v56;
    }
    v53 = 56LL * v52;
    v54 = *(_DWORD *)(v53 + v51);
  }
  if ( (v49 & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(k + 48));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(k + 32), 0xFFFFFFFFFFFFFFE0uLL);
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(k + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(k + 8), 0xFFFFFFFFFFFFFFE0uLL);
  }
LABEL_112:
  v29 = v95;
  v57 = (struct _FAST_MUTEX *)(v48 + 8);
  v58 = BugCheckParameter4 + 32;
  if ( (_DWORD)v95 )
  {
    ExAcquireFastMutex(v57);
    PsBoostThreadIo(KeGetCurrentThread(), 0LL);
  }
  else
  {
    v98 = (volatile signed __int64 *)(v48 + 8);
    v97 = 0LL;
    v59 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v99 = v59;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v97, v57);
    }
    else
    {
      v60 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&v57->Count, (__int64)&v97);
      if ( !v60 )
        goto LABEL_119;
      KxWaitForLockOwnerShip(&v97);
    }
  }
  v29 = v95;
LABEL_119:
  v61 = *(_WORD *)(v58 + 2);
  if ( !*(_BYTE *)(v58 + 3) )
  {
    if ( (_BYTE)v61 != 1 )
    {
      v62 = *(_QWORD *)(v58 + 16);
      if ( *(_QWORD *)(v62 + 8) != v58 + 16 || (v60 = *(_QWORD **)(v58 + 24), *v60 != v58 + 16) )
        __fastfail(3u);
      *v60 = v62;
      *(_QWORD *)(v62 + 8) = v60;
    }
    v58 += 16LL * (unsigned __int8)v61;
  }
  if ( (v58 & 0xFFF) != 0 )
  {
    v63 = v58 & 0xFFFFFFFFFFFFF000uLL;
    *(_BYTE *)(v63 + 2) = v58 >> 4;
    *(_BYTE *)(v63 + 3) = 0;
    *(_BYTE *)v63 = 0;
    *(_BYTE *)(v63 + 1) = v40;
    *(_DWORD *)(v63 + 4) = 1701147206;
    *(_BYTE *)v58 = v58 >> 4;
    v60 = (_QWORD *)((v58 & 0xFFFFFFFFFFFFF000uLL) + 16);
    v64 = v48 + 16 * ((unsigned int)(unsigned __int8)*(_WORD *)((v58 & 0xFFFFFFFFFFFFF000uLL) + 2) - 1 + 20LL);
    v65 = *(_QWORD **)(v64 + 8);
    if ( *v65 != v64 )
      __fastfail(3u);
    BugCheckParameter3 &= 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)((v58 & 0xFFFFFFFFFFFFF000uLL) + 0x10) = v64;
    *(_QWORD *)((v58 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = v65;
    *v65 = v60;
    *(_QWORD *)(v64 + 8) = v60;
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v48 + 136));
  }
  if ( (_DWORD)v29 )
  {
    LOBYTE(v60) = 1;
    PsBoostThreadIo(KeGetCurrentThread(), v60);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v48 + 8));
    goto LABEL_140;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v97);
    v66 = v97;
    if ( !v97 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v98, 0LL, (signed __int64)&v97) == &v97 )
      {
LABEL_138:
        __writecr8(v99);
        goto LABEL_140;
      }
      v66 = KxWaitForLockChainValid(&v97, v60);
    }
    v97 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v66 + 8), 1uLL);
    goto LABEL_138;
  }
  KiReleaseQueuedSpinLockInstrumented(&v97, retaddr);
  __writecr8(v99);
LABEL_140:
  v37 = BugCheckParameter3;
LABEL_141:
  if ( !v37 )
    goto LABEL_190;
  if ( v100 )
    goto LABEL_189;
  if ( v42 < 0xFFFF800000000000uLL || byte_1403899D0[((v42 >> 39) & 0x1FF) - 256] != 5 )
  {
    MiFreePagedPoolPages(v42);
    goto LABEL_189;
  }
  v67 = (v37 >> 12) + ((v37 & 0xFFF) != 0);
  LODWORD(v95) = MiInsertNonPagedPoolOnSlist(BugCheckParameter2a, v67, *v101, v29);
  if ( (_DWORD)v95 == 1 )
    goto LABEL_189;
  v68 = MmProtectFreedNonPagedPool;
  v69 = ((BugCheckParameter2a >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v90 = MmProtectFreedNonPagedPool;
  v70 = 1;
  v105 = 20LL;
  v71 = 0LL;
  v103 = 0;
  v72 = 0LL;
  v104 = 0;
  v106 = 0LL;
  v107 = 0LL;
  v89 = 1;
  if ( !v67 )
    goto LABEL_182;
  do
  {
    if ( v70 == 1 || (v69 & 0xFFF) == 0 )
    {
      v89 = 0;
      v73 = 1LL;
      v74 = v69;
      v75 = MI_IS_PHYSICAL_ADDRESS((__int64)(v69 << 25) >> 16);
      if ( v75 )
      {
        do
        {
          v73 <<= 9;
          v74 = ((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v75;
        }
        while ( v75 );
        if ( v73 > 1 )
        {
          v76 = *(_QWORD *)v74;
          if ( v74 >= 0xFFFFF6FB7DBED000uLL && v74 <= 0xFFFFF6FB7DBED7F8uLL )
            v76 = MiReadPteShadow(v74, *(_QWORD *)v74);
          v92 = v76;
          v77 = v67 - v72;
          v78 = v73 - ((v69 >> 3) & 0x1FF);
          if ( v78 + v72 <= v67 )
            v77 = v78;
          v68 = v90;
          v69 += 8 * v77;
          goto LABEL_180;
        }
      }
      v68 = v90;
    }
    v79 = MiLockNonPagedPoolPte(v69, v91);
    v80 = 0xFFFFF6FB7DBED000uLL;
    v81 = *(_QWORD *)v69;
    if ( v69 >= 0xFFFFF6FB7DBED000uLL && v69 <= 0xFFFFF6FB7DBED7F8uLL )
      v81 = MiReadPteShadow(v69, *(_QWORD *)v69);
    v92 = v81;
    v82 = *(_BYTE *)(v79 + 34);
    *(_QWORD *)v79 = v71;
    v71 = v79;
    *(_BYTE *)(v79 + 34) = v82 & 0xF8 | 5;
    *(_QWORD *)v69 = 0LL;
    if ( v69 >= v80 && v69 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v69, 0LL);
      v80 = 0xFFFFF6FB7DBED000uLL;
    }
    v83 = v91[0];
    if ( v91[0] != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v83);
    }
    v92 = 0LL;
    if ( !v68 )
    {
      v84 = 0LL;
      if ( (unsigned __int64)&v92 >= v80 && (unsigned __int64)&v92 <= 0xFFFFF6FB7DBED7F8uLL )
        v84 = MiReadPteShadow(&v92, 0LL);
      _InterlockedOr(v88, 0);
      updated = MiUpdatePageFileHighInPte(v84, (unsigned int)KiTbFlushTimeStamp);
      v92 = updated;
      if ( (unsigned __int64)&v92 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v92 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(&v92, updated);
      v86 = v92;
      *(_QWORD *)v69 = v92;
      if ( v69 >= 0xFFFFF6FB7DBED000uLL && v69 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v69, v86);
    }
    if ( !MiGetPteTimeStamp(v92) )
      MiInsertTbFlushEntry(&v103, (__int64)(v69 << 25) >> 16, 1LL, 0LL);
    v69 += 8LL;
    v77 = 1LL;
LABEL_180:
    v70 = v89;
    v72 += v77;
  }
  while ( v72 < v67 );
  v37 = BugCheckParameter3;
LABEL_182:
  MiFlushTbList(&v103);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    if ( v71 )
    {
      MiLogNonPagedPoolReleaseEvent(v71);
      goto LABEL_185;
    }
  }
  else
  {
LABEL_185:
    if ( v71 )
      MiReturnPhysicalPoolPages(v71);
  }
  MiReturnNonPagedPoolVa(BugCheckParameter2a, v67, (unsigned int)v95);
  v48 = v96;
LABEL_189:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 144), (int)(v37 >> 12));
LABEL_190:
  _InterlockedIncrement((volatile signed __int32 *)(v48 + 128));
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 152), v102);
}
