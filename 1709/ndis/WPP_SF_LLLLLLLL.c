/*
 * XREFs of WPP_SF_LLLLLLLL @ 0x1C005E834
 * Callers:
 *     ndisMIndicateQosParametersChange @ 0x1C005F8B4 (ndisMIndicateQosParametersChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_LLLLLLLL(__int64 a1, __int64 a2, int a3)
{
  int v3; // [rsp+E8h] [rbp+47h] BYREF

  v3 = a3;
  ndisWppFastTraceMessage(&WPP_89f39f5878d93d725c4978a535989123_Traceguids, 0xA8u, &v3);
}
