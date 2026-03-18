/*
 * XREFs of KeReleaseSemaphore @ 0x14013E800
 * Callers:
 *     PopSystemIrpCompletion @ 0x1404756C0 (PopSystemIrpCompletion.c)
 *     AlpcpDoPortCleanup @ 0x1404DAA48 (AlpcpDoPortCleanup.c)
 *     NtReleaseSemaphore @ 0x1405BC950 (NtReleaseSemaphore.c)
 *     NtReleaseKeyedEvent @ 0x1405BD078 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1405BE16C (NtWaitForKeyedEvent.c)
 *     IopUncacheInterfaceInformation @ 0x1405D5CF4 (IopUncacheInterfaceInformation.c)
 *     PnpAllocateResources @ 0x1405DB260 (PnpAllocateResources.c)
 *     IopAllocateBootResources @ 0x140615F90 (IopAllocateBootResources.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14064AC54 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x14064BAE4 (FsRtlpRegisterUncProvider.c)
 *     IopLegacyResourceAllocation @ 0x140650B94 (IopLegacyResourceAllocation.c)
 *     FsRtlDeregisterUncProvider @ 0x140715040 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x140731D64 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140731DEC (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140731E94 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x14073A4F4 (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x140740684 (IopQueryConflictList.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  unsigned __int8 v5; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // edi
  LONG v10; // eax
  struct _KSEMAPHORE *Flink; // r13
  char v12; // dl
  struct _KSEMAPHORE *v14; // rax
  __int64 v15; // rsi
  struct _KSEMAPHORE **v16; // rcx
  char v17; // al
  bool v18; // zf
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

  v5 = Increment;
  v24 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Semaphore->Header.Lock);
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
      v14 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v15 = (__int64)Flink;
      Flink = v14;
      v16 = *(struct _KSEMAPHORE ***)(v15 + 8);
      if ( v14->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v15 || *v16 != (struct _KSEMAPHORE *)v15 )
        __fastfail(3u);
      *v16 = v14;
      v14->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
      v17 = *(_BYTE *)(v15 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
        {
          v18 = Semaphore->Header.SignalState-- == 1;
          if ( v18 )
            break;
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v29 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v27 = KeGetCurrentPrcb();
          CurrentThread = v27->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v27->CurrentThread);
            EtwTraceEnqueueWork(v26, v15, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v29);
          v19 = (_QWORD *)(v29 + 8);
          v20 = v29;
          if ( (_QWORD *)*v19 == v19
            || *(_DWORD *)(v29 + 40) >= *(_DWORD *)(v29 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v29 && CurrentThread->WaitReason == 15 )
          {
LABEL_19:
            v21 = *(_DWORD *)(v20 + 4);
            *(_DWORD *)(v20 + 4) = v21 + 1;
            v22 = *(__int64 **)(v20 + 32);
            if ( *v22 != v20 + 24 )
              __fastfail(3u);
            *(_QWORD *)v15 = v20 + 24;
            *(_QWORD *)(v15 + 8) = v22;
            *v22 = v15;
            *(_QWORD *)(v20 + 32) = v15;
            if ( !v21 && (_QWORD *)*v19 != v19 )
            {
              KiWakeOtherQueueWaiters((__int64)v27, v20);
              v20 = v29;
            }
          }
          else
          {
            v23 = KiWakeQueueWaiter((__int64)v27, v29, v15);
            v20 = v29;
            if ( !v23 )
            {
              v19 = (_QWORD *)(v29 + 8);
              goto LABEL_19;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
          v18 = Semaphore->Header.SignalState-- == 1;
          if ( v18 )
            break;
          continue;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v15, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  v12 = 3;
  if ( !v24 )
    v12 = 0;
  KiExitDispatcher((__int64)CurrentPrcb, v12, 1u, v5, CurrentIrql);
  return SignalState;
}
