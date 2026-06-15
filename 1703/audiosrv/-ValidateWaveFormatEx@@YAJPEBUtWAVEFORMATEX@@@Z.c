/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18000D900 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001BC20 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C114 (CEndpointCharacteristics--GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C1F0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18009CAF4 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb___ @ 0x1800B9E50 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800BB150 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB264 (CEndpointCharacteristics--GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB3A4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BF070 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  WORD nChannels; // r10
  DWORD nSamplesPerSec; // r11d
  DWORD nAvgBytesPerSec; // ebx
  WORD nBlockAlign; // di
  WORD cbSize; // dx
  __int64 v7; // rdx
  __int64 v8; // rax
  WORD wBitsPerSample; // dx
  WORD wFormatTag; // ax
  __int64 v12; // rdx

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-2147467261;
  nChannels = a1->nChannels;
  if ( !nChannels )
    return (unsigned int)-2147024809;
  nSamplesPerSec = a1->nSamplesPerSec;
  if ( !nSamplesPerSec )
    return (unsigned int)-2147024809;
  nAvgBytesPerSec = a1->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    return (unsigned int)-2147024809;
  nBlockAlign = a1->nBlockAlign;
  if ( !nBlockAlign )
    return (unsigned int)-2147024809;
  cbSize = a1->cbSize;
  if ( cbSize > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( !cbSize
      && (a1->wBitsPerSample & 7) == 0
      && nChannels <= 2u
      && nAvgBytesPerSec == (nSamplesPerSec * a1->wBitsPerSample * nChannels) >> 3 )
    {
      return v1;
    }
    return (unsigned int)-2147024809;
  }
  if ( a1->wFormatTag != 0xFFFE )
    return v1;
  if ( cbSize < 0x16u )
    return (unsigned int)-2147024809;
  v7 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
    v7 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
  if ( !v7 )
    goto LABEL_13;
  v12 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
    v12 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
  if ( !v12 )
  {
LABEL_13:
    v8 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( !v8 )
      v8 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    wBitsPerSample = a1->wBitsPerSample;
    if ( v8 )
    {
      if ( ((wBitsPerSample - 32) & 0xFFDF) != 0 )
        return (unsigned int)-2147024809;
    }
    else if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
    {
      return (unsigned int)-2147024809;
    }
    wFormatTag = a1[1].wFormatTag;
    if ( wFormatTag
      && wBitsPerSample >= wFormatTag
      && nAvgBytesPerSec == (nSamplesPerSec * nChannels * wBitsPerSample) >> 3
      && nBlockAlign == nChannels * wBitsPerSample / 8 )
    {
      return v1;
    }
    return (unsigned int)-2147024809;
  }
  return v1;
}
