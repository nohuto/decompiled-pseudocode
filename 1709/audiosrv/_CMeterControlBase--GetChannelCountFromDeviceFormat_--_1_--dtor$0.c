/*
 * XREFs of _CMeterControlBase::GetChannelCountFromDeviceFormat_::_1_::dtor$0 @ 0x180066040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMeterControlBase::GetChannelCountFromDeviceFormat_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
