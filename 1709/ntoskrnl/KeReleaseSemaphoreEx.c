/*
 * XREFs of KeReleaseSemaphoreEx @ 0x14006A750
 * Callers:
 *     AlpciSendDeferredMessageBeforeWait @ 0x14006AB80 (AlpciSendDeferredMessageBeforeWait.c)
 *     AlpcpSignal @ 0x14006AE10 (AlpcpSignal.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1400FB99C (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     MiCheckForControlAreaDeletion @ 0x14010AA68 (MiCheckForControlAreaDeletion.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     PopDispatchQuerySetIrp @ 0x14012AA38 (PopDispatchQuerySetIrp.c)
 *     PopIrpWorker @ 0x140151D80 (PopIrpWorker.c)
 *     IoRaiseInformationalHardError @ 0x1401F9810 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x140201004 (PnpProcessRebalance.c)
 *     MiQueuePageFileExtension @ 0x140226B10 (MiQueuePageFileExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402391E0 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140463024 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDoPortCleanup @ 0x140464584 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140464F28 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14049FAA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x140577394 (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
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

__int64 KeReleaseSemaphoreEx(__int64 a1, int a2, int a3, ...)
{
  int v4; // r15d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r10
  int v8; // ebp
  unsigned int v9; // r14d
  int v10; // eax
  _QWORD *v11; // r15
  _QWORD *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char v16; // al
  char v17; // r12
  __int64 v18; // rdi
  char v19; // cl
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  bool v25; // zf
  __int64 v27; // rdi
  _QWORD *v28; // r12
  int v29; // r8d
  __int64 *v30; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v32; // r9
  struct _KPRCB *v33; // [rsp+30h] [rbp-68h]
  unsigned __int8 v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  struct _KPRCB *v36; // [rsp+40h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  int v38; // [rsp+A0h] [rbp+8h] BYREF
  int v39; // [rsp+A8h] [rbp+10h]
  int v40; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  __int64 v43; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v41 = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v39 = a2;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v40 = 0;
  v33 = CurrentPrcb;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v40);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    CurrentPrcb = v33;
  }
  v9 = *(_DWORD *)(a1 + 4);
  v10 = v9 + a3;
  if ( (signed int)(v9 + a3) > *(_DWORD *)(a1 + 24) || v10 < (int)v9 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  *(_DWORD *)(a1 + 4) = v10;
  if ( v9 )
    goto LABEL_29;
  v11 = *(_QWORD **)(a1 + 8);
  v12 = (_QWORD *)(a1 + 8);
  if ( v11 == (_QWORD *)(a1 + 8) )
    goto LABEL_28;
  while ( 1 )
  {
    v13 = (__int64)v11;
    v11 = (_QWORD *)*v11;
    v14 = *(_QWORD *)v13;
    v15 = *(_QWORD **)(v13 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || *v15 != v13 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = *(_BYTE *)(v13 + 16);
    if ( v16 != 1 )
      break;
    v17 = 0;
    v18 = *(_QWORD *)(v13 + 24);
    v35 = *(unsigned __int16 *)(v13 + 18);
    LODWORD(v41) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx((__int64 *)va);
      while ( *(_QWORD *)(v18 + 64) );
    }
    if ( *(_BYTE *)(v18 + 388) != 5 )
      goto LABEL_57;
    v19 = *(_BYTE *)(v18 + 112);
    v17 = 0;
    v20 = v19 & 7;
    if ( v20 == 1 || v20 == 4 )
    {
      v21 = *(_QWORD *)(v18 + 232);
      if ( v21 )
      {
        if ( (*(_BYTE *)v21 & 0x7F) == 0x15 )
        {
          *(_DWORD *)(v18 + 540) = (unsigned __int8)*(_DWORD *)(v18 + 540);
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 4LL * *(unsigned int *)(v18 + 540) + 536));
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 40));
        }
      }
      v22 = *(_QWORD *)(v18 + 712);
      if ( v22 )
      {
        v38 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 22800), 0LL) )
        {
          do
            KeYieldProcessorEx(&v38);
          while ( *(_QWORD *)(v22 + 22800) );
        }
        if ( *(_QWORD *)(v18 + 712) )
        {
          v23 = *(_QWORD *)(v18 + 216);
          v24 = *(_QWORD **)(v18 + 224);
          if ( *(_QWORD *)(v23 + 8) != v18 + 216 || *v24 != v18 + 216 )
            __fastfail(3u);
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          *(_QWORD *)(v18 + 712) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 22800), 0LL);
      }
      CurrentPrcb = v33;
      *(_BYTE *)(v18 + 388) = 7;
      v12 = (_QWORD *)(a1 + 8);
      v17 = 1;
      *(_QWORD *)(v18 + 216) = v33->DeferredReadyListHead.Next;
      v33->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v18 + 216);
      *(_QWORD *)(v18 + 200) = v35;
    }
    else
    {
      if ( (*(_BYTE *)(v18 + 112) & 7) == 0 )
      {
        v17 = 1;
        *(_BYTE *)(v18 + 112) = v19 & 0xF8 | 2;
        *(_QWORD *)(v18 + 200) = v35;
        *(_BYTE *)(v13 + 17) = 0;
LABEL_57:
        CurrentPrcb = v33;
        goto LABEL_25;
      }
      if ( v20 == 5 )
      {
        *(_BYTE *)(v18 + 112) = v19 & 0xF8 | 6;
        goto LABEL_57;
      }
      CurrentPrcb = v33;
      if ( v20 == 3 )
        *(_BYTE *)(v13 + 17) = 2;
    }
LABEL_25:
    *(_QWORD *)(v18 + 64) = 0LL;
    ++*(_BYTE *)(v13 + 17);
    if ( v17 )
    {
      v25 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v25 )
        goto LABEL_27;
    }
LABEL_69:
    if ( v11 == v12 )
      goto LABEL_27;
  }
  if ( v16 != 2 )
  {
    KiTryUnwaitThread(CurrentPrcb, v13, 256LL, 0LL);
LABEL_68:
    CurrentPrcb = v33;
    goto LABEL_69;
  }
  *(_BYTE *)(v13 + 17) = 5;
  v27 = *(_QWORD *)(v13 + 24);
  *(_QWORD *)v13 = 0LL;
  v28 = (_QWORD *)(v27 + 8);
  KeGetCurrentIrql();
  __writecr8(2uLL);
  v36 = KeGetCurrentPrcb();
  CurrentThread = v36->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(v36->CurrentThread);
    EtwTraceEnqueueWork(v32, v13, IsThreadRunning);
  }
  KiAcquireKobjectLockSafe(v27);
  if ( (_QWORD *)*v28 == v28
    || *(_DWORD *)(v27 + 40) >= *(_DWORD *)(v27 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v27 && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)v36, v27, v13) )
  {
    v29 = *(_DWORD *)(v27 + 4);
    *(_DWORD *)(v27 + 4) = v29 + 1;
    v30 = *(__int64 **)(v27 + 32);
    if ( *v30 != v27 + 24 )
      __fastfail(3u);
    *(_QWORD *)v13 = v27 + 24;
    *(_QWORD *)(v13 + 8) = v30;
    *v30 = v13;
    *(_QWORD *)(v27 + 32) = v13;
    if ( !v29 && (_QWORD *)*v28 != v28 )
      KiWakeOtherQueueWaiters((__int64)v36, v27);
  }
  _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
  v25 = (*(_DWORD *)(a1 + 4))-- == 1;
  if ( !v25 )
    goto LABEL_68;
LABEL_27:
  CurrentIrql = v34;
LABEL_28:
  v4 = v39;
LABEL_29:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (v43 & 1) != 0 )
  {
    v8 = 1;
    if ( (v43 & 4) == 0 )
      v8 = 3;
  }
  else if ( (v43 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread(v33, v33->CurrentThread);
  }
  KiExitDispatcher((_DWORD)v33, v8, 1, v4, CurrentIrql);
  return v9;
}
