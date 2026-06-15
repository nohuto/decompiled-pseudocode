/*
 * XREFs of _lambda_e9af1581bd6c783f369e35704f6cd4a0_::operator() @ 0x18003630C
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180035998 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_7aa2d33e36a32a2890f09fc92a95f1fa___ @ 0x180035AEC (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_7aa2d33e36a32a2890f09fc92a95f.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180036178 (CEndpointCharacteristics--GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800B8308 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

char __fastcall lambda_e9af1581bd6c783f369e35704f6cd4a0_::operator()(__int64 a1, const struct tWAVEFORMATEX *a2)
{
  struct _GUID v2; // xmm0
  char v3; // bl
  CEndpointCharacteristics *v6; // rcx
  int v7; // eax
  struct _GUID v9; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(struct _GUID *)(a1 + 8);
  v3 = 0;
  v6 = *(CEndpointCharacteristics **)a1;
  v9 = v2;
  if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity((__int64)v6, 0, a2, &v9, 0, 0LL, 0LL, 0LL, 0LL) >= 0 )
    return 1;
  v7 = CEndpointCharacteristics::TryAddFormat(*(CEndpointCharacteristics **)a1, a2);
  if ( v7 >= 0 )
    return 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x173F,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7);
  return v3;
}
