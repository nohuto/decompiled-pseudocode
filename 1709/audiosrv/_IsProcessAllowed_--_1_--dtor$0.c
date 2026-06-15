/*
 * XREFs of _IsProcessAllowed_::_1_::dtor$0 @ 0x180037CA5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IsProcessAllowed_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
