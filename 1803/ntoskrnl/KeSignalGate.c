/*
 * XREFs of KeSignalGate @ 0x1400C1720
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MiUnlockControlAreaSectionExtend @ 0x14004CE20 (MiUnlockControlAreaSectionExtend.c)
 *     MiReturnWsToExpansionList @ 0x14006A984 (MiReturnWsToExpansionList.c)
 *     MiAttachThreadDone @ 0x1400831E4 (MiAttachThreadDone.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     MiDereferencePageRunsEx @ 0x1400C4510 (MiDereferencePageRunsEx.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     KiRetireDpcList @ 0x1401073A0 (KiRetireDpcList.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiZeroInParallel @ 0x14013A938 (MiZeroInParallel.c)
 *     MiZeroNodePages @ 0x14016FC80 (MiZeroNodePages.c)
 *     MiDeleteZeroThreadContext @ 0x14017B574 (MiDeleteZeroThreadContext.c)
 *     PspGetSetContextSpecialApc @ 0x1401B2A30 (PspGetSetContextSpecialApc.c)
 *     KiEpfComplete @ 0x14024B0D0 (KiEpfComplete.c)
 *     MiSubsectionProtosCreated @ 0x14025EA5C (MiSubsectionProtosCreated.c)
 *     PsWatchWorkingSet @ 0x140284450 (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x140757E90 (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x140780520 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSignalGate(__int64 a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  char v8; // al
  bool v9; // zf
  __int64 v11; // rsi
  _QWORD *v12; // rbp
  struct _KPRCB *v13; // r13
  _KTHREAD *CurrentThread; // r14
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
      v5 = (_QWORD *)*v4;
      v6 = (__int64)v4;
      v4 = v5;
      v7 = *(_QWORD **)(v6 + 8);
      if ( v5[1] != v6 || *v7 != v6 )
        __fastfail(3u);
      *v7 = v5;
      v5[1] = v7;
      v8 = *(_BYTE *)(v6 + 16);
      if ( v8 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v6, *(unsigned __int16 *)(v6 + 18), 0LL) )
        {
          v9 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v9 )
            break;
        }
      }
      else if ( v8 == 2 )
      {
        *(_BYTE *)(v6 + 17) = 5;
        v11 = *(_QWORD *)(v6 + 24);
        *(_QWORD *)v6 = 0LL;
        v12 = (_QWORD *)(v11 + 8);
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v13 = KeGetCurrentPrcb();
        CurrentThread = v13->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v15) = KeIsThreadRunning(v13->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v6, v15);
        }
        KiAcquireKobjectLockSafe(v11);
        if ( (_QWORD *)*v12 == v12
          || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v13, v11, v6) )
        {
          v16 = *(_DWORD *)(v11 + 4);
          *(_DWORD *)(v11 + 4) = v16 + 1;
          v17 = *(__int64 **)(v11 + 32);
          if ( *v17 != v11 + 24 )
            __fastfail(3u);
          *(_QWORD *)v6 = v11 + 24;
          *(_QWORD *)(v6 + 8) = v17;
          *v17 = v6;
          *(_QWORD *)(v11 + 32) = v6;
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
        KiTryUnwaitThread(CurrentPrcb, v6, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return KiExitDispatcher((_DWORD)v18, 0, 1, a2, CurrentIrql);
}
