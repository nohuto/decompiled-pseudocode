/*
 * XREFs of WPP_SF_llL @ 0x1C0044468
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C001CD40 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C0040E28 (-ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_llL(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, &v4);
}
