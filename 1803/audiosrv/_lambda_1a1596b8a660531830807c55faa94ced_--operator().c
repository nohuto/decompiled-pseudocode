/*
 * XREFs of _lambda_1a1596b8a660531830807c55faa94ced_::operator() @ 0x1800644F4
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180063A9C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_1a1596b8a660531830807c55faa94ced__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002f0c___ @ 0x180063BF0 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_cedc6ccb2a1b55ee01e4758a9e002.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x18006428C (CEndpointCharacteristics--GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800ED3F8 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

char __fastcall lambda_1a1596b8a660531830807c55faa94ced_::operator()(__int64 a1, struct tWAVEFORMATEX *a2)
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
    (void *)0x1763,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7,
    v9);
  return v3;
}
