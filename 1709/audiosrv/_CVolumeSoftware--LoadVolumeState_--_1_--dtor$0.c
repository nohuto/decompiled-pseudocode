/*
 * XREFs of _CVolumeSoftware::LoadVolumeState_::_1_::dtor$0 @ 0x180069ABA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeSoftware::LoadVolumeState_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
