/*
 * XREFs of ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800820A4
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180080470 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z @ 0x180084C8C (-InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z.c)
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
  const char *v12; // r15
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
    v12 = " ";
    v13 = 0;
    do
    {
      if ( v13 >= 5 )
        break;
      InitWaveFormatEx(
        &v18,
        0,
        a3->Format.nSamplesPerSec,
        *(unsigned __int16 *)v12,
        *((_WORD *)v12 + 1),
        a3->Format.nChannels,
        dwChannelMask);
      v16 = *a4;
      result = ConnectorSupportsFormat(a1, a2, &v18.Format, &v16);
      ++v13;
      v12 += 4;
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
