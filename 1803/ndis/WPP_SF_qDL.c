/*
 * XREFs of WPP_SF_qDL @ 0x1C005F414
 * Callers:
 *     ndisMOidRequest @ 0x1C000A070 (ndisMOidRequest.c)
 *     ndisReferenceOpenByHandle @ 0x1C001C400 (ndisReferenceOpenByHandle.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qDL(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, 0x70u, &v4, 8LL, &v5, 4LL, va, 4LL, 0LL);
}
