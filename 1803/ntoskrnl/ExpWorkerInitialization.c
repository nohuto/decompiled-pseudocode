/*
 * XREFs of ExpWorkerInitialization @ 0x1408C095C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1408A0198 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExQueueDebuggerWorker @ 0x140181D18 (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x140181D4C (ExpLegacyWorkerInitialization.c)
 *     ExpPartitionStart @ 0x1406470E8 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x140647350 (ExpPartitionInitialize.c)
 *     ExpNodeInitialize @ 0x1406477A4 (ExpNodeInitialize.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned int v14; // ecx
  int v15; // ebx
  __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  __int64 *v18; // rdx
  signed __int64 *v19; // rdi
  signed __int64 v20; // rax
  __int64 v21; // rdx
  signed __int64 v22; // rtt
  _QWORD *v23; // r8
  const char *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax

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
    v3 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[i] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * i) )
      v3 = KeNodeBlock[i];
    ExpNodeInitialize(v3);
  }
  result = ExpPartitionInitialize((__int64)PspSystemPartition);
  if ( (int)result >= 0 )
  {
    result = ExpPartitionStart(*((_QWORD *)PspSystemPartition + 2));
    v5 = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      if ( !qword_1403CAE80 )
      {
        v6 = __rdtsc();
        v7 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 4)) ^ 0xBC6LL;
        if ( !v7 )
          v7 = 1LL;
        qword_1403CAE80 = v7;
        qword_1403CAE88 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5E3LL;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v9 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
        v10 = KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0);
        v13 = v10;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
          ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
        if ( v13 )
          *(_BYTE *)(v13 + 26) |= 1u;
        v14 = 0;
        v15 = 64;
        v16 = *((unsigned int *)ObpTypeObjectType + 11);
        qword_1403CAE98 = v16;
        v17 = (unsigned int)v16;
        if ( (_DWORD)v16 )
        {
          v18 = ObpObjectTypes;
          while ( *v18 )
          {
            if ( (*(_BYTE *)(*v18 + 66) & 0x40) != 0 )
              _bittestandset64(&qword_1403CAEA0, v14);
            ++v14;
            ++v18;
            if ( v14 >= (unsigned int)v16 )
              goto LABEL_28;
          }
          v17 = v14;
          LODWORD(v16) = v14;
          qword_1403CAE98 = v14;
        }
LABEL_28:
        v19 = (signed __int64 *)((char *)ObpTypeObjectType + 184);
        _m_prefetchw((char *)ObpTypeObjectType + 184);
        v20 = *v19;
        v21 = *v19 - 16;
        if ( (*v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v21 = 0LL;
        if ( (v20 & 2) != 0 || (v22 = *v19, v22 != _InterlockedCompareExchange64(v19, v21, v20)) )
          ExfReleasePushLock(v19, v21, v11, v12);
        KeAbPostRelease((ULONG_PTR)v19);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        if ( (_DWORD)v16 )
        {
          qword_1403CAEC0 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v17];
          v23 = (_QWORD *)(qword_1403CAEC0 + 112);
          v24 = (const char *)(qword_1403CAEC0 + 112);
          if ( qword_1403CAEC0 + 112 < (unsigned __int64)(qword_1403CAEC0 + 176) )
          {
            do
            {
              _mm_prefetch(v24, 0);
              v24 += 64;
            }
            while ( (unsigned __int64)v24 < qword_1403CAEC0 + 176 );
          }
          v25 = qword_1403CAE80;
          v26 = 8LL;
          do
          {
            v25 = __ROR8__(v25 - *v23++, qword_1403CAE88);
            v15 -= 8;
            --v26;
          }
          while ( v26 );
          for ( ; v15; --v15 )
          {
            v27 = *(unsigned __int8 *)v23;
            v23 = (_QWORD *)((char *)v23 + 1);
            v25 = __ROR8__(v25 - v27, qword_1403CAE88);
          }
          qword_1403CAEC8 = v25;
          qword_1403CAE90 = KiQueryUnbiasedInterruptTime()
                          + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                          + 288000000000LL;
        }
        else
        {
          qword_1403CAE80 = 0LL;
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
