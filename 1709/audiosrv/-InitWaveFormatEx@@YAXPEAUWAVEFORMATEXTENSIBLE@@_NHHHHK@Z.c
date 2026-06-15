/*
 * XREFs of ?InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z @ 0x180084C8C
 * Callers:
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800820A4 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 * Callees:
 *     <none>
 */

void __fastcall InitWaveFormatEx(
        struct WAVEFORMATEXTENSIBLE *a1,
        char a2,
        DWORD a3,
        WORD a4,
        WORD a5,
        int a6,
        DWORD a7)
{
  DWORD v8; // ecx
  GUID v9; // xmm0
  WORD v10; // dx

  v8 = a7;
  if ( !a7 && a6 <= 2 )
    v8 = 4 - (a6 != 1);
  if ( a2 )
  {
    a1->Samples.wValidBitsPerSample = 32;
    a1->Format.wBitsPerSample = 32;
    v9 = GUID_00000003_0000_0010_8000_00aa00389b71;
  }
  else
  {
    a1->Format.wBitsPerSample = a5;
    a1->Samples.wValidBitsPerSample = a4;
    v9 = GUID_00000001_0000_0010_8000_00aa00389b71;
  }
  a1->dwChannelMask = v8;
  a1->Format.wFormatTag = -2;
  a1->Format.cbSize = 22;
  v10 = a6 * (a1->Format.wBitsPerSample >> 3);
  a1->SubFormat = v9;
  a1->Format.nChannels = a6;
  a1->Format.nSamplesPerSec = a3;
  a1->Format.nBlockAlign = v10;
  a1->Format.nAvgBytesPerSec = a3 * v10;
}
