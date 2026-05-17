/*
 * XREFs of sub_1800FB628 @ 0x1800FB628
 * Callers:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006C490 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006E400 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FB628(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 4) + 1 >= *(unsigned __int16 *)(a1 + 6) )
    return sub_1800FBC6C();
  return a1;
}
