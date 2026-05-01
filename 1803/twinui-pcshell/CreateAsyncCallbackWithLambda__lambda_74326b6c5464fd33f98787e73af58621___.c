/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_74326b6c5464fd33f98787e73af58621___ @ 0x180138E70
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x180139A50 (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_74326b6c5464fd33f98787e73af58621___::CAsyncCallbackWithLambda__lambda_74326b6c5464fd33f98787e73af58621___ @ 0x180139FA8 (CAsyncCallbackWithLambda__lambda_74326b6c5464fd33f98787e73af58621___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_74326b6c5464fd33f98787e73af58621_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax

  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = CAsyncCallbackWithLambda__lambda_74326b6c5464fd33f98787e73af58621___::CAsyncCallbackWithLambda__lambda_74326b6c5464fd33f98787e73af58621___(
           v5,
           a2);
  result = a1;
  *a1 = v4;
  return result;
}
