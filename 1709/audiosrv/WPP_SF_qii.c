/*
 * XREFs of WPP_SF_qii @ 0x180097EFC
 * Callers:
 *     _lambda_5a68afdee1007d1f03f75fec1294609b_::operator() @ 0x180096138 (_lambda_5a68afdee1007d1f03f75fec1294609b_--operator().c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qii(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_1c09718e5e7b33997c2f06ecaa90c919_Traceguids, 10LL, (__int64 *)va);
}
