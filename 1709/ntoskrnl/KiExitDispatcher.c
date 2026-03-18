/*
 * XREFs of KiExitDispatcher @ 0x1400728B0
 * Callers:
 *     KeInsertPriQueue @ 0x140021C30 (KeInsertPriQueue.c)
 *     ExpQueueWorkItem @ 0x140061500 (ExpQueueWorkItem.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140083270 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeAlertThreadByThreadId @ 0x1400893F0 (KeAlertThreadByThreadId.c)
 *     PpmCheckRun @ 0x14008F490 (PpmCheckRun.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpWakePushLock @ 0x1400A7F10 (ExpWakePushLock.c)
 *     KiRundownMutants @ 0x1400A95EC (KiRundownMutants.c)
 *     KiSchedulerApc @ 0x1400A9D00 (KiSchedulerApc.c)
 *     KeForceResumeThread @ 0x1400AA148 (KeForceResumeThread.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     KeRequestTerminationThread @ 0x1400AB560 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1400AB690 (KeAlertThread.c)
 *     KeSuspendThread @ 0x1400AC2F8 (KeSuspendThread.c)
 *     KeFreezeProcess @ 0x1400AC584 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1400ACDDC (KeForceResumeProcess.c)
 *     KeSetProcess @ 0x1400AE74C (KeSetProcess.c)
 *     KeRegisterObjectNotification @ 0x1400B25BC (KeRegisterObjectNotification.c)
 *     KeTimeOutQueueWaiters @ 0x1400B2AC0 (KeTimeOutQueueWaiters.c)
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 *     KeRundownQueueEx @ 0x1400DB4A4 (KeRundownQueueEx.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1400E2140 (KeSetTimerEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400E29D0 (NtAssociateWaitCompletionPacket.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 *     KeSetEventBoostPriorityEx @ 0x140100F90 (KeSetEventBoostPriorityEx.c)
 *     KeInsertQueueEx @ 0x140110C00 (KeInsertQueueEx.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     KeResumeThread @ 0x14011CDF8 (KeResumeThread.c)
 *     KeThawProcess @ 0x140121A60 (KeThawProcess.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     KeInsertQueue @ 0x14012E710 (KeInsertQueue.c)
 *     KeAdjustTimerDelayProcess @ 0x140202E68 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x140208100 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x14020D150 (KeRundownPriQueue.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiRequestProcessInSwap @ 0x1400BFCE0 (KiRequestProcessInSwap.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x14027B7EC (EtwTraceReadyThread.c)
 */

void __fastcall KiExitDispatcher(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // r14
  char v6; // bl
  unsigned __int8 v9; // bl
  __int64 v10; // rsi
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 *v14; // rsi
  __int64 *v15; // r12
  int v16; // eax
  volatile signed __int32 *v17; // rax
  __int64 *v18; // rdx
  __int64 **v19; // rcx
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  __int64 v22; // rbp
  volatile signed __int32 *v23; // rsi
  signed __int64 *v24; // rbp
  signed __int64 v25; // rax
  signed __int64 v26; // rcx
  volatile signed __int32 *v27; // r13
  volatile signed __int32 *v28; // [rsp+20h] [rbp-48h]
  __int64 *v29; // [rsp+28h] [rbp-40h]
  int v30; // [rsp+70h] [rbp+8h] BYREF
  int v31; // [rsp+78h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v6 && (unsigned __int8)KiDirectSwitchThread(a1, a4, (a2 & 2) != 0) )
      goto LABEL_30;
    v11 = *(__int64 **)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = 0LL;
    while ( 1 )
    {
      v12 = *((unsigned __int8 *)v11 + 371);
      v13 = v11 - 27;
      v11 = (__int64 *)*v11;
      v14 = (__int64 *)v13[26];
      v29 = v11;
      v15 = &v14[6 * v12];
      do
      {
        if ( *((_BYTE *)v14 + 17) < 5u )
        {
          v17 = (volatile signed __int32 *)v14[4];
          v31 = 0;
          v28 = v17;
          if ( _interlockedbittestandset(v17, 7u) )
          {
            v27 = v17;
            do
            {
              do
                KeYieldProcessorEx(&v31);
              while ( (*v27 & 0x80u) != 0 );
            }
            while ( _interlockedbittestandset(v27, 7u) );
            v11 = v29;
            v17 = v28;
          }
          if ( *((_BYTE *)v14 + 17) == 4 )
          {
            v18 = (__int64 *)*v14;
            if ( *(__int64 **)(*v14 + 8) != v14 || (v19 = (__int64 **)v14[1], *v19 != v14) )
              __fastfail(3u);
            *v19 = v18;
            v18[1] = (__int64)v19;
          }
          _InterlockedAnd(v17, 0xFFFFFF7F);
        }
        v14 += 6;
      }
      while ( v14 != v15 );
      *((_BYTE *)v13 + 566) = a3;
      *((_BYTE *)v13 + 567) = v5;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v13, a3, v5, 0LL);
      v16 = *((_DWORD *)v13 + 30);
      if ( (v16 & 0x20000) == 0 )
        break;
      if ( (v16 & 0x100000) != 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)v13 + 30, 0x14u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v13[23] + 572), 8u) & 7) != 0 )
        {
          v23 = (volatile signed __int32 *)v13[23];
          KiAcquireKobjectLockSafe(v23);
          if ( (v23[143] & 7) != 0 )
            goto LABEL_39;
          _InterlockedAnd(v23, 0xFFFFFF7F);
        }
      }
      KiDeferredReadyThread(a1, v13);
LABEL_18:
      if ( !v11 )
        goto LABEL_2;
    }
    v23 = (volatile signed __int32 *)v13[23];
    KiAcquireKobjectLockSafe(v23);
    if ( (v23[143] & 7) == 0 )
    {
      _InterlockedExchangeAdd(v23 + 143, 8u);
      _InterlockedAnd(v23, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)v13 + 30, 0x14u);
      *((_BYTE *)v13 + 388) = 6;
      v24 = v13 + 27;
      _m_prefetchw(&KiStackInSwapListHead);
      v25 = KiStackInSwapListHead;
      do
      {
        *v24 = v25;
        v26 = v25;
        v25 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v24, v25);
      }
      while ( v25 != v26 );
      if ( !v25 )
        KeSetEvent(&KiSwapEvent, 10, 0);
      goto LABEL_18;
    }
LABEL_39:
    KiRequestProcessInSwap(v13, v23);
    goto LABEL_18;
  }
LABEL_2:
  if ( v6 )
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
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 11882) )
  {
    LOBYTE(a2) = 2;
    KiRequestSoftwareInterrupt(a1, a2);
  }
}
