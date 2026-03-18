/*
 * XREFs of ExpWorkerThread @ 0x1400FC140
 * Callers:
 *     <none>
 * Callees:
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetKernelStackSwapEnable @ 0x140051240 (KeSetKernelStackSwapEnable.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     EtwActivityIdControlKernel @ 0x1400802C0 (EtwActivityIdControlKernel.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     KeRemovePriQueue @ 0x1400FC3E0 (KeRemovePriQueue.c)
 *     ExpNewThreadNecessary @ 0x1400FC9E0 (ExpNewThreadNecessary.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x140253D00 (EtwTraceThreadWorkItem.c)
 */

BOOLEAN __fastcall ExpWorkerThread(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // r15
  char v4; // r12
  __int64 v5; // rax
  _QWORD *BugCheckParameter4; // rsi
  void (__fastcall *v7)(const void *); // rbp
  const void *v8; // r14
  unsigned int Queue; // eax
  signed __int32 v10; // eax
  signed __int32 v11; // r8d
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v15[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v16; // [rsp+30h] [rbp-58h]
  PVOID v17; // [rsp+38h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(BugCheckParameter2 + 688);
  v4 = 1;
  v16 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 1u;
  _InterlockedOr(v15, 0);
  if ( !ExpWorkersCanSwap )
    KeSetKernelStackSwapEnable(0);
  do
  {
LABEL_3:
    while ( 1 )
    {
      v5 = KeRemovePriQueue(BugCheckParameter2);
      BugCheckParameter4 = (_QWORD *)v5;
      if ( !v4 )
        break;
      v4 = 0;
      *(_DWORD *)(BugCheckParameter2 + 708) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 704), 0xFFFFBFFF);
      if ( v5 != 258 )
      {
LABEL_5:
        if ( (unsigned __int8)ExpNewThreadNecessary(BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 712)) )
          KeSetEvent((PRKEVENT)(v2 + 1824), 0, 0);
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 696));
        v7 = (void (__fastcall *)(const void *))BugCheckParameter4[2];
        v8 = (const void *)BugCheckParameter4[3];
        if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
        {
          EtwTraceThreadWorkItem(BugCheckParameter4[2], 1344LL);
          v7(v8);
          EtwTraceThreadWorkItem(v7, 1345LL);
        }
        else
        {
          ((void (__fastcall *)(_QWORD))BugCheckParameter4[2])(BugCheckParameter4[3]);
        }
        if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
          KeBugCheckEx(0x39u, (ULONG_PTR)v7, (ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( CurrentThread->WaitBlock[3].SpareLong )
          KeBugCheckEx(1u, (ULONG_PTR)v7, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, (ULONG_PTR)v7, KeGetCurrentIrql(), (ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter4);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          KeBugCheckEx(0xDFu, (ULONG_PTR)v7, (ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( (unsigned __int8)KeIsAttachedProcess() )
          KeBugCheckEx(
            5u,
            (ULONG_PTR)CurrentThread->Process,
            (ULONG_PTR)CurrentThread->ApcState.Process,
            CurrentThread->ApcStateIndex,
            (ULONG_PTR)CurrentThread);
        if ( *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[160] != -3LL )
          KeBugCheckEx(0x19Au, (ULONG_PTR)v7, (ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( (unsigned int)PsGetIoPriorityThread(CurrentThread) != 2 )
        {
          IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
          KeBugCheckEx(0x128u, (ULONG_PTR)v7, IoPriorityThread, (ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter4);
        }
        if ( (unsigned int)PsGetPagePriorityThread((__int64)CurrentThread) != 5 )
        {
          PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
          KeBugCheckEx(0x129u, (ULONG_PTR)v7, PagePriorityThread, (ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter4);
        }
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          KeBugCheckEx(0x15Bu, (ULONG_PTR)v7, (Queue >> 9) & 7, (ULONG_PTR)v8, (ULONG_PTR)BugCheckParameter4);
        if ( (CurrentThread->MiscFlags & 8) != 0 )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
            v7,
            v8,
            BugCheckParameter4);
          PreviousAffinity.Mask = 0LL;
          *(_QWORD *)&PreviousAffinity.Group = 0LL;
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
        if ( CurrentThread->UserAffinity.Group != *(_WORD *)(v2 + 144)
          || CurrentThread->UserAffinity.Mask != *(_QWORD *)(v2 + 136) )
        {
          KeQueryNodeActiveAffinity(*(_WORD *)(v2 + 146), &PreviousAffinity, 0LL);
          KeSetAffinityThread_0((__int64)CurrentThread, (__int64)&PreviousAffinity);
        }
        if ( CurrentThread[1].WaitBlock[0].SparePtr )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
            v7,
            v8,
            BugCheckParameter4);
          v17 = 0LL;
          EtwActivityIdControlKernel(2, &v17);
        }
      }
    }
    if ( v5 != 258 )
      goto LABEL_5;
  }
  while ( CurrentThread[1].FirstArgument != &CurrentThread[1].FirstArgument );
  _m_prefetchw((const void *)(BugCheckParameter2 + 704));
  v10 = *(_DWORD *)(BugCheckParameter2 + 704);
  do
  {
    v11 = v10;
    if ( (v10 & 0x3FFF) <= (2 * *(_DWORD *)(BugCheckParameter2 + 708)) >> 1
      || (v10 & 0x4000) != 0
      || *(_DWORD *)(BugCheckParameter2 + 4) )
    {
      goto LABEL_3;
    }
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 704), v10 - 1, v10);
  }
  while ( v10 != v11 );
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  return KeSetKernelStackSwapEnable(1u);
}
