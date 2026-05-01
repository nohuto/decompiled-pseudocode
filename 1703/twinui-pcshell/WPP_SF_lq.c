/*
 * XREFs of WPP_SF_lq @ 0x180062E7C
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800642E0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_lq(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_ced7fd5ef5c7321a3730b1ba434d18ec_Traceguids, 0xFu, &v5, 4LL, va, 8LL, 0LL);
}
