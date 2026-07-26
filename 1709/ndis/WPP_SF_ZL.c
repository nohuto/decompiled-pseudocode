/*
 * XREFs of WPP_SF_ZL @ 0x1C005BF80
 * Callers:
 *     ndisValidate60Protocol @ 0x1C00BF40C (ndisValidate60Protocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00E67D0 (ndisValidateLegacyProtocols.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_ZL(unsigned __int16 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v5; // rax
  const wchar_t *v6; // rcx
  int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = a4;
  if ( a3 )
    v5 = *a3;
  else
    v5 = 8LL;
  if ( a3 )
    v6 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v6 = L"NULL";
  if ( !a3 )
    a3 = L"\b";
  ndisWppFastTraceMessage(&WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1, a3, 2LL, v6, v5, &v7, 4LL, 0LL);
}
