/*
 * XREFs of KeReleaseSemaphoreEx @ 0x140041740
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x140016404 (MiCheckForControlAreaDeletion.c)
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     AlpcpSignal @ 0x14004021C (AlpcpSignal.c)
 *     MiContractPagingFiles @ 0x140062BA0 (MiContractPagingFiles.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140080F4C (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     AlpcpSignalAndWait @ 0x1400E7A20 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     PopIrpWorker @ 0x140145130 (PopIrpWorker.c)
 *     PopDispatchQuerySetIrp @ 0x140145880 (PopDispatchQuerySetIrp.c)
 *     IoRaiseInformationalHardError @ 0x1401F3E30 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x1401FB2FC (PnpProcessRebalance.c)
 *     MiQueuePageFileExtension @ 0x14021A580 (MiQueuePageFileExtension.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402239A0 (MiContractWsSwapPageFileWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x140226A34 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404306C4 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpDoPortCleanup @ 0x140473994 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140474350 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140523D60 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiCompleteDirectSwitchThread @ 0x140041A60 (KiCompleteDirectSwitchThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiSignalThread @ 0x1400E2F70 (KiSignalThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  int v6; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  int v10; // ebp
  unsigned int v11; // edi
  int v12; // eax
  _QWORD *v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char v18; // al
  __int64 v19; // rsi
  char v20; // al
  char v21; // dl
  bool v22; // zf
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  char v26; // al
  int v27; // r9d
  __int64 *v28; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v30; // r9
  __int64 v31; // [rsp+30h] [rbp-68h]
  __int64 v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+40h] [rbp-58h]
  struct _KPRCB *v34; // [rsp+40h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  int v36; // [rsp+A0h] [rbp+8h] BYREF
  int v37; // [rsp+A8h] [rbp+10h]
  int v38; // [rsp+B8h] [rbp+20h] BYREF
  int v39; // [rsp+BCh] [rbp+24h]

  v39 = HIDWORD(a4);
  v37 = a2;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v38 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v38);
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
    v14 = (_QWORD *)(a1 + 8);
    while ( v13 != v14 )
    {
      v15 = (__int64)v13;
      v13 = (_QWORD *)*v13;
      v16 = *(_QWORD *)v15;
      v17 = *(_QWORD **)(v15 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v17 != v15 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      v18 = *(_BYTE *)(v15 + 16);
      if ( v18 == 1 )
      {
        v19 = *(_QWORD *)(v15 + 24);
        v33 = *(unsigned __int16 *)(v15 + 18);
        v31 = v19;
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v36);
          while ( *(_QWORD *)(v19 + 64) );
        }
        v20 = *(_BYTE *)(v19 + 388);
        v14 = (_QWORD *)(a1 + 8);
        if ( v20 == 5 )
          v21 = KiSignalThread(CurrentPrcb, v31, v33, v15);
        else
          v21 = 0;
        *(_QWORD *)(v31 + 64) = 0LL;
        ++*(_BYTE *)(v15 + 17);
        if ( v21 )
        {
          v22 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v22 )
            break;
        }
      }
      else
      {
        if ( v18 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v32 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v34 = KeGetCurrentPrcb();
          CurrentThread = v34->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v34->CurrentThread);
            EtwTraceEnqueueWork(v30, v15, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v32);
          v24 = (_QWORD *)(v32 + 8);
          v25 = v32;
          if ( (_QWORD *)*v24 == v24
            || *(_DWORD *)(v32 + 40) >= *(_DWORD *)(v32 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v32 && CurrentThread->WaitReason == 15 )
          {
LABEL_31:
            v27 = *(_DWORD *)(v25 + 4);
            *(_DWORD *)(v25 + 4) = v27 + 1;
            v28 = *(__int64 **)(v25 + 32);
            if ( *v28 != v25 + 24 )
              __fastfail(3u);
            *(_QWORD *)v15 = v25 + 24;
            *(_QWORD *)(v15 + 8) = v28;
            *v28 = v15;
            *(_QWORD *)(v25 + 32) = v15;
            if ( !v27 && (_QWORD *)*v24 != v24 )
            {
              KiWakeOtherQueueWaiters((__int64)v34, v25);
              v25 = v32;
            }
          }
          else
          {
            v26 = KiWakeQueueWaiter((__int64)v34, v32, v15);
            v25 = v32;
            if ( !v26 )
            {
              v24 = (_QWORD *)(v32 + 8);
              goto LABEL_31;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
          v22 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v22 )
            break;
          continue;
        }
        KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
      }
    }
    v6 = v37;
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
  KiExitDispatcher((_DWORD)CurrentPrcb, v10, 1, v6, CurrentIrql);
  return v11;
}
