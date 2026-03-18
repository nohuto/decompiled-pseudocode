/*
 * XREFs of sub_140757628 @ 0x140757628
 * Callers:
 *     sub_140284010 @ 0x140284010 (sub_140284010.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404F46A0 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x14059B6E0 (ExpGenuinePolicyPostProcess.c)
 *     sub_140757A20 @ 0x140757A20 (sub_140757A20.c)
 *     sub_140757B90 @ 0x140757B90 (sub_140757B90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140757628(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}
