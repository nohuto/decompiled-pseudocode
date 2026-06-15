/*
 * XREFs of _CExclusiveModeListener::Shutdown_::_1_::dtor$0 @ 0x1800C7440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CExclusiveModeListener::Shutdown_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 104));
}
