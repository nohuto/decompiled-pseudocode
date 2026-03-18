/*
 * XREFs of KeSignalGate @ 0x1401246E0
 * Callers:
 *     MiReturnWsToExpansionList @ 0x1400147A4 (MiReturnWsToExpansionList.c)
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     KiRetireDpcList @ 0x140094770 (KiRetireDpcList.c)
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 *     MiComputeDataFlushRange @ 0x1400A2450 (MiComputeDataFlushRange.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MiAttachThreadDone @ 0x1400CAF78 (MiAttachThreadDone.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiZeroInParallel @ 0x1400CFA48 (MiZeroInParallel.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140110588 (MiUnlockControlAreaSectionExtend.c)
 *     MiDereferencePageRunsEx @ 0x14011CA98 (MiDereferencePageRunsEx.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x1401370F0 (MiZeroNodePages.c)
 *     MiDeleteZeroThreadContext @ 0x1401556D4 (MiDeleteZeroThreadContext.c)
 *     PspGetSetContextSpecialApc @ 0x140188DD0 (PspGetSetContextSpecialApc.c)
 *     KiEpfComplete @ 0x14020CD5C (KiEpfComplete.c)
 *     MiSubsectionProtosCreated @ 0x140223D6C (MiSubsectionProtosCreated.c)
 *     PsWatchWorkingSet @ 0x14024E0C0 (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x1406EE9C0 (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x14071CD00 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

void __fastcall KeSignalGate(__int64 a1, unsigned int a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  char v8; // al
  bool v9; // zf
  __int64 v10; // rsi
  _QWORD *v11; // rbp
  struct _KPRCB *v12; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v14; // r8
  int v15; // r8d
  __int64 *v16; // rdx
  __int64 v17; // [rsp+70h] [rbp+8h]
  unsigned __int8 CurrentIrql; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 4) = 1;
    v4 = *(_QWORD **)(a1 + 8);
    while ( v4 != (_QWORD *)(a1 + 8) )
    {
      v5 = (__int64)v4;
      v4 = (_QWORD *)*v4;
      v6 = *(_QWORD *)v5;
      v7 = *(_QWORD **)(v5 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v8 = *(_BYTE *)(v5 + 16);
      if ( v8 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v5, *(unsigned __int16 *)(v5 + 18), 0LL) )
        {
          v9 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v9 )
            break;
        }
      }
      else if ( v8 == 2 )
      {
        *(_BYTE *)(v5 + 17) = 5;
        v10 = *(_QWORD *)(v5 + 24);
        *(_QWORD *)v5 = 0LL;
        v11 = (_QWORD *)(v10 + 8);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v12 = KeGetCurrentPrcb();
        CurrentThread = v12->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v14) = KeIsThreadRunning(v12->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v5, v14);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v10);
        if ( (_QWORD *)*v11 == v11
          || *(_DWORD *)(v10 + 40) >= *(_DWORD *)(v10 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v10 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v12, v10, v5) )
        {
          v15 = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v10 + 4) = v15 + 1;
          v16 = *(__int64 **)(v10 + 32);
          if ( *v16 != v10 + 24 )
            __fastfail(3u);
          *(_QWORD *)v5 = v10 + 24;
          *(_QWORD *)(v5 + 8) = v16;
          *v16 = v5;
          *(_QWORD *)(v10 + 32) = v5;
          if ( !v15 && (_QWORD *)*v11 != v11 )
            KiWakeOtherQueueWaiters((__int64)v12, v10);
        }
        _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
        v9 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v9 )
          break;
        CurrentPrcb = (struct _KPRCB *)v17;
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v5, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher(v17, 0LL, 1u, a2, CurrentIrql);
}
