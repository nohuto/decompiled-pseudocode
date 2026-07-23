/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1800E4A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18005F480 (RtlQueryPerformanceCounter.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  LARGE_INTEGER v4; // rsi
  __int64 v5; // r14
  LARGE_INTEGER v6; // rdx
  __int64 v7; // rdx
  LARGE_INTEGER PerformanceCountera; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  while ( 1 )
  {
    v3 = MEMORY[0x7FFE0340];
    if ( (MEMORY[0x7FFE0340] & 1) == 0 )
    {
      v4.QuadPart = MEMORY[0x7FFE0350];
      v5 = MEMORY[0x7FFE0008];
      RtlQueryPerformanceCounter(&PerformanceCountera);
      if ( MEMORY[0x7FFE0340] == v3 )
        break;
    }
    _mm_pause();
  }
  v6 = PerformanceCountera;
  *PerformanceCounter = PerformanceCountera;
  if ( v6.QuadPart > (unsigned __int64)v4.QuadPart )
  {
    v7 = -1 - v4.QuadPart + v6.QuadPart;
    if ( MEMORY[0x7FFE0369] )
      v7 <<= MEMORY[0x7FFE0369];
    v2 = ((unsigned __int64)v7 * (unsigned __int128)MEMORY[0x7FFE0360]) >> 64;
  }
  return (LARGE_INTEGER)(v5 + v2);
}
