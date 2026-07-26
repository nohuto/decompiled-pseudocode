/*
 * XREFs of WPP_SF_qqqDD @ 0x1C0042EC8
 * Callers:
 *     ndisMOidRequest @ 0x1C00094B0 (ndisMOidRequest.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C000F77C (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00C232C (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00C2958 (ndisSetOpenEthMulticastList.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00EFF20 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F0200 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00F0700 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
