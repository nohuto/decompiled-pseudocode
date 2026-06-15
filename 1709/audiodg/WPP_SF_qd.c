/*
 * XREFs of WPP_SF_qd @ 0x140036050
 * Callers:
 *     wWinMain @ 0x14001BB30 (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids, 38LL, (__int64 *)va);
}
