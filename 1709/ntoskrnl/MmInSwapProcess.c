/*
 * XREFs of MmInSwapProcess @ 0x140114710
 * Callers:
 *     KiInSwapProcesses @ 0x14011465C (KiInSwapProcesses.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x1400147A4 (MiReturnWsToExpansionList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiMarkPfnTradable @ 0x1400ADA78 (MiMarkPfnTradable.c)
 *     MiSetPageTablePfnBuddy @ 0x1400B7DD4 (MiSetPageTablePfnBuddy.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017BD30 (KeMakeKernelDirectoryTableBase.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140212D64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x140213694 (MiUpdateSystemPdes.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     EtwTraceInswapProcess @ 0x14027B388 (EtwTraceInswapProcess.c)
 */

char __fastcall MmInSwapProcess(unsigned __int16 *Object)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int8 v10; // di
  __int64 v11; // rcx
  int v12; // eax
  char result; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v15; // [rsp+90h] [rbp+8h] BYREF
  __int64 OutswappedPageResident; // [rsp+98h] [rbp+10h] BYREF

  if ( (*((_DWORD *)Object + 193) & 0x80u) != 0 )
  {
    v2 = Object[284];
    v3 = MiVaToPfn((unsigned __int64)Object);
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               (_DWORD)Object,
                               2109661032,
                               ((_WORD)Object + 1088) & 0xFFF,
                               v3,
                               v2);
    v4 = OutswappedPageResident;
    v5 = MI_GET_PAGE_FRAME_FROM_PTE(&OutswappedPageResident);
    v6 = MiMapPageInHyperSpaceWorker(v5, &v15, 0x80000000);
    v7 = v6 + 3944;
    *(_QWORD *)(v6 + 3944) = v4;
    v8 = 0xFFFFF6FB7DBED000uLL;
    if ( v6 + 3944 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v7, v4);
    LOBYTE(v8) = v15;
    MiUnmapPageInHyperSpaceWorker(v6, v8, 0x80000000LL);
    v9 = 48 * v5 - 0x58000000000LL;
    v10 = MiLockPageInline(v9);
    v11 = (*(_QWORD *)(v9 + 40) ^ v5) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v9 + 40) ^= v11;
    MiSetPageTablePfnBuddy(v9, (__int64)Object, 1);
    v12 = *(_DWORD *)v9;
    *(_QWORD *)(v9 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (v12 & 1) == 0 )
      MiMarkPfnTradable(48 * v5 - 0x58000000000LL, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v10);
    *((_QWORD *)Object + 177) = 1LL;
    *((_QWORD *)Object + 178) = 1LL;
    *((_QWORD *)Object + 5) = KeMakeKernelDirectoryTableBase(v5 << 12);
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    while ( (*((_DWORD *)Object + 193) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFF7FFFFF);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      MiUpdateSystemPdes(Object);
      KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    }
    MiReturnWsToExpansionList((__int64)(Object + 640), 0);
    _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(Object);
  }
  _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFBF);
  result = *((_BYTE *)Object + 1475) & 0x60;
  if ( result == 64 )
    return MiReAcquireOutSwappedProcessCommit(Object);
  return result;
}
