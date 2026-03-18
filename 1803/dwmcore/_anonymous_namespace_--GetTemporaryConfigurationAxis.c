/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x1801CBD14
 * Callers:
 *     CChainingHelper::RunForAllAxes__lambda_9831007705b0f4d267106dea29ac4646___ @ 0x1801CB9D8 (CChainingHelper--RunForAllAxes__lambda_9831007705b0f4d267106dea29ac4646___.c)
 *     CChainingHelper::RunForAllAxes__lambda_9e8ecf3c7f6848e5332ae430354ee41d___ @ 0x1801CBA34 (CChainingHelper--RunForAllAxes__lambda_9e8ecf3c7f6848e5332ae430354ee41d___.c)
 *     CChainingHelper::RunForAllAxes__lambda_d0631281dbe1e95b934945217ec19a3c___ @ 0x1801CBAB8 (CChainingHelper--RunForAllAxes__lambda_d0631281dbe1e95b934945217ec19a3c___.c)
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
