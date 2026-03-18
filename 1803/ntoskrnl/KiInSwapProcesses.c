/*
 * XREFs of KiInSwapProcesses @ 0x1400EB0B0
 * Callers:
 *     KeSwapProcessOrStack @ 0x140176C50 (KeSwapProcessOrStack.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReturnWsToExpansionList @ 0x14006A984 (MiReturnWsToExpansionList.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140070A08 (KeMakeKernelDirectoryTableBase.c)
 *     MiSetPageTablePfnBuddy @ 0x140071888 (MiSetPageTablePfnBuddy.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMarkPfnTradable @ 0x1400B3390 (MiMarkPfnTradable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x1400EB350 (KiReadyOutSwappedThreads.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140251154 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x14025191C (MiUpdateSystemPdes.c)
 *     EtwTraceInswapProcess @ 0x1402AECA8 (EtwTraceInswapProcess.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1, int a2, _QWORD *a3, int a4)
{
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r10
  __int64 v17; // rbx
  unsigned __int8 v18; // r15
  unsigned __int64 v19; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v21; // [rsp+90h] [rbp+8h] BYREF
  __int64 OutswappedPageResident; // [rsp+98h] [rbp+10h] BYREF

  do
  {
    v5 = (__int64)(a1 - 33);
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)(v5 + 572), 6u);
    if ( (*(_DWORD *)(v5 + 772) & 0x80u) != 0 )
    {
      OutswappedPageResident = MiMakeOutswappedPageResident(v5, a2, (_DWORD)a3, a4, *(unsigned __int16 *)(v5 + 568));
      v10 = OutswappedPageResident;
      v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&OutswappedPageResident) >> 12) & 0xFFFFFFFFFLL;
      v13 = MiMapPageInHyperSpaceWorker(v11, &v21, 0x80000000, v12);
      *(_QWORD *)(v13 + 3944) = v10;
      if ( MiPteInShadowRange(v13 + 3944) )
        MiWritePteShadow(v14, v10, v15);
      MiUnmapPageInHyperSpaceWorker(v16, v21, 0x80000000);
      v17 = 48 * v11 - 0x58000000000LL;
      v18 = MiLockPageInline(v17);
      v19 = *(_QWORD *)(v17 + 40) & 0xFFFFFFF000000000uLL;
      *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v17 + 40) = v11 | v19;
      MiSetPageTablePfnBuddy(v17, v5, 1);
      *(_QWORD *)(v17 + 8) = 0xFFFFF6FB7DBEDF68uLL;
      if ( (*(_DWORD *)v17 & 1) == 0 )
        MiMarkPfnTradable(48 * v11 - 0x58000000000LL, 1);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v18);
      *(_QWORD *)(v5 + 1416) = 1LL;
      *(_QWORD *)(v5 + 1424) = 1LL;
      *(_QWORD *)(v5 + 40) = KeMakeKernelDirectoryTableBase(v11 << 12);
      KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
      if ( (*(_DWORD *)(v5 + 772) & 0x800000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v5 + 772), 0xFF7FFFFF);
        MiUpdateSystemPdes(v5);
      }
      MiReturnWsToExpansionList(v5 + 1280, 0);
      _InterlockedAnd((volatile signed __int32 *)(v5 + 772), 0xFFFFFF7F);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
        EtwTraceInswapProcess(v5);
    }
    _InterlockedAnd((volatile signed __int32 *)(v5 + 772), 0xFFFFFFBF);
    if ( (*(_BYTE *)(v5 + 1467) & 0x60) == 0x40 )
      MiReAcquireOutSwappedProcessCommit((PVOID)v5);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v5);
    v7 = (_QWORD *)(v5 + 248);
    v8 = *(_QWORD *)(v5 + 248);
    if ( v8 == v5 + 248 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( *(_QWORD **)(v8 + 8) != v7 || (a3 = *(_QWORD **)(v5 + 256), (_QWORD *)*a3 != v7) )
        __fastfail(3u);
      *a3 = v8;
      *(_QWORD *)(v8 + 8) = a3;
      *(_QWORD *)(v5 + 256) = v5 + 248;
      *v7 = v7;
    }
    _InterlockedXor((volatile signed __int32 *)(v5 + 572), 4u);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( v8 )
    {
      result = KiReadyOutSwappedThreads(v8, CurrentIrql);
    }
    else
    {
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
