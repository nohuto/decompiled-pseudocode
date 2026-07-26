/*
 * XREFs of WPP_SF_qqqDD @ 0x1C0044014
 * Callers:
 *     ndisMOidRequest @ 0x1C000A070 (ndisMOidRequest.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C001AFD0 (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00C4A78 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00CB110 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00F2B30 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F2DE0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00F32B0 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
