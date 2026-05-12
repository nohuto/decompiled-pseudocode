/*
 * XREFs of RaidpAdapterInterruptRoutine @ 0x1C001CE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqx @ 0x1C002BAF0 (McTemplateK0pqqx.c)
 */

char __fastcall RaidpAdapterInterruptRoutine(__int64 a1, __int64 a2)
{
  LARGE_INTEGER v2; // rbx
  char v4; // si
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  char CurrentProcessorNumber; // al
  int v11; // edx
  int v12; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER v14; // [rsp+70h] [rbp+18h]
  unsigned __int64 v15; // [rsp+78h] [rbp+20h]

  v2.QuadPart = 0LL;
  v14.QuadPart = 0LL;
  if ( !*(_BYTE *)(a2 + 107) || *(int *)(a2 + 268) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v2 = PerformanceCounter;
    v14 = PerformanceCounter;
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 528) + 24LL))(*(_QWORD *)(a2 + 536) + 16LL);
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v7.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v7.QuadPart <= 0 || v7.QuadPart >= v2.QuadPart )
      v8 = v7.QuadPart - v2.QuadPart;
    else
      v8 = v7.QuadPart - v2.QuadPart - 1;
    v15 = v8;
    if ( UseQPCTime )
    {
      v9 = 0LL;
      if ( PerformanceFrequency.QuadPart && v8 )
        v9 = 10000
           * (1000 * (v8 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 1000 * (v8 / PerformanceFrequency.QuadPart));
    }
    else
    {
      v9 = v8;
    }
    v14.QuadPart = v9;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
      McTemplateK0pqqx(
        v14.LowPart,
        v11,
        v12,
        (unsigned int)RaidpAdapterInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        v14.QuadPart);
  }
  return v4;
}
