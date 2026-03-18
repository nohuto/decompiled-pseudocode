/*
 * XREFs of EtwpAdjustFreeBuffers @ 0x140532278
 * Callers:
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x1405322C8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x1400E02E8 (EtwpAllocateFreeBuffers.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 */

__int64 __fastcall EtwpAdjustFreeBuffers(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edx
  __int64 v3; // rcx
  unsigned int UsedProcessorCount; // edi

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) == 0 )
  {
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    if ( v2 < UsedProcessorCount
      && UsedProcessorCount - v2 != (unsigned int)EtwpAllocateFreeBuffers(v3, UsedProcessorCount - v2) )
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
