/*
 * XREFs of ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x18005A5A4
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180020BD0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAPOSupportedProcessingModes(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  __int64 v4; // rbx
  BOOL v6; // eax
  int v7; // r8d

  v4 = a2;
  v6 = CEndpointCharacteristics::AreEnhancementsEnabled(this);
  v7 = 0;
  if ( v6 || (_DWORD)v4 == 3 )
    v7 = 1;
  return SystemEffectDescriptor::GetSupportedProcessingModes((__int64)this + 96 * v4 + 616, (__int64 *)a3, v7);
}
