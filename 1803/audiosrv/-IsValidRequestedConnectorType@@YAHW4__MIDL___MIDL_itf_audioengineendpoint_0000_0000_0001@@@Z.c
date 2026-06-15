/*
 * XREFs of ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180063980
 * Callers:
 *     AudioServerGetMixFormat @ 0x1800014A0 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180001740 (AudioServerIsFormatSupported.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180024820 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18004039C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     AudioServerIsRawStreamSupported @ 0x1800C5500 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidRequestedConnectorType(unsigned int a1)
{
  return a1 <= 3;
}
