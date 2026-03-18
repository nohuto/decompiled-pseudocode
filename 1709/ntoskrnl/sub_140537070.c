/*
 * XREFs of sub_140537070 @ 0x140537070
 * Callers:
 *     sub_1404F4A90 @ 0x1404F4A90 (sub_1404F4A90.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     sub_1405E16D0 @ 0x1405E16D0 (sub_1405E16D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140537070(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (__ROR4__(a7, a2 % 0xF + 1) - *(unsigned __int16 *)(a6 + 2LL * (a1 & 3)))
       * (unsigned int)*(unsigned __int16 *)(a6 + 2LL * ((a1 + (unsigned __int8)(a3 / 3) + (_BYTE)a3 + 1) & 3));
}
