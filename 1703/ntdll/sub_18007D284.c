/*
 * XREFs of sub_18007D284 @ 0x18007D284
 * Callers:
 *     RtlCreateHashTableEx_0 @ 0x18007D100 (RtlCreateHashTableEx_0.c)
 *     RtlExpandHashTable @ 0x18008C560 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_18007D284(char a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
