/*
 * XREFs of _KsNotifications_ServiceStart_::_1_::dtor$1 @ 0x1800BE9D1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KsNotifications_ServiceStart_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}
