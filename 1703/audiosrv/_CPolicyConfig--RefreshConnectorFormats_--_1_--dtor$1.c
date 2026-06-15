/*
 * XREFs of _CPolicyConfig::RefreshConnectorFormats_::_1_::dtor$1 @ 0x18009D23A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::RefreshConnectorFormats_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::~com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 80));
}
