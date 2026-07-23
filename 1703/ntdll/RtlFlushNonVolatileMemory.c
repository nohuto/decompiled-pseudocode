/*
 * XREFs of RtlFlushNonVolatileMemory @ 0x1800F3E10
 * Callers:
 *     RtlFlushNonVolatileMemoryRanges @ 0x1800F3EA0 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     RtlDrainNonVolatileFlush @ 0x1800F3DE0 (RtlDrainNonVolatileFlush.c)
 */

DWORD __cdecl RtlFlushNonVolatileMemory(PVOID NvToken, PVOID NvBuffer, SIZE_T Size, DWORD Flags)
{
  char *v7; // rdx

  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( ((unsigned __int8)NvToken & 2) != 0 )
  {
    _RCX = (char *)((unsigned __int64)NvBuffer & ~(qword_180158E10 - 1));
    v7 = (char *)NvBuffer + Size;
    if ( dword_180158E08 == 2 )
    {
      while ( _RCX < v7 )
      {
        __asm { clwb    byte ptr [rcx] }
        _RCX += qword_180158E10;
      }
    }
    else if ( dword_180158E08 == 3 )
    {
      while ( _RCX < v7 )
      {
        __asm { clflushopt byte ptr [rcx] }
        _RCX += qword_180158E10;
      }
    }
    else
    {
      while ( _RCX < v7 )
      {
        _mm_clflush(_RCX);
        _RCX += qword_180158E10;
      }
    }
    if ( (Flags & 1) == 0 )
      RtlDrainNonVolatileFlush(NvToken);
  }
  return 0;
}
