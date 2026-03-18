/*
 * XREFs of KeSignalGate @ 0x14002E0B0
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiUnlockControlAreaSectionExtend @ 0x14005E290 (MiUnlockControlAreaSectionExtend.c)
 *     MiReturnWsToExpansionList @ 0x1400646C4 (MiReturnWsToExpansionList.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MiZeroInParallel @ 0x14007CE14 (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x14007CF90 (MiZeroInParallelWorker.c)
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiAttachThreadDone @ 0x1400AD5BC (MiAttachThreadDone.c)
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 *     KiRetireDpcList @ 0x1400F18D0 (KiRetireDpcList.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 *     MiDeleteZeroThreadContext @ 0x14015C1E0 (MiDeleteZeroThreadContext.c)
 *     PspGetSetContextSpecialApc @ 0x1401892D0 (PspGetSetContextSpecialApc.c)
 *     MiSubsectionProtosCreated @ 0x140219418 (MiSubsectionProtosCreated.c)
 *     PsWatchWorkingSet @ 0x1402390D0 (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x1406BFFD0 (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x1406E4910 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSignalGate(__int64 a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  char v8; // al
  bool v9; // zf
  __int64 v11; // rsi
  _QWORD *v12; // rbp
  struct _KPRCB *v13; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v15; // r8
  int v16; // r8d
  __int64 *v17; // rdx
  struct _KPRCB *v18; // [rsp+70h] [rbp+8h]
  char CurrentIrql; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = CurrentPrcb;
  KiAcquireKobjectLockSafe(a1);
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
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v5, *(unsigned __int16 *)(v5 + 18), 0LL) )
        {
          v9 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v9 )
            break;
        }
      }
      else if ( v8 == 2 )
      {
        *(_BYTE *)(v5 + 17) = 5;
        v11 = *(_QWORD *)(v5 + 24);
        *(_QWORD *)v5 = 0LL;
        v12 = (_QWORD *)(v11 + 8);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v13 = KeGetCurrentPrcb();
        CurrentThread = v13->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v15) = KeIsThreadRunning(v13->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v5, v15);
        }
        KiAcquireKobjectLockSafe(v11);
        if ( (_QWORD *)*v12 == v12
          || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v13, v11, v5) )
        {
          v16 = *(_DWORD *)(v11 + 4);
          *(_DWORD *)(v11 + 4) = v16 + 1;
          v17 = *(__int64 **)(v11 + 32);
          if ( *v17 != v11 + 24 )
            __fastfail(3u);
          *(_QWORD *)v5 = v11 + 24;
          *(_QWORD *)(v5 + 8) = v17;
          *v17 = v5;
          *(_QWORD *)(v11 + 32) = v5;
          if ( !v16 && (_QWORD *)*v12 != v12 )
            KiWakeOtherQueueWaiters((__int64)v13, v11);
        }
        _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
        v9 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v9 )
          break;
        CurrentPrcb = v18;
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v5, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return KiExitDispatcher((_DWORD)v18, 0, 1, a2, CurrentIrql);
}
