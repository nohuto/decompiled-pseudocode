/*
 * XREFs of RtlDrainNonVolatileFlush @ 0x1800F3DE0
 * Callers:
 *     RtlFlushNonVolatileMemory @ 0x1800F3E10 (RtlFlushNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x1800F3EA0 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDrainNonVolatileFlush(char a1)
{
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( byte_18015C778 )
  {
    if ( (a1 & 2) != 0 )
      _mm_sfence();
  }
  return 0LL;
}
