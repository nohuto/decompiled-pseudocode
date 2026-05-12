/*
 * XREFs of RaidCompletionDpcRoutine @ 0x1C002F930
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C00020C0 (RaidResumeUnitQueue.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C0007180 (RaidRestartIoQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C0010608 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00106A4 (RaidResumeAdapterQueue.c)
 *     McTemplateK0pzqqxxtt @ 0x1C002BC38 (McTemplateK0pzqqxxtt.c)
 *     StorPurgeEventQueue @ 0x1C0031824 (StorPurgeEventQueue.c)
 */

void __fastcall RaidCompletionDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  LARGE_INTEGER v5; // rbx
  unsigned int v6; // r13d
  int v7; // esi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r12
  int v12; // eax
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rtt
  __int64 v18; // r8
  unsigned __int64 v19; // rtt
  __int64 Unit; // rax
  __int64 v21; // rbx
  __int64 v22; // [rsp+28h] [rbp-41h]
  __int64 v23; // [rsp+30h] [rbp-39h]
  __int64 v24; // [rsp+48h] [rbp-21h]
  __int64 v25; // [rsp+50h] [rbp-19h]
  LARGE_INTEGER v26; // [rsp+60h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v28; // [rsp+D8h] [rbp+6Fh]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+E0h] [rbp+77h] BYREF
  PVOID v30; // [rsp+E8h] [rbp+7Fh]

  v30 = SystemArgument2;
  v4 = DeferredContext[8];
  v5.QuadPart = 0LL;
  v6 = 0;
  v26.QuadPart = 0LL;
  v7 = (int)SystemArgument1;
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v5 = PerformanceCounter;
    v26 = PerformanceCounter;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 112), &LockHandle);
  v10 = v4 + 120;
  v11 = *(__int64 **)(v4 + 120);
  while ( v11 != (__int64 *)v10 )
  {
    v12 = *((_DWORD *)v11 + 10);
    HIBYTE(v28) = HIBYTE(v12);
    if ( (BYTE2(v7) == 0xFF || BYTE2(v7) == (_BYTE)v12)
      && (BYTE1(v7) == 0xFF || BYTE1(v7) == BYTE1(v12))
      && ((_BYTE)v7 == 0xFF || (_BYTE)v7 == BYTE2(v12)) )
    {
      v6 = StorPurgeEventQueue(v11[20], v9, v30);
    }
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 && v6 >= 0x19 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( UseQPCTime )
        v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v13.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v13.QuadPart <= 0 || v13.QuadPart >= v5.QuadPart )
        v15 = v13.QuadPart - v5.QuadPart;
      else
        v15 = v13.QuadPart - v5.QuadPart - 1;
      if ( UseQPCTime )
      {
        v14 = PerformanceFrequency;
        v16 = 0LL;
        if ( PerformanceFrequency.QuadPart && v15 )
        {
          v17 = 1000 * (v15 % PerformanceFrequency.QuadPart);
          v18 = 10000 * (v17 / PerformanceFrequency.QuadPart + 1000 * (v15 / PerformanceFrequency.QuadPart));
          v19 = 10000 * (v17 % PerformanceFrequency.QuadPart);
          v9 = v19 % PerformanceFrequency.QuadPart;
          v16 = v19 / PerformanceFrequency.QuadPart + v18;
        }
      }
      else
      {
        v16 = v15;
      }
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
      {
        LODWORD(v25) = 0;
        LODWORD(v24) = 0;
        LODWORD(v23) = v6;
        LODWORD(v22) = *(_DWORD *)(v4 + 56);
        McTemplateK0pzqqxxtt(
          v14.QuadPart,
          v9,
          v16,
          RaidCompletionDpcRoutine,
          L"RaidCompletionDpcRoutine",
          v22,
          v23,
          v15,
          v16,
          v24,
          v25);
        v5 = v26;
      }
    }
    v11 = (__int64 *)*v11;
    v10 = v4 + 120;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( BYTE2(v7) == 0xFF || BYTE1(v7) == 0xFF || (_BYTE)v7 == 0xFF )
  {
    RaidResumeAdapterQueue(v4);
    RaidAdapterRestartQueues(v4);
  }
  else
  {
    LOBYTE(v28) = BYTE2(v7);
    BYTE1(v28) = BYTE1(v7);
    BYTE2(v28) = v7;
    Unit = RaidAdapterFindUnit(v4, v28);
    v21 = Unit;
    if ( Unit )
    {
      RaidResumeUnitQueue(Unit);
      RaidRestartIoQueue(v21);
    }
  }
}
