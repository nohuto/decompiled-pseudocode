/*
 * XREFs of KiExitDispatcher @ 0x1400E0220
 * Callers:
 *     KeInsertQueue @ 0x140010DA0 (KeInsertQueue.c)
 *     KeInsertQueueEx @ 0x140010EB0 (KeInsertQueueEx.c)
 *     KeRundownQueueEx @ 0x140011290 (KeRundownQueueEx.c)
 *     ExpDeleteMutant @ 0x140011530 (ExpDeleteMutant.c)
 *     KeAlertThreadByThreadId @ 0x140018540 (KeAlertThreadByThreadId.c)
 *     KeResumeThread @ 0x1400256A4 (KeResumeThread.c)
 *     KeTimeOutQueueWaiters @ 0x14002969C (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x14002CAF8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     PpmCheckRun @ 0x140045590 (PpmCheckRun.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400514B0 (NtAssociateWaitCompletionPacket.c)
 *     KeInsertPriQueue @ 0x1400689F0 (KeInsertPriQueue.c)
 *     KeFreezeProcess @ 0x140072E2C (KeFreezeProcess.c)
 *     KeSuspendThread @ 0x140072F68 (KeSuspendThread.c)
 *     KePulseEvent @ 0x140082D10 (KePulseEvent.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     KeReleaseSemaphore @ 0x1400E2BA0 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400E30E0 (IoSetIoCompletionEx.c)
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400E3860 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpQueueWorkItem @ 0x1400FD5D0 (ExpQueueWorkItem.c)
 *     KeForceResumeThread @ 0x140110D6C (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 *     KiRundownMutants @ 0x140111510 (KiRundownMutants.c)
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 *     KeSetProcess @ 0x14011603C (KeSetProcess.c)
 *     KeThawProcess @ 0x14011FF68 (KeThawProcess.c)
 *     KeRequestTerminationThread @ 0x14012008C (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1401201B0 (KeAlertThread.c)
 *     KeForceResumeProcess @ 0x1401202A4 (KeForceResumeProcess.c)
 *     KeRegisterObjectNotification @ 0x14012A4E8 (KeRegisterObjectNotification.c)
 *     KiSetSystemTimeDpc @ 0x140143A60 (KiSetSystemTimeDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x1401FD040 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x140201B30 (KeInsertHeadQueue.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x1400B2AE0 (KiRequestProcessInSwap.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x140253B0C (EtwTraceReadyThread.c)
 */

void __fastcall KiExitDispatcher(__int64 a1, char a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // r15
  bool v8; // di
  unsigned __int8 v9; // di
  __int64 v10; // rsi
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 *v14; // rsi
  __int64 *v15; // r12
  int v16; // eax
  volatile signed __int32 *v17; // rdx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  __int64 v22; // rbp
  volatile signed __int32 *v23; // r13
  volatile signed __int32 *v24; // rsi
  signed __int64 *v25; // r14
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  volatile signed __int32 *v28; // [rsp+20h] [rbp-48h]
  __int64 *v29; // [rsp+28h] [rbp-40h]
  int v30; // [rsp+70h] [rbp+8h] BYREF
  int v31; // [rsp+78h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = (a2 & 1) != 0;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( (a2 & 1) != 0 && (unsigned __int8)KiDirectSwitchThread(a1, (unsigned int)a4, (a2 & 2) != 0) )
      goto LABEL_30;
    v11 = *(__int64 **)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = 0LL;
    while ( 1 )
    {
      v12 = *((unsigned __int8 *)v11 + 371);
      v13 = (__int64)(v11 - 27);
      v11 = (__int64 *)*v11;
      v14 = *(__int64 **)(v13 + 208);
      v29 = v11;
      v15 = &v14[6 * v12];
      do
      {
        if ( *((unsigned __int8 *)v14 + 17) < 5u )
        {
          v17 = (volatile signed __int32 *)v14[4];
          v31 = 0;
          v28 = v17;
          if ( _interlockedbittestandset(v17, 7u) )
          {
            v23 = v17;
            do
            {
              do
                KeYieldProcessorEx(&v31);
              while ( (*v23 & 0x80u) != 0 );
            }
            while ( _interlockedbittestandset(v23, 7u) );
            v11 = v29;
            v17 = v28;
          }
          if ( *((_BYTE *)v14 + 17) == 4 )
          {
            v18 = (__int64 *)*v14;
            v19 = (__int64 **)v14[1];
            if ( *(__int64 **)(*v14 + 8) != v14 || *v19 != v14 )
              __fastfail(3u);
            *v19 = v18;
            v18[1] = (__int64)v19;
          }
          _InterlockedAnd(v17, 0xFFFFFF7F);
        }
        v14 += 6;
      }
      while ( v14 != v15 );
      *(_BYTE *)(v13 + 566) = v6;
      *(_BYTE *)(v13 + 567) = v5;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v13, v6, v5, 0LL);
      v16 = *(_DWORD *)(v13 + 120);
      if ( (v16 & 0x10000) == 0 )
        break;
      if ( (v16 & 0x80000) != 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(v13 + 120), 0x13u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v13 + 184) + 572LL), 8u) & 7) != 0 )
        {
          v24 = *(volatile signed __int32 **)(v13 + 184);
          KiAcquireKobjectLockSafe(v24);
          if ( (v24[143] & 7) != 0 )
            goto LABEL_43;
          _InterlockedAnd(v24, 0xFFFFFF7F);
        }
      }
      KiDeferredReadyThread(a1, v13, a3, a4);
LABEL_18:
      if ( !v11 )
        goto LABEL_2;
    }
    v24 = *(volatile signed __int32 **)(v13 + 184);
    KiAcquireKobjectLockSafe(v24);
    if ( (v24[143] & 7) == 0 )
    {
      _InterlockedExchangeAdd(v24 + 143, 8u);
      _InterlockedAnd(v24, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)(v13 + 120), 0x13u);
      *(_BYTE *)(v13 + 388) = 6;
      v25 = (signed __int64 *)(v13 + 216);
      _m_prefetchw(&KiStackInSwapListHead);
      v26 = KiStackInSwapListHead;
      do
      {
        *v25 = v26;
        v27 = v26;
        v26 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v25, v26);
      }
      while ( v26 != v27 );
      if ( !v26 )
        KeSetEvent(&KiSwapEvent, 10, 0);
      goto LABEL_18;
    }
LABEL_43:
    KiRequestProcessInSwap(v13, (__int64)v24);
    goto LABEL_18;
  }
LABEL_2:
  if ( v8 )
  {
LABEL_30:
    v20 = *(_QWORD *)(a1 + 8);
    v21 = a5;
    *(_DWORD *)(v20 + 116) |= 4u;
    *(_BYTE *)(v20 + 390) = v21;
    return;
  }
  v9 = a5;
  if ( a5 < 2u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v22 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v10, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v22;
      if ( *(_BYTE *)(v22 + 388) == 1 )
        *(_DWORD *)(v22 + 132) = *(_DWORD *)(v22 + 132) - *(_DWORD *)(v22 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v22 + 388) = 2;
      *(_BYTE *)(v10 + 643) = 32;
      *(_BYTE *)(v10 + 390) = v9;
      KiQueueReadyThread(a1, v10);
      if ( !(unsigned __int8)KiSwapContext(v10, v22, v9) )
        goto LABEL_6;
    }
    else if ( (*(_DWORD *)(v10 + 116) & 0x40) == 0 )
    {
LABEL_6:
      __writecr8(v9);
      return;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v10 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 11882) )
    KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
}
