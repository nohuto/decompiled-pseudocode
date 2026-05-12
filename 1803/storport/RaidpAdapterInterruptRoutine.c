/*
 * XREFs of RaidpAdapterInterruptRoutine @ 0x1C002BCF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqx @ 0x1C00242A4 (McTemplateK0pqqx.c)
 */

char __fastcall RaidpAdapterInterruptRoutine(__int64 a1, __int64 a2)
{
  LARGE_INTEGER v2; // rbx
  unsigned __int64 v3; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  char v7; // bp
  LARGE_INTEGER v8; // rax
  unsigned __int64 v9; // rax
  ULONG CurrentProcessorNumber; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  __int64 QuadPart; // [rsp+70h] [rbp+18h]
  unsigned __int64 v15; // [rsp+78h] [rbp+20h]

  v2.QuadPart = 0LL;
  v3 = 0LL;
  QuadPart = 0LL;
  if ( !*(_BYTE *)(a2 + 107) || *(int *)(a2 + 268) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v2 = PerformanceCounter;
    QuadPart = PerformanceCounter.QuadPart;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 528) + 24LL))(*(_QWORD *)(a2 + 536) + 16LL);
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v8.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v8.QuadPart <= 0 || v8.QuadPart >= v2.QuadPart )
      v9 = v8.QuadPart - v2.QuadPart;
    else
      v9 = v8.QuadPart - v2.QuadPart - 1;
    v15 = v9;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v9 )
        v3 = 10000
           * (1000 * (v9 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v9 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 1000 * (v9 / PerformanceFrequency.QuadPart));
    }
    else
    {
      v3 = v9;
    }
    QuadPart = v3;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
      McTemplateK0pqqx(
        QuadPart,
        v11,
        v12,
        RaidpAdapterInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        QuadPart);
  }
  return v7;
}
