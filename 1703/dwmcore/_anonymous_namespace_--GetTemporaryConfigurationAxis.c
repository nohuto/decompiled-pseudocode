/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180188928
 * Callers:
 *     CChainingHelper::RunForAllAxes__lambda_1e5d9756e7d7dec37c99f750d2178ac8___ @ 0x1801885EC (CChainingHelper--RunForAllAxes__lambda_1e5d9756e7d7dec37c99f750d2178ac8___.c)
 *     CChainingHelper::RunForAllAxes__lambda_23f88ebc045d49f831271d5759945fa1___ @ 0x180188674 (CChainingHelper--RunForAllAxes__lambda_23f88ebc045d49f831271d5759945fa1___.c)
 *     CChainingHelper::RunForAllAxes__lambda_408235350fb3fde3f1635dd6a9cd52f4___ @ 0x1801886D0 (CChainingHelper--RunForAllAxes__lambda_408235350fb3fde3f1635dd6a9cd52f4___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetTemporaryConfigurationAxis(int a1)
{
  int v1; // ecx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
      return 1LL;
    if ( v1 == 1 )
      return 2LL;
  }
  return 0LL;
}
