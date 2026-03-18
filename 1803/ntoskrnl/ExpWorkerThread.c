/*
 * XREFs of ExpWorkerThread @ 0x1401261B0
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     KeSetKernelStackSwapEnable @ 0x1400B71D0 (KeSetKernelStackSwapEnable.c)
 *     KeSetAffinityThread_0 @ 0x1400CCA40 (KeSetAffinityThread_0.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     ExpNewThreadNecessary @ 0x140128240 (ExpNewThreadNecessary.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x1402AF4F0 (EtwTraceThreadWorkItem.c)
 */

BOOLEAN __fastcall ExpWorkerThread(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rax
  __int64 v4; // r15
  char v5; // r12
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *BugCheckParameter4; // rdi
  void (__fastcall *v10)(const void *); // rbp
  const void *v11; // r14
  unsigned int Queue; // eax
  signed __int32 v13; // eax
  int v14; // edx
  signed __int32 v15; // r8d
  unsigned int v16; // edx
  bool v17; // di
  BOOLEAN result; // al
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(BugCheckParameter2 + 688);
  v4 = *(_QWORD *)(BugCheckParameter2 + 696);
  v5 = 1;
  v22 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 1u;
  v23 = v2;
  _InterlockedOr(v21, 0);
  if ( !ExpWorkersCanSwap )
    KeSetKernelStackSwapEnable(0);
  do
  {
LABEL_3:
    while ( 1 )
    {
      v6 = KeRemovePriQueue(BugCheckParameter2);
      BugCheckParameter4 = (_QWORD *)v6;
      if ( !v5 )
        break;
      v5 = 0;
      *(_DWORD *)(BugCheckParameter2 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 712), 0xFFFFBFFF);
      if ( v6 != 258 )
      {
LABEL_5:
        if ( v6 == 128 )
          goto LABEL_25;
        if ( (unsigned __int8)ExpNewThreadNecessary(
                                BugCheckParameter2,
                                *(unsigned int *)(BugCheckParameter2 + 720),
                                v7,
                                v8) )
          KeSetEvent(
            (PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 8LL * *(unsigned __int16 *)(v4 + 146)) + 16LL),
            0,
            0);
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 704));
        v10 = (void (__fastcall *)(const void *))BugCheckParameter4[2];
        v11 = (const void *)BugCheckParameter4[3];
        if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
        {
          EtwTraceThreadWorkItem(BugCheckParameter4[2], 1344LL);
          v10(v11);
          EtwTraceThreadWorkItem(v10, 1345LL);
        }
        else
        {
          ((void (__fastcall *)(_QWORD))BugCheckParameter4[2])(BugCheckParameter4[3]);
        }
        if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
          KeBugCheckEx(0x39u, (ULONG_PTR)v10, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( CurrentThread->WaitBlock[3].SpareLong )
          KeBugCheckEx(1u, (ULONG_PTR)v10, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, (ULONG_PTR)v10, KeGetCurrentIrql(), (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          KeBugCheckEx(0xDFu, (ULONG_PTR)v10, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
          KeBugCheckEx(
            5u,
            (ULONG_PTR)CurrentThread->Process,
            (ULONG_PTR)CurrentThread->ApcState.Process,
            CurrentThread->ApcStateIndex,
            (ULONG_PTR)CurrentThread);
        if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] != -3LL )
          KeBugCheckEx(0x19Au, (ULONG_PTR)v10, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( (unsigned int)PsGetIoPriorityThread(CurrentThread) != 2 )
        {
          IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
          KeBugCheckEx(0x128u, (ULONG_PTR)v10, IoPriorityThread, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
        }
        if ( (unsigned int)PsGetPagePriorityThread(CurrentThread) != 5 )
        {
          PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
          KeBugCheckEx(0x129u, (ULONG_PTR)v10, PagePriorityThread, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
        }
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          KeBugCheckEx(0x15Bu, (ULONG_PTR)v10, (Queue >> 9) & 7, (ULONG_PTR)v11, (ULONG_PTR)BugCheckParameter4);
        if ( (CurrentThread->MiscFlags & 8) != 0 )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
            v10,
            v11,
            BugCheckParameter4);
          PreviousAffinity.Mask = 0LL;
          *(_QWORD *)&PreviousAffinity.Group = 0LL;
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
        if ( CurrentThread->UserAffinity.Group != *(_WORD *)(v4 + 144)
          || CurrentThread->UserAffinity.Mask != *(_QWORD *)(v4 + 136) )
        {
          KeQueryNodeActiveAffinity(*(_WORD *)(v4 + 146), &PreviousAffinity, 0LL);
          KeSetAffinityThread_0((__int64)CurrentThread, (__int64)&PreviousAffinity);
        }
        if ( CurrentThread[1].WaitBlock[0].SparePtr )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
            v10,
            v11,
            BugCheckParameter4);
          KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
        }
      }
    }
    if ( v6 != 258 )
      goto LABEL_5;
LABEL_25:
    ;
  }
  while ( (*(_DWORD *)(BugCheckParameter2 + 712) & 0x8000) == 0
       && (*(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber
        || *(_DWORD *)(BugCheckParameter2 + 4)) );
  _m_prefetchw((const void *)(BugCheckParameter2 + 712));
  v13 = *(_DWORD *)(BugCheckParameter2 + 712);
  do
  {
    v14 = (v13 & 0x3FFF) - 1;
    v15 = v13;
    if ( v14 < (2 * *(_DWORD *)(BugCheckParameter2 + 716)) >> 1 && (v13 & 0x8000) == 0 )
      goto LABEL_3;
    v16 = v13 & 0xFFFFC000 | v14;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 712), v16, v13);
  }
  while ( v13 != v15 );
  v17 = v16 == 0x8000;
  if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  result = KeSetKernelStackSwapEnable(1u);
  if ( v17 )
    return KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 728), 0, 0);
  return result;
}
