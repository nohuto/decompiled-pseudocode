/*
 * XREFs of SharedAlloc @ 0x1C008E8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(unsigned int a1)
{
  return RtlAllocateHeap(gpvSharedAlloc, 0, a1);
}
