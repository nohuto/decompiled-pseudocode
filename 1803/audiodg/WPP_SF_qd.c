/*
 * XREFs of WPP_SF_qd @ 0x140034CA4
 * Callers:
 *     WinMain @ 0x14001AC3C (WinMain.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids, 38LL, (__int64 *)va);
}
