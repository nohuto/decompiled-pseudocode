/*
 * XREFs of _CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor$1 @ 0x18009E12F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>((volatile signed __int32 **)(a2 + 64));
}
