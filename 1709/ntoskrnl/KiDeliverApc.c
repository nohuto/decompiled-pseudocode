/*
 * XREFs of KiDeliverApc @ 0x14006FCC0
 * Callers:
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiReadyOutSwappedThreads @ 0x140090BC0 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400A7184 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 *     KiFastReadyThread @ 0x1400A8DC4 (KiFastReadyThread.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     KiSchedulerApc @ 0x1400A9D00 (KiSchedulerApc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1400AC100 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400D208C (KeSetSchedulingGroupRankBias.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1400D38F0 (KeSetBasePriorityThread.c)
 *     KiContinueEx @ 0x1400DA860 (KiContinueEx.c)
 *     KiBeginThreadWait @ 0x1400E4300 (KiBeginThreadWait.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     KeBoostPriorityThread @ 0x1400FE440 (KeBoostPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KiExitThreadWait @ 0x14011B140 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011F5C8 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread @ 0x140129ED4 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 *     KeSetCpuSetsProcess @ 0x140153D04 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 *     KiApcInterrupt @ 0x140184ED0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     FsRtlRemovePerFileContext @ 0x1401E8C70 (FsRtlRemovePerFileContext.c)
 *     KeRemovePriorityBoost @ 0x140202884 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140208E70 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140208FF0 (KeSetSelectedCpuSetsThread.c)
 *     KiParkUmsThread @ 0x14020E3B0 (KiParkUmsThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeTestAlertThread @ 0x1400DA9D0 (KeTestAlertThread.c)
 *     KiInitializeUserApc @ 0x1400DBCA0 (KiInitializeUserApc.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall KiDeliverApc(char a1, int a2, _KTRAP_FRAME *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v6; // zf
  _KTRAP_FRAME *TrapFrame; // r15
  ULONG_PTR Process; // r12
  $B476B70DB57F76B110DA5B9238C3E934 *v9; // rdi
  unsigned int v10; // r14d
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v12; // r10
  struct _LIST_ENTRY *v13; // r11
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  ULONG_PTR v16; // r8
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // rdi
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *v21; // r11
  struct _LIST_ENTRY *v22; // r8
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rcx
  signed __int32 v25[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v27; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-18h] BYREF
  int v30; // [rsp+A0h] [rbp+48h] BYREF
  struct _LIST_ENTRY *v31; // [rsp+A8h] [rbp+50h] BYREF

  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v6 )
  {
    _InterlockedOr(v25, 0);
    v9 = &CurrentThread->152;
    while ( ($B476B70DB57F76B110DA5B9238C3E934 *)v9->ApcState.ApcListHead[0].Flink != v9 )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v10);
        }
        while ( CurrentThread->ThreadLock );
      }
      Flink = v9->ApcState.ApcListHead[0].Flink;
      if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v9->ApcState.ApcListHead[0].Flink == v9 )
      {
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        break;
      }
      CurrentThread->ApcState.KernelApcPending = 0;
      v12 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v13 = Flink[1].Flink;
      v31 = Flink[2].Flink;
      v28[0] = Flink[2].Blink;
      v27 = Flink[3].Flink;
      Blink = Flink[3].Blink;
      if ( v31 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
          goto LABEL_18;
        v17 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink || (v18 = Flink->Blink, v18->Flink != Flink) )
          __fastfail(3u);
        v18->Flink = v17;
        v17->Blink = v18;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, _QWORD *, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          &Flink[-1],
          &v31,
          v28,
          &v27,
          &Blink);
        if ( v31 )
        {
          __writecr8(0LL);
          ((void (__fastcall *)(_QWORD, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v31)(v28[0], v27, Blink);
          KeGetCurrentIrql();
          __writecr8(1uLL);
        }
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
        v14 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink || (v15 = Flink->Blink, v15->Flink != Flink) )
          __fastfail(3u);
        v15->Flink = v14;
        v14->Blink = v15;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, _QWORD *, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          v12,
          &v31,
          v28,
          &v27,
          &Blink);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    if ( a1 == 1 )
    {
      v19 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v19->Flink != v19 )
      {
        if ( CurrentThread->ApcState.UserApcPending )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v30 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v30);
            while ( CurrentThread->ThreadLock );
          }
          CurrentThread->ApcState.UserApcPending = 0;
          v20 = v19->Flink;
          if ( v19->Flink == v19 )
          {
LABEL_18:
            CurrentThread->ThreadLock = 0LL;
            __writecr8(1uLL);
            goto LABEL_14;
          }
          _m_prefetchw(&v20[-1]);
          v21 = v20[1].Flink;
          v31 = v20[2].Flink;
          v28[0] = v20[2].Blink;
          v27 = v20[3].Flink;
          Blink = v20[3].Blink;
          v22 = v20->Flink;
          if ( v20->Flink->Blink != v20 || (v23 = v20->Blink, v23->Flink != v20) )
            __fastfail(3u);
          v23->Flink = v22;
          v22->Blink = v23;
          BYTE2(v20[4].Flink) = 0;
          CurrentThread->ThreadLock = 0LL;
          __writecr8(1uLL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, _QWORD *, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v21)(
            &v20[-1],
            &v31,
            v28,
            &v27,
            &Blink);
          if ( v31 )
          {
            KiInitializeUserApc(a2, (_DWORD)a3, (_DWORD)v31, v28[0], (__int64)v27, (__int64)Blink);
          }
          else
          {
            LOBYTE(v24) = 1;
            KeTestAlertThread(v24);
          }
        }
      }
    }
  }
LABEL_14:
  v16 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v16 != Process )
    KeBugCheckEx(5u, Process, v16, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
