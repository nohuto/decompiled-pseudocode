/*
 * XREFs of NdisSystemActiveProcessorCount @ 0x1C00522A0
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
