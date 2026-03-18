/*
 * XREFs of MmInSwapProcess @ 0x1400411F0
 * Callers:
 *     KiInSwapProcesses @ 0x140040F94 (KiInSwapProcesses.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReturnWsToExpansionList @ 0x1400646C4 (MiReturnWsToExpansionList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017C610 (KeMakeKernelDirectoryTableBase.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020BDF4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x14020C6F4 (MiUpdateSystemPdes.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     EtwTraceInswapProcess @ 0x1402536C4 (EtwTraceInswapProcess.c)
 */

char __fastcall MmInSwapProcess(unsigned __int16 *Object)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char result; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 OutswappedPageResident; // [rsp+88h] [rbp+10h] BYREF

  if ( (*((_DWORD *)Object + 193) & 0x80u) != 0 )
  {
    v2 = Object[284];
    v3 = MiVaToPfn();
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               (_DWORD)Object,
                               2109661032,
                               ((_WORD)Object + 1088) & 0xFFF,
                               v3,
                               v2);
    v4 = OutswappedPageResident;
    v5 = MI_GET_PAGE_FRAME_FROM_PTE(&OutswappedPageResident);
    v6 = MiMapPageInHyperSpaceWorker(v5, &v17, 0x80000000LL);
    *(_QWORD *)(v6 + 3944) = v4;
    if ( (unsigned int)MiPteInShadowRange(v6 + 3944) )
      MiWritePteShadow(v8);
    LOBYTE(v7) = v17;
    MiUnmapPageInHyperSpaceWorker(v9, v7, 0x80000000LL);
    v10 = 48 * v5 - 0x58000000000LL;
    v11 = MiLockPageInline(v10);
    v12 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)v10 = Object;
    *(_QWORD *)(v10 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    v13 = v12 ^ (v12 ^ (v12 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    v14 = *(_QWORD *)(v10 + 40) ^ v5;
    *(_QWORD *)(v10 + 24) = v13;
    *(_QWORD *)(v10 + 40) ^= v14 & 0xFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    *((_QWORD *)Object + 177) = 1LL;
    *((_QWORD *)Object + 178) = 1LL;
    *((_QWORD *)Object + 5) = KeMakeKernelDirectoryTableBase(v5 << 12);
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
    while ( (*((_DWORD *)Object + 193) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFF7FFFFF);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      MiUpdateSystemPdes(Object);
      KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
    }
    MiReturnWsToExpansionList(Object + 640, 0LL);
    _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(Object);
  }
  _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFBF);
  result = *((_BYTE *)Object + 1475) & 0xC0;
  if ( result == (char)0x80 )
    return MiReAcquireOutSwappedProcessCommit(Object);
  return result;
}
