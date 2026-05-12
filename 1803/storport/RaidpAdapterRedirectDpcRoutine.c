/*
 * XREFs of RaidpAdapterRedirectDpcRoutine @ 0x1C0017030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pzqqxxtt @ 0x1C00243EC (McTemplateK0pzqqxxtt.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0026B5C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

void __fastcall RaidpAdapterRedirectDpcRoutine(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  union _SLIST_HEADER *v4; // rdi
  unsigned int v5; // esi
  _DWORD *v7; // rbp
  PSLIST_ENTRY i; // rbx
  bool v9; // zf
  PSLIST_ENTRY v10; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rax
  LARGE_INTEGER v13; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rtt
  __int64 v18; // r8
  unsigned __int64 v19; // rtt
  LARGE_INTEGER v20; // [rsp+60h] [rbp-38h]
  int v21; // [rsp+68h] [rbp-30h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+18h] BYREF

  v4 = DeferredContext + 4;
  v20.QuadPart = 0LL;
  v5 = 0;
  v21 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v20 = PerformanceCounter;
  }
  v7 = (_DWORD *)SystemArgument1[8];
  for ( i = ExpInterlockedFlushSList(v4); i; ++v5 )
  {
    v9 = (BYTE1(i[-1].Next) & 1) == 0;
    v10 = i - 2;
    i = i->Next;
    if ( !v9 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v10[13].Next + 1), *((unsigned int *)&v10[46].Next + 3));
      BYTE1(v10[1].Next) &= ~1u;
    }
    ((void (__fastcall *)(PSLIST_ENTRY))v10[41].Next)(v10);
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v21) > v7[1198] )
  {
    v7[1198] = MEMORY[0xFFFFF78000000320] - v21;
    v7[1199] = v5;
  }
  if ( v5 > v7[1197] )
    v7[1197] = v5;
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 && v5 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v12.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v12.QuadPart <= 0 || v12.QuadPart >= v20.QuadPart )
      v15 = v12.QuadPart - v20.QuadPart;
    else
      v15 = v12.QuadPart - v20.QuadPart - 1;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      LODWORD(v16) = 0;
      if ( PerformanceFrequency.QuadPart && v15 )
      {
        v17 = 1000 * (v15 % PerformanceFrequency.QuadPart);
        v18 = 10000 * (v17 / PerformanceFrequency.QuadPart + 1000 * (v15 / PerformanceFrequency.QuadPart));
        v19 = 10000 * (v17 % PerformanceFrequency.QuadPart);
        v13.QuadPart = v19 % PerformanceFrequency.QuadPart;
        v16 = v19 / PerformanceFrequency.QuadPart + v18;
      }
    }
    else
    {
      LODWORD(v16) = v15;
    }
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
      McTemplateK0pzqqxxtt(
        LowPart,
        v13.LowPart,
        v16,
        (unsigned int)RaidpAdapterRedirectDpcRoutine,
        (__int64)L"RaidpAdapterRedirectDpcRoutine",
        v7[14],
        v5,
        v15,
        v16,
        0,
        0);
  }
}
