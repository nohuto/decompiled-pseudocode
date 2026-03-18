/*
 * XREFs of KeReleaseSemaphoreEx @ 0x140084C90
 * Callers:
 *     AlpcpSignal @ 0x14006010C (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x1400601C0 (AlpcpSignalAndWait.c)
 *     MiCheckForControlAreaDeletion @ 0x140084944 (MiCheckForControlAreaDeletion.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140146800 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PopIrpWorker @ 0x140166750 (PopIrpWorker.c)
 *     PopDispatchQuerySetIrp @ 0x140166EB8 (PopDispatchQuerySetIrp.c)
 *     IoRaiseInformationalHardError @ 0x140236B00 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x14023E0DC (PnpProcessRebalance.c)
 *     MiQueuePageFileExtension @ 0x14025FD2C (MiQueuePageFileExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x140270CA0 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1404CB2A0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpDoPortCleanup @ 0x1404DAA48 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404DB380 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x14052DAC0 (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiCompleteDirectSwitchThread @ 0x140084F38 (KiCompleteDirectSwitchThread.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  int v10; // ebp
  unsigned int v11; // edi
  int v12; // eax
  _QWORD *v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  char v17; // al
  bool v18; // zf
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  char v22; // al
  int v23; // r10d
  _QWORD *v24; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v26; // rdx
  __int64 v27; // r9
  _QWORD *v28; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v29; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _QWORD *v31; // [rsp+90h] [rbp+8h]
  int v32; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v32 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v32);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v11 = *(_DWORD *)(a1 + 4);
  v12 = v11 + a3;
  if ( (signed int)(v11 + a3) > *(_DWORD *)(a1 + 24) || v12 < (int)v11 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  *(_DWORD *)(a1 + 4) = v12;
  if ( !v11 )
  {
    v13 = *(_QWORD **)(a1 + 8);
    while ( v13 != (_QWORD *)(a1 + 8) )
    {
      v14 = *v13;
      v15 = v13;
      v28 = v13;
      v13 = (_QWORD *)v14;
      v16 = (_QWORD *)v28[1];
      if ( *(_QWORD **)(v14 + 8) != v28 || (_QWORD *)*v16 != v15 )
        __fastfail(3u);
      *v16 = v14;
      *(_QWORD *)(v14 + 8) = v16;
      v17 = *((_BYTE *)v15 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, *((unsigned __int16 *)v15 + 9), 0LL) )
        {
          v18 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v18 )
            break;
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *((_BYTE *)v15 + 17) = 5;
          v33 = v15[3];
          v31 = (_QWORD *)(v33 + 8);
          *v15 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v29 = KeGetCurrentPrcb();
          CurrentThread = v29->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v29->CurrentThread);
            EtwTraceEnqueueWork(v27, v26, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v33);
          v20 = v31;
          v21 = v33;
          if ( (_QWORD *)*v20 == v20
            || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v33 && CurrentThread->WaitReason == 15 )
          {
LABEL_26:
            v23 = *(_DWORD *)(v21 + 4);
            *(_DWORD *)(v21 + 4) = v23 + 1;
            v24 = *(_QWORD **)(v21 + 32);
            if ( *v24 != v21 + 24 )
              __fastfail(3u);
            *v28 = v21 + 24;
            v28[1] = v24;
            *v24 = v28;
            *(_QWORD *)(v21 + 32) = v28;
            if ( !v23 && (_QWORD *)*v20 != v20 )
            {
              KiWakeOtherQueueWaiters(v29, v21);
              v21 = v33;
            }
          }
          else
          {
            v22 = KiWakeQueueWaiter((__int64)v29, v33, (__int64)v28);
            v21 = v33;
            if ( !v22 )
            {
              v20 = v31;
              goto LABEL_26;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v18 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v18 )
            break;
          continue;
        }
        KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v10 = 1;
    if ( (a5 & 4) == 0 )
      v10 = 3;
  }
  else if ( (a5 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, v10, 1, a2, CurrentIrql);
  return v11;
}
