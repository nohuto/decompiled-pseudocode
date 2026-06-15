/*
 * XREFs of _TrackSystemEffectBehavior_::_1_::dtor$0_0 @ 0x1800DA409
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TrackSystemEffectBehavior_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
