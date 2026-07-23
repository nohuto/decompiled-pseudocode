/*
 * XREFs of RtlCreateHashTableEx @ 0x14015D120
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHashTable @ 0x140102000 (RtlpCreateHashTable.c)
 */

char __fastcall RtlCreateHashTableEx(_RTL_DYNAMIC_HASH_TABLE **a1, unsigned int a2, unsigned int a3, int a4)
{
  return RtlpCreateHashTable(a1, a2, a3, a4);
}
