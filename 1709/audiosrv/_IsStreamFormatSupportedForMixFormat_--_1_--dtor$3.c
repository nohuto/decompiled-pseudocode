/*
 * XREFs of _IsStreamFormatSupportedForMixFormat_::_1_::dtor$3 @ 0x180039898
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IsStreamFormatSupportedForMixFormat_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
