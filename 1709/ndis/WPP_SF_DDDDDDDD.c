/*
 * XREFs of WPP_SF_DDDDDDDD @ 0x1C0050100
 * Callers:
 *     ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C00BF494 (ndisValidateMiniportDriverCharacteristicsHeader.c)
 *     ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C00BF58C (ndisValidateProtocolDriverCharacteristicsHeader.c)
 *     ndisValidateFilterDriverCharacteristicsHeader @ 0x1C00C7F48 (ndisValidateFilterDriverCharacteristicsHeader.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DDDDDDDD(unsigned __int16 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+C0h] [rbp+18h] BYREF
  int v5; // [rsp+C8h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, a1, &v4);
}
