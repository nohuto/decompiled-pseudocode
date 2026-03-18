/*
 * XREFs of sub_1405957E0 @ 0x1405957E0
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     sub_1404AE1B4 @ 0x1404AE1B4 (sub_1404AE1B4.c)
 *     sub_1405CCC54 @ 0x1405CCC54 (sub_1405CCC54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405957E0(
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
