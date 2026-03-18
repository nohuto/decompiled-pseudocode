/*
 * XREFs of MmOutSwapProcess @ 0x1400EB550
 * Callers:
 *     KiOutSwapProcesses @ 0x1400EB1B0 (KiOutSwapProcesses.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeFlushProcessTb @ 0x140070738 (KeFlushProcessTb.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     MiReleaseCommitForResetPages @ 0x140251398 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402515B8 (MiReleaseOutSwappedProcessCommit.c)
 */

char __fastcall MmOutSwapProcess(ULONG_PTR a1)
{
  LONG *v1; // rbx
  __int64 v3; // rax
  char v4; // cl
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 TransitionPte; // rax
  __int64 *v13; // r10
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r10
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int16 v20; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+3Ah] [rbp-16h]
  int v22; // [rsp+3Ch] [rbp-14h]
  _QWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v24; // [rsp+70h] [rbp+20h] BYREF
  int v25; // [rsp+78h] [rbp+28h] BYREF

  v1 = &dword_1403CCD40;
  if ( (*(_BYTE *)(a1 + 1464) & 7) != 2 )
    v1 = (LONG *)(a1 + 1472);
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x40u);
  LOBYTE(v3) = (*(_BYTE *)(a1 + 1467) >> 5) & 3;
  if ( (_BYTE)v3 == 1 )
  {
    LOBYTE(v3) = MiReleaseOutSwappedProcessCommit(a1);
  }
  else if ( (_BYTE)v3 == 2 )
  {
    v3 = *((_QWORD *)v1 + 4);
    if ( *(_QWORD *)(v3 + 40) )
      LOBYTE(v3) = MiReleaseCommitForResetPages(a1);
  }
  if ( *(_QWORD *)(a1 + 1416) == 1LL && (*(_BYTE *)(a1 + 1467) & 2) == 0 )
  {
    v22 = 0;
    v23[1] = v23;
    v20 = 263;
    v23[0] = v23;
    v21 = 6;
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
    while ( 1 )
    {
      v4 = *(_BYTE *)(a1 + 1465) >> 4;
      if ( (*(_BYTE *)(a1 + 1465) & 6) == 0 && !v4 )
        break;
      if ( v4 )
        goto LABEL_27;
      *(_QWORD *)(a1 + 1384) = &v20;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      KeWaitForGate((__int64)&v20, 0x12u);
      KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
      *(_QWORD *)(a1 + 1384) = 0LL;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x80u);
    v5 = (_QWORD *)(a1 + 1304);
    v6 = *(_QWORD *)(a1 + 1304);
    if ( *(_QWORD *)(v6 + 8) != a1 + 1304 || (v7 = *(_QWORD **)(a1 + 1312), (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v8 = (_QWORD *)*((_QWORD *)v1 + 6);
    if ( v8 )
    {
      MiEmptyPageAccessLog(v8);
      *((_QWORD *)v1 + 6) = 0LL;
    }
    v25 = 0;
    while ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)(a1 + 272)) )
      KeYieldProcessorEx(&v25);
    KeFlushProcessTb(*(_QWORD *)(a1 + 40));
    if ( *(_QWORD *)(a1 + 1544) )
      KeFlushProcessTb(*(_QWORD *)(a1 + 632));
    v10 = *(_QWORD *)(a1 + 40) >> 12;
    v11 = 48 * v10 - 0x58000000000LL;
    MiMapPageInHyperSpaceWorker(v10, &v24, 0x80000000, v9);
    TransitionPte = MiMakeTransitionPte(v10, 4LL);
    *v13 = TransitionPte;
    v14 = TransitionPte;
    if ( MiPteInShadowRange((unsigned __int64)v13) )
      MiWritePteShadow(v15, v14, v16);
    MiUnmapPageInHyperSpaceWorker(v17, v24, 0x80000000);
    MiLockAndDecrementShareCount(v11, 0);
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
    MiLockPageAtDpcInline(v11);
    *(_QWORD *)(v11 + 8) = a1 + 1088;
    *(_QWORD *)(a1 + 1088) = v14;
    *(_QWORD *)(a1 + 1400) = 0LL;
    *(_QWORD *)(a1 + 1408) = 0LL;
    *(_QWORD *)(a1 + 1416) = 0LL;
    *(_QWORD *)(a1 + 1424) = 0LL;
    MiDecrementShareCount(v11);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_27:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(v3) = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return v3;
}
