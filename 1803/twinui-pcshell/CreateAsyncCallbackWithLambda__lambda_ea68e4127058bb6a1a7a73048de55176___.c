/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_ea68e4127058bb6a1a7a73048de55176___ @ 0x180138EC0
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x180139BD4 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_ea68e4127058bb6a1a7a73048de55176___::CAsyncCallbackWithLambda__lambda_ea68e4127058bb6a1a7a73048de55176___ @ 0x18013A008 (CAsyncCallbackWithLambda__lambda_ea68e4127058bb6a1a7a73048de55176___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_ea68e4127058bb6a1a7a73048de55176_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CAsyncCallbackWithLambda__lambda_ea68e4127058bb6a1a7a73048de55176___::CAsyncCallbackWithLambda__lambda_ea68e4127058bb6a1a7a73048de55176___(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
