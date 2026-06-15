/*
 * XREFs of _PhoneTopology3::Initialize_::_1_::dtor$4 @ 0x1800EC0AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneTopology3::Initialize_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
