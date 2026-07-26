/*
 * XREFs of WPP_SF_qqqqD @ 0x1C00440DC
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C00CB070 (ndisOidPreEthMulticastOid.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqD(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, 0x6Du, va);
}
