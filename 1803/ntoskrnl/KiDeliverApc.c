/*
 * XREFs of KiDeliverApc @ 0x1400F8A70
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KiFastReadyThread @ 0x140040784 (KiFastReadyThread.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiAbApplyWakeupBoost @ 0x1400646D8 (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x140089090 (KiExitThreadWait.c)
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400A6A88 (KeCpuSetReportParkedProcessors.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400BA07C (KiAbThreadUnboostCpuPriority.c)
 *     KeSetAffinityThread_0 @ 0x1400CCA40 (KeSetAffinityThread_0.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1400EB350 (KiReadyOutSwappedThreads.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x1400F3610 (KeClearSystemPriority.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 *     KiContinueEx @ 0x1401323B0 (KiContinueEx.c)
 *     KeSetLegacyAffinityThread @ 0x140135F80 (KeSetLegacyAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401813DC (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x140183BE0 (KeSetAffinityProcess.c)
 *     KiApcInterrupt @ 0x1401AEAF0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     FsRtlRemovePerFileContext @ 0x1402263B0 (FsRtlRemovePerFileContext.c)
 *     KeRemovePriorityBoost @ 0x14023FEC4 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140246964 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     KiInitializeUserApc @ 0x1400C07EC (KiInitializeUserApc.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeTestAlertThread @ 0x140132520 (KeTestAlertThread.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

void __fastcall KiDeliverApc(char a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v6; // zf
  _KTRAP_FRAME *TrapFrame; // r15
  ULONG_PTR Process; // r12
  $005F0E83B22994B61E86C72E0CE43C71 *v9; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v13; // r10
  struct _LIST_ENTRY *v14; // r11
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  ULONG_PTR v19; // r8
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *v21; // rax
  __int64 v22; // r10
  void (__fastcall *v23)(__int64, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **); // r11
  __int64 v24; // rdx
  _LIST_ENTRY *v25; // rdi
  struct _KPRCB *v26; // r14
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY *v28; // r8
  struct _LIST_ENTRY *v29; // rdx
  __int64 v30; // r10
  void (__fastcall *v31)(__int64, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **); // r11
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  signed __int32 v35[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _LIST_ENTRY *v36; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v37; // [rsp+38h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v38; // [rsp+40h] [rbp-18h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+48h] [rbp-10h] BYREF
  __int64 v40; // [rsp+98h] [rbp+40h]
  int v41; // [rsp+A0h] [rbp+48h] BYREF
  int v42; // [rsp+A8h] [rbp+50h] BYREF

  v40 = a2;
  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = (_KTRAP_FRAME *)a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v6 )
  {
    _InterlockedOr(v35, 0);
    v9 = &CurrentThread->152;
    while ( 1 )
    {
      if ( ($005F0E83B22994B61E86C72E0CE43C71 *)v9->ApcState.ApcListHead[0].Flink == v9 )
        goto LABEL_14;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      v41 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v33 = SchedulerAssist[5];
          SchedulerAssist[5] = v33 + 1;
          if ( v33 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        do
          KeYieldProcessorEx(&v41);
        while ( CurrentThread->ThreadLock );
        LOBYTE(v24) = 1;
        KiSetVpThreadSpinLockCount(CurrentPrcb, v24);
      }
      Flink = v9->ApcState.ApcListHead[0].Flink;
      if ( ($005F0E83B22994B61E86C72E0CE43C71 *)v9->ApcState.ApcListHead[0].Flink == v9 )
        break;
      CurrentThread->ApcState.KernelApcPending = 0;
      v13 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v14 = Flink[1].Flink;
      v36 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v38 = Flink[3].Flink;
      v37 = Flink[3].Blink;
      if ( v36 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
        {
          CurrentThread->ThreadLock = 0LL;
          KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
LABEL_20:
          __writecr8(1uLL);
          goto LABEL_15;
        }
        v20 = Flink->Flink;
        v21 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v21->Flink != Flink )
          __fastfail(3u);
        v21->Flink = v20;
        v20->Blink = v21;
        BYTE2(v13[5].Flink) = 0;
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        v23(v22, &v36, &Blink, &v38, &v37);
        if ( v36 )
        {
          __writecr8(0LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v36)(Blink, v38, v37);
          KeGetCurrentIrql();
          __writecr8(1uLL);
        }
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
        v15 = Flink->Flink;
        v16 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v16->Flink != Flink )
          __fastfail(3u);
        v16->Flink = v15;
        v15->Blink = v16;
        BYTE2(v13[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v34 = v18[5] - 1;
            v18[5] = v34;
            if ( !v34 && !*((_BYTE *)v18 + 25) && !*((_BYTE *)v18 + 27) )
              KiPerformUnboostKick(v17);
          }
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v14)(
          v13,
          &v36,
          &Blink,
          &v38,
          &v37);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    KiReleaseThreadLockSafe((__int64)CurrentThread);
    __writecr8(1uLL);
LABEL_14:
    if ( a1 == 1 )
    {
      v25 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v25->Flink != v25 )
      {
        if ( CurrentThread->ApcState.UserApcPending )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v26 = KeGetCurrentPrcb();
          v42 = 0;
          while ( 1 )
          {
            LOBYTE(a2) = 1;
            KiSetVpThreadSpinLockCount(v26, a2);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v26, 0LL);
            do
              KeYieldProcessorEx(&v42);
            while ( CurrentThread->ThreadLock );
          }
          CurrentThread->ApcState.UserApcPending = 0;
          v27 = v25->Flink;
          if ( v25->Flink == v25 )
          {
            KiReleaseThreadLockSafe((__int64)CurrentThread);
            goto LABEL_20;
          }
          _m_prefetchw(&v27[-1]);
          v36 = v27[2].Flink;
          Blink = v27[2].Blink;
          v38 = v27[3].Flink;
          v37 = v27[3].Blink;
          v28 = v27->Flink;
          v29 = v27->Blink;
          if ( v27->Flink->Blink != v27 || v29->Flink != v27 )
            __fastfail(3u);
          v29->Flink = v28;
          v28->Blink = v29;
          BYTE2(v27[4].Flink) = 0;
          KiReleaseThreadLockSafe((__int64)CurrentThread);
          __writecr8(1uLL);
          v31(v30, &v36, &Blink, &v38, &v37);
          if ( v36 )
          {
            KiInitializeUserApc(v40, a3, (__int64)v36, (__int64)Blink, (__int64)v38, (__int64)v37);
          }
          else
          {
            LOBYTE(v32) = 1;
            KeTestAlertThread(v32);
          }
        }
      }
    }
  }
LABEL_15:
  v19 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v19 != Process )
    KeBugCheckEx(5u, Process, v19, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
