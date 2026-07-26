/*
 * XREFs of NdisSystemActiveProcessorCount @ 0x1C0051A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisSystemActiveProcessorCount(PKAFFINITY ActiveProcessors)
{
  KAFFINITY GroupAffinity; // rax

  GroupAffinity = KeQueryGroupAffinity(0);
  *ActiveProcessors = GroupAffinity;
  return RtlNumberOfSetBitsUlongPtr(GroupAffinity);
}
