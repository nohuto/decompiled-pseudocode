/*
 * XREFs of ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B1548
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800B38F0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B12F4 (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioenginee.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B16C8 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B1A7C (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800B21B4 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddOsProcessingModeSupport(CEndpointCharacteristics *this)
{
  int v2; // edi
  __int64 v3; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  struct _GUID v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CEndpointCharacteristics::AddSpatialAudioProcessingSupport(this);
  if ( v2 < 0 )
  {
    v3 = 2052LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v3,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(this);
  if ( v2 < 0 )
  {
    v3 = 2053LL;
    goto LABEL_3;
  }
  v8 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v2 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v8);
  if ( v2 < 0 )
  {
    v3 = 2054LL;
    goto LABEL_3;
  }
  v2 = CEndpointCharacteristics::AddInternalSpeechProcessingMode(this, v5);
  if ( v2 < 0 )
  {
    v3 = 2055LL;
    goto LABEL_3;
  }
  v8 = GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7;
  v2 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v8);
  if ( v2 < 0 )
  {
    v3 = 2056LL;
    goto LABEL_3;
  }
  if ( !*((_DWORD *)this + 44) )
    return 0LL;
  v8 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v6 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eKeywordDetectorConnector, &v8);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x80B,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
