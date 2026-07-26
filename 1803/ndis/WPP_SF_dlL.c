/*
 * XREFs of WPP_SF_dlL @ 0x1C004207C
 * Callers:
 *     NdisIfFreeNetLuidIndex @ 0x1C00B2770 (NdisIfFreeNetLuidIndex.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_dlL(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, 0x2Au, &v4);
}
