/*
 * XREFs of WPP_SF_qqqDD @ 0x1C0045D28
 * Callers:
 *     ndisMOidRequest @ 0x1C000C330 (ndisMOidRequest.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C001A4D4 (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00A7EEC (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00BA148 (ndisSetOpenEthMulticastList.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00E6900 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00E6BF0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00E70F0 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
