/*
 * XREFs of WPP_SF_LLLLLLLL @ 0x1C005F234
 * Callers:
 *     ndisMIndicateQosParametersChange @ 0x1C0060398 (ndisMIndicateQosParametersChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_LLLLLLLL(__int64 a1, __int64 a2, int a3)
{
  int v3; // [rsp+E8h] [rbp+47h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, 0xABu, &v3);
}
