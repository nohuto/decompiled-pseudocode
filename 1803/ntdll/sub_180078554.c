/*
 * XREFs of sub_180078554 @ 0x180078554
 * Callers:
 *     RtlCreateHashTableEx_0 @ 0x1800783D0 (RtlCreateHashTableEx_0.c)
 *     RtlExpandHashTable @ 0x180089AF0 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_180078554(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
