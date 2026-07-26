/*
 * XREFs of WPP_SF_qq_guid_qd @ 0x1C00625F8
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C00EB720 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qq_guid_qd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, 0x8Fu, va);
}
