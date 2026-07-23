/*
 * XREFs of sub_18000F3FC @ 0x18000F3FC
 * Callers:
 *     RtlInitializeResource @ 0x18000F220 (RtlInitializeResource.c)
 *     sub_18000F30C @ 0x18000F30C (sub_18000F30C.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A8D80 (RtlInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY sub_18000F3FC()
{
  PSLIST_ENTRY result; // rax
  PVOID ProcessHeap; // rcx

  result = RtlInterlockedPopEntrySList(&ListHead);
  if ( !result )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( ProcessHeap )
      return (PSLIST_ENTRY)RtlAllocateHeap(ProcessHeap, 0, 0x30uLL);
  }
  return result;
}
