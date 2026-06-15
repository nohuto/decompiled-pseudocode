/*
 * XREFs of _CExclusiveModeListener::OnHmdAdded_::_1_::dtor$3 @ 0x1800C678B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CExclusiveModeListener::OnHmdAdded_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
