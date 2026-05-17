/*
 * XREFs of RtlDrainNonVolatileFlush @ 0x1800F0F00
 * Callers:
 *     RtlFlushNonVolatileMemory @ 0x1800F0F30 (RtlFlushNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x1800F0FC0 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDrainNonVolatileFlush(char a1)
{
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( byte_18015D7A8 )
  {
    if ( (a1 & 2) != 0 )
      _mm_sfence();
  }
  return 0LL;
}
