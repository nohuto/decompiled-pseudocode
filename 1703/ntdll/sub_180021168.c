/*
 * XREFs of sub_180021168 @ 0x180021168
 * Callers:
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 * Callees:
 *     sub_18001EF1C @ 0x18001EF1C (sub_18001EF1C.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

__int64 __fastcall sub_180021168(int a1, int a2, int a3, __int64 a4)
{
  if ( (byte_18015BFBC & 2) != 0 )
    return sub_18001EF1C(a1, a3, a4, a2);
  else
    return sub_1800222E0(a1, a2, a3, a4, 0LL, 0LL);
}
