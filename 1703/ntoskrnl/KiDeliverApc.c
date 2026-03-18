/*
 * XREFs of KiDeliverApc @ 0x1400ECA80
 * Callers:
 *     KiContinueEx @ 0x140008870 (KiContinueEx.c)
 *     LdrpKrnGetDataTableEntry @ 0x140012970 (LdrpKrnGetDataTableEntry.c)
 *     KiExitThreadWait @ 0x140017FB0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14001A140 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeSetLegacyAffinityThread @ 0x14001A720 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 *     KiReadyOutSwappedThreads @ 0x140041050 (KiReadyOutSwappedThreads.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x1400E9870 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KiBeginThreadWait @ 0x1400FC780 (KiBeginThreadWait.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KiAbApplyWakeupBoost @ 0x140112AD4 (KiAbApplyWakeupBoost.c)
 *     KiFastReadyThread @ 0x140113FBC (KiFastReadyThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140114594 (KiAbThreadUnboostCpuPriority.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14014DA48 (KiAbForceProcessLockEntry.c)
 *     KeRemovePriorityBoost @ 0x140153BF0 (KeRemovePriorityBoost.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 *     KiApcInterrupt @ 0x140185430 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140202748 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1402028C0 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140202AA0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 *     KiParkUmsThread @ 0x140207A00 (KiParkUmsThread.c)
 * Callees:
 *     KiInitializeUserApc @ 0x140007918 (KiInitializeUserApc.c)
 *     KeTestAlertThread @ 0x1400089E0 (KeTestAlertThread.c)
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall KiDeliverApc(char a1, _QWORD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v7; // zf
  _KTRAP_FRAME *TrapFrame; // r14
  ULONG_PTR Process; // r15
  $69CD3F157F9F39B6F7113F2231989901 *v10; // rdi
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
  signed __int32 v24[8]; // [rsp+0h] [rbp-50h] BYREF
  struct _LIST_ENTRY *v25; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v26; // [rsp+38h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v27; // [rsp+40h] [rbp-10h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+48h] [rbp-8h] BYREF
  int v29; // [rsp+A0h] [rbp+50h] BYREF
  int v30; // [rsp+A8h] [rbp+58h] BYREF

  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v7 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = (_KTRAP_FRAME *)a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v7 )
  {
    _InterlockedOr(v24, 0);
    v10 = &CurrentThread->152;
    while ( ($69CD3F157F9F39B6F7113F2231989901 *)v10->ApcState.ApcListHead[0].Flink != v10 )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( CurrentThread->ThreadLock );
      }
      Flink = v10->ApcState.ApcListHead[0].Flink;
      if ( ($69CD3F157F9F39B6F7113F2231989901 *)v10->ApcState.ApcListHead[0].Flink == v10 )
      {
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        break;
      }
      CurrentThread->ApcState.KernelApcPending = 0;
      v12 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v13 = Flink[1].Flink;
      v25 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v27 = Flink[3].Flink;
      v26 = Flink[3].Blink;
      if ( v25 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
          goto LABEL_18;
        v17 = Flink->Flink;
        v18 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v18->Flink != Flink )
          __fastfail(3u);
        v18->Flink = v17;
        v17->Blink = v18;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          &Flink[-1],
          &v25,
          &Blink,
          &v27,
          &v26);
        if ( v25 )
        {
          __writecr8(0LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v25)(Blink, v27, v26);
          KeGetCurrentIrql();
          __writecr8(1uLL);
        }
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
        v14 = Flink->Flink;
        v15 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v15->Flink != Flink )
          __fastfail(3u);
        v15->Flink = v14;
        v14->Blink = v15;
        BYTE2(v12[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v13)(
          v12,
          &v25,
          &Blink,
          &v27,
          &v26);
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
          v25 = v20[2].Flink;
          Blink = v20[2].Blink;
          v27 = v20[3].Flink;
          v26 = v20[3].Blink;
          v22 = v20->Flink;
          v23 = v20->Blink;
          if ( v20->Flink->Blink != v20 || v23->Flink != v20 )
            __fastfail(3u);
          v23->Flink = v22;
          v22->Blink = v23;
          BYTE2(v20[4].Flink) = 0;
          CurrentThread->ThreadLock = 0LL;
          __writecr8(1uLL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v21)(
            &v20[-1],
            &v25,
            &Blink,
            &v27,
            &v26);
          if ( v25 )
            KiInitializeUserApc(a2, a3, (__int64)v25, (__int64)Blink, (__int64)v27, (__int64)v26);
          else
            KeTestAlertThread(1);
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
