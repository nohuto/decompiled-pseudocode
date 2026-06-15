/*
 * XREFs of ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x18009A9E8
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180099188 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z @ 0x18009CA54 (-InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z.c)
 */

__int64 __fastcall DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        unsigned int a2,
        WAVEFORMATEXTENSIBLE *a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  struct tWAVEFORMATEX **v5; // rdi
  unsigned int dwChannelMask; // esi
  __int64 result; // rax
  unsigned __int16 *v12; // r15
  unsigned int v13; // r14d
  WAVEFORMATEXTENSIBLE *v14; // rcx
  struct _GUID v16; // [rsp+50h] [rbp-31h] BYREF
  struct tWAVEFORMATEX **v17; // [rsp+60h] [rbp-21h]
  WAVEFORMATEXTENSIBLE v18; // [rsp+68h] [rbp-19h] BYREF

  v5 = a5;
  v17 = a5;
  if ( a3->Format.wFormatTag == 0xFFFE )
    dwChannelMask = a3->dwChannelMask;
  else
    dwChannelMask = 0;
  *a5 = 0LL;
  result = ValidateUncompressedWaveFormatEx(&a3->Format);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v16 = *a4;
      result = ConnectorSupportsFormat(a1, a2, &a3->Format, &v16);
      if ( (int)result >= 0 )
      {
        v14 = a3;
        return CloneWaveFormat(&v14->Format, v5);
      }
    }
  }
  else
  {
    memset(&v18, 0, sizeof(v18));
    InitWaveFormatEx(&v18, 1, a3->Format.nSamplesPerSec, 32, 32, a3->Format.nChannels, dwChannelMask);
    v16 = *a4;
    result = ConnectorSupportsFormat(a1, a2, &v18.Format, &v16);
    if ( (int)result >= 0 )
      goto LABEL_10;
    v12 = (unsigned __int16 *)&unk_1800FF110;
    v13 = 0;
    do
    {
      if ( v13 >= 5 )
        break;
      InitWaveFormatEx(&v18, 0, a3->Format.nSamplesPerSec, *v12, v12[1], a3->Format.nChannels, dwChannelMask);
      v16 = *a4;
      result = ConnectorSupportsFormat(a1, a2, &v18.Format, &v16);
      ++v13;
      v12 += 2;
    }
    while ( (int)result < 0 );
    v5 = v17;
    if ( (int)result >= 0 )
    {
LABEL_10:
      v14 = &v18;
      return CloneWaveFormat(&v14->Format, v5);
    }
  }
  return result;
}
