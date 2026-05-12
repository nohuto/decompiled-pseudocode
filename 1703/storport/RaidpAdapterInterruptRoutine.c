/*
 * XREFs of RaidpAdapterInterruptRoutine @ 0x1C001EA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     Template_pqqx @ 0x1C002FE48 (Template_pqqx.c)
 */

char __fastcall RaidpAdapterInterruptRoutine(__int64 a1, __int64 a2)
{
  LARGE_INTEGER v2; // rbx
  unsigned __int64 v3; // rdi
  char v5; // bp
  unsigned __int64 v6; // rax
  char CurrentProcessorNumber; // al
  int v8; // edx
  int v9; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER v14; // [rsp+70h] [rbp+18h]
  unsigned __int64 v15; // [rsp+78h] [rbp+20h]

  v2.QuadPart = 0LL;
  v3 = 0LL;
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
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 528) + 24LL))(*(_QWORD *)(a2 + 536) + 16LL);
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v12.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v12.QuadPart <= 0 || v12.QuadPart >= v2.QuadPart )
      v6 = v12.QuadPart - v2.QuadPart;
    else
      v6 = v12.QuadPart - v2.QuadPart - 1;
    v15 = v6;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v6 )
        v3 = 10000
           * (1000 * (v6 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v6 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 1000 * (v6 / PerformanceFrequency.QuadPart));
    }
    else
    {
      v3 = v6;
    }
    v14.QuadPart = v3;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
      Template_pqqx(
        v14.LowPart,
        v8,
        v9,
        (unsigned int)RaidpAdapterInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        v14.QuadPart);
  }
  return v5;
}
