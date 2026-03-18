/*
 * XREFs of sub_140537410 @ 0x140537410
 * Callers:
 *     sub_1404F4A90 @ 0x1404F4A90 (sub_1404F4A90.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     sub_1405E16D0 @ 0x1405E16D0 (sub_1405E16D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140537410(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) ^ (a7
                                                                         - (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3)));
}
