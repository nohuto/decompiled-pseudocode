/*
 * XREFs of sub_1800F97B4 @ 0x1800F97B4
 * Callers:
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006E970 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FA90 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F97B4(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 4) + 1 >= *(unsigned __int16 *)(a1 + 6) )
    return sub_1800FA060();
  return a1;
}
