/*
 * XREFs of WPP_SF_qDL @ 0x1C005EC90
 * Callers:
 *     ndisMOidRequest @ 0x1C000C330 (ndisMOidRequest.c)
 *     ndisReferenceOpenByHandle @ 0x1C001ADA0 (ndisReferenceOpenByHandle.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qDL(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, 0x6Cu, &v4, 8LL, &v5, 4LL, va, 4LL, 0LL);
}
