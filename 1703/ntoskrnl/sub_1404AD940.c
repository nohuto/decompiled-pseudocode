/*
 * XREFs of sub_1404AD940 @ 0x1404AD940
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     sub_1404AE1B4 @ 0x1404AE1B4 (sub_1404AE1B4.c)
 *     sub_1405CCC54 @ 0x1405CCC54 (sub_1405CCC54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404AD940(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) ^ (a7
                                                                         - (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3)));
}
