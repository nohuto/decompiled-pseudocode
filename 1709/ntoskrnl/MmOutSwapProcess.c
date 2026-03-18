/*
 * XREFs of MmOutSwapProcess @ 0x140111FF0
 * Callers:
 *     KiOutSwapProcesses @ 0x140111E50 (KiOutSwapProcesses.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     KeFlushProcessTb @ 0x1400B8188 (KeFlushProcessTb.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MiReleaseCommitForResetPages @ 0x1402130A8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140213338 (MiReleaseOutSwappedProcessCommit.c)
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
  __int64 v11; // rdx
  __int64 TransitionPte; // rbx
  __int64 *v13; // r10
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int16 v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+3Ah] [rbp-16h]
  int v18; // [rsp+3Ch] [rbp-14h]
  _QWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v20; // [rsp+70h] [rbp+20h] BYREF
  int v21; // [rsp+78h] [rbp+28h] BYREF

  v1 = &dword_140389780;
  if ( (*(_BYTE *)(a1 + 1472) & 7) != 2 )
    v1 = (LONG *)(a1 + 1480);
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x40u);
  LOBYTE(v3) = (*(_BYTE *)(a1 + 1475) >> 5) & 3;
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
    v18 = 0;
    v19[1] = v19;
    v16 = 263;
    v19[0] = v19;
    v17 = 6;
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    while ( 1 )
    {
      v4 = *(_BYTE *)(a1 + 1473);
      if ( (v4 & 6) == 0 && (v4 & 0xF0) == 0 )
        break;
      if ( (v4 & 0xF0) != 0 )
        goto LABEL_28;
      *(_QWORD *)(a1 + 1384) = &v16;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      KeWaitForGate((__int64)&v16, 0x12u);
      KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
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
    v8 = (_QWORD *)*((_QWORD *)v1 + 5);
    if ( v8 )
    {
      MiEmptyPageAccessLog(v8);
      *((_QWORD *)v1 + 5) = 0LL;
    }
    v21 = 0;
    while ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)(a1 + 272)) )
      KeYieldProcessorEx(&v21);
    KeFlushProcessTb(*(_QWORD *)(a1 + 40));
    if ( *(_QWORD *)(a1 + 1544) )
      KeFlushProcessTb(*(_QWORD *)(a1 + 632));
    v9 = *(_QWORD *)(a1 + 40) >> 12;
    v10 = 48 * v9 - 0x58000000000LL;
    MiMapPageInHyperSpaceWorker(v9, &v20, 0x80000000);
    TransitionPte = MiMakeTransitionPte(v9, 4LL);
    *v13 = TransitionPte;
    if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v13, TransitionPte);
    LOBYTE(v11) = v20;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v13, v11, 0x80000000LL);
    MiLockAndDecrementShareCount(v10, 0);
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    MiLockPageAtDpcInline(v10);
    *(_QWORD *)(v10 + 8) = a1 + 1088;
    *(_QWORD *)(a1 + 1088) = TransitionPte;
    *(_QWORD *)(a1 + 1400) = 0LL;
    *(_QWORD *)(a1 + 1408) = 0LL;
    *(_QWORD *)(a1 + 1416) = 0LL;
    *(_QWORD *)(a1 + 1424) = 0LL;
    MiDecrementShareCount(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_28:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(v3) = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return v3;
}
