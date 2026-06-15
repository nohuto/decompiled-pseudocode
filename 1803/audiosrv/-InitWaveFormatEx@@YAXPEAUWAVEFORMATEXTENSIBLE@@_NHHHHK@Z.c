/*
 * XREFs of ?InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z @ 0x1800BC4D0
 * Callers:
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800BA3F0 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
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
  WORD v9; // dx
  GUID v10; // xmm0
  __int16 v11; // dx

  v8 = a7;
  if ( !a7 && a6 <= 2 )
    v8 = 4 - (a6 != 1);
  if ( a2 )
  {
    v9 = 32;
    a1->Samples.wValidBitsPerSample = 32;
    a1->Format.wBitsPerSample = 32;
    v10 = GUID_00000003_0000_0010_8000_00aa00389b71;
  }
  else
  {
    a1->Format.wBitsPerSample = a5;
    v9 = a5;
    a1->Samples.wValidBitsPerSample = a4;
    v10 = GUID_00000001_0000_0010_8000_00aa00389b71;
  }
  a1->dwChannelMask = v8;
  a1->Format.wFormatTag = -2;
  a1->Format.cbSize = 22;
  v11 = v9 >> 3;
  a1->SubFormat = v10;
  a1->Format.nChannels = a6;
  a1->Format.nSamplesPerSec = a3;
  a1->Format.nBlockAlign = a6 * v11;
  a1->Format.nAvgBytesPerSec = a3 * (unsigned __int16)(a6 * v11);
}
