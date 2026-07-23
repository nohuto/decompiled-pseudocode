/*
 * XREFs of ExpWorkerInitialization @ 0x14081E950
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1407FDF80 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KeSelectIdealProcessor @ 0x1400654C0 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfReleasePushLock @ 0x1401125C0 (ExfReleasePushLock.c)
 *     KiInitializeTimer2 @ 0x14012A6A0 (KiInitializeTimer2.c)
 *     KeInitializePriQueue @ 0x140163608 (KeInitializePriQueue.c)
 *     ExQueueDebuggerWorker @ 0x14016367C (ExQueueDebuggerWorker.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExpCreateSystemThreadForNode @ 0x140567898 (ExpCreateSystemThreadForNode.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  int SystemThreadForNode; // r12d
  int v2; // eax
  bool v3; // cf
  unsigned __int16 v4; // r15
  __int64 v5; // r14
  USHORT v6; // cx
  int v7; // ebx
  int v8; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  HANDLE v11; // rcx
  __int64 v12; // r8
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rax
  ULONG_PTR v17; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v22; // rdi
  PRTL_BALANCED_NODE v23; // rax
  PRTL_BALANCED_NODE v24; // rbx
  unsigned int v25; // ecx
  int v26; // ebx
  __int64 v27; // rsi
  unsigned __int64 v28; // r14
  __int64 *v29; // rdx
  signed __int64 *v30; // rdi
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  signed __int64 v33; // rtt
  _QWORD *v34; // r8
  const char *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD v39[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-48h] BYREF
  USHORT Count; // [rsp+90h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+10h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  ExpWorkerSwapinMutex.Event.Header.Size = 6;
  ExpWorkerSwapinMutex.Owner = 0LL;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Blink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Flink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  v0 = ExpMaximumKernelWorkerThreads;
  SystemThreadForNode = 0;
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
  v2 = ExpWorkerThreadTimeoutInSeconds;
  if ( ExpWorkerThreadTimeoutInSeconds > 3600 )
  {
    v2 = 3600;
    ExpWorkerThreadTimeoutInSeconds = 3600;
  }
  if ( v2 < 60 )
    ExpWorkerThreadTimeoutInSeconds = 60;
  v3 = KeNumberNodes != 0;
  v4 = 0;
  ExpInstanceAllocationMask = -4;
  while ( v3 )
  {
    v5 = KeNodeBlock[v4];
    if ( (_UNKNOWN *)v5 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * v4) )
      v5 = 0LL;
    v6 = *(_WORD *)(v5 + 146);
    *(_DWORD *)(v5 + 2092) = 0;
    KeQueryNodeActiveAffinity(v6, &Affinity, &Count);
    memset((void *)(v5 + 384), 0, 0x2D0uLL);
    *(_DWORD *)(v5 + 1092) &= 0x80000000;
    v7 = Count;
    *(_QWORD *)(v5 + 1072) = v5;
    *(_DWORD *)(v5 + 1096) = ExpMaximumKernelWorkerThreads;
    *(_DWORD *)(v5 + 1100) = 0;
    KeInitializePriQueue(v5 + 384, v7);
    memset((void *)(v5 + 1104), 0, 0x2D0uLL);
    *(_DWORD *)(v5 + 1812) &= 0x80000000;
    *(_QWORD *)(v5 + 1792) = v5;
    v8 = ExpMaximumKernelWorkerThreads;
    *(_DWORD *)(v5 + 1820) = 1;
    *(_DWORD *)(v5 + 1816) = v8;
    KeInitializePriQueue(v5 + 1104, v7);
    *(_QWORD *)(v5 + 320) = v5 + 384;
    v9 = (_QWORD *)(v5 + 336);
    v10 = 6LL;
    *(_QWORD *)(v5 + 328) = v5 + 1104;
    do
    {
      *v9++ = 0LL;
      --v10;
    }
    while ( v10 );
    *(_WORD *)(v5 + 1824) = 1;
    *(_BYTE *)(v5 + 1826) = 6;
    *(_DWORD *)(v5 + 1828) = 1;
    *(_QWORD *)(v5 + 1840) = v5 + 1832;
    *(_QWORD *)(v5 + 1832) = v5 + 1832;
    *(_QWORD *)(v5 + 1848) = 0LL;
    *(_BYTE *)(v5 + 1848) = 9;
    *(_QWORD *)(v5 + 1864) = v5 + 1856;
    *(_QWORD *)(v5 + 1856) = v5 + 1856;
    *(_QWORD *)(v5 + 1872) = 0LL;
    *(_QWORD *)(v5 + 1904) = 0LL;
    *(_WORD *)(v5 + 1912) = 1;
    *(_BYTE *)(v5 + 1914) = 6;
    *(_DWORD *)(v5 + 1916) = 0;
    *(_QWORD *)(v5 + 1928) = v5 + 1920;
    *(_QWORD *)(v5 + 1920) = v5 + 1920;
    *(_DWORD *)(v5 + 2092) |= 2u;
    if ( Affinity.Mask )
    {
      *(_DWORD *)(v5 + 2088) = KeSelectIdealProcessor(v5, (__int64)&Affinity, 0LL);
      SystemThreadForNode = ExpCreateSystemThreadForNode((int)&Handle, v5, (__int64)ExpWorkerThreadBalanceManager, v4);
      if ( SystemThreadForNode < 0 )
        break;
      ObReferenceObjectByHandle(Handle, 0x100000u, 0LL, 0, &Object, 0LL);
      v11 = Handle;
      *(_QWORD *)(v5 + 2080) = Object;
      ZwClose(v11);
      *(_DWORD *)(v5 + 2092) |= 1u;
    }
    v3 = ++v4 < (unsigned __int16)KeNumberNodes;
  }
  word_140342EC2 = 0;
  KiInitializeTimer2((__int64)&ExpThreadReaperTimer, (__int64)ExpSetThreadReaperEvents, 0LL, 8);
  v39[0] = v12;
  v39[1] = -1LL;
  KeSetTimer2(
    (__int64)&ExpThreadReaperTimer,
    -((10000000LL * ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v39);
  v13 = ExpAdditionalCriticalWorkerThreads;
  if ( (unsigned int)ExpAdditionalCriticalWorkerThreads > 0x64 )
  {
    v13 = 100;
    ExpAdditionalCriticalWorkerThreads = 100;
  }
  v14 = ExpAdditionalDelayedWorkerThreads;
  if ( (unsigned int)ExpAdditionalDelayedWorkerThreads > 0x64 )
  {
    v14 = 100;
    ExpAdditionalDelayedWorkerThreads = 100;
  }
  v15 = 5;
  if ( (_BYTE)dword_1403E3134 )
    v15 = 10;
  ExDelayedWorkerThreads = v14 + 7;
  v16 = KeNodeBlock[0];
  ExCriticalWorkerThreads = v13 + v15;
  if ( (_UNKNOWN *)KeNodeBlock[0] == &KiNodeInit )
    v16 = 0LL;
  v17 = *(_QWORD *)(v16 + 320);
  if ( (v17 & 1) != 0 )
    v17 = 0LL;
  ExWorkerQueue = v17;
  if ( !qword_14036BA10 )
  {
    v19 = __rdtsc();
    v20 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) >> 4)) ^ 0xBC6LL;
    if ( !v20 )
      v20 = 1LL;
    qword_14036BA10 = v20;
    qword_14036BA18 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5E3LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v22 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
    v23 = KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      ExfAcquirePushLockExclusiveEx(v22, v23, (ULONG_PTR)v22);
    if ( v24 )
      BYTE2(v24[1].Left) |= 1u;
    v25 = 0;
    v26 = 64;
    v27 = *((unsigned int *)ObpTypeObjectType + 11);
    qword_14036BA28 = v27;
    v28 = (unsigned int)v27;
    if ( (_DWORD)v27 )
    {
      v29 = ObpObjectTypes;
      while ( *v29 )
      {
        if ( (*(_BYTE *)(*v29 + 66) & 0x40) != 0 )
          _bittestandset64(qword_14036BA30, v25);
        ++v25;
        ++v29;
        if ( v25 >= (unsigned int)v27 )
          goto LABEL_43;
      }
      v28 = v25;
      LODWORD(v27) = v25;
      qword_14036BA28 = v25;
    }
LABEL_43:
    v30 = (signed __int64 *)((char *)ObpTypeObjectType + 184);
    _m_prefetchw((char *)ObpTypeObjectType + 184);
    v31 = *v30;
    v32 = *v30 - 16;
    if ( (*v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v32 = 0LL;
    if ( (v31 & 2) != 0 || (v33 = *v30, v33 != _InterlockedCompareExchange64(v30, v32, v31)) )
      ExfReleasePushLock(v30);
    KeAbPostRelease((ULONG_PTR)v30);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( (_DWORD)v27 )
    {
      qword_14036BA50 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v28];
      v34 = (_QWORD *)(qword_14036BA50 + 112);
      v35 = (const char *)(qword_14036BA50 + 112);
      if ( qword_14036BA50 + 112 < (unsigned __int64)(qword_14036BA50 + 176) )
      {
        do
        {
          _mm_prefetch(v35, 0);
          v35 += 64;
        }
        while ( (unsigned __int64)v35 < qword_14036BA50 + 176 );
      }
      v36 = qword_14036BA10;
      v37 = 8LL;
      do
      {
        v36 = __ROR8__(v36 - *v34++, qword_14036BA18);
        v26 -= 8;
        --v37;
      }
      while ( v37 );
      for ( ; v26; --v26 )
      {
        v38 = *(unsigned __int8 *)v34;
        v34 = (_QWORD *)((char *)v34 + 1);
        v36 = __ROR8__(v36 - v38, qword_14036BA18);
      }
      qword_14036BA58 = v36;
      qword_14036BA20 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
    }
    else
    {
      qword_14036BA10 = 0LL;
    }
  }
  ExpDebuggerDpc.TargetInfoAsUlong = 275;
  ExpDebuggerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)ExpDebuggerDpcRoutine;
  qword_140342F70 = (__int64)ExpDebuggerWorker;
  ExpDebuggerDpc.DeferredContext = 0LL;
  ExpDebuggerDpc.DpcData = 0LL;
  ExpDebuggerDpc.ProcessorHistory = 0LL;
  qword_140342F78 = 0LL;
  ExpDebuggerWorkItem = 0LL;
  ExpDebuggerWork = 1;
  ExQueueDebuggerWorker();
  return (unsigned int)SystemThreadForNode;
}
