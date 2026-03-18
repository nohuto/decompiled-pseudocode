/*
 * XREFs of KiExitDispatcher @ 0x1400FB620
 * Callers:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KiRundownMutants @ 0x140040DFC (KiRundownMutants.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KeForceResumeThread @ 0x140041924 (KeForceResumeThread.c)
 *     KeRequestTerminationThread @ 0x140043C6C (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x140043DB0 (KeAlertThread.c)
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     KeSuspendThread @ 0x14004584C (KeSuspendThread.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x14005AD00 (KeSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     KeAlertThreadByThreadId @ 0x140062644 (KeAlertThreadByThreadId.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x14007BCF4 (KeSetEventBoostPriorityEx.c)
 *     KePulseEvent @ 0x140081280 (KePulseEvent.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeTimeOutQueueWaiters @ 0x140085270 (KeTimeOutQueueWaiters.c)
 *     KeRegisterObjectNotification @ 0x140085E90 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x140086460 (KeInsertQueueEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x140087AF0 (NtAssociateWaitCompletionPacket.c)
 *     KeSetProcess @ 0x14008AE20 (KeSetProcess.c)
 *     KeInsertPriQueue @ 0x14008F920 (KeInsertPriQueue.c)
 *     KeForceResumeProcess @ 0x1400BCFB4 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x1400BD08C (KeThawProcess.c)
 *     KeFreezeProcess @ 0x1400BD244 (KeFreezeProcess.c)
 *     KeResumeThread @ 0x1400BD808 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1400C1D70 (KeInsertQueue.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpQueueWorkItem @ 0x140125F10 (ExpQueueWorkItem.c)
 *     KeRundownQueueEx @ 0x14013E1A4 (KeRundownQueueEx.c)
 *     KeReleaseMutant @ 0x14013E470 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x14013E800 (KeReleaseSemaphore.c)
 *     KeAdjustTimerDelayProcess @ 0x1402404E0 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x140245D30 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x14024B4E0 (KeRundownPriQueue.c)
 * Callees:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiReadyThread @ 0x1400FB8E0 (KiReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x1402AF168 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiExitDispatcher(__int64 a1, char a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  char v6; // bl
  unsigned __int8 v9; // bl
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 *v15; // rsi
  __int64 *v16; // r12
  volatile signed __int32 *v17; // rax
  __int64 *v18; // rdx
  __int64 **v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v23; // rbp
  __int64 v24; // r8
  volatile signed __int32 *v25; // r13
  volatile signed __int32 *v26; // [rsp+20h] [rbp-48h]
  __int64 *v27; // [rsp+28h] [rbp-40h]
  int v28; // [rsp+70h] [rbp+8h] BYREF
  int v29; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v6 && KiDirectSwitchThread(a1, a4, (a2 & 2) != 0) )
      goto LABEL_27;
    v12 = *(__int64 **)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v13 = *((unsigned __int8 *)v12 + 371);
      v14 = v12 - 27;
      v12 = (__int64 *)*v12;
      v15 = (__int64 *)v14[26];
      v27 = v12;
      v16 = &v15[6 * v13];
      do
      {
        if ( *((_BYTE *)v15 + 17) < 5u )
        {
          v17 = (volatile signed __int32 *)v15[4];
          v29 = 0;
          v26 = v17;
          if ( _interlockedbittestandset(v17, 7u) )
          {
            v25 = v17;
            do
            {
              do
                KeYieldProcessorEx(&v29);
              while ( (*v25 & 0x80u) != 0 );
            }
            while ( _interlockedbittestandset(v25, 7u) );
            v12 = v27;
            v17 = v26;
          }
          if ( *((_BYTE *)v15 + 17) == 4 )
          {
            v18 = (__int64 *)*v15;
            v19 = (__int64 **)v15[1];
            if ( *(__int64 **)(*v15 + 8) != v15 || *v19 != v15 )
              __fastfail(3u);
            *v19 = v18;
            v18[1] = (__int64)v19;
          }
          _InterlockedAnd(v17, 0xFFFFFF7F);
        }
        v15 += 6;
      }
      while ( v15 != v16 );
      *((_BYTE *)v14 + 566) = a3;
      *((_BYTE *)v14 + 567) = a4;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v14, a3, a4);
      KiReadyThread(a1, v14);
    }
    while ( v12 );
  }
  if ( v6 )
  {
LABEL_27:
    v20 = *(_QWORD *)(a1 + 8);
    result = a5;
    *(_DWORD *)(v20 + 116) |= 4u;
    *(_BYTE *)(v20 + 390) = result;
    return result;
  }
  v9 = a5;
  result = *(_QWORD *)(a1 + 16);
  if ( a5 < 2u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( result )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = 0;
      while ( 1 )
      {
        LOBYTE(v21) = 1;
        KiSetVpThreadSpinLockCount(CurrentPrcb, v21);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        do
          KeYieldProcessorEx(&v28);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v23 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v11, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v23;
      if ( *(_BYTE *)(v23 + 388) == 1 )
        *(_DWORD *)(v23 + 132) = *(_DWORD *)(v23 + 132) - *(_DWORD *)(v23 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v23 + 388) = 2;
      *(_BYTE *)(v11 + 643) = 32;
      *(_BYTE *)(v11 + 390) = v9;
      KiQueueReadyThread((struct _KPRCB *)a1, v11, v24);
      if ( !(unsigned __int8)KiSwapContext(v11, v23, v9) )
        goto LABEL_6;
    }
    else if ( (*(_DWORD *)(v11 + 116) & 0x40) == 0 )
    {
LABEL_6:
      result = v9;
      __writecr8(v9);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v11 + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_6;
  }
  if ( result )
  {
    result = *(unsigned __int8 *)(a1 + 11882);
    if ( !(_BYTE)result )
      return KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
  }
  return result;
}
