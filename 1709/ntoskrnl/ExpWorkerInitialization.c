/*
 * XREFs of ExpWorkerInitialization @ 0x14084F4D4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1408429B0 (ExpInitSystemPhase1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLock @ 0x1400A7DD0 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExQueueDebuggerWorker @ 0x1401538D0 (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x140153904 (ExpLegacyWorkerInitialization.c)
 *     ExpNodeInitialize @ 0x1405DDB64 (ExpNodeInitialize.c)
 *     ExpPartitionStart @ 0x1405DDBA0 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x1405DDCC4 (ExpPartitionInitialize.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // bx
  char *v3; // rcx
  __int64 result; // rax
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  PRTL_BALANCED_NODE v10; // rax
  PRTL_BALANCED_NODE v11; // rbx
  unsigned int v12; // ecx
  int v13; // ebx
  __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  __int64 *v16; // rdx
  signed __int64 *v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // rtt
  _QWORD *v21; // r8
  const char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax

  ExpWorkerSwapinMutex.Event.Header.Size = 6;
  ExpWorkerSwapinMutex.Owner = 0LL;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Blink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Flink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  v0 = ExpMaximumKernelWorkerThreads;
  ExpWorkerSwapinMutex.Count = 1;
  ExpWorkerSwapinMutex.Contention = 0;
  LOWORD(ExpWorkerSwapinMutex.Event.Header.Lock) = 1;
  ExpWorkerSwapinMutex.Event.Header.SignalState = 0;
  ExpWorkersCanSwap = 1;
  if ( ExpMaximumKernelWorkerThreads > 0x4000 )
  {
    v0 = 0x4000;
    ExpMaximumKernelWorkerThreads = 0x4000;
  }
  if ( v0 < 32 )
    ExpMaximumKernelWorkerThreads = 32;
  v1 = ExpWorkerThreadTimeoutInSeconds;
  if ( (unsigned int)ExpWorkerThreadTimeoutInSeconds > 0xE10 )
  {
    v1 = 3600;
    ExpWorkerThreadTimeoutInSeconds = 3600;
  }
  if ( v1 < 0x3C )
    ExpWorkerThreadTimeoutInSeconds = 60;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = (char *)KeNodeBlock[i];
    if ( v3 == (char *)&KiNodeInit + 320 * i )
      v3 = 0LL;
    ExpNodeInitialize((__int64)v3);
  }
  result = ExpPartitionInitialize((__int64)PspSystemPartition);
  if ( (int)result >= 0 )
  {
    result = ExpPartitionStart(*((_QWORD *)PspSystemPartition + 2));
    v5 = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      if ( !qword_140387C90 )
      {
        v6 = __rdtsc();
        v7 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 4)) ^ 0xBC6LL;
        if ( !v7 )
          v7 = 1LL;
        qword_140387C90 = v7;
        qword_140387C98 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5E3LL;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v9 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
        v10 = KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0);
        v11 = v10;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
          ExfAcquirePushLockExclusiveEx(v9, (__int64)v10, (__int16 *)v9);
        if ( v11 )
          BYTE2(v11[1].Left) |= 1u;
        v12 = 0;
        v13 = 64;
        v14 = *((unsigned int *)ObpTypeObjectType + 11);
        qword_140387CA8 = v14;
        v15 = (unsigned int)v14;
        if ( (_DWORD)v14 )
        {
          v16 = ObpObjectTypes;
          while ( *v16 )
          {
            if ( (*(_BYTE *)(*v16 + 66) & 0x40) != 0 )
              _bittestandset64(qword_140387CB0, v12);
            ++v12;
            ++v16;
            if ( v12 >= (unsigned int)v14 )
              goto LABEL_30;
          }
          v15 = v12;
          LODWORD(v14) = v12;
          qword_140387CA8 = v12;
        }
LABEL_30:
        v17 = (signed __int64 *)((char *)ObpTypeObjectType + 184);
        _m_prefetchw((char *)ObpTypeObjectType + 184);
        v18 = *v17;
        v19 = *v17 - 16;
        if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v19 = 0LL;
        if ( (v18 & 2) != 0 || (v20 = *v17, v20 != _InterlockedCompareExchange64(v17, v19, v18)) )
          ExfReleasePushLock(v17);
        KeAbPostRelease((ULONG_PTR)v17);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        if ( (_DWORD)v14 )
        {
          qword_140387CD0 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v15];
          v21 = (_QWORD *)(qword_140387CD0 + 112);
          v22 = (const char *)(qword_140387CD0 + 112);
          if ( qword_140387CD0 + 112 < (unsigned __int64)(qword_140387CD0 + 176) )
          {
            do
            {
              _mm_prefetch(v22, 0);
              v22 += 64;
            }
            while ( (unsigned __int64)v22 < qword_140387CD0 + 176 );
          }
          v23 = qword_140387C90;
          v24 = 8LL;
          do
          {
            v23 = __ROR8__(v23 - *v21++, qword_140387C98);
            v13 -= 8;
            --v24;
          }
          while ( v24 );
          for ( ; v13; --v13 )
          {
            v25 = *(unsigned __int8 *)v21;
            v21 = (_QWORD *)((char *)v21 + 1);
            v23 = __ROR8__(v23 - v25, qword_140387C98);
          }
          qword_140387CD8 = v23;
          qword_140387CA0 = KiQueryUnbiasedInterruptTime()
                          + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                          + 288000000000LL;
        }
        else
        {
          qword_140387C90 = 0LL;
        }
      }
      ExpDebuggerDpc.TargetInfoAsUlong = 275;
      ExpDebuggerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)ExpDebuggerDpcRoutine;
      ExpDebuggerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpDebuggerWorker;
      ExpDebuggerDpc.DeferredContext = 0LL;
      ExpDebuggerDpc.DpcData = 0LL;
      ExpDebuggerDpc.ProcessorHistory = 0LL;
      ExpDebuggerWorkItem.Parameter = 0LL;
      ExpDebuggerWorkItem.List.Flink = 0LL;
      ExpDebuggerWork = 1;
      ExQueueDebuggerWorker();
      return v5;
    }
  }
  return result;
}
