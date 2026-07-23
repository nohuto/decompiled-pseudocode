/*
 * XREFs of RtlFlushNonVolatileMemoryRanges @ 0x140250C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlDrainNonVolatileFlush @ 0x140250BB0 (RtlDrainNonVolatileFlush.c)
 *     RtlFlushNonVolatileMemory @ 0x140250BE0 (RtlFlushNonVolatileMemory.c)
 *     RtlpCheckAndFlushAllCacheIfOptimal @ 0x140250D94 (RtlpCheckAndFlushAllCacheIfOptimal.c)
 */

DWORD __cdecl RtlFlushNonVolatileMemoryRanges(PVOID NvToken, PNV_MEMORY_RANGE NvRanges, SIZE_T NumRanges, DWORD Flags)
{
  SIZE_T v5; // rdi
  PNV_MEMORY_RANGE v6; // rsi

  v5 = NumRanges;
  v6 = NvRanges;
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( ((unsigned __int8)NvToken & 2) != 0 && !(unsigned __int8)RtlpCheckAndFlushAllCacheIfOptimal(NvRanges, NumRanges) )
  {
    for ( ; v5; --v5 )
    {
      RtlFlushNonVolatileMemory(NvToken, v6->BaseAddress, v6->Length, Flags | 1);
      ++v6;
    }
    if ( (Flags & 1) == 0 )
      RtlDrainNonVolatileFlush(NvToken);
  }
  return 0;
}
