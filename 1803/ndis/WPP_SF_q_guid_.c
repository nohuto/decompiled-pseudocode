/*
 * XREFs of WPP_SF_q_guid_ @ 0x1C00624FC
 * Callers:
 *     ndisLWMCreateMiniport @ 0x1C00EC7B8 (ndisLWMCreateMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_q_guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // [rsp+60h] [rbp+18h] BYREF

  v4 = a3;
  ndisWppFastTraceMessage(&WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, 0x86u, &v4, 8LL, a4, 16LL, 0LL);
}
