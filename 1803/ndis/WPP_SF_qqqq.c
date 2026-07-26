/*
 * XREFs of WPP_SF_qqqq @ 0x1C0044080
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A5C (ndisDoDirectOidRequest.c)
 *     ndisOidPreEthMulticastList @ 0x1C00C49B0 (ndisOidPreEthMulticastList.c)
 *     ndisOidPreEthMulticastOid @ 0x1C00CB070 (ndisOidPreEthMulticastOid.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00F2B30 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F2DE0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00F32B0 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqq(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
