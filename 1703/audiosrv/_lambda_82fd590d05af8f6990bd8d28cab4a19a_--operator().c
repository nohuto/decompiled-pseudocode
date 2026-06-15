/*
 * XREFs of _lambda_82fd590d05af8f6990bd8d28cab4a19a_::operator() @ 0x180039704
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _lambda_667eb01a999704ac1c933d543c16abf4_::operator() @ 0x18004C4DC (_lambda_667eb01a999704ac1c933d543c16abf4_--operator().c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180041B34 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 */

__int64 __fastcall lambda_82fd590d05af8f6990bd8d28cab4a19a_::operator()(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 *v5; // rsi
  GUID *v6; // rdx
  unsigned int v7; // r11d
  GUID v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *a1;
  v5 = (__int64 *)(*a1 + 16 * (a3 + 4LL));
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v5,
                       &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2) == -1
    && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v5,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
  {
    v6 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  v9 = *v6;
  CEndpointCharacteristics::GetAliasedDeviceConnectorMode(v3, a2, v7, &v9, 1);
  return a2;
}
