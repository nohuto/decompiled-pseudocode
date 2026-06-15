/*
 * XREFs of _IsFormatSupportedByHwAudioEngine_::_1_::dtor$1 @ 0x18008C042
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IsFormatSupportedByHwAudioEngine_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
