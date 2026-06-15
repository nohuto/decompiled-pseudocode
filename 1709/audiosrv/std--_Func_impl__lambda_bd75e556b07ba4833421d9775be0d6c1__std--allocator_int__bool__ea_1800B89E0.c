/*
 * XREFs of std::_Func_impl__lambda_bd75e556b07ba4833421d9775be0d6c1__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x1800B89E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x1800B6898 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 *     ?IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800B694C (-IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 */

bool __fastcall std::_Func_impl__lambda_bd75e556b07ba4833421d9775be0d6c1__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call(
        __int64 a1,
        const struct WAVEFORMATEXTENSIBLE **a2)
{
  const struct WAVEFORMATEXTENSIBLE *v2; // rbx
  __int64 v5; // rcx
  struct _GUID v6; // [rsp+50h] [rbp-18h] BYREF

  v2 = *a2;
  if ( CEndpointCharacteristics::IsDolbyMatFormat(*a2)
    && CEndpointCharacteristics::IsCompressedFormatSupported(*(CEndpointCharacteristics **)(a1 + 8), &v2->SubFormat) )
  {
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(struct _GUID *)(a1 + 16);
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v5, 0, &v2->Format, &v6, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
