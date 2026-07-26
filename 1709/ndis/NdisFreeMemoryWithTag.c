/*
 * XREFs of NdisFreeMemoryWithTag @ 0x1C001F620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeMemoryWithTag(PVOID VirtualAddress, ULONG Tag)
{
  ExFreePoolWithTag(VirtualAddress, Tag);
}
