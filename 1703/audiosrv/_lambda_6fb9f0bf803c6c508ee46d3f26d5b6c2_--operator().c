/*
 * XREFs of _lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_::operator() @ 0x18004C854
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004B930 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c141487702b332cfbac99d1239064ae6___ @ 0x18004BA84 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_c141487702b332cfbac99d1239064.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C114 (CEndpointCharacteristics--GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BEE48 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

char __fastcall lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_::operator()(__int64 a1, struct tWAVEFORMATEX *a2)
{
  struct _GUID v2; // xmm0
  char v3; // bl
  CEndpointCharacteristics *v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-48h]
  struct _GUID v10; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(struct _GUID *)(a1 + 8);
  v3 = 0;
  v6 = *(CEndpointCharacteristics **)a1;
  v10 = v2;
  if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
              (__int64)v6,
              0,
              &a2->wFormatTag,
              &v10,
              0,
              0LL,
              0LL,
              0LL,
              0LL) >= 0 )
    return 1;
  v7 = CEndpointCharacteristics::TryAddFormat(*(CEndpointCharacteristics **)a1, a2);
  if ( v7 >= 0 )
    return 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x16D5,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7,
    v9);
  return v3;
}
