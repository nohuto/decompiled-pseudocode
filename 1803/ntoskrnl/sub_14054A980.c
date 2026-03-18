/*
 * XREFs of sub_14054A980 @ 0x14054A980
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     sub_14054A478 @ 0x14054A478 (sub_14054A478.c)
 *     sub_14064A1CC @ 0x14064A1CC (sub_14064A1CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14054A980(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * ((a1 - 1) & 1)) - (a7 ^ *(_DWORD *)(a6 + 4LL * (a1 & 1)));
}
