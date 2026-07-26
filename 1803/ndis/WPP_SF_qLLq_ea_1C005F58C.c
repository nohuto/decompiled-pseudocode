/*
 * XREFs of WPP_SF_qLLq @ 0x1C005F58C
 * Callers:
 *     NdisAllocateGenericObject @ 0x1C00244C0 (NdisAllocateGenericObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, 0x8Du, &v4);
}
