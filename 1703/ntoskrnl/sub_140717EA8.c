/*
 * XREFs of sub_140717EA8 @ 0x140717EA8
 * Callers:
 *     sub_14025A8D0 @ 0x14025A8D0 (sub_14025A8D0.c)
 *     ExpGenuinePolicyPostProcess @ 0x140459860 (ExpGenuinePolicyPostProcess.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404AE480 (ExpGenuinePolicyCacheProvider.c)
 *     sub_140718340 @ 0x140718340 (sub_140718340.c)
 *     sub_1407184B0 @ 0x1407184B0 (sub_1407184B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140717EA8(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
