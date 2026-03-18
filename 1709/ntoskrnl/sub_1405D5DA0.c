/*
 * XREFs of sub_1405D5DA0 @ 0x1405D5DA0
 * Callers:
 *     sub_1404F4A90 @ 0x1404F4A90 (sub_1404F4A90.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     sub_1405E16D0 @ 0x1405E16D0 (sub_1405E16D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405D5DA0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1)
       + (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROR4__(*(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) - a7, a3 % 0x1F + 1);
}
