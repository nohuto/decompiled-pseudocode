/*
 * XREFs of WPP_SF_qLLq @ 0x1C005EDFC
 * Callers:
 *     NdisAllocateGenericObject @ 0x1C00221A0 (NdisAllocateGenericObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, 0x83u, &v4);
}
