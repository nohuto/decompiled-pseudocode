/*
 * XREFs of RaidpAdapterRedirectDpcRoutine @ 0x1C001CED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pzqqxxtt @ 0x1C002BC38 (McTemplateK0pzqqxxtt.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002DA5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

void __fastcall RaidpAdapterRedirectDpcRoutine(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  union _SLIST_HEADER *v4; // rbx
  unsigned int v5; // edi
  _DWORD *v7; // rsi
  PSLIST_ENTRY i; // r14
  PSLIST_ENTRY v9; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rtt
  __int64 v17; // r8
  unsigned __int64 v18; // rtt
  LARGE_INTEGER v19; // [rsp+60h] [rbp-38h]
  int v20; // [rsp+68h] [rbp-30h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+18h] BYREF

  v4 = DeferredContext + 4;
  v19.QuadPart = 0LL;
  v5 = 0;
  v20 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v19 = PerformanceCounter;
  }
  v7 = (_DWORD *)SystemArgument1[8];
  for ( i = ExpInterlockedFlushSList(v4); i; ++v5 )
  {
    v9 = i - 2;
    i = i->Next;
    if ( (BYTE1(v9[1].Next) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v9[13].Next + 1), *((unsigned int *)&v9[46].Next + 3));
      BYTE1(v9[1].Next) &= ~1u;
    }
    ((void (__fastcall *)(PSLIST_ENTRY))v9[41].Next)(v9);
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v20) > v7[1198] )
  {
    v7[1198] = MEMORY[0xFFFFF78000000320] - v20;
    v7[1199] = v5;
  }
  if ( v5 > v7[1197] )
    v7[1197] = v5;
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 && v5 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v11.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v11.QuadPart <= 0 || v11.QuadPart >= v19.QuadPart )
      v14 = v11.QuadPart - v19.QuadPart;
    else
      v14 = v11.QuadPart - v19.QuadPart - 1;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      LODWORD(v15) = 0;
      if ( PerformanceFrequency.QuadPart && v14 )
      {
        v16 = 1000 * (v14 % PerformanceFrequency.QuadPart);
        v17 = 10000 * (v16 / PerformanceFrequency.QuadPart + 1000 * (v14 / PerformanceFrequency.QuadPart));
        v18 = 10000 * (v16 % PerformanceFrequency.QuadPart);
        v12.QuadPart = v18 % PerformanceFrequency.QuadPart;
        v15 = v18 / PerformanceFrequency.QuadPart + v17;
      }
    }
    else
    {
      LODWORD(v15) = v14;
    }
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
      McTemplateK0pzqqxxtt(
        LowPart,
        v12.LowPart,
        v15,
        (unsigned int)RaidpAdapterRedirectDpcRoutine,
        (__int64)L"RaidpAdapterRedirectDpcRoutine",
        v7[14],
        v5,
        v14,
        v15,
        0,
        0);
  }
}
