/*
 * XREFs of _CreateSaDevice_::_1_::dtor$14 @ 0x180037E28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreateSaDevice_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 200));
}
