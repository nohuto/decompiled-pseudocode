/*
 * XREFs of KeQuerySystemTimePrecise @ 0x140025920
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1404ECC38 (EtwpInitializeTimeStamp.c)
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x140747B54 (EtwpTraceSystemShutdown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQuerySystemTimePrecise(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  char v5; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v7; // rdx
  __int64 result; // rax

  while ( 1 )
  {
    v1 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v2 = MEMORY[0xFFFFF78000000014];
      v3 = MEMORY[0xFFFFF78000000348];
      v4 = MEMORY[0xFFFFF78000000358];
      v5 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v1 )
        break;
    }
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= v3 )
  {
    result = v2;
  }
  else
  {
    v7 = PerformanceCounter.QuadPart - v3 - 1;
    if ( v5 )
      v7 <<= v5;
    result = v2 + (((unsigned __int64)v7 * (unsigned __int128)v4) >> 64);
  }
  *a1 = result;
  return result;
}
