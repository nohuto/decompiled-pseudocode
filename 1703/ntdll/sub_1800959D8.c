/*
 * XREFs of sub_1800959D8 @ 0x1800959D8
 * Callers:
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 * Callees:
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

bool __fastcall sub_1800959D8(int a1, unsigned __int64 a2)
{
  __int64 v2; // rdx

  if ( (unsigned __int16)a1 ^ (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(a2 + 8) ^ (a2 >> 4)) )
    v2 = 0LL;
  else
    v2 = *(_QWORD *)(a2 - ((a1 ^ (unsigned int)qword_18015BFE8 ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)(a2 >> 4)) >> 12));
  return v2 == **(_QWORD **)(v2 + 8);
}
