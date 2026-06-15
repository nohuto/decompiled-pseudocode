/*
 * XREFs of _CVADServer::InitializePolicy_::_1_::dtor$2 @ 0x180039A8E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVADServer::InitializePolicy_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
