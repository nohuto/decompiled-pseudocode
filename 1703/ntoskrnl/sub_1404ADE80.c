/*
 * XREFs of sub_1404ADE80 @ 0x1404ADE80
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     sub_1404AE1B4 @ 0x1404AE1B4 (sub_1404AE1B4.c)
 *     sub_1405CCC54 @ 0x1405CCC54 (sub_1405CCC54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404ADE80(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return (a7 >> (a3 % 0xF + 1))
       + *(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * (a7 ^ *(unsigned __int16 *)(a6 + 2LL * ((a1 + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)));
}
