/*
 * XREFs of sub_1405C2E40 @ 0x1405C2E40
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     sub_14054A478 @ 0x14054A478 (sub_14054A478.c)
 *     sub_14064A1CC @ 0x14064A1CC (sub_14064A1CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405C2E40(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return *(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROL4__(a7 ^ *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)), a3 % 7 + 1)
       - (a7 >> (a4 % 0xF + 1));
}
