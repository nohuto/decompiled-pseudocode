/*
 * XREFs of _lambda_e5a48366650dbc4f26b14ee609f3d914_::operator() @ 0x1800E965C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e5a48366650dbc4f26b14ee609f3d914__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x1800EDAC0 (std--_Func_impl_no_alloc__lambda_e5a48366650dbc4f26b14ee609f3d914__long_SystemEffec_ea_1800EDAC0.c)
 * Callees:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800497AC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x1800531AC (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005522C (-IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e5a48366650dbc4f26b14ee609f3d914_::operator()(
        CEndpointCharacteristics **a1,
        int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DeviceFormat; // eax
  unsigned int v7; // edi
  void *v8; // rbx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r11d
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LPVOID pv; // [rsp+60h] [rbp+8h] BYREF

  pv = 0LL;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(*a1, 0, 0, a2[12], (struct tWAVEFORMATEX **)&pv);
  v7 = DeviceFormat;
  v8 = pv;
  if ( DeviceFormat >= 0 )
  {
    if ( *(_WORD *)pv == 0xFFFE )
      CEndpointCharacteristics::IsDolbyMatFormat((const struct WAVEFORMATEXTENSIBLE *)pv);
    v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            (__int64 *)*a1 + 8,
            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    DeviceFormat = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                     (SystemEffectDescriptor *)a2,
                     a3,
                     1u,
                     (__int64)(a1 + 1),
                     v11,
                     v10 != -1);
    v7 = DeviceFormat;
    if ( DeviceFormat >= 0 )
    {
      *((_DWORD *)a3 + 4) = 2;
      v7 = 0;
      goto LABEL_9;
    }
    v9 = 1357LL;
  }
  else
  {
    v9 = 1351LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DeviceFormat);
LABEL_9:
  CoTaskMemFree(v8);
  return v7;
}
