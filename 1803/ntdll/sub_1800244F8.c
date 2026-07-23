/*
 * XREFs of sub_1800244F8 @ 0x1800244F8
 * Callers:
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     RtlInitializeResource @ 0x18005C7A0 (RtlInitializeResource.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInterlockedPopEntrySList @ 0x18009E550 (RtlInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY sub_1800244F8()
{
  PSLIST_ENTRY result; // rax
  PVOID ProcessHeap; // rcx

  result = RtlInterlockedPopEntrySList(&stru_18015D0E0);
  if ( !result )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( ProcessHeap )
      return (PSLIST_ENTRY)RtlAllocateHeap(ProcessHeap, 0, 0x30uLL);
  }
  return result;
}
