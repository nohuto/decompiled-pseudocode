/*
 * XREFs of ExpWorkerThread @ 0x1400617A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetKernelStackSwapEnable @ 0x140060E90 (KeSetKernelStackSwapEnable.c)
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     ExpNewThreadNecessary @ 0x140061F60 (ExpNewThreadNecessary.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1400FC870 (KeQueryNodeActiveAffinity.c)
 *     KeSetAffinityThread @ 0x140129ED4 (KeSetAffinityThread.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x14027BA30 (EtwTraceThreadWorkItem.c)
 */

LONG __fastcall ExpWorkerThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v2; // r13
  __int64 v3; // rax
  __int64 v5; // r15
  char v6; // r12
  __int64 v7; // rax
  _QWORD *BugCheckParameter4; // rdi
  void (__fastcall *v9)(const void *); // rbp
  const void *v10; // r14
  unsigned int Queue; // eax
  LONG result; // eax
  LONG v13; // edx
  unsigned int v14; // r8d
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v17[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = &v18;
  v3 = *(_QWORD *)(a1 + 688);
  v5 = *(_QWORD *)(a1 + 696);
  v6 = 1;
  v18 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 1u;
  v19 = v3;
  _InterlockedOr(v17, 0);
  if ( !ExpWorkersCanSwap )
    KeSetKernelStackSwapEnable(0);
  do
  {
    while ( 1 )
    {
      v7 = KeRemovePriQueue(a1, 0LL, 0LL, v2);
      BugCheckParameter4 = (_QWORD *)v7;
      if ( !v6 )
        break;
      v6 = 0;
      *(_DWORD *)(a1 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(a1 + 712), 0xFFFFBFFF);
      v2 = 0LL;
      if ( v7 != 258 )
      {
LABEL_5:
        if ( v7 == 128 )
          goto LABEL_27;
        if ( (unsigned __int8)ExpNewThreadNecessary(a1, *(unsigned int *)(a1 + 720)) )
          KeSetEvent(
            (PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 8LL * *(unsigned __int16 *)(v5 + 146)) + 16LL),
            0,
            0);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 704));
        v9 = (void (__fastcall *)(const void *))BugCheckParameter4[2];
        v10 = (const void *)BugCheckParameter4[3];
        if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
        {
          EtwTraceThreadWorkItem(BugCheckParameter4[2], 1344LL);
          v9(v10);
          EtwTraceThreadWorkItem(v9, 1345LL);
        }
        else
        {
          ((void (__fastcall *)(_QWORD))BugCheckParameter4[2])(BugCheckParameter4[3]);
        }
        if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
          KeBugCheckEx(0x39u, (ULONG_PTR)v9, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( CurrentThread->WaitBlock[3].SpareLong )
          KeBugCheckEx(1u, (ULONG_PTR)v9, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, (ULONG_PTR)v9, KeGetCurrentIrql(), (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          KeBugCheckEx(0xDFu, (ULONG_PTR)v9, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
          KeBugCheckEx(
            5u,
            (ULONG_PTR)CurrentThread->Process,
            (ULONG_PTR)CurrentThread->ApcState.Process,
            CurrentThread->ApcStateIndex,
            (ULONG_PTR)CurrentThread);
        if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] != -3LL )
          KeBugCheckEx(0x19Au, (ULONG_PTR)v9, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( (unsigned int)PsGetIoPriorityThread(CurrentThread) != 2 )
        {
          IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
          KeBugCheckEx(0x128u, (ULONG_PTR)v9, IoPriorityThread, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
        }
        if ( (unsigned int)PsGetPagePriorityThread(CurrentThread) != 5 )
        {
          PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
          KeBugCheckEx(0x129u, (ULONG_PTR)v9, PagePriorityThread, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
        }
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          KeBugCheckEx(0x15Bu, (ULONG_PTR)v9, (Queue >> 9) & 7, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
        if ( (CurrentThread->MiscFlags & 8) != 0 )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
            v9,
            v10,
            BugCheckParameter4);
          PreviousAffinity.Mask = 0LL;
          *(_QWORD *)&PreviousAffinity.Group = 0LL;
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
        if ( CurrentThread->UserAffinity.Group != *(_WORD *)(v5 + 144)
          || CurrentThread->UserAffinity.Mask != *(_QWORD *)(v5 + 136) )
        {
          KeQueryNodeActiveAffinity(*(_WORD *)(v5 + 146), &PreviousAffinity, 0LL);
          KeSetAffinityThread(CurrentThread, &PreviousAffinity);
        }
        if ( CurrentThread[1].WaitBlock[0].SparePtr )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
            v9,
            v10,
            BugCheckParameter4);
          KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
        }
      }
    }
    if ( v7 != 258 )
      goto LABEL_5;
LABEL_27:
    ;
  }
  while ( (*(_DWORD *)(a1 + 712) & 0x8000) == 0
       && (*(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber
        || *(_DWORD *)(a1 + 4)) );
  if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  KeSetKernelStackSwapEnable(1u);
  _m_prefetchw((const void *)(a1 + 712));
  result = *(_DWORD *)(a1 + 712);
  do
  {
    v13 = result;
    v14 = result & 0xFFFFC000 | ((result & 0x3FFF) - 1);
    result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v14, result);
  }
  while ( result != v13 );
  if ( v14 == 0x8000 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 728), 0, 0);
  return result;
}
