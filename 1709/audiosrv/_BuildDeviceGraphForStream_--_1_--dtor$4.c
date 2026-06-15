/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$4 @ 0x180037B54
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BuildDeviceGraphForStream_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 296));
}
