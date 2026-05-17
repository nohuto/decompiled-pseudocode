/*
 * XREFs of RtlQueryPerformanceCounter @ 0x180019360
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x18001A834 (EtwpReserveTraceBuffer.c)
 *     PsspSampleCounters @ 0x18005C73C (PsspSampleCounters.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x180065218 (EtwpInitLoggerContext.c)
 *     RtlGetInterruptTimePrecise @ 0x1800E4420 (RtlGetInterruptTimePrecise.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A06E0 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlQueryPerformanceCounter(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(v2) = MEMORY[0x7FFE03C6];
  if ( (MEMORY[0x7FFE03C6] & 1) != 0 )
  {
    if ( MEMORY[0x7FFE03C6] >= 0 )
    {
      if ( (MEMORY[0x7FFE03C6] & 0x20) != 0 )
      {
        _mm_lfence();
      }
      else if ( (MEMORY[0x7FFE03C6] & 0x10) != 0 )
      {
        _mm_mfence();
      }
      v2 = __rdtsc();
      LODWORD(a2) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      a2 = (unsigned int)a2;
    }
    else
    {
      __asm { rdtscp }
    }
    v4 = (MEMORY[0x7FFE03B8] + ((a2 << 32) | v2)) >> MEMORY[0x7FFE03C7];
  }
  else
  {
    NtQueryPerformanceCounter(&v6, 0LL);
    v4 = v6;
  }
  *a1 = v4;
  return 1LL;
}
