/*
 * XREFs of sub_18007D284 @ 0x18007D284
 * Callers:
 *     RtlCreateHashTableEx_0 @ 0x18007D100 (RtlCreateHashTableEx_0.c)
 *     RtlExpandHashTable @ 0x18008C560 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007D284(char a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
