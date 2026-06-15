/*
 * XREFs of _lambda_d46c42d8c87c8b0eef0423a918fcc8ac_::operator() @ 0x180040668
 * Callers:
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x180040630 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_180040630.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x180041E38 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 */

bool __fastcall lambda_d46c42d8c87c8b0eef0423a918fcc8ac_::operator()(__int64 a1, unsigned __int16 *a2)
{
  const struct _GUID *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  CEndpointCharacteristics *v8; // rcx
  struct _GUID v10; // [rsp+50h] [rbp-18h] BYREF

  v4 = (const struct _GUID *)(a2 + 12);
  v5 = *(_QWORD *)&v4->Data1 - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
  if ( *(_QWORD *)&v4->Data1 == *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1 )
    v5 = *(_QWORD *)v4->Data4 - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v5 )
    goto LABEL_15;
  v6 = *(_QWORD *)&v4->Data1 - *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1;
  if ( *(_QWORD *)&v4->Data1 == *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1 )
    v6 = *(_QWORD *)v4->Data4 - *(_QWORD *)GUID_0000010c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v6 )
    goto LABEL_15;
  v7 = *(_QWORD *)&v4->Data1 - *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1;
  if ( *(_QWORD *)&v4->Data1 == *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1 )
    v7 = *(_QWORD *)v4->Data4 - *(_QWORD *)GUID_0000030c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v7 )
  {
LABEL_15:
    if ( CEndpointCharacteristics::IsCompressedFormatSupported(*(CEndpointCharacteristics **)a1, v4) )
      return 1;
  }
  v8 = *(CEndpointCharacteristics **)a1;
  v10 = *(struct _GUID *)(a1 + 8);
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity((__int64)v8, 0, a2, &v10, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
