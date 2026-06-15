/*
 * XREFs of ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BC1C8
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     AudioServerIsRawStreamSupported @ 0x1800A3810 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180041C10 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

char __fastcall CEndpointCharacteristics::AllowRawStreamCreation(CEndpointCharacteristics *this, unsigned int a2)
{
  __int64 v2; // rbx
  BOOL IsConnectorModeSupported; // eax
  char v5; // r8
  struct _GUID v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = (int)a2;
  v7 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  IsConnectorModeSupported = CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v7);
  v5 = 0;
  if ( IsConnectorModeSupported )
    return *((_DWORD *)this + v2 + 344) == 0;
  return v5;
}
