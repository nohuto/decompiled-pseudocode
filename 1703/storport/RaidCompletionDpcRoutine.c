/*
 * XREFs of RaidCompletionDpcRoutine @ 0x1C002EBF0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C0006A68 (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000D1B0 (RaidResumeUnitQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00119A4 (RaidResumeAdapterQueue.c)
 *     Template_pzqqxxtt @ 0x1C002FF98 (Template_pzqqxxtt.c)
 *     StorPurgeEventQueue @ 0x1C003112C (StorPurgeEventQueue.c)
 */

void __fastcall RaidCompletionDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  LARGE_INTEGER v5; // rbx
  int v6; // r15d
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v8; // rdx
  __int64 *i; // r12
  int v10; // eax
  unsigned int v11; // eax
  LARGE_INTEGER v12; // rax
  unsigned int LowPart; // ecx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rtt
  __int64 v17; // r8
  unsigned __int64 v18; // rtt
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 Unit; // rax
  __int64 v22; // rbx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-9h] BYREF
  LARGE_INTEGER v24; // [rsp+68h] [rbp-1h]
  unsigned __int64 v25; // [rsp+70h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v27; // [rsp+D8h] [rbp+6Fh]
  unsigned int v28; // [rsp+E0h] [rbp+77h]

  v4 = DeferredContext[8];
  v5.QuadPart = 0LL;
  v27 = 0;
  v6 = (int)SystemArgument1;
  v24.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v5 = PerformanceCounter;
    v24 = PerformanceCounter;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 112), &LockHandle);
  for ( i = *(__int64 **)(v4 + 120); i != (__int64 *)(v4 + 120); i = (__int64 *)*i )
  {
    v10 = *((_DWORD *)i + 10);
    HIBYTE(v28) = HIBYTE(v10);
    if ( (BYTE2(v6) == 0xFF || BYTE2(v6) == (_BYTE)v10)
      && (BYTE1(v6) == 0xFF || BYTE1(v6) == BYTE1(v10))
      && ((_BYTE)v6 == 0xFF || (_BYTE)v6 == BYTE2(v10)) )
    {
      v11 = StorPurgeEventQueue(i[20], v8, SystemArgument2);
      v27 = v11;
    }
    else
    {
      v11 = v27;
    }
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 && v11 >= 0x19 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( UseQPCTime )
        v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v12.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v12.QuadPart <= 0 || v12.QuadPart >= v5.QuadPart )
        v14 = v12.QuadPart - v5.QuadPart;
      else
        v14 = v12.QuadPart - v5.QuadPart - 1;
      v25 = v14;
      if ( UseQPCTime )
      {
        LowPart = PerformanceFrequency.LowPart;
        v15 = 0LL;
        if ( PerformanceFrequency.QuadPart && v14 )
        {
          v16 = 1000 * (v14 % PerformanceFrequency.QuadPart);
          v17 = 10000 * (v16 / PerformanceFrequency.QuadPart + 1000 * (v14 / PerformanceFrequency.QuadPart));
          v18 = 10000 * (v16 % PerformanceFrequency.QuadPart);
          v8 = v18 % PerformanceFrequency.QuadPart;
          v15 = v18 / PerformanceFrequency.QuadPart + v17;
        }
      }
      else
      {
        v15 = v14;
      }
      v25 = v15;
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
      {
        Template_pzqqxxtt(
          LowPart,
          v8,
          v15,
          (unsigned int)RaidCompletionDpcRoutine,
          (__int64)L"RaidCompletionDpcRoutine",
          *(_DWORD *)(v4 + 56),
          v27,
          v14,
          v25,
          0,
          0);
        v5 = v24;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( BYTE2(v6) == 0xFF || BYTE1(v6) == 0xFF || (_BYTE)v6 == 0xFF )
  {
    RaidResumeAdapterQueue(v4);
    RaidAdapterRestartQueues(v4);
  }
  else
  {
    LOBYTE(v28) = BYTE2(v6);
    BYTE1(v28) = BYTE1(v6);
    BYTE2(v28) = v6;
    Unit = RaidAdapterFindUnit(v4, v28, v19, v20);
    v22 = Unit;
    if ( Unit )
    {
      RaidResumeUnitQueue(Unit);
      RaidRestartIoQueue(v22);
    }
  }
}
