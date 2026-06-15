/*
 * XREFs of WPP_SF_qDD @ 0x1800CE0C8
 * Callers:
 *     _lambda_a052ec7a367690e77a30e2131715db58_::operator() @ 0x1800CC488 (_lambda_a052ec7a367690e77a30e2131715db58_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qDD(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_35c1dff30a9531bf8bd5d9236476b079_Traceguids, 11LL, (__int64 *)va);
}
