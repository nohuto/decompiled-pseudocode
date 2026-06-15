/*
 * XREFs of _CVolumeSoftware::LoadDefaultVolumeForEndpoint_::_1_::dtor$0 @ 0x1800697BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeSoftware::LoadDefaultVolumeForEndpoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
