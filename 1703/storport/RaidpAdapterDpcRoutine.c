/*
 * XREFs of RaidpAdapterDpcRoutine @ 0x1C0008810
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C002CADC (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     Template_pzqqxxtt @ 0x1C002FF98 (Template_pzqqxxtt.c)
 */

void __fastcall RaidpAdapterDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  char v5; // r15
  unsigned int v6; // ebp
  char v7; // di
  bool v8; // r14
  _QWORD *v9; // rcx
  _QWORD *v10; // rsi
  char v11; // di
  LARGE_INTEGER PerformanceCounter; // rax
  USHORT CurrentNodeNumber; // ax
  unsigned __int64 Mask; // rdx
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl
  LARGE_INTEGER v17; // rax
  LARGE_INTEGER v18; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rtt
  __int64 v23; // r8
  unsigned __int64 v24; // rtt
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp-78h] BYREF
  int v26; // [rsp+68h] [rbp-70h]
  int v27; // [rsp+6Ch] [rbp-6Ch]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-60h]
  LARGE_INTEGER v30; // [rsp+80h] [rbp-58h]
  unsigned __int64 v31; // [rsp+88h] [rbp-50h]
  struct _GROUP_AFFINITY Affinity; // [rsp+90h] [rbp-48h] BYREF

  v4 = DeferredContext[8];
  v30.QuadPart = 0LL;
  v5 = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 248), 1, 0) == 1 )
    return;
  v6 = 0;
  v29 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v30 = PerformanceCounter;
  }
  v7 = 0;
  v8 = *(_QWORD *)(v4 + 240) != 0LL;
  if ( DpcCompletionLimit )
  {
    do
    {
      if ( !*(_QWORD *)(v4 + 240) && !v7 )
      {
        *(_QWORD *)(v4 + 240) = ExpInterlockedFlushSList((PSLIST_HEADER)(v4 + 224));
        v7 = 1;
      }
      v9 = *(_QWORD **)(v4 + 240);
      if ( !v9 )
        break;
      v10 = v9 - 4;
      *(_QWORD *)(v4 + 240) = *v9;
      if ( (*((_BYTE *)v9 - 15) & 1) != 0 )
      {
        RaidAdapterPoFxIdleComponentFromMiniport(v4, *((unsigned int *)v10 + 187));
        *((_BYTE *)v10 + 17) &= ~1u;
      }
      ((void (__fastcall *)(_QWORD *, _QWORD *, PVOID, PVOID))v10[82])(
        v10,
        DeferredContext,
        SystemArgument1,
        SystemArgument2);
      ++v6;
    }
    while ( v6 < DpcCompletionLimit );
  }
  v11 = *(_QWORD *)(v4 + 240) != 0LL;
  *(_DWORD *)(v4 + 248) = 0;
  if ( v11 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    KeQueryNodeActiveAffinity(CurrentNodeNumber, &Affinity, 0LL);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    Mask = Affinity.Mask;
    v15 = ProcNumber.Number + 1;
    ProcNumber.Number = v15;
    if ( v15 >= 0x40u )
    {
LABEL_34:
      v16 = 0;
      ProcNumber.Number = 0;
      if ( (Affinity.Mask & 1) == 0 )
      {
        do
          ++v16;
        while ( !_bittest64((const __int64 *)&Mask, v16) );
        ProcNumber.Number = v16;
      }
    }
    else
    {
      while ( !_bittest64((const __int64 *)&Mask, v15) )
      {
        ProcNumber.Number = ++v15;
        if ( v15 >= 0x40u )
          goto LABEL_34;
      }
    }
    KeSetTargetProcessorDpcEx((PKDPC)(*(_QWORD *)(v4 + 8) + 200LL), &ProcNumber);
  }
  else
  {
    if ( !v8 )
      *(_WORD *)(*(_QWORD *)(v4 + 8) + 202LL) = 0;
    if ( !ExQueryDepthSList((PSLIST_HEADER)(v4 + 224)) && *(_DWORD *)(v4 + 792) < 0xFFFFu )
      goto LABEL_17;
  }
  KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v4 + 8) + 200LL), 0LL, 0LL);
LABEL_17:
  v27 = MEMORY[0xFFFFF78000000324];
  v26 = MEMORY[0xFFFFF78000000320] - v29;
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v29) > *(_DWORD *)(v4 + 4792) )
  {
    *(_DWORD *)(v4 + 4792) = v26;
    *(_DWORD *)(v4 + 4796) = v6;
  }
  if ( v6 > *(_DWORD *)(v4 + 4788) )
    *(_DWORD *)(v4 + 4788) = v6;
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 && v6 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v17.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v17.QuadPart <= 0 || v17.QuadPart >= v30.QuadPart )
      v20 = v17.QuadPart - v30.QuadPart;
    else
      v20 = v17.QuadPart - v30.QuadPart - 1;
    v31 = v20;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      v21 = 0LL;
      if ( PerformanceFrequency.QuadPart && v20 )
      {
        v22 = 1000 * (v20 % PerformanceFrequency.QuadPart);
        v23 = 10000 * (v22 / PerformanceFrequency.QuadPart + 1000 * (v20 / PerformanceFrequency.QuadPart));
        v24 = 10000 * (v22 % PerformanceFrequency.QuadPart);
        v18.QuadPart = v24 % PerformanceFrequency.QuadPart;
        v21 = v24 / PerformanceFrequency.QuadPart + v23;
      }
    }
    else
    {
      v21 = v20;
    }
    v29 = v21;
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
    {
      if ( v11 || v8 )
        v5 = 0;
      Template_pzqqxxtt(
        LowPart,
        v18.LowPart,
        v21,
        (unsigned int)RaidpAdapterDpcRoutine,
        (__int64)L"RaidpAdapterDpcRoutine",
        *(_DWORD *)(v4 + 56),
        v6,
        v20,
        v29,
        v11,
        v5);
    }
  }
}
