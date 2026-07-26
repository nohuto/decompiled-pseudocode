/*
 * XREFs of WPP_SF_qLLqD @ 0x1C00532B8
 * Callers:
 *     NdisClCloseCall @ 0x1C01060C0 (NdisClCloseCall.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLqD(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+90h] [rbp+18h] BYREF
  int v5; // [rsp+98h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, 0x25u, &v4);
}
