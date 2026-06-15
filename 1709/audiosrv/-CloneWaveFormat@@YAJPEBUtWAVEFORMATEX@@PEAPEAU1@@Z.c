/*
 * XREFs of ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180007C00 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180007DF4 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18001263C (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022708 (-GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022814 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180035998 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_7aa2d33e36a32a2890f09fc92a95f1fa___ @ 0x180035AEC (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_7aa2d33e36a32a2890f09fc92a95f.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180036178 (CEndpointCharacteristics--GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800820A4 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18008222C (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180082BE4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180084ED8 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18008B300 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008E370 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800AD6D8 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee__.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800AD82C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_2bd14234de5ddbaffe4847539b299dd7__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d___ @ 0x1800AD988 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9___ @ 0x1800ADB68 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc8406445.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800AF0B4 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800AF1C8 (CEndpointCharacteristics--GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800AF308 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800B1228 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800B1658 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x1800DAC90 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 * Callees:
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 */

__int64 __fastcall CloneWaveFormat(const struct tWAVEFORMATEX *Src, struct tWAVEFORMATEX **a2)
{
  __int64 cbSize; // rsi
  struct tWAVEFORMATEX *v5; // rax
  unsigned int v6; // ebx
  struct tWAVEFORMATEX *v7; // rdi
  __int64 result; // rax

  cbSize = Src->cbSize;
  v5 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v6 = 0;
  v7 = v5;
  if ( v5 )
    memcpy_0(v5, Src, cbSize + 18);
  else
    v6 = -2147024882;
  result = v6;
  *a2 = v7;
  return result;
}
