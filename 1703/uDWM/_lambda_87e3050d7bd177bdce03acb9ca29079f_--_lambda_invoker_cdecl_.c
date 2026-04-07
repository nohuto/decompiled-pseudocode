/*
 * XREFs of _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_ @ 0x1800728F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x1800A3400 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

unsigned int lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_()
{
  unsigned int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(&`UDwmTrace::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)wil::TraceLoggingProvider::`vector deleting destructor'(
                             (wil::TraceLoggingProvider *)Context,
                             0);
  }
  return result;
}
