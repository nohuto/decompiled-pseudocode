/*
 * XREFs of WPP_SF__guid_d @ 0x180024AB8
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180024798 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF__guid_d(TRACEHANDLE a1, USHORT a2, __int64 a3, __int64 a4, ...)
{
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  return TraceMessage(a1, 0x2Bu, &WPP_ce484bacb46c3a789a66ea923e614e2c_Traceguids, a2, a4, 16LL, va, 4LL, 0LL);
}
