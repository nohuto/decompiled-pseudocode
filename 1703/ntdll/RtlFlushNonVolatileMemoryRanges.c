/*
 * XREFs of RtlFlushNonVolatileMemoryRanges @ 0x1800F3EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDrainNonVolatileFlush @ 0x1800F3DE0 (RtlDrainNonVolatileFlush.c)
 *     RtlFlushNonVolatileMemory @ 0x1800F3E10 (RtlFlushNonVolatileMemory.c)
 */

DWORD __cdecl RtlFlushNonVolatileMemoryRanges(PVOID NvToken, PNV_MEMORY_RANGE NvRanges, SIZE_T NumRanges, DWORD Flags)
{
  SIZE_T v5; // rdi

  v5 = NumRanges;
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( ((unsigned __int8)NvToken & 2) != 0 )
  {
    if ( NumRanges )
    {
      do
      {
        RtlFlushNonVolatileMemory(NvToken, NvRanges->BaseAddress, NvRanges->Length, Flags | 1);
        ++NvRanges;
        --v5;
      }
      while ( v5 );
    }
    if ( (Flags & 1) == 0 )
      RtlDrainNonVolatileFlush(NvToken);
  }
  return 0;
}
