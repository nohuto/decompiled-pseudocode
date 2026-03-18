/*
 * XREFs of KeReleaseSemaphore @ 0x1400DBA40
 * Callers:
 *     PopSystemIrpCompletion @ 0x140437950 (PopSystemIrpCompletion.c)
 *     AlpcpDoPortCleanup @ 0x140464584 (AlpcpDoPortCleanup.c)
 *     NtReleaseSemaphore @ 0x1405155D0 (NtReleaseSemaphore.c)
 *     IopUncacheInterfaceInformation @ 0x140553CA8 (IopUncacheInterfaceInformation.c)
 *     PnpAllocateResources @ 0x140554F4C (PnpAllocateResources.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     NtWaitForKeyedEvent @ 0x140590C6C (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x140590F8C (NtReleaseKeyedEvent.c)
 *     IopAllocateBootResources @ 0x1405D1E70 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1405DE778 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x1405E5684 (FsRtlpRegisterUncProvider.c)
 *     FsRtlDeregisterUncProvider @ 0x1406B08A0 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1406CA724 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1406CA7AC (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1406CA854 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x1406D2960 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x1406D681C (IopQueryConflictList.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiCompleteDirectSwitchThread @ 0x14011B418 (KiCompleteDirectSwitchThread.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // edi
  LONG v10; // eax
  struct _KSEMAPHORE *Flink; // r13
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char v15; // al
  bool v16; // zf
  unsigned int v17; // ebx
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  int v21; // r9d
  __int64 *v22; // r8
  char v23; // al
  BOOL v24; // ebp
  unsigned __int8 IsThreadRunning; // al
  __int64 v26; // r9
  struct _KPRCB *v27; // [rsp+38h] [rbp-40h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-38h]
  __int64 v29; // [rsp+80h] [rbp+8h]

  v24 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(Semaphore);
  SignalState = Semaphore->Header.SignalState;
  v10 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v10 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v10;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    while ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      v12 = (__int64)Flink;
      Flink = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v13 = *(_QWORD *)v12;
      v14 = *(_QWORD **)(v12 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      v15 = *(_BYTE *)(v12 + 16);
      if ( v15 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
        {
          v16 = Semaphore->Header.SignalState-- == 1;
          if ( v16 )
            break;
        }
      }
      else
      {
        if ( v15 == 2 )
        {
          *(_BYTE *)(v12 + 17) = 5;
          v29 = *(_QWORD *)(v12 + 24);
          *(_QWORD *)v12 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v27 = KeGetCurrentPrcb();
          CurrentThread = v27->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v27->CurrentThread);
            EtwTraceEnqueueWork(v26, v12, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v29);
          v19 = (_QWORD *)(v29 + 8);
          v20 = v29;
          if ( (_QWORD *)*v19 == v19
            || *(_DWORD *)(v29 + 40) >= *(_DWORD *)(v29 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v29 && CurrentThread->WaitReason == 15 )
          {
LABEL_18:
            v21 = *(_DWORD *)(v20 + 4);
            *(_DWORD *)(v20 + 4) = v21 + 1;
            v22 = *(__int64 **)(v20 + 32);
            if ( *v22 != v20 + 24 )
              __fastfail(3u);
            *(_QWORD *)v12 = v20 + 24;
            *(_QWORD *)(v12 + 8) = v22;
            *v22 = v12;
            *(_QWORD *)(v20 + 32) = v12;
            if ( !v21 && (_QWORD *)*v19 != v19 )
            {
              KiWakeOtherQueueWaiters((__int64)v27, v20);
              v20 = v29;
            }
          }
          else
          {
            v23 = KiWakeQueueWaiter((__int64)v27, v29, v12);
            v20 = v29;
            if ( !v23 )
            {
              v19 = (_QWORD *)(v29 + 8);
              goto LABEL_18;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
          v16 = Semaphore->Header.SignalState-- == 1;
          if ( v16 )
            break;
          continue;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  if ( v24 )
    v17 = 3;
  else
    v17 = 0;
  KiExitDispatcher((__int64)CurrentPrcb, v17, 1u, Increment, CurrentIrql);
  return SignalState;
}
