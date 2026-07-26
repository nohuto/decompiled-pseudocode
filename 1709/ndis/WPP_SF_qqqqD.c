/*
 * XREFs of WPP_SF_qqqqD @ 0x1C0042FF0
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C00C2290 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqD(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, 0x70u, va);
}
