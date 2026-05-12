/*
 * XREFs of RaidpAdapterMSIInterruptRoutine @ 0x1C0002B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqx @ 0x1C00242A4 (McTemplateK0pqqx.c)
 */

char __fastcall RaidpAdapterMSIInterruptRoutine(__int64 a1, __int64 a2, unsigned int a3)
{
  LARGE_INTEGER v3; // rbx
  char v6; // si
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  char CurrentProcessorNumber; // al
  int v13; // edx
  int v14; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER v16; // [rsp+78h] [rbp+20h]

  v3.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  if ( !*(_BYTE *)(a2 + 107) || *(int *)(a2 + 268) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v3 = PerformanceCounter;
    v16 = PerformanceCounter;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 456))(*(_QWORD *)(a2 + 536) + 16LL, a3);
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v9.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v9.QuadPart <= 0 || v9.QuadPart >= v3.QuadPart )
      v10 = v9.QuadPart - v3.QuadPart;
    else
      v10 = v9.QuadPart - v3.QuadPart - 1;
    if ( UseQPCTime )
    {
      v11 = 0LL;
      if ( PerformanceFrequency.QuadPart && v10 )
        v11 = 10000
            * (1000 * (v10 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
            / PerformanceFrequency.QuadPart
            + 10000
            * (1000 * (v10 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
             + 1000 * (v10 / PerformanceFrequency.QuadPart));
    }
    else
    {
      v11 = v10;
    }
    v16.QuadPart = v11;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x8000000) != 0 )
      McTemplateK0pqqx(
        v16.LowPart,
        v13,
        v14,
        (unsigned int)RaidpAdapterMSIInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        v16.QuadPart);
  }
  return v6;
}
