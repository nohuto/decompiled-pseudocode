/*
 * XREFs of WPP_SF_DDZ @ 0x1C0050AE4
 * Callers:
 *     ndisValidateFilterDriverCharacteristicsHeader @ 0x1C00C203C (ndisValidateFilterDriverCharacteristicsHeader.c)
 *     ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C00C20F8 (ndisValidateProtocolDriverCharacteristicsHeader.c)
 *     ndisValidateLWMiniportDriverCharacteristicsHeader @ 0x1C00E53B4 (ndisValidateLWMiniportDriverCharacteristicsHeader.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DDZ(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  int v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_7638764ccf46397224acdca5d7787036_Traceguids, a1, &v4);
}
