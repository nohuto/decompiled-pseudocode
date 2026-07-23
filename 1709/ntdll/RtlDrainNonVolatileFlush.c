/*
 * XREFs of RtlDrainNonVolatileFlush @ 0x1800F4A60
 * Callers:
 *     RtlFlushNonVolatileMemory @ 0x1800F4A90 (RtlFlushNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x1800F4B20 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlDrainNonVolatileFlush(PVOID NvToken)
{
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( RtlpIsDrainRequired )
  {
    if ( ((unsigned __int8)NvToken & 2) != 0 )
      _mm_sfence();
  }
  return 0;
}
