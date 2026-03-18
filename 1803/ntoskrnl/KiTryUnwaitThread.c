/*
 * XREFs of KiTryUnwaitThread @ 0x1400FD2A0
 * Callers:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KiRundownMutants @ 0x140040DFC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     KiResumeThread @ 0x1400419D8 (KiResumeThread.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x14007BCF4 (KeSetEventBoostPriorityEx.c)
 *     KePulseEvent @ 0x140081280 (KePulseEvent.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeTimeOutQueueWaiters @ 0x140085270 (KeTimeOutQueueWaiters.c)
 *     KeSetProcess @ 0x14008AE20 (KeSetProcess.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KeRundownQueueCommon @ 0x14013E274 (KeRundownQueueCommon.c)
 *     KeReleaseMutant @ 0x14013E470 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x14013E800 (KeReleaseSemaphore.c)
 * Callees:
 *     KiWaitSatisfyMutant @ 0x140089A18 (KiWaitSatisfyMutant.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v5; // rbx
  unsigned __int8 v7; // di
  _DWORD *SchedulerAssist; // r9
  char v12; // cl
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  __int64 result; // rax
  struct _KPRCB *v19; // r14
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  int *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32[14]; // [rsp+20h] [rbp-38h] BYREF
  int v33; // [rsp+68h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v33 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v28 = SchedulerAssist[5];
      SchedulerAssist[5] = v28 + 1;
      if ( v28 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v33);
    while ( *(_QWORD *)(v5 + 64) );
    LOBYTE(v26) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v26);
  }
  if ( *(_BYTE *)(v5 + 388) == 5 )
  {
    v12 = *(_BYTE *)(v5 + 112);
    v7 = 0;
    v13 = v12 & 7;
    if ( v13 == 1 || v13 == 4 )
    {
      v14 = *(_QWORD *)(v5 + 232);
      if ( v14 )
      {
        if ( (*(_BYTE *)v14 & 0x7F) == 0x15 )
        {
          *(_DWORD *)(v5 + 540) = (unsigned __int8)*(_DWORD *)(v5 + 540);
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 4LL * *(unsigned int *)(v5 + 540) + 536));
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 40));
        }
      }
      v15 = *(_QWORD *)(v5 + 712);
      if ( v15 )
      {
        v19 = KeGetCurrentPrcb();
        v32[0] = 0;
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v29 = v20[5];
            v20[5] = v29 + 1;
            if ( v29 == -1 && !*((_BYTE *)v20 + 25) && !*((_BYTE *)v20 + 27) )
              KiPerformUnboostKick(v19);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 22800), 0LL) )
        {
          KiSetVpThreadSpinLockCount(v19, 0LL);
          do
            KeYieldProcessorEx(v32);
          while ( *(_QWORD *)(v15 + 22800) );
          LOBYTE(v27) = 1;
          KiSetVpThreadSpinLockCount(v19, v27);
        }
        if ( *(_QWORD *)(v5 + 712) )
        {
          v21 = *(_QWORD *)(v5 + 216);
          v22 = *(_QWORD **)(v5 + 224);
          if ( *(_QWORD *)(v21 + 8) != v5 + 216 || *v22 != v5 + 216 )
            __fastfail(3u);
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          *(_QWORD *)(v5 + 712) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 22800), 0LL);
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v30 = v24[5] - 1;
            v24[5] = v30;
            if ( !v30 && !*((_BYTE *)v24 + 25) && !*((_BYTE *)v24 + 27) )
              KiPerformUnboostKick(v23);
          }
        }
      }
      *(_BYTE *)(v5 + 388) = 7;
      v7 = 1;
      *(_QWORD *)(v5 + 216) = *(_QWORD *)(a1 + 11528);
      *(_QWORD *)(a1 + 11528) = v5 + 216;
      *(_QWORD *)(v5 + 200) = a3;
    }
    else
    {
      if ( (*(_BYTE *)(v5 + 112) & 7) == 0 )
      {
        v7 = 1;
        *(_BYTE *)(v5 + 112) = v12 & 0xF8 | 2;
        *(_QWORD *)(v5 + 200) = a3;
        *(_BYTE *)(a2 + 17) = 0;
LABEL_9:
        if ( a4 )
        {
          *a4 = v5;
          v25 = *(int **)(a2 + 32);
          if ( (*(_BYTE *)v25 & 0x7F) == 2 )
            KiWaitSatisfyMutant(v25, v5, a1);
        }
        goto LABEL_10;
      }
      if ( v13 == 5 )
      {
        *(_BYTE *)(v5 + 112) = v12 & 0xF8 | 6;
        v7 = 0;
        goto LABEL_10;
      }
      if ( v13 == 3 )
        *(_BYTE *)(a2 + 17) = 2;
    }
    if ( !v7 )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_10:
  *(_QWORD *)(v5 + 64) = 0LL;
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v31 = v17[5] - 1;
      v17[5] = v31;
      if ( !v31 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
        KiPerformUnboostKick(v16);
    }
  }
  result = v7;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
