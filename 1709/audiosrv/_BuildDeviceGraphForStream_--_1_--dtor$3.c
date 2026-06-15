/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$3 @ 0x180037B48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BuildDeviceGraphForStream_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
