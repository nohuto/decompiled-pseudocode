/*
 * XREFs of sub_180021168 @ 0x180021168
 * Callers:
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 * Callees:
 *     sub_18001EF1C @ 0x18001EF1C (sub_18001EF1C.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

__int64 __fastcall sub_180021168(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (byte_18015BFBC & 2) != 0 )
    return sub_18001EF1C(a1, a3, a4);
  else
    return sub_1800222E0(a1, 0LL, 0LL);
}
