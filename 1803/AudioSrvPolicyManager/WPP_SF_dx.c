/*
 * XREFs of WPP_SF_dx @ 0x18000BB98
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000CF30 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dx(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_32edceac6d05362bf9e379e253568d16_Traceguids, 0x20u, &v5, 4LL, va, 8LL, 0LL);
}
