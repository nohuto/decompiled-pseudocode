/*
 * XREFs of _lambda_5aa216c7af6f6fd7b6ce6477cfaab2f2_::_lambda_invoker_cdecl_ @ 0x1800CB610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_5aa216c7af6f6fd7b6ce6477cfaab2f2_::_lambda_invoker_cdecl_(
        HMONITOR a1,
        HDC a2,
        LPRECT a3,
        __int64 a4)
{
  if ( a1 != *(HMONITOR *)a4 )
    *(_QWORD *)(a4 + 8) = a1;
  return 1LL;
}
