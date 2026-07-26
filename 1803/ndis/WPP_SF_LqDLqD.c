/*
 * XREFs of WPP_SF_LqDLqD @ 0x1C005290C
 * Callers:
 *     NdisCmCloseCallComplete @ 0x1C0111940 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C0111D60 (NdisCmMakeCallComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_LqDLqD(unsigned __int16 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v5; // [rsp+A8h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, a1, &v4);
}
