/*
 * XREFs of sub_14054B230 @ 0x14054B230
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     sub_14054A478 @ 0x14054A478 (sub_14054A478.c)
 *     sub_14064A1CC @ 0x14064A1CC (sub_14064A1CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14054B230(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROR4__(*(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) - a7, a3 % 0x1F + 1)
       - __ROR4__(a7, a4 % 0x1F + 1);
}
