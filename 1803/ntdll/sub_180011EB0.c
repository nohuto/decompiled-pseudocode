/*
 * XREFs of sub_180011EB0 @ 0x180011EB0
 * Callers:
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 * Callees:
 *     sub_180011148 @ 0x180011148 (sub_180011148.c)
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_180011EB0(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (byte_18015D028 & 2) != 0 )
    return sub_180011148(a1, a3, a4);
  else
    return sub_180013D40(a1, 0LL, 0LL);
}
