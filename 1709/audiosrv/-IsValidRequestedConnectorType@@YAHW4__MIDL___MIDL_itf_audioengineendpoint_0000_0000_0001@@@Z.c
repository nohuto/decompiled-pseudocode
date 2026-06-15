/*
 * XREFs of ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180035664
 * Callers:
 *     AudioServerGetMixFormat @ 0x180012990 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x18001F5A0 (AudioServerIsFormatSupported.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18003162C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     AudioServerIsRawStreamSupported @ 0x1800900C0 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidRequestedConnectorType(unsigned int a1)
{
  return a1 <= 3;
}
