/*
 * XREFs of sub_1405F3CBC @ 0x1405F3CBC
 * Callers:
 *     sub_1402B8630 @ 0x1402B8630 (sub_1402B8630.c)
 *     ExpGenuinePolicyPostProcess @ 0x140549E30 (ExpGenuinePolicyPostProcess.c)
 *     ExpGenuinePolicyCacheProvider @ 0x14054A090 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGetVMActivationStatus @ 0x1405F36F0 (ExpGetVMActivationStatus.c)
 *     ExActivateVMWithSubscription @ 0x1407BDA5C (ExActivateVMWithSubscription.c)
 *     sub_1407BE790 @ 0x1407BE790 (sub_1407BE790.c)
 *     sub_1407BE900 @ 0x1407BE900 (sub_1407BE900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405F3CBC(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
