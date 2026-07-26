/*
 * XREFs of WPP_SF_qDqLqD @ 0x1C0042C8C
 * Callers:
 *     ndisValidateQosParameters @ 0x1C0047B00 (ndisValidateQosParameters.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qDqLqD(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+B0h] [rbp+18h] BYREF
  int v5; // [rsp+B8h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, 0x98u, &v4);
}
