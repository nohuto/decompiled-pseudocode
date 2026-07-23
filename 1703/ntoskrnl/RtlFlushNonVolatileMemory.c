/*
 * XREFs of RtlFlushNonVolatileMemory @ 0x14023B330
 * Callers:
 *     RtlFlushNonVolatileMemoryRanges @ 0x14023B3E0 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14003BC50 (KeInvalidateAllCaches.c)
 *     RtlDrainNonVolatileFlush @ 0x14023B300 (RtlDrainNonVolatileFlush.c)
 */

DWORD __cdecl RtlFlushNonVolatileMemory(PVOID NvToken, PVOID NvBuffer, SIZE_T Size, DWORD Flags)
{
  char *v7; // rdx

  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( ((unsigned __int8)NvToken & 2) != 0 )
  {
    _RCX = (char *)((unsigned __int64)NvBuffer & ~(RtlpClFlushSize - 1));
    v7 = (char *)NvBuffer + Size;
    if ( RtlpOptimalFlushMethod == 2 )
    {
      while ( _RCX < v7 )
      {
        __asm { clwb    byte ptr [rcx] }
        _RCX += RtlpClFlushSize;
      }
    }
    else
    {
      if ( Size >= (unsigned int)KiLargestCacheSize )
      {
        KeInvalidateAllCaches();
        return 0;
      }
      if ( RtlpOptimalFlushMethod == 3 )
      {
        while ( _RCX < v7 )
        {
          __asm { clflushopt byte ptr [rcx] }
          _RCX += RtlpClFlushSize;
        }
      }
      else
      {
        while ( _RCX < v7 )
        {
          _mm_clflush(_RCX);
          _RCX += RtlpClFlushSize;
        }
      }
    }
    if ( (Flags & 1) == 0 )
      RtlDrainNonVolatileFlush(NvToken);
  }
  return 0;
}
