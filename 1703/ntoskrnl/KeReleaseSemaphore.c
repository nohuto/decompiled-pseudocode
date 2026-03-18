/*
 * XREFs of KeReleaseSemaphore @ 0x1400E2BA0
 * Callers:
 *     PopSystemIrpCompletion @ 0x14040A9E0 (PopSystemIrpCompletion.c)
 *     NtReleaseSemaphore @ 0x140430DF0 (NtReleaseSemaphore.c)
 *     IopUncacheInterfaceInformation @ 0x14044C3A0 (IopUncacheInterfaceInformation.c)
 *     NtReleaseKeyedEvent @ 0x140456358 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14045651C (NtWaitForKeyedEvent.c)
 *     AlpcpDoPortCleanup @ 0x140473994 (AlpcpDoPortCleanup.c)
 *     PnpAllocateResources @ 0x14055A118 (PnpAllocateResources.c)
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x1405B10D0 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1405CB8AC (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1405CE20C (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x140685480 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14069FE00 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14069FE88 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14069FF30 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x1406A7CA0 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x1406AB57C (IopQueryConflictList.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiCompleteDirectSwitchThread @ 0x140041A60 (KiCompleteDirectSwitchThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // edi
  LONG v11; // eax
  struct _KSEMAPHORE *Flink; // rax
  __int64 v13; // r14
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  char v16; // al
  bool v17; // zf
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  int v21; // r9d
  __int64 *v22; // r8
  char v23; // al
  bool v24; // si
  unsigned __int8 IsThreadRunning; // al
  __int64 v26; // r9
  struct _KPRCB *v27; // [rsp+38h] [rbp-40h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-38h]
  struct _KSEMAPHORE *v29; // [rsp+48h] [rbp-30h]
  __int64 v30; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v24 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Semaphore->Header.Lock);
  SignalState = Semaphore->Header.SignalState;
  v11 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v11 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v11;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    if ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      do
      {
        v13 = (__int64)Flink;
        v29 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
        v14 = *(struct _LIST_ENTRY **)&Flink->Header.Lock;
        v15 = Flink->Header.WaitListHead.Flink;
        if ( v14->Blink != (struct _LIST_ENTRY *)v13 || v15->Flink != (struct _LIST_ENTRY *)v13 )
          __fastfail(3u);
        v15->Flink = v14;
        v14->Blink = v15;
        v16 = *(_BYTE *)(v13 + 16);
        if ( v16 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v13, *(unsigned __int16 *)(v13 + 18), 0LL) )
          {
            v17 = Semaphore->Header.SignalState-- == 1;
            if ( v17 )
              break;
          }
        }
        else
        {
          if ( v16 == 2 )
          {
            *(_BYTE *)(v13 + 17) = 5;
            v30 = *(_QWORD *)(v13 + 24);
            *(_QWORD *)v13 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v27 = KeGetCurrentPrcb();
            CurrentThread = v27->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v27->CurrentThread);
              EtwTraceEnqueueWork(v26, v13, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v30);
            v19 = (_QWORD *)(v30 + 8);
            v20 = v30;
            if ( (_QWORD *)*v19 == v19
              || *(_DWORD *)(v30 + 40) >= *(_DWORD *)(v30 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v30 && CurrentThread->WaitReason == 15 )
            {
LABEL_19:
              v21 = *(_DWORD *)(v20 + 4);
              *(_DWORD *)(v20 + 4) = v21 + 1;
              v22 = *(__int64 **)(v20 + 32);
              if ( *v22 != v20 + 24 )
                __fastfail(3u);
              *(_QWORD *)v13 = v20 + 24;
              *(_QWORD *)(v13 + 8) = v22;
              *v22 = v13;
              *(_QWORD *)(v20 + 32) = v13;
              if ( !v21 && (_QWORD *)*v19 != v19 )
              {
                KiWakeOtherQueueWaiters((__int64)v27, v20);
                v20 = v30;
              }
            }
            else
            {
              v23 = KiWakeQueueWaiter((__int64)v27, v30, v13);
              v20 = v30;
              if ( !v23 )
              {
                v19 = (_QWORD *)(v30 + 8);
                goto LABEL_19;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
            v17 = Semaphore->Header.SignalState-- == 1;
            if ( v17 )
              break;
            goto LABEL_24;
          }
          KiTryUnwaitThread((__int64)CurrentPrcb, v13, 256LL, 0LL);
        }
LABEL_24:
        Flink = v29;
      }
      while ( v29 != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead );
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  if ( v24 )
  {
    v4 = 1;
    if ( (v24 & 4) == 0 )
      v4 = 3;
  }
  else if ( (v24 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
  }
  KiExitDispatcher((__int64)CurrentPrcb, v4, 1LL, (unsigned int)Increment, CurrentIrql);
  return SignalState;
}
