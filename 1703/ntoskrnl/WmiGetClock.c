/*
 * XREFs of WmiGetClock @ 0x140253190
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140110620 (RtlGetSystemTimePrecise.c)
 */

unsigned __int64 __fastcall WmiGetClock(int a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( a1 != 2 )
    {
      if ( a1 > 2 )
      {
        if ( a1 <= 4 )
          return result;
        if ( a1 == 5 )
          return __rdtsc();
      }
      return RtlGetSystemTimePrecise().QuadPart;
    }
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  if ( byte_140344E01[0] != 2 )
  {
    if ( byte_140344E01[0] == 3 )
      return __rdtsc();
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  return RtlGetSystemTimePrecise().QuadPart;
}
