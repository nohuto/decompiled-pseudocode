/*
 * XREFs of WPP_SF__guid_d @ 0x18002D7D8
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x18002D4AC (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF__guid_d(TRACEHANDLE a1, USHORT a2, __int64 a3, __int64 a4, ...)
{
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  return TraceMessage(a1, 0x2Bu, &WPP_03dcbebc30ad3319d95ddb220d5108d7_Traceguids, a2, a4, 16LL, va, 4LL, 0LL);
}
