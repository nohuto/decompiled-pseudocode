/*
 * XREFs of RtlpPerformHeapMaintenance @ 0x180006DA4
 * Callers:
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180006DF0 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpInitializeUCRIndex @ 0x180087F70 (RtlpInitializeUCRIndex.c)
 */

__int64 __fastcall RtlpPerformHeapMaintenance(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 120);
  if ( (v1 & 0x20000000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = v1 & 0xDFFFFFFF;
    if ( (RtlpDisableHeapLookaside & 1) == 0 )
      RtlpActivateLowFragmentationHeap();
  }
  result = *(unsigned int *)(a1 + 120);
  if ( (result & 0x10000000) != 0 )
  {
    *(_DWORD *)(a1 + 120) = result & 0xEFFFFFFF;
    result = RtlpInitializeUCRIndex(a1);
    *(_DWORD *)(a1 + 120) &= ~0x10000000u;
  }
  return result;
}
