/*
 * XREFs of PpmResetPerformanceAccumulation @ 0x140148810
 * Callers:
 *     PpmResetPerfTimes @ 0x140148770 (PpmResetPerfTimes.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall PpmResetPerformanceAccumulation(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  if ( (a1[3197].QuadPart & 0x8000000000LL) != 0 )
    a1[3016].QuadPart = __readmsr(0xDB2u);
  a1[3002].QuadPart = __rdtsc();
  result = KeQueryPerformanceCounter(0LL);
  a1[3006] = result;
  return result;
}
