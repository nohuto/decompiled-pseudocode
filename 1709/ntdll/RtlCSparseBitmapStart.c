/*
 * XREFs of RtlCSparseBitmapStart @ 0x180105B50
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800EEF80 (RtlInitializeHeapManager.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlCSparseBitmapStart()
{
  __int64 result; // rax

  result = ZwAllocateVirtualMemory();
  if ( (int)result >= 0 )
  {
    RtlpHpAllocTrackerBitmap = qword_18015D6A8 + 0x2000000;
    qword_18015D6B0 = 0x10000000LL;
    result = ZwAllocateVirtualMemory();
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
