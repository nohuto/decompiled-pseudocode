/*
 * XREFs of NdisFreeMemoryWithTagPriority @ 0x1C0051FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeMemoryWithTagPriority(NDIS_HANDLE NdisHandle, PVOID VirtualAddress, ULONG Tag)
{
  ExFreePoolWithTag(VirtualAddress, Tag);
}
