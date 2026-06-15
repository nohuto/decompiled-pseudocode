/*
 * XREFs of WPP_SF_q @ 0x180016D38
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180016D74 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B684 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_q(TRACEHANDLE a1, __int64 a2, const GUID *a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, a3, 0xBu, va, 8LL, 0LL);
}
