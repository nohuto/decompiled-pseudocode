/*
 * XREFs of _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$5 @ 0x1800A40BD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 208));
}
