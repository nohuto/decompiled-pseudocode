/*
 * XREFs of _GetAliasedEndpointId_::_1_::dtor$1 @ 0x1800B4FBF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetAliasedEndpointId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 144));
}
