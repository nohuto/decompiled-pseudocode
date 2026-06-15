/*
 * XREFs of _TelephonyController::Initialize_::_1_::dtor$14 @ 0x1800EE686
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TelephonyController::Initialize_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
