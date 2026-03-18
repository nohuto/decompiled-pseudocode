/*
 * XREFs of sub_1404AD970 @ 0x1404AD970
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     sub_1404AE1B4 @ 0x1404AE1B4 (sub_1404AE1B4.c)
 *     sub_1405CCC54 @ 0x1405CCC54 (sub_1405CCC54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404AD970(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1)
       + (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
       * __ROL4__(
           a7 ^ *(unsigned __int16 *)(a6 + 2LL * ((a1 + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)),
           a3 % 7 + 1);
}
