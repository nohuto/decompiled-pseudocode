/*
 * XREFs of MmOutSwapProcess @ 0x140040CE4
 * Callers:
 *     KiOutSwapProcesses @ 0x140040840 (KiOutSwapProcesses.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     KeFlushProcessTb @ 0x140063154 (KeFlushProcessTb.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MiReleaseCommitForResetPages @ 0x14020C108 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14020C398 (MiReleaseOutSwappedProcessCommit.c)
 */

char __fastcall MmOutSwapProcess(ULONG_PTR a1)
{
  LONG *v1; // rbx
  __int64 v3; // rax
  char v4; // al
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 TransitionPte; // rax
  __int64 *v12; // r10
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r10
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int16 v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+3Ah] [rbp-16h]
  int v21; // [rsp+3Ch] [rbp-14h]
  _QWORD v22[2]; // [rsp+40h] [rbp-10h] BYREF
  char v23; // [rsp+70h] [rbp+20h] BYREF
  int v24; // [rsp+78h] [rbp+28h] BYREF

  v1 = &dword_14036D4C0;
  if ( (*(_BYTE *)(a1 + 1472) & 7) != 2 )
    v1 = (LONG *)(a1 + 1480);
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x40u);
  LOBYTE(v3) = *(_BYTE *)(a1 + 1475) >> 6;
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
  if ( *(_QWORD *)(a1 + 1416) == 1LL && (*(_BYTE *)(a1 + 1475) & 2) == 0 )
  {
    v21 = 0;
    v22[1] = v22;
    v19 = 263;
    v22[0] = v22;
    v20 = 6;
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
    while ( 1 )
    {
      v4 = *(_BYTE *)(a1 + 1473);
      if ( (v4 & 6) == 0 && (v4 & 0xF0) == 0 )
        break;
      if ( (v4 & 0xF0) != 0 )
        goto LABEL_27;
      *(_QWORD *)(a1 + 1384) = &v19;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      KeWaitForGate((__int64)&v19, 0x12u);
      KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
      *(_QWORD *)(a1 + 1384) = 0LL;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x80u);
    v5 = (_QWORD *)(a1 + 1304);
    v6 = *(_QWORD *)(a1 + 1304);
    v7 = *(_QWORD **)(a1 + 1312);
    if ( *(_QWORD *)(v6 + 8) != a1 + 1304 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v8 = (_QWORD *)*((_QWORD *)v1 + 5);
    if ( v8 )
    {
      MiEmptyPageAccessLog(v8);
      *((_QWORD *)v1 + 5) = 0LL;
    }
    v24 = 0;
    while ( !(unsigned int)KeIsEmptyAffinityEx(a1 + 272) )
      KeYieldProcessorEx(&v24);
    KeFlushProcessTb(*(_QWORD *)(a1 + 40));
    if ( *(_QWORD *)(a1 + 1544) )
      KeFlushProcessTb(*(_QWORD *)(a1 + 632));
    v9 = *(_QWORD *)(a1 + 40) >> 12;
    v10 = 48 * v9 - 0x58000000000LL;
    MiMapPageInHyperSpaceWorker(v9, &v23, 0x80000000LL);
    TransitionPte = MiMakeTransitionPte(v9, 4LL);
    *v12 = TransitionPte;
    v13 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(v12) )
      MiWritePteShadow(v15);
    LOBYTE(v14) = v23;
    MiUnmapPageInHyperSpaceWorker(v16, v14, 0x80000000LL);
    MiLockAndDecrementShareCount(v10, 0LL);
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
    MiLockPageAtDpcInline(v10);
    *(_QWORD *)(v10 + 8) = a1 + 1088;
    *(_QWORD *)(a1 + 1088) = v13;
    *(_QWORD *)(a1 + 1400) = 0LL;
    *(_QWORD *)(a1 + 1408) = 0LL;
    *(_QWORD *)(a1 + 1416) = 0LL;
    *(_QWORD *)(a1 + 1424) = 0LL;
    MiDecrementShareCount(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_27:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(v3) = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return v3;
}
