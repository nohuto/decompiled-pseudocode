/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180038090
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800022C4 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039570 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180039F30 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x18006428C (CEndpointCharacteristics--GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180064368 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced___.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x1800BC56C (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BF5F8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x1800E7650 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800E8984 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E8A98 (CEndpointCharacteristics--GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x1800E8BD8 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800ED620 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800FDDD0 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  WORD nChannels; // r11
  DWORD nSamplesPerSec; // r10d
  DWORD nAvgBytesPerSec; // ebx
  WORD nBlockAlign; // di
  WORD cbSize; // dx
  __int64 v7; // rdx
  __int64 v8; // rax
  WORD v9; // dx
  WORD wFormatTag; // ax
  __int64 v12; // rdx
  WORD wBitsPerSample; // ax

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
    if ( v8 )
    {
      wBitsPerSample = a1->wBitsPerSample;
      v9 = wBitsPerSample;
      if ( wBitsPerSample != 32 )
      {
        v9 = a1->wBitsPerSample;
        if ( wBitsPerSample != 64 )
          return (unsigned int)-2147024809;
      }
    }
    else
    {
      v9 = a1->wBitsPerSample;
      if ( ((v9 - 8) & 0xFFE7) != 0 )
        return (unsigned int)-2147024809;
    }
    wFormatTag = a1[1].wFormatTag;
    if ( wFormatTag
      && v9 >= wFormatTag
      && nAvgBytesPerSec == (nSamplesPerSec * v9 * nChannels) >> 3
      && nBlockAlign == v9 * nChannels / 8 )
    {
      return v1;
    }
    return (unsigned int)-2147024809;
  }
  return v1;
}
