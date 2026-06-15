/*
 * XREFs of WPP_SF_qdddd @ 0x1800A9974
 * Callers:
 *     _lambda_1db29b91fe83cd587f401559df8dfd07_::operator() @ 0x1800A8524 (_lambda_1db29b91fe83cd587f401559df8dfd07_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdddd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+A8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_c0d3f1d39da7343a6f5ac3fe6f252d19_Traceguids, 13LL, (__int64 *)va);
}
