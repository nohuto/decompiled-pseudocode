/*
 * XREFs of WPP_SF_q_guid_d @ 0x1C0062540
 * Callers:
 *     ndisLWMCreateMiniport @ 0x1C00EC7B8 (ndisLWMCreateMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_q_guid_d(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, 0x8Cu, &v4, 8LL, a4, 16LL, va, 4LL, 0LL);
}
