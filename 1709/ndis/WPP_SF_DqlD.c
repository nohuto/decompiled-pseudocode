/*
 * XREFs of WPP_SF_DqlD @ 0x1C005BF1C
 * Callers:
 *     ndisReferenceProtocol @ 0x1C00062A4 (ndisReferenceProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DqlD(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  __int64 v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_4a5d38b576c633146a968e2982301690_Traceguids, 0x25u, &v4);
}
